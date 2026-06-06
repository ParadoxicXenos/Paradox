#include "include/token.h"
#include <stdlib.h>
#include <stdio.h>
token_T* init_token(token_type_T type,char* value){
    token_T* token= calloc(1,sizeof(struct TOKEN_STRUCT));
    printf("CALLOC\n");
    token->type = type;
    printf("TYPE ASSIGNED\n");
    token->value = value;
    printf("TOKEN VALUE ASSIGNED\n");
    return token;
}
