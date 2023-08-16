#ifndef PARSER_H
#include PARSER_H
#include "lexer.h"
#include "AST.h"

typedef struct PARSER_STRUCT 
{
    lexer_T* lexer;
    token_T* current_token;
} parser_T;

parser_T* init_parser(lexer_T* lexer);

void parser_eat(parser_T* parser, int token_type);

AST_T* parser_parse(parser_T* parser);

AST_T* parser_parse_statement(parser_T* parsers);

AST_T* parser_parse_statements(parser_T* parsers);

AST_T* parser_parse_expr(parser_T* parsers);

AST_T* parser_parse_factor(parser_T* parsers);

AST_T* parser_parse_term(parser_T* parsers);

AST_T* parser_parse_function_call(parser_T* parsers);

AST_T* parser_parse_variable_definition(parser_T* parsers);

AST_T* parser_parse_variable(parser_T* parsers);

AST_T* parser_parse_string(parser_T* parsers);


#endif PARSER_H