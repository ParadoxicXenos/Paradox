#ifndef SCOPE_H
#define SCOPE_H
#include "AST.h"
typedef struct SCOPE_STRUCT{
    struct SCOPE_STRUCT* parent;
    AST_T** variables;
    int variable_count;
} scope_T;

scope_T* init_scope();
scope_T* scope_add_function_definition(scope_T* scope, AST_T* node);
#endif