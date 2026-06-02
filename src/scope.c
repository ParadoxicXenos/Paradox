#include "include/scope.h"
scope_T* init_scope(){
    scope_T* scope = calloc(1,sizeof(struct SCOPE_STRUCT));
    scope->parent = (void*)0;
    scope->variables = (void*)0;
    scope->variable_count = 0;

    return scope;
}

scope_T* scope_add_function_definition(scope_T* scope, AST_T* node){
    return init_scope(); // for now
}