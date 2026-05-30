#ifndef PARSER_H
#define PARSER_H
#include "AST.h"
#include "lexer.h"


typedef struct PARSER_STRUCT{
    lexer_T lexer;
    token_T current_token;

} parser_T;

parser_T* init_parser(lexer_T* lexer);

void parser_eate(parser_T* parser, in token_type);

AST_T* parser_parse(parser_T* parser);
#endif
