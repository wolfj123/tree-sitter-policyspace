#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType {
  COMMENT_BLOCK
};

extern "C" void * tree_sitter_policyspace_external_scanner_create() {
  return NULL;
}

extern "C" void tree_sitter_policyspace_external_scanner_destroy(void *payload) {
  //noop
}

void tree_sitter_javascript_external_scanner_reset(void *p) {
  //noop
}

extern "C" unsigned tree_sitter_policyspace_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

extern "C" void tree_sitter_policyspace_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // noop
}


static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

extern "C" bool tree_sitter_policyspace_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    advance(lexer);
    lexer->result_symbol = COMMENT_BLOCK;

     if(lexer->lookahead == '}'){
       //advance(lexer);
        advance(lexer);
        return true;
     } else {
       advance(lexer);
        if(lexer->lookahead == '}'){
        //advance(lexer); 
        advance(lexer);
          return true;
        }
     }
     return false;
}



extern "C" bool tree_sitter_policyspace_external_scanner_scan2(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    printf("LETS TRY!!!!!!\n");
    if (valid_symbols[COMMENT_BLOCK]) {
      //printf("************COMMENT_BLOCK************\n");
      //printf(lexer->lookahead);
      //check that the text starts with "<*"
      printf(" FOUND : %c \n",(char)lexer->lookahead);
      if(lexer->lookahead != '<'){      
        return false;
      }
      advance(lexer);
      if(lexer->lookahead != '*'){
        return false;
      }
      advance(lexer);

      bool found_star = false;
      for(;;){
        if (lexer->lookahead == 0) return false;
        else if(lexer->lookahead == '*'){
          found_star = true;
        } else if(found_star && lexer->lookahead == '>') {
          lexer->result_symbol = COMMENT_BLOCK;
          return true;
        }
        else {
          found_star = false;
        }
        advance(lexer);
      }
    return false;
  }
}