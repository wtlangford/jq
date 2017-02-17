OP(LOADK, CONSTANT, 1, 1)
OP(DUP,   NONE,     1, 2)
OP(DUPN,  NONE,     1, 2)
OP(DUP2,  NONE,     2, 3)
OP(PUSH_UNDER, CONSTANT, 1, 2)
OP(POP,   NONE,     1, 0)
OP(LOADV, VARIABLE, 1, 1)
OP(LOADVN, VARIABLE, 1, 1)
OP(STOREV, VARIABLE, 1, 0)
OP(STORE_GLOBAL, GLOBAL, 0, 0)
OP(INDEX, NONE,     2, 1)
OP(INDEX_OPT, NONE,     2, 1)
OP(EACH,  NONE,     1, 1)
OP(EACH_OPT,  NONE,     1, 1)
OP(FORK,  BRANCH,   0, 0)
OP(FORK_OPT,  BRANCH,   0, 0)
OP(JUMP,  BRANCH,   0, 0)
OP(JUMP_F,BRANCH,   1, 0)
OP(BACKTRACK, NONE, 0, 0)
OP(APPEND, VARIABLE,1, 0)
OP(INSERT, NONE,    4, 2)
OP(RANGE, VARIABLE, 1, 1)

OP(SUBEXP_BEGIN,  NONE,     1, 2)
OP(SUBEXP_END,    NONE,     2, 2)

OP(PATH_BEGIN, NONE, 1, 2)
OP(PATH_END,   NONE, 2, 1)

OP(CALL_BUILTIN, CFUNC, -1, 1)

OP(CALL_JQ, UFUNC, 1, 1)
OP(RET, NONE, 1, 1)
OP(TAIL_CALL_JQ, UFUNC, 1, 1)

OP(CLOSURE_PARAM, DEFINITION, 0, 0)
OP(CLOSURE_REF, CLOSURE_REF_IMM, 0, 0)
OP(CLOSURE_CREATE, DEFINITION, 0, 0)
OP(CLOSURE_CREATE_C, DEFINITION, 0, 0)

OP(TOP, NONE, 0, 0)
OP(CLOSURE_PARAM_REGULAR, DEFINITION, 0, 0)
OP(DEPS, CONSTANT, 0, 0)
OP(MODULEMETA, CONSTANT, 0, 0)
OP(GENLABEL, NONE, 0, 1)

OP(DESTRUCTURE_ALT, NONE, 0, 0)
