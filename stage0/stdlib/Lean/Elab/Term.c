// Lean compiler output
// Module: Lean.Elab.Term
// Imports: Init Lean.Util.Sorry Lean.Structure Lean.Meta.ExprDefEq Lean.Meta.AppBuilder Lean.Meta.SynthInstance Lean.Meta.CollectMVars Lean.Meta.Tactic.Util Lean.Hygiene Lean.Util.RecDepth Lean.Elab.Log Lean.Elab.Alias Lean.Elab.ResolveName Lean.Elab.Level Lean.Elab.Attributes
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_getLevelNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_commitWhen___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__4___closed__1;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3;
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1;
lean_object* l___private_Lean_Elab_Term_25__mkFreshLevelMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppStx(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1;
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8;
uint8_t l___private_Lean_Elab_Term_1__hasCDot(lean_object*);
lean_object* l_Lean_Meta_isType___at_Lean_Elab_Term_ensureType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__4;
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
extern lean_object* l___private_Lean_Meta_AppBuilder_22__mkEqNDRecImp___closed__6;
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___main(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_State_inhabited;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_27__withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwIllFormedSyntax___rarg___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort___closed__2;
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__7;
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2;
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLetRecsToLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9;
lean_object* l___private_Lean_Elab_Term_12__isLambdaWithImplicit___boxed(lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__8;
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_ofList___closed__3;
extern lean_object* l_Lean_InternalExceptionId_toString___closed__1;
lean_object* l___private_Lean_Elab_Term_2__expandCDot___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_tryPostpone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__7;
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ppGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__3;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2;
extern lean_object* l_IO_Prim_fopenFlags___closed__12;
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__1;
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__3;
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___at_Lean_Elab_Term_tryCoe___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__10;
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_hasEval___rarg___closed__1;
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KeyedDeclsAttribute_Def_inhabited___closed__2;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam___closed__1;
lean_object* l_Lean_Elab_Term_elabParen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1;
extern lean_object* l_Std_HashMap_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__7;
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1;
lean_object* l_Lean_Elab_Term_MonadLiftT___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3;
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1;
uint8_t l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsAtDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Prod_HasRepr___rarg___closed__1;
lean_object* l_Lean_Elab_Term_elabQuotedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_23__resolveLocalNameAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Term_2__expandCDot___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2;
lean_object* l_Lean_MacroScopesView_format(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_31__withLocalContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_11__isExplicitApp___boxed(lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___closed__3;
extern lean_object* l_Lean_Array_hasQuote___rarg___closed__2;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_23__resolveLocalNameAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__5;
lean_object* l_Lean_Elab_Term_tryCoe___closed__2;
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_forM___at_Lean_Elab_Term_MetaHasEval___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__3;
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__2;
lean_object* l_Lean_Elab_Term_elabTypeStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_decLevel___rarg___lambda__1___closed__6;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2;
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__3;
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__2;
extern lean_object* l_Lean_charLitKind___closed__2;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
lean_object* l_Lean_Elab_Term_withDeclName(lean_object*);
extern lean_object* l_Lean_Elab_throwAbort___rarg___closed__1;
extern lean_object* l_Lean_Elab_logException___rarg___lambda__1___closed__3;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6;
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__2;
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Elab_Term_tryCoe___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1(lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_declareBuiltinParser___closed__3;
lean_object* l_Lean_Elab_Term_withoutPostponing(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13;
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1;
extern lean_object* l_Lean_Meta_mkAppM___rarg___closed__2;
uint8_t l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2(lean_object*, lean_object*);
lean_object* l_ReaderT_lift___rarg___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Lean_MonadLCtx___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__3;
lean_object* l___private_Lean_Meta_AppBuilder_20__mkFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_28__regTraceClasses___closed__1;
extern lean_object* l_Lean_Expr_ctorName___closed__4;
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName___closed__3;
lean_object* l_Lean_Elab_Term_monadLog___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object*);
extern lean_object* l___private_Init_LeanInit_15__quoteList___main___rarg___closed__7;
extern lean_object* l_String_splitAux___main___closed__1;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Elab_Level_elabLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3;
lean_object* l___private_Lean_Meta_InferType_4__getLevelImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__3;
extern lean_object* l_Lean_unitToExpr___lambda__1___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2;
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__6;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6;
lean_object* l_Lean_Elab_Term_MonadLiftT(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1;
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1;
lean_object* l_Lean_Elab_Term_elabParen___closed__5;
lean_object* l_Std_mkHashMap___at_Lean_Elab_Term_termElabAttribute___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__5;
extern lean_object* l_Lean_LocalContext_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_resolveName___closed__5;
lean_object* l_Lean_Elab_Term_LVal_hasToString(lean_object*);
extern lean_object* l_Lean_Meta_State_inhabited___closed__7;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__8;
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__8;
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__7;
extern lean_object* l_Lean_levelZero;
lean_object* l_Lean_Elab_Term_TermElabResult_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_elabStrLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__2;
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_26__mkConsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__3;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__2;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__2;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_inhabited___closed__2;
lean_object* l_Lean_Elab_Term_monadLog___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__1;
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__1;
lean_object* l_Lean_Elab_Term_liftMetaM(lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState___boxed(lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
extern lean_object* l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole(lean_object*);
lean_object* l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerMVarErrorContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_logDbgTrace___rarg___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryCoe___closed__4;
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__5;
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_14__useImplicitLambda_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean___kind_term____x40_Lean_Util_Trace___hyg_3____closed__3;
lean_object* l_Lean_Elab_Term_tryCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__1;
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__9;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__4;
lean_object* l_Lean_Elab_Term_elabParen___closed__4;
lean_object* l_Lean_Elab_Term_elabLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadLiftT___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__1;
lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkTacticMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5;
extern lean_object* l_Lean_Meta_isExprDefEq___rarg___closed__2;
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___closed__2;
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__4;
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__2;
lean_object* l_Lean_Elab_Term_mkFreshUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3;
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_observing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr(lean_object*);
extern lean_object* l_Lean_Exception_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_withMacroExpansion(lean_object*);
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog(lean_object*);
lean_object* l_Lean_Elab_Term_State_inhabited___closed__1;
extern lean_object* l_Lean_EnvExtension_Inhabited___rarg___closed__1;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_Elab_addMacroStack___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadIO___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_3__isTypeApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshUserName___closed__2;
lean_object* l_Lean_Elab_Term_tryCoe___closed__1;
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerMVarErrorContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__7;
lean_object* l_Lean_Elab_Term_mkConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__8;
lean_object* l_Lean_Elab_Term_mkFreshUserName___closed__1;
lean_object* l_Lean_Elab_Term_TermElabM_run(lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_object* l_Lean_Elab_Term_tryCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__9;
lean_object* l_Lean_Elab_Term_isExprMVarAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabProp___rarg(lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__1;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__8;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
lean_object* l_Lean_Elab_Term_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__2;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__3;
lean_object* l_Lean_Elab_Term_levelMVarToParam___closed__2;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst___closed__2;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabQuotedName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
lean_object* l_Lean_Meta_trySynthInstance___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNumLit___closed__1;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__1;
lean_object* l_Lean_Elab_Term_TermElabM_inhabited(lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_21__isTypeImp___at_Lean_Meta_isType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Exception_hasSyntheticSorry(lean_object*);
lean_object* l_IO_println___at___private_Init_System_IO_1__printlnAux___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_10__isExplicit___closed__2;
lean_object* l_Lean_Elab_Term_getMVarDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7;
lean_object* l___private_Lean_Elab_Term_10__isExplicit___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_object* l_Lean_MessageLog_forM___at_Lean_Elab_Term_MetaHasEval___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__5;
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_MonadEnv_1__mkAuxNameAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNumLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_blockImplicitLambda___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__1;
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_blockImplicitLambda(lean_object*);
lean_object* l_Lean_Elab_Term_elabTypeStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_assignLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3;
lean_object* l_Lean_Elab_Term_monadLog___closed__6;
lean_object* l___private_Lean_Elab_Term_10__isExplicit___closed__1;
lean_object* l_Lean_Elab_Term_levelMVarToParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind___closed__2;
lean_object* l_Lean_Elab_Term_withFreshMacroScope(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1;
lean_object* l_Lean_Elab_Term_resolveName___closed__7;
uint8_t l___private_Lean_Elab_Term_10__isExplicit(lean_object*);
size_t l_Lean_Name_hash(lean_object*);
extern lean_object* l_Lean_Meta_MetaM_run_x27___rarg___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__3;
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
extern lean_object* l_Lean_MessageData_hasCoeOfOptExpr___closed__1;
lean_object* l_Lean_Elab_getMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsAtDecl___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_inferTypeRef;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_object*);
lean_object* l_Lean_Elab_Term_setElabConfig(lean_object*);
lean_object* l___private_Lean_Elab_Term_26__mkConsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_25__mkFreshLevelMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLetRecsToLift(lean_object*);
lean_object* l_Lean_Elab_Term_liftLevelM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter;
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_7__postponeElabTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__2;
lean_object* l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsAtDecl___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_liftCoreM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_LeanInit_15__quoteList___main___rarg___closed__4;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__5;
lean_object* l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___closed__3;
lean_object* l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1;
lean_object* l_Lean_Elab_Term_resolveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_AddErrorMessageContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__11;
lean_object* l_Lean_Elab_Term_monadQuotation___closed__4;
lean_object* l_Lean_Elab_Term_getMainModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute(lean_object*);
extern lean_object* l_Lean_numLitKind___closed__2;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__5;
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_inhabited___closed__1;
lean_object* l___private_Lean_Elab_Term_7__postponeElabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___closed__1;
lean_object* l_Lean_Elab_Term_getCurrMacroScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
lean_object* l___private_Lean_Elab_Term_17__elabTermAux(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__9;
lean_object* l_Lean_Elab_Term_getMessageLog___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2;
lean_object* l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__2;
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_Lean_charToExpr___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__4;
lean_object* l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__8;
lean_object* l_Lean_Elab_Term_liftLevelM(lean_object*);
lean_object* l_Lean_Elab_Term_elabProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__8;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__5;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__8;
lean_object* l_Lean_Elab_Term_ensureHasType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType___at_Lean_Elab_Term_ensureType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__1;
lean_object* l_Lean_Elab_Term_Lean_Ref___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Ref;
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1;
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2;
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1;
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabResult_inhabited;
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__1;
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__8;
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_2__decLevelImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_6__exceptionToSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__4;
extern lean_object* l_Lean_Core_State_inhabited___closed__1;
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort(lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__9;
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2;
lean_object* l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4;
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___closed__1;
lean_object* l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__9;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__2;
lean_object* l_Lean_Elab_Term_mkConst___closed__3;
lean_object* l_Lean_Elab_Term_resolveName___closed__4;
lean_object* l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l___private_Lean_Elab_Term_27__mkSomeContext___closed__2;
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__6;
lean_object* l_Lean_Elab_Term_elabCharLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandListLit___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2;
lean_object* l_Lean_Elab_Term_monadLog___closed__2;
extern lean_object* l_Lean_Elab_addMacroStack___rarg___lambda__1___closed__3;
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getDeclName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_setMacroStackOption(lean_object*, uint8_t);
lean_object* l_Lean_Meta_getLevel___at_Lean_Elab_Term_tryCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_object*);
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__9;
lean_object* l_Lean_Elab_Term_mkFreshUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_22__elabCDot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___closed__4;
extern lean_object* l_Option_HasRepr___rarg___closed__3;
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_traceAtCmdPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1;
lean_object* l_Lean_Elab_Term_withoutPostponing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_savingMCtx(lean_object*);
lean_object* l_Lean_Elab_Term_elabHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2;
lean_object* l___private_Lean_Elab_Term_13__dropTermParens(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1;
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l___private_Lean_Meta_LevelDefEq_15__runDefEqM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_liftMetaM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__5;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkTacticMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1;
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___closed__1;
lean_object* l_Lean_mkLevelSucc(lean_object*);
lean_object* l_Lean_Elab_Term_traceAtCmdPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_postponeExceptionId;
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(lean_object*);
lean_object* lean_environment_main_module(lean_object*);
extern lean_object* l_Std_PersistentArray_empty___closed__3;
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_1__hasCDot___main___closed__2;
lean_object* l_Lean_Elab_Term_resetMessageLog___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__6;
extern lean_object* l_Lean_Elab_throwPostpone___rarg___closed__1;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1(lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_saveAllState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMaxRecDepth(lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_restore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Elab_Term_MonadIO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3;
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole___closed__1;
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerSyntheticMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3;
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_assignLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Term_12__isLambdaWithImplicit(lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
lean_object* l_Lean_Elab_Term_savingMCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_27__mkSomeContext___closed__1;
extern lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_object* l_Lean_Meta_getMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toExprAux___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
lean_object* l_Lean_Elab_Term_liftLevelM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_6__exceptionToSorry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
extern lean_object* l_Lean_Meta_whnfRef;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__6;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__6;
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadIO(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2;
uint8_t l___private_Lean_Elab_Term_1__hasCDot___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__1;
lean_object* l_Lean_Elab_Term_mkConst___closed__1;
lean_object* l___private_Lean_Elab_Term_27__mkSomeContext;
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCharLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabHole___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_evalNat___main___closed__8;
lean_object* l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSyntheticHole(lean_object*);
lean_object* l___private_Lean_Elab_Term_2__expandCDot___main___closed__1;
lean_object* l_Lean_Elab_Term_elabSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_levelMVarToParam___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__2;
lean_object* l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___closed__4;
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_evalNat___main___closed__7;
lean_object* l_Lean_Syntax_getPos(lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog___boxed(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_5__tryPureCoe_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_2__expandCDot___main___closed__2;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel___at_Lean_Meta_getDecLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortExceptionId;
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5;
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkSorry___rarg___lambda__1___closed__4;
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_withFreshMacroScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_TraceState_Inhabited___closed__1;
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkSorry___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOpenDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_FileMap_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_getLetRecsToLift___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___closed__6;
lean_object* l_Lean_Elab_Term_liftCoreM(lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_5__tryPureCoe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_24__resolveLocalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3;
lean_object* l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__12;
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_liftCoreM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__6;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__3;
lean_object* l_Lean_Elab_Term_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLetRecsToLift___boxed(lean_object*);
lean_object* l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_decLevel___rarg___lambda__1___closed__3;
extern lean_object* l_Lean_Prod_hasQuote___rarg___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__4;
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_toIO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l_Lean_Elab_Term_elabByTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__2;
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__17;
lean_object* l_Lean_Elab_Term_elabSyntheticHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11;
lean_object* l_Lean_Elab_Term_getLevelNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_setMessageLog___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l___private_Lean_Elab_Term_13__dropTermParens___main(lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__1;
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__7;
lean_object* l_Lean_Elab_Term_TermElabM_run_x27(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__3;
lean_object* l_Lean_Elab_Term_Lean_AddErrorMessageContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__9;
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Term_28__regTraceClasses(lean_object*);
extern lean_object* l_Lean_Meta_mkPure___rarg___closed__4;
uint8_t l___private_Lean_Elab_Term_11__isExplicitApp(lean_object*);
extern lean_object* l_Lean_Unhygienic_run___rarg___closed__1;
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l___private_Lean_Elab_Term_1__hasCDot___boxed(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasTypeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___closed__3;
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2;
lean_object* lean_usize_to_nat(size_t);
extern lean_object* l_Lean_Elab_mkMacroAttribute___closed__2;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__3;
lean_object* l_Lean_Meta_getMVars___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2;
lean_object* l_Lean_Elab_Term_setMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1;
lean_object* l_Lean_Message_toString(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_findUserName_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_elabStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__7;
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__6;
lean_object* l_Lean_Elab_Term_resolveName___closed__1;
lean_object* l_Lean_Elab_Term_mkAuxName___closed__1;
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3;
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_inhabited;
lean_object* l___private_Lean_Elab_Term_24__resolveLocalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__5;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_getMacroStackOption(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1;
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1;
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___closed__2;
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
lean_object* l_Lean_Elab_Term_expandListLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog;
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__3;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4;
lean_object* l_Lean_Elab_Term_monadLog___closed__4;
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__1;
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__5;
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___closed__3;
lean_object* l___private_Lean_Elab_Term_1__hasCDot___main___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_liftMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___closed__1;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_3__isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Elab_Term_tryCoe___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSyntheticHole___closed__7;
lean_object* l_Lean_Elab_Term_monadLog___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_toIO(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameGenerator_Inhabited___closed__3;
lean_object* l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabBadCDot(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5;
lean_object* l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
lean_object* l_Lean_Elab_Term_mkAuxName___closed__2;
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNumLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_2__expandCDot(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__3;
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__5;
uint8_t l_Lean_Syntax_isIdent(lean_object*);
extern lean_object* l_Lean_Elab_registerPostponeId___closed__1;
lean_object* l___private_Lean_Elab_Term_1__hasCDot___main___closed__1;
lean_object* l_Lean_Elab_Term_tryCoe___closed__3;
lean_object* l_Lean_Elab_Term_setElabConfig(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
uint8_t x_3; uint8_t x_4; 
x_3 = 1;
x_4 = 0;
lean_ctor_set_uint8(x_1, 0, x_3);
lean_ctor_set_uint8(x_1, 1, x_3);
lean_ctor_set_uint8(x_1, 2, x_4);
lean_ctor_set_uint8(x_1, 3, x_3);
return x_1;
}
else
{
uint8_t x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_5 = lean_ctor_get_uint8(x_1, 4);
x_6 = lean_ctor_get_uint8(x_1, 5);
x_7 = lean_ctor_get_uint8(x_1, 6);
x_8 = lean_ctor_get_uint8(x_1, 7);
lean_dec(x_1);
x_9 = 1;
x_10 = 0;
x_11 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_11, 0, x_9);
lean_ctor_set_uint8(x_11, 1, x_9);
lean_ctor_set_uint8(x_11, 2, x_10);
lean_ctor_set_uint8(x_11, 3, x_9);
lean_ctor_set_uint8(x_11, 4, x_5);
lean_ctor_set_uint8(x_11, 5, x_6);
lean_ctor_set_uint8(x_11, 6, x_7);
lean_ctor_set_uint8(x_11, 7, x_8);
return x_11;
}
}
}
lean_object* _init_l_Lean_Elab_Term_State_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Std_PersistentArray_empty___closed__3;
x_3 = l_Lean_Unhygienic_run___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_State_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_State_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabM_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Exception_inhabited___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_TermElabM_inhabited___closed__1;
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Std_PersistentArray_empty___closed__3;
x_3 = l_Lean_Unhygienic_run___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Core_State_inhabited___closed__1;
x_2 = l_Lean_Meta_State_inhabited___closed__7;
x_3 = l_Lean_Elab_Term_SavedState_inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_SavedState_inhabited___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_st_ref_get(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_1, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_8);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_saveAllState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_saveAllState___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_saveAllState___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_saveAllState(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_st_ref_set(x_7, x_13, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_st_ref_set(x_5, x_16, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_st_ref_set(x_3, x_19, x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_7, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_23, 2);
lean_dec(x_26);
lean_ctor_set(x_23, 2, x_12);
x_27 = lean_st_ref_set(x_7, x_23, x_24);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_23, 0);
x_35 = lean_ctor_get(x_23, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_23);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_36, 2, x_12);
x_37 = lean_st_ref_set(x_7, x_36, x_24);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_39 = x_37;
} else {
 lean_dec_ref(x_37);
 x_39 = lean_box(0);
}
x_40 = lean_box(0);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
}
}
lean_object* l_Lean_Elab_Term_SavedState_restore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_SavedState_restore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabResult_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_Inhabited___closed__1;
x_2 = l_Lean_Elab_Term_SavedState_inhabited___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabResult_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_TermElabResult_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_setMessageLog(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 2);
lean_dec(x_13);
lean_ctor_set(x_10, 2, x_1);
x_14 = lean_st_ref_set(x_3, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
x_23 = lean_ctor_get(x_10, 3);
x_24 = lean_ctor_get(x_10, 4);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_1);
lean_ctor_set(x_25, 3, x_23);
lean_ctor_set(x_25, 4, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_11);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Term_setMessageLog___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_setMessageLog(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Std_PersistentArray_empty___closed__3;
x_9 = l_Lean_Elab_Term_setMessageLog(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_resetMessageLog___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_resetMessageLog(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Term_getMessageLog(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMessageLog___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_getMessageLog___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_getMessageLog(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_observing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_42; 
x_9 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_42 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_12);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
x_49 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 1);
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_45, 1, x_51);
lean_ctor_set(x_45, 0, x_49);
return x_45;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_49, 1);
lean_inc(x_53);
lean_dec(x_49);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_47);
lean_ctor_set(x_45, 1, x_53);
lean_ctor_set(x_45, 0, x_54);
return x_45;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_45, 0);
x_56 = lean_ctor_get(x_45, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_45);
x_57 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_56);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_43);
lean_ctor_set(x_60, 1, x_55);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_42, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_42, 1);
lean_inc(x_63);
lean_dec(x_42);
x_13 = x_62;
x_14 = x_63;
goto block_41;
}
block_41:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_12);
x_15 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 1);
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_15, 1, x_21);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_15, 1, x_23);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(1, 2, 0);
} else {
 x_30 = x_29;
 lean_ctor_set_tag(x_30, 1);
}
lean_ctor_set(x_30, 0, x_13);
lean_ctor_set(x_30, 1, x_25);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
x_33 = l_Lean_Elab_postponeExceptionId;
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_12)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_12;
 lean_ctor_set_tag(x_35, 1);
}
lean_ctor_set(x_35, 0, x_13);
lean_ctor_set(x_35, 1, x_14);
return x_35;
}
else
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_12);
x_36 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set_tag(x_36, 1);
lean_ctor_set(x_36, 0, x_13);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_applyResult(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_9);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_Elab_Term_SavedState_restore(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_applyResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_applyResult(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_MonadIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_apply_1(x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_io_error_to_string(x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_inc(x_9);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_io_error_to_string(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_inc(x_9);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_MonadIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadIO___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MonadIO___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_MonadIO___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_liftMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_5(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_liftMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftMetaM___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_liftMetaM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_liftMetaM___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_liftCoreM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_3(x_1, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_liftCoreM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftCoreM___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_liftCoreM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_liftCoreM___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_MonadLiftT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_5(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_MonadLiftT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadLiftT___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MonadLiftT___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_MonadLiftT___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getLevelNames(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getLevelNames___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getLevelNames(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* _init_l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_TermElabM_inhabited(lean_box(0));
return x_1;
}
}
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Lean_Expr_fvarId_x21(x_1);
x_11 = lean_local_ctx_find(x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_13 = l_unreachable_x21___rarg(x_12);
x_14 = lean_apply_7(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 3);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_2, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_12);
lean_dec(x_13);
lean_ctor_set(x_8, 3, x_14);
x_15 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 2);
x_19 = lean_ctor_get(x_8, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_20 = l_Lean_replaceRef(x_2, x_19);
x_21 = l_Lean_replaceRef(x_20, x_19);
lean_dec(x_19);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_17);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_22, x_9, x_10);
return x_23;
}
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Ref___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Ref___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Ref___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_Lean_Ref___closed__1;
x_2 = lean_alloc_closure((void*)(l_ReaderT_lift___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Ref___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Ref___lambda__2___boxed), 10, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Ref___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_Lean_Ref___closed__2;
x_2 = l_Lean_Elab_Term_Lean_Ref___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Ref() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_Lean_Ref___closed__4;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_Lean_Ref___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_Lean_Ref___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_Lean_Ref___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_Elab_getMacroStackOption(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Syntax_prettyPrint(x_15);
x_17 = l_Lean_MessageData_ofList___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_addMacroStack___rarg___lambda__1___closed__3;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_16);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_List_foldl___main___at_Lean_Elab_addMacroStack___spec__1(x_17, x_25, x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_9);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_Lean_AddErrorMessageContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_3, 6);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_1, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1(x_13, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_Lean_AddErrorMessageContext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_Lean_AddErrorMessageContext(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_1, 4);
x_11 = lean_ctor_get(x_2, 2);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
lean_inc(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_1, 4, x_14);
x_15 = lean_st_ref_take(x_3, x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_16, 2);
x_20 = l_Std_PersistentArray_push___rarg(x_19, x_1);
lean_ctor_set(x_16, 2, x_20);
x_21 = lean_st_ref_set(x_3, x_16, x_17);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
x_30 = lean_ctor_get(x_16, 2);
x_31 = lean_ctor_get(x_16, 3);
x_32 = lean_ctor_get(x_16, 4);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
x_33 = l_Std_PersistentArray_push___rarg(x_30, x_1);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_29);
lean_ctor_set(x_34, 2, x_33);
lean_ctor_set(x_34, 3, x_31);
lean_ctor_set(x_34, 4, x_32);
x_35 = lean_st_ref_set(x_3, x_34, x_17);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_40 = lean_ctor_get(x_1, 0);
x_41 = lean_ctor_get(x_1, 1);
x_42 = lean_ctor_get(x_1, 2);
x_43 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
x_44 = lean_ctor_get(x_1, 3);
x_45 = lean_ctor_get(x_1, 4);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_1);
x_46 = lean_ctor_get(x_2, 2);
x_47 = lean_ctor_get(x_2, 5);
lean_inc(x_47);
lean_inc(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
x_50 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_50, 0, x_40);
lean_ctor_set(x_50, 1, x_41);
lean_ctor_set(x_50, 2, x_42);
lean_ctor_set(x_50, 3, x_44);
lean_ctor_set(x_50, 4, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*5, x_43);
x_51 = lean_st_ref_take(x_3, x_8);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 3);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 4);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 lean_ctor_release(x_52, 3);
 lean_ctor_release(x_52, 4);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
x_60 = l_Std_PersistentArray_push___rarg(x_56, x_50);
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(0, 5, 0);
} else {
 x_61 = x_59;
}
lean_ctor_set(x_61, 0, x_54);
lean_ctor_set(x_61, 1, x_55);
lean_ctor_set(x_61, 2, x_60);
lean_ctor_set(x_61, 3, x_57);
lean_ctor_set(x_61, 4, x_58);
x_62 = lean_st_ref_set(x_3, x_61, x_53);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_64 = x_62;
} else {
 lean_dec_ref(x_62);
 x_64 = lean_box(0);
}
x_65 = lean_box(0);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_64;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_monadLog___closed__1;
x_2 = l_Lean_Elab_Term_monadLog___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_monadLog___closed__1;
x_2 = l_Lean_Elab_Term_monadLog___closed__4;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__3___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Elab_Term_Lean_Ref___closed__2;
x_2 = l_Lean_Elab_Term_monadLog___closed__3;
x_3 = l_Lean_Elab_Term_monadLog___closed__5;
x_4 = l_Lean_Elab_Term_monadLog___closed__6;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_monadLog___closed__7;
return x_1;
}
}
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrMacroScope___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_environment_main_module(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_environment_main_module(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
}
lean_object* l_Lean_Elab_Term_getMainModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMainModule___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_getMainModule___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_getMainModule(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_withFreshMacroScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_10, 3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_ctor_set(x_10, 3, x_15);
x_16 = lean_st_ref_set(x_3, x_10, x_11);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_2, 7);
lean_dec(x_19);
lean_ctor_set(x_2, 7, x_13);
x_20 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
x_25 = lean_ctor_get(x_2, 4);
x_26 = lean_ctor_get(x_2, 5);
x_27 = lean_ctor_get(x_2, 6);
x_28 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_29 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_30 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set(x_30, 3, x_24);
lean_ctor_set(x_30, 4, x_25);
lean_ctor_set(x_30, 5, x_26);
lean_ctor_set(x_30, 6, x_27);
lean_ctor_set(x_30, 7, x_13);
lean_ctor_set_uint8(x_30, sizeof(void*)*8, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*8 + 1, x_29);
x_31 = lean_apply_7(x_1, x_30, x_3, x_4, x_5, x_6, x_7, x_17);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_32 = lean_ctor_get(x_10, 0);
x_33 = lean_ctor_get(x_10, 1);
x_34 = lean_ctor_get(x_10, 2);
x_35 = lean_ctor_get(x_10, 3);
x_36 = lean_ctor_get(x_10, 4);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_10);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_35, x_37);
x_39 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 2, x_34);
lean_ctor_set(x_39, 3, x_38);
lean_ctor_set(x_39, 4, x_36);
x_40 = lean_st_ref_set(x_3, x_39, x_11);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_ctor_get(x_2, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_2, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_2, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_2, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_2, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_2, 5);
lean_inc(x_47);
x_48 = lean_ctor_get(x_2, 6);
lean_inc(x_48);
x_49 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_50 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_51 = x_2;
} else {
 lean_dec_ref(x_2);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 8, 2);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_42);
lean_ctor_set(x_52, 1, x_43);
lean_ctor_set(x_52, 2, x_44);
lean_ctor_set(x_52, 3, x_45);
lean_ctor_set(x_52, 4, x_46);
lean_ctor_set(x_52, 5, x_47);
lean_ctor_set(x_52, 6, x_48);
lean_ctor_set(x_52, 7, x_35);
lean_ctor_set_uint8(x_52, sizeof(void*)*8, x_49);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 1, x_50);
x_53 = lean_apply_7(x_1, x_52, x_3, x_4, x_5, x_6, x_7, x_41);
return x_53;
}
}
}
lean_object* l_Lean_Elab_Term_withFreshMacroScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withFreshMacroScope___rarg), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getCurrMacroScope___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMainModule___boxed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withFreshMacroScope), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_monadQuotation___closed__1;
x_2 = l_Lean_Elab_Term_monadQuotation___closed__2;
x_3 = l_Lean_Elab_Term_monadQuotation___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_monadQuotation___closed__4;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_mkMacroAttribute___closed__2;
x_2 = l_Lean_mkAppStx___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termElabAttribute");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinTermElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("TermElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkTermElabAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__3;
x_3 = l_Lean_Elab_Term_mkTermElabAttribute___closed__5;
x_4 = l_Lean_Elab_Term_mkTermElabAttribute___closed__7;
x_5 = l_Lean_mkAppStx___closed__6;
x_6 = l_Lean_Elab_Term_mkTermElabAttribute___closed__9;
x_7 = l_Lean___kind_term____x40_Lean_Util_Trace___hyg_3____closed__3;
x_8 = l_Lean_Elab_mkElabAttribute___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_1);
return x_8;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Elab_Term_termElabAttribute___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_Elab_Term_termElabAttribute___closed__1;
x_3 = l_Lean_LocalContext_Inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_termElabAttribute___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_termElabAttribute___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_EnvExtension_Inhabited___rarg___closed__1;
x_3 = l_Lean_Elab_Term_termElabAttribute___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_Elab_Term_termElabAttribute___closed__5;
x_2 = lean_box(0);
x_3 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
x_4 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_5 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
x_6 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_KeyedDeclsAttribute_Def_inhabited___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_Elab_Term_termElabAttribute___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_LVal_hasToString(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
default: 
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = 0;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_formatStxAux___main(x_6, x_7, x_8, x_5);
x_10 = lean_box(0);
x_11 = l_Lean_Format_pretty(x_9, x_10);
x_12 = l_List_repr___rarg___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_repr___rarg___closed__3;
x_15 = lean_string_append(x_13, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getDeclName_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getDeclName_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getCurrNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrNamespace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getCurrNamespace(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getOpenDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getOpenDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getOpenDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getLetRecsToLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 4);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 4);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Term_getLetRecsToLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getLetRecsToLift___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_getLetRecsToLift___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_getLetRecsToLift___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_getLetRecsToLift___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_getLetRecsToLift(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_5, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_metavar_ctx_is_expr_assigned(x_12, x_1);
x_14 = lean_box(x_13);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_metavar_ctx_is_expr_assigned(x_17, x_1);
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_isExprMVarAssigned___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_isExprMVarAssigned(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_5, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_MetavarContext_getDecl(x_12, x_1);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_MetavarContext_getDecl(x_16, x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
}
lean_object* l_Lean_Elab_Term_getMVarDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_assignLevelMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_6, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_metavar_ctx_assign_level(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_6, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_26 = lean_metavar_ctx_assign_level(x_23, x_1, x_2);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_25);
x_28 = lean_st_ref_set(x_6, x_27, x_12);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
x_31 = lean_box(0);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
lean_object* l_Lean_Elab_Term_assignLevelMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_assignLevelMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_withDeclName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 3);
lean_dec(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_3, 3, x_12);
x_13 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 6);
x_20 = lean_ctor_get(x_3, 7);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_22 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_1);
x_24 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_16);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set(x_24, 4, x_17);
lean_ctor_set(x_24, 5, x_18);
lean_ctor_set(x_24, 6, x_19);
lean_ctor_set(x_24, 7, x_20);
lean_ctor_set_uint8(x_24, sizeof(void*)*8, x_21);
lean_ctor_set_uint8(x_24, sizeof(void*)*8 + 1, x_22);
x_25 = lean_apply_7(x_2, x_24, x_4, x_5, x_6, x_7, x_8, x_9);
return x_25;
}
}
}
lean_object* l_Lean_Elab_Term_withDeclName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 4);
lean_dec(x_11);
lean_ctor_set(x_3, 4, x_1);
x_12 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 5);
x_18 = lean_ctor_get(x_3, 6);
x_19 = lean_ctor_get(x_3, 7);
x_20 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_16);
lean_ctor_set(x_22, 4, x_1);
lean_ctor_set(x_22, 5, x_17);
lean_ctor_set(x_22, 6, x_18);
lean_ctor_set(x_22, 7, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*8, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*8 + 1, x_21);
x_23 = lean_apply_7(x_2, x_22, x_4, x_5, x_6, x_7, x_8, x_9);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Term_withLevelNames(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 6);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_Lean_AddErrorMessageContext___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Error(s)");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwErrorIfErrors___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwErrorIfErrors___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwErrorIfErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_2, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_8);
x_15 = l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
x_16 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_11);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
x_24 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_18);
return x_24;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_throwErrorIfErrors(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
x_13 = l_Lean_Syntax_getPos(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_ctor_get(x_4, 2);
x_17 = lean_ctor_get(x_4, 5);
x_18 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_FileMap_toPosition(x_15, x_21);
x_23 = lean_box(0);
lean_inc(x_17);
lean_inc(x_16);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_19);
x_26 = l_String_splitAux___main___closed__1;
lean_inc(x_14);
x_27 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_27, 0, x_14);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*5, x_3);
x_28 = lean_st_ref_take(x_5, x_20);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_29, 2);
x_33 = l_Std_PersistentArray_push___rarg(x_32, x_27);
lean_ctor_set(x_29, 2, x_33);
x_34 = lean_st_ref_set(x_5, x_29, x_30);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_41 = lean_ctor_get(x_29, 0);
x_42 = lean_ctor_get(x_29, 1);
x_43 = lean_ctor_get(x_29, 2);
x_44 = lean_ctor_get(x_29, 3);
x_45 = lean_ctor_get(x_29, 4);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_29);
x_46 = l_Std_PersistentArray_push___rarg(x_43, x_27);
x_47 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_42);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set(x_47, 3, x_44);
lean_ctor_set(x_47, 4, x_45);
x_48 = lean_st_ref_set(x_5, x_47, x_30);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
x_51 = lean_box(0);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_53 = lean_ctor_get(x_13, 0);
lean_inc(x_53);
lean_dec(x_13);
x_54 = lean_ctor_get(x_4, 0);
x_55 = lean_ctor_get(x_4, 1);
x_56 = lean_ctor_get(x_4, 2);
x_57 = lean_ctor_get(x_4, 5);
x_58 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_FileMap_toPosition(x_55, x_53);
x_62 = lean_box(0);
lean_inc(x_57);
lean_inc(x_56);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_57);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_59);
x_65 = l_String_splitAux___main___closed__1;
lean_inc(x_54);
x_66 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_66, 0, x_54);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_65);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*5, x_3);
x_67 = lean_st_ref_take(x_5, x_60);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = !lean_is_exclusive(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_68, 2);
x_72 = l_Std_PersistentArray_push___rarg(x_71, x_66);
lean_ctor_set(x_68, 2, x_72);
x_73 = lean_st_ref_set(x_5, x_68, x_69);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_73, 0);
lean_dec(x_75);
x_76 = lean_box(0);
lean_ctor_set(x_73, 0, x_76);
return x_73;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_80 = lean_ctor_get(x_68, 0);
x_81 = lean_ctor_get(x_68, 1);
x_82 = lean_ctor_get(x_68, 2);
x_83 = lean_ctor_get(x_68, 3);
x_84 = lean_ctor_get(x_68, 4);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_68);
x_85 = l_Std_PersistentArray_push___rarg(x_82, x_66);
x_86 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_81);
lean_ctor_set(x_86, 2, x_85);
lean_ctor_set(x_86, 3, x_83);
lean_ctor_set(x_86, 4, x_84);
x_87 = lean_st_ref_set(x_5, x_86, x_69);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_89 = x_87;
} else {
 lean_dec_ref(x_87);
 x_89 = lean_box(0);
}
x_90 = lean_box(0);
if (lean_is_scalar(x_89)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_89;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
}
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_2);
x_11 = 0;
x_12 = l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_traceAtCmdPos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 3);
x_13 = lean_box(0);
x_14 = l_Lean_replaceRef(x_13, x_12);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_14);
x_16 = l_Lean_replaceRef(x_15, x_12);
lean_dec(x_12);
lean_dec(x_15);
lean_inc(x_11);
lean_ctor_set(x_7, 3, x_16);
lean_inc(x_1);
x_17 = l_Lean_checkTraceOption(x_11, x_1);
lean_dec(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_box(0);
x_21 = lean_apply_1(x_2, x_20);
x_22 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_1, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
x_25 = lean_ctor_get(x_7, 2);
x_26 = lean_ctor_get(x_7, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = l_Lean_replaceRef(x_27, x_26);
x_29 = l_Lean_replaceRef(x_28, x_26);
lean_dec(x_28);
x_30 = l_Lean_replaceRef(x_29, x_26);
lean_dec(x_26);
lean_dec(x_29);
lean_inc(x_23);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_24);
lean_ctor_set(x_31, 2, x_25);
lean_ctor_set(x_31, 3, x_30);
lean_inc(x_1);
x_32 = l_Lean_checkTraceOption(x_23, x_1);
lean_dec(x_23);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_9);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_box(0);
x_36 = lean_apply_1(x_2, x_35);
x_37 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_1, x_36, x_3, x_4, x_5, x_6, x_31, x_8, x_9);
lean_dec(x_31);
return x_37;
}
}
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_traceAtCmdPos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_traceAtCmdPos(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_ppGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_ppGoal(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_ppGoal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_ppGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 8, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_231 = lean_st_ref_get(x_8, x_9);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_232, 2);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_ctor_get_uint8(x_233, sizeof(void*)*1);
lean_dec(x_233);
if (x_234 == 0)
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_ctor_get(x_231, 1);
lean_inc(x_235);
lean_dec(x_231);
x_236 = 0;
x_11 = x_236;
x_12 = x_235;
goto block_230;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_237 = lean_ctor_get(x_231, 1);
lean_inc(x_237);
lean_dec(x_231);
x_238 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_239 = l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(x_238, x_5, x_6, x_7, x_8, x_237);
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
lean_dec(x_239);
x_242 = lean_unbox(x_240);
lean_dec(x_240);
x_11 = x_242;
x_12 = x_241;
goto block_230;
}
block_230:
{
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_st_ref_get(x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
lean_dec(x_15);
x_18 = lean_st_ref_take(x_8, x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_19, 2);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_61; 
x_25 = 0;
lean_ctor_set_uint8(x_20, sizeof(void*)*1, x_25);
x_26 = lean_st_ref_set(x_8, x_19, x_21);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_61 = l___private_Lean_Meta_LevelDefEq_15__runDefEqM(x_10, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_62);
x_64 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEq___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_64, 0, x_1);
lean_closure_set(x_64, 1, x_2);
lean_closure_set(x_64, 2, x_62);
x_65 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_66 = l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(x_65, x_64, x_5, x_6, x_7, x_8, x_63);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_st_ref_get(x_8, x_67);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_st_ref_take(x_8, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_71, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = !lean_is_exclusive(x_71);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_71, 2);
lean_dec(x_75);
x_76 = !lean_is_exclusive(x_72);
if (x_76 == 0)
{
lean_object* x_77; uint8_t x_78; 
lean_ctor_set_uint8(x_72, sizeof(void*)*1, x_17);
x_77 = lean_st_ref_set(x_8, x_71, x_73);
lean_dec(x_8);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_77, 0);
lean_dec(x_79);
lean_ctor_set(x_77, 0, x_62);
return x_77;
}
else
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_62);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_72, 0);
lean_inc(x_82);
lean_dec(x_72);
x_83 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set_uint8(x_83, sizeof(void*)*1, x_17);
lean_ctor_set(x_71, 2, x_83);
x_84 = lean_st_ref_set(x_8, x_71, x_73);
lean_dec(x_8);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_62);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_88 = lean_ctor_get(x_71, 0);
x_89 = lean_ctor_get(x_71, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_71);
x_90 = lean_ctor_get(x_72, 0);
lean_inc(x_90);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 x_91 = x_72;
} else {
 lean_dec_ref(x_72);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(0, 1, 1);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set_uint8(x_92, sizeof(void*)*1, x_17);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_88);
lean_ctor_set(x_93, 1, x_89);
lean_ctor_set(x_93, 2, x_92);
x_94 = lean_st_ref_set(x_8, x_93, x_73);
lean_dec(x_8);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_96 = x_94;
} else {
 lean_dec_ref(x_94);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_62);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_98 = lean_ctor_get(x_61, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_61, 1);
lean_inc(x_99);
lean_dec(x_61);
x_28 = x_98;
x_29 = x_99;
goto block_60;
}
block_60:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_st_ref_get(x_8, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_take(x_8, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = !lean_is_exclusive(x_33);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_33, 2);
lean_dec(x_37);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_17);
x_39 = lean_st_ref_set(x_8, x_33, x_35);
lean_dec(x_8);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set_tag(x_39, 1);
lean_ctor_set(x_39, 0, x_28);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_28);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_34, 0);
lean_inc(x_44);
lean_dec(x_34);
x_45 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_17);
lean_ctor_set(x_33, 2, x_45);
x_46 = lean_st_ref_set(x_8, x_33, x_35);
lean_dec(x_8);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
 lean_ctor_set_tag(x_49, 1);
}
lean_ctor_set(x_49, 0, x_28);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_33, 0);
x_51 = lean_ctor_get(x_33, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_33);
x_52 = lean_ctor_get(x_34, 0);
lean_inc(x_52);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_53 = x_34;
} else {
 lean_dec_ref(x_34);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 1, 1);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_17);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_51);
lean_ctor_set(x_55, 2, x_54);
x_56 = lean_st_ref_set(x_8, x_55, x_35);
lean_dec(x_8);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
 lean_ctor_set_tag(x_59, 1);
}
lean_ctor_set(x_59, 0, x_28);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
else
{
lean_object* x_100; uint8_t x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_125; 
x_100 = lean_ctor_get(x_20, 0);
lean_inc(x_100);
lean_dec(x_20);
x_101 = 0;
x_102 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set_uint8(x_102, sizeof(void*)*1, x_101);
lean_ctor_set(x_19, 2, x_102);
x_103 = lean_st_ref_set(x_8, x_19, x_21);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_125 = l___private_Lean_Meta_LevelDefEq_15__runDefEqM(x_10, x_5, x_6, x_7, x_8, x_104);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
lean_inc(x_126);
x_128 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEq___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_128, 0, x_1);
lean_closure_set(x_128, 1, x_2);
lean_closure_set(x_128, 2, x_126);
x_129 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_130 = l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(x_129, x_128, x_5, x_6, x_7, x_8, x_127);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_st_ref_get(x_8, x_131);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_st_ref_take(x_8, x_133);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_135, 2);
lean_inc(x_136);
x_137 = lean_ctor_get(x_134, 1);
lean_inc(x_137);
lean_dec(x_134);
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 x_140 = x_135;
} else {
 lean_dec_ref(x_135);
 x_140 = lean_box(0);
}
x_141 = lean_ctor_get(x_136, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 x_142 = x_136;
} else {
 lean_dec_ref(x_136);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(0, 1, 1);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set_uint8(x_143, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_140)) {
 x_144 = lean_alloc_ctor(0, 3, 0);
} else {
 x_144 = x_140;
}
lean_ctor_set(x_144, 0, x_138);
lean_ctor_set(x_144, 1, x_139);
lean_ctor_set(x_144, 2, x_143);
x_145 = lean_st_ref_set(x_8, x_144, x_137);
lean_dec(x_8);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_147 = x_145;
} else {
 lean_dec_ref(x_145);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_126);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_149 = lean_ctor_get(x_125, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_125, 1);
lean_inc(x_150);
lean_dec(x_125);
x_105 = x_149;
x_106 = x_150;
goto block_124;
}
block_124:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_107 = lean_st_ref_get(x_8, x_106);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = lean_st_ref_take(x_8, x_108);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_110, 2);
lean_inc(x_111);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_113 = lean_ctor_get(x_110, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 lean_ctor_release(x_110, 2);
 x_115 = x_110;
} else {
 lean_dec_ref(x_110);
 x_115 = lean_box(0);
}
x_116 = lean_ctor_get(x_111, 0);
lean_inc(x_116);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 x_117 = x_111;
} else {
 lean_dec_ref(x_111);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(0, 1, 1);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set_uint8(x_118, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_115)) {
 x_119 = lean_alloc_ctor(0, 3, 0);
} else {
 x_119 = x_115;
}
lean_ctor_set(x_119, 0, x_113);
lean_ctor_set(x_119, 1, x_114);
lean_ctor_set(x_119, 2, x_118);
x_120 = lean_st_ref_set(x_8, x_119, x_112);
lean_dec(x_8);
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_122 = x_120;
} else {
 lean_dec_ref(x_120);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
 lean_ctor_set_tag(x_123, 1);
}
lean_ctor_set(x_123, 0, x_105);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_180; 
x_151 = lean_ctor_get(x_19, 0);
x_152 = lean_ctor_get(x_19, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_19);
x_153 = lean_ctor_get(x_20, 0);
lean_inc(x_153);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 x_154 = x_20;
} else {
 lean_dec_ref(x_20);
 x_154 = lean_box(0);
}
x_155 = 0;
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(0, 1, 1);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set_uint8(x_156, sizeof(void*)*1, x_155);
x_157 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_157, 0, x_151);
lean_ctor_set(x_157, 1, x_152);
lean_ctor_set(x_157, 2, x_156);
x_158 = lean_st_ref_set(x_8, x_157, x_21);
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_180 = l___private_Lean_Meta_LevelDefEq_15__runDefEqM(x_10, x_5, x_6, x_7, x_8, x_159);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
lean_inc(x_181);
x_183 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEq___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_183, 0, x_1);
lean_closure_set(x_183, 1, x_2);
lean_closure_set(x_183, 2, x_181);
x_184 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_185 = l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(x_184, x_183, x_5, x_6, x_7, x_8, x_182);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_186 = lean_ctor_get(x_185, 1);
lean_inc(x_186);
lean_dec(x_185);
x_187 = lean_st_ref_get(x_8, x_186);
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
lean_dec(x_187);
x_189 = lean_st_ref_take(x_8, x_188);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_190, 2);
lean_inc(x_191);
x_192 = lean_ctor_get(x_189, 1);
lean_inc(x_192);
lean_dec(x_189);
x_193 = lean_ctor_get(x_190, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_190, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 lean_ctor_release(x_190, 2);
 x_195 = x_190;
} else {
 lean_dec_ref(x_190);
 x_195 = lean_box(0);
}
x_196 = lean_ctor_get(x_191, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 x_197 = x_191;
} else {
 lean_dec_ref(x_191);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(0, 1, 1);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set_uint8(x_198, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_195)) {
 x_199 = lean_alloc_ctor(0, 3, 0);
} else {
 x_199 = x_195;
}
lean_ctor_set(x_199, 0, x_193);
lean_ctor_set(x_199, 1, x_194);
lean_ctor_set(x_199, 2, x_198);
x_200 = lean_st_ref_set(x_8, x_199, x_192);
lean_dec(x_8);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_202 = x_200;
} else {
 lean_dec_ref(x_200);
 x_202 = lean_box(0);
}
if (lean_is_scalar(x_202)) {
 x_203 = lean_alloc_ctor(0, 2, 0);
} else {
 x_203 = x_202;
}
lean_ctor_set(x_203, 0, x_181);
lean_ctor_set(x_203, 1, x_201);
return x_203;
}
else
{
lean_object* x_204; lean_object* x_205; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_204 = lean_ctor_get(x_180, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_180, 1);
lean_inc(x_205);
lean_dec(x_180);
x_160 = x_204;
x_161 = x_205;
goto block_179;
}
block_179:
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_162 = lean_st_ref_get(x_8, x_161);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
lean_dec(x_162);
x_164 = lean_st_ref_take(x_8, x_163);
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_165, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_164, 1);
lean_inc(x_167);
lean_dec(x_164);
x_168 = lean_ctor_get(x_165, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_165, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 lean_ctor_release(x_165, 2);
 x_170 = x_165;
} else {
 lean_dec_ref(x_165);
 x_170 = lean_box(0);
}
x_171 = lean_ctor_get(x_166, 0);
lean_inc(x_171);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 x_172 = x_166;
} else {
 lean_dec_ref(x_166);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(0, 1, 1);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set_uint8(x_173, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_170)) {
 x_174 = lean_alloc_ctor(0, 3, 0);
} else {
 x_174 = x_170;
}
lean_ctor_set(x_174, 0, x_168);
lean_ctor_set(x_174, 1, x_169);
lean_ctor_set(x_174, 2, x_173);
x_175 = lean_st_ref_set(x_8, x_174, x_167);
lean_dec(x_8);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_177 = x_175;
} else {
 lean_dec_ref(x_175);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
 lean_ctor_set_tag(x_178, 1);
}
lean_ctor_set(x_178, 0, x_160);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_206 = lean_ctor_get(x_7, 3);
lean_inc(x_206);
x_207 = l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(x_8, x_12);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_210 = l___private_Lean_Meta_LevelDefEq_15__runDefEqM(x_10, x_5, x_6, x_7, x_8, x_209);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
lean_inc(x_211);
x_213 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEq___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_213, 0, x_1);
lean_closure_set(x_213, 1, x_2);
lean_closure_set(x_213, 2, x_211);
x_214 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_215 = l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(x_214, x_213, x_5, x_6, x_7, x_8, x_212);
x_216 = lean_ctor_get(x_215, 1);
lean_inc(x_216);
lean_dec(x_215);
x_217 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_208, x_214, x_206, x_5, x_6, x_7, x_8, x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_218 = !lean_is_exclusive(x_217);
if (x_218 == 0)
{
lean_object* x_219; 
x_219 = lean_ctor_get(x_217, 0);
lean_dec(x_219);
lean_ctor_set(x_217, 0, x_211);
return x_217;
}
else
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
lean_dec(x_217);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_211);
lean_ctor_set(x_221, 1, x_220);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
lean_dec(x_2);
lean_dec(x_1);
x_222 = lean_ctor_get(x_210, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_210, 1);
lean_inc(x_223);
lean_dec(x_210);
x_224 = l_Lean_Meta_isExprDefEq___rarg___closed__2;
x_225 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_208, x_224, x_206, x_5, x_6, x_7, x_8, x_223);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_226 = !lean_is_exclusive(x_225);
if (x_226 == 0)
{
lean_object* x_227; 
x_227 = lean_ctor_get(x_225, 0);
lean_dec(x_227);
lean_ctor_set_tag(x_225, 1);
lean_ctor_set(x_225, 0, x_222);
return x_225;
}
else
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
lean_dec(x_225);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_222);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; 
x_13 = 0;
lean_ctor_set_uint8(x_11, 3, x_13);
x_14 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get_uint8(x_11, 0);
x_24 = lean_ctor_get_uint8(x_11, 1);
x_25 = lean_ctor_get_uint8(x_11, 2);
x_26 = lean_ctor_get_uint8(x_11, 4);
x_27 = lean_ctor_get_uint8(x_11, 5);
x_28 = lean_ctor_get_uint8(x_11, 6);
x_29 = lean_ctor_get_uint8(x_11, 7);
lean_dec(x_11);
x_30 = 0;
x_31 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_31, 0, x_23);
lean_ctor_set_uint8(x_31, 1, x_24);
lean_ctor_set_uint8(x_31, 2, x_25);
lean_ctor_set_uint8(x_31, 3, x_30);
lean_ctor_set_uint8(x_31, 4, x_26);
lean_ctor_set_uint8(x_31, 5, x_27);
lean_ctor_set_uint8(x_31, 6, x_28);
lean_ctor_set_uint8(x_31, 7, x_29);
lean_ctor_set(x_5, 0, x_31);
x_32 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_39 = x_32;
} else {
 lean_dec_ref(x_32);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_41 = lean_ctor_get(x_5, 0);
x_42 = lean_ctor_get(x_5, 1);
x_43 = lean_ctor_get(x_5, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_5);
x_44 = lean_ctor_get_uint8(x_41, 0);
x_45 = lean_ctor_get_uint8(x_41, 1);
x_46 = lean_ctor_get_uint8(x_41, 2);
x_47 = lean_ctor_get_uint8(x_41, 4);
x_48 = lean_ctor_get_uint8(x_41, 5);
x_49 = lean_ctor_get_uint8(x_41, 6);
x_50 = lean_ctor_get_uint8(x_41, 7);
if (lean_is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean_dec_ref(x_41);
 x_51 = lean_box(0);
}
x_52 = 0;
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 0, 8);
} else {
 x_53 = x_51;
}
lean_ctor_set_uint8(x_53, 0, x_44);
lean_ctor_set_uint8(x_53, 1, x_45);
lean_ctor_set_uint8(x_53, 2, x_46);
lean_ctor_set_uint8(x_53, 3, x_52);
lean_ctor_set_uint8(x_53, 4, x_47);
lean_ctor_set_uint8(x_53, 5, x_48);
lean_ctor_set_uint8(x_53, 6, x_49);
lean_ctor_set_uint8(x_53, 7, x_50);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_42);
lean_ctor_set(x_54, 2, x_43);
x_55 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_3, x_4, x_54, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_62 = x_55;
} else {
 lean_dec_ref(x_55);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
}
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_isDefEqNoConstantApprox(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_5, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_1);
x_14 = lean_st_ref_set(x_5, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_10, 1);
x_22 = lean_ctor_get(x_10, 2);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_st_ref_set(x_5, x_23, x_11);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
lean_object* l_Lean_Elab_Term_savingMCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_st_ref_get(x_5, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_savingMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_savingMCtx___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_liftLevelM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_st_ref_get(x_5, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_7, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_2, 4);
lean_inc(x_18);
lean_inc(x_9);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_13);
x_21 = lean_apply_2(x_1, x_19, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_23, 0);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_st_ref_take(x_7, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_29, 1);
lean_dec(x_32);
lean_ctor_set(x_29, 1, x_27);
x_33 = lean_st_ref_set(x_7, x_29, x_30);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_22);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_22);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_27);
lean_ctor_set(x_40, 2, x_39);
x_41 = lean_st_ref_set(x_7, x_40, x_30);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_22);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_21);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_21, 1);
lean_dec(x_46);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_16);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Term_liftLevelM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftLevelM___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_liftLevelM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_liftLevelM___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Level_elabLevel), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_Term_liftLevelM___rarg(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_elabLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabLevel(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_withMacroExpansion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_4, 6);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_2);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_4, 6, x_14);
x_15 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
x_18 = lean_ctor_get(x_4, 2);
x_19 = lean_ctor_get(x_4, 3);
x_20 = lean_ctor_get(x_4, 4);
x_21 = lean_ctor_get(x_4, 5);
x_22 = lean_ctor_get(x_4, 6);
x_23 = lean_ctor_get(x_4, 7);
x_24 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_25 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_2);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
x_28 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_21);
lean_ctor_set(x_28, 6, x_27);
lean_ctor_set(x_28, 7, x_23);
lean_ctor_set_uint8(x_28, sizeof(void*)*8, x_24);
lean_ctor_set_uint8(x_28, sizeof(void*)*8 + 1, x_25);
x_29 = lean_apply_7(x_3, x_28, x_5, x_6, x_7, x_8, x_9, x_10);
return x_29;
}
}
}
lean_object* l_Lean_Elab_Term_withMacroExpansion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_take(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_3);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_12, 0, x_17);
x_18 = lean_st_ref_set(x_5, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
x_27 = lean_ctor_get(x_12, 2);
x_28 = lean_ctor_get(x_12, 3);
x_29 = lean_ctor_get(x_12, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_25);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_27);
lean_ctor_set(x_31, 3, x_28);
lean_ctor_set(x_31, 4, x_29);
x_32 = lean_st_ref_set(x_5, x_31, x_13);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = l_Lean_Elab_Term_registerSyntheticMVar(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_registerMVarErrorContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_3);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_12, 1, x_17);
x_18 = lean_st_ref_set(x_5, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
x_27 = lean_ctor_get(x_12, 2);
x_28 = lean_ctor_get(x_12, 3);
x_29 = lean_ctor_get(x_12, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_2);
lean_ctor_set(x_30, 2, x_3);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
x_32 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_27);
lean_ctor_set(x_32, 3, x_28);
lean_ctor_set(x_32, 4, x_29);
x_33 = lean_st_ref_set(x_5, x_32, x_13);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
}
lean_object* l_Lean_Elab_Term_registerMVarErrorContext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_registerMVarErrorContext(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Expr_hasMVar(x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_5, x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = l_Lean_MetavarContext_instantiateMVars(x_15, x_1);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_ctor_set(x_12, 0, x_18);
x_19 = lean_st_ref_set(x_5, x_12, x_13);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_17);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get(x_12, 2);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_27 = l_Lean_MetavarContext_instantiateMVars(x_24, x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
x_31 = lean_st_ref_set(x_5, x_30, x_13);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" …");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_Expr_getAppFn___main(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_isMVar(x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
if (x_9 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
x_12 = l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
x_3 = x_11;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_8);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_3 = x_11;
x_4 = x_18;
goto _start;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("don't know how to synthesize placeholder");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("context:");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("@");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_25; 
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = l_Lean_MessageData_Inhabited___closed__1;
x_9 = x_26;
x_10 = x_8;
goto block_24;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Expr_isApp(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_29);
x_9 = x_32;
x_10 = x_30;
goto block_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_33 = l_Lean_Expr_getAppFn___main(x_29);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_Lean_Expr_getAppNumArgsAux___main(x_29, x_34);
x_36 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_35);
x_37 = lean_mk_array(x_35, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_sub(x_35, x_38);
lean_dec(x_35);
lean_inc(x_29);
x_40 = l___private_Lean_Expr_3__getAppArgsAux___main(x_29, x_37, x_39);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_33);
x_42 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__9;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2(x_29, x_40, x_34, x_43);
lean_dec(x_40);
lean_dec(x_29);
x_45 = l_Lean_MessageData_ofList___closed__3;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_unsigned_to_nat(2u);
x_48 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_9 = x_48;
x_10 = x_30;
goto block_24;
}
}
block_24:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_11 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__3;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
x_13 = l_Lean_MessageData_ofList___closed__3;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Elab_Term_MVarErrorContext_logError___closed__6;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_13);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = 2;
x_23 = l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(x_19, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
lean_dec(x_19);
return x_23;
}
}
}
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_MVarErrorContext_logError___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_MVarErrorContext_logError(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_getMVars___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVarsImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_name_eq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
lean_object* l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = l_Lean_mkMVar(x_15);
x_17 = l_Lean_Meta_getMVarsImp(x_16, x_6, x_7, x_8, x_9, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4(x_1, x_18, x_18, x_20, x_21);
lean_dec(x_20);
lean_dec(x_18);
if (x_22 == 0)
{
lean_dec(x_13);
x_3 = x_14;
x_10 = x_19;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Elab_Term_MVarErrorContext_logError(x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = 1;
x_2 = x_26;
x_3 = x_14;
x_10 = x_25;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_st_ref_get(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 0;
x_14 = l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5(x_1, x_13, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
}
lean_object* l_Lean_Meta_getMVars___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVars___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_List_foldlM___main___at_Lean_Elab_Term_logUnassignedUsingErrorContext___spec__5(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorContext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_logUnassignedUsingErrorContext(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_getMVarsAtDecl___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVarsAtDeclImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwAbort___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = l_Lean_Meta_getMVarsAtDeclImp(x_1, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Elab_Term_logUnassignedUsingErrorContext(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___rarg(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Meta_getMVarsAtDecl___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVarsAtDecl___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwAbort___at_Lean_Elab_Term_ensureNoUnassignedMVars___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_withoutPostponing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*8, x_10);
x_11 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
x_15 = lean_ctor_get(x_2, 3);
x_16 = lean_ctor_get(x_2, 4);
x_17 = lean_ctor_get(x_2, 5);
x_18 = lean_ctor_get(x_2, 6);
x_19 = lean_ctor_get(x_2, 7);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_21 = 0;
x_22 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_13);
lean_ctor_set(x_22, 2, x_14);
lean_ctor_set(x_22, 3, x_15);
lean_ctor_set(x_22, 4, x_16);
lean_ctor_set(x_22, 5, x_17);
lean_ctor_set(x_22, 6, x_18);
lean_ctor_set(x_22, 7, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*8, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*8 + 1, x_20);
x_23 = lean_apply_7(x_1, x_22, x_3, x_4, x_5, x_6, x_7, x_8);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Term_withoutPostponing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutPostponing___rarg), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicitBinder");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_mkExplicitBinder___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Prod_HasRepr___rarg___closed__1;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__9;
x_2 = l_Lean_Elab_Term_mkExplicitBinder___closed__4;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Option_HasRepr___rarg___closed__3;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkExplicitBinder___closed__7;
x_2 = l_Lean_Elab_Term_mkExplicitBinder___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = l_Lean_mkOptionalNode___closed__2;
x_4 = lean_array_push(x_3, x_1);
x_5 = l_Lean_nullKind;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_Elab_Term_mkExplicitBinder___closed__5;
x_8 = lean_array_push(x_7, x_2);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_Elab_Term_mkExplicitBinder___closed__8;
x_11 = lean_array_push(x_10, x_6);
x_12 = lean_array_push(x_11, x_9);
x_13 = l_Lean_mkOptionalNode___closed__1;
x_14 = lean_array_push(x_12, x_13);
x_15 = l_Lean_Elab_Term_mkExplicitBinder___closed__6;
x_16 = lean_array_push(x_14, x_15);
x_17 = l_Lean_Elab_Term_mkExplicitBinder___closed__2;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
uint8_t l_Lean_Elab_Term_levelMVarToParam___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_levelMVarToParam___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("u");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_levelMVarToParam___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_levelMVarToParam___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_st_ref_get(x_6, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_3);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed), 2, 1);
lean_closure_set(x_14, 0, x_3);
x_15 = l_Lean_Elab_Term_levelMVarToParam___closed__2;
x_16 = l_Lean_MetavarContext_levelMVarToParam(x_13, x_14, x_1, x_15, x_2);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_16, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_16, 2);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_18, 0, x_23);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_16, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_16, 2);
lean_inc(x_26);
lean_dec(x_16);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_levelMVarToParam___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_levelMVarToParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_levelMVarToParam(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_st_ref_set(x_2, x_17, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_levelMVarToParam_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshUserName___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshUserName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_mkFreshUserName___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_mkFreshUserName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_2, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 3);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_12, x_13);
lean_ctor_set(x_9, 3, x_14);
x_15 = lean_st_ref_set(x_2, x_9, x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_1, 7);
lean_dec(x_18);
lean_ctor_set(x_1, 7, x_12);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_26 = l_Lean_addMacroScope(x_24, x_25, x_20);
x_27 = lean_box(0);
x_28 = l_Lean_SourceInfo_inhabited___closed__1;
x_29 = l_Lean_Elab_Term_mkFreshUserName___closed__2;
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
lean_ctor_set(x_22, 0, x_31);
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_35 = l_Lean_addMacroScope(x_32, x_34, x_20);
x_36 = lean_box(0);
x_37 = l_Lean_SourceInfo_inhabited___closed__1;
x_38 = l_Lean_Elab_Term_mkFreshUserName___closed__2;
x_39 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_36);
x_40 = l_Lean_Syntax_getId(x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_33);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_1, 1);
x_44 = lean_ctor_get(x_1, 2);
x_45 = lean_ctor_get(x_1, 3);
x_46 = lean_ctor_get(x_1, 4);
x_47 = lean_ctor_get(x_1, 5);
x_48 = lean_ctor_get(x_1, 6);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_51, 0, x_42);
lean_ctor_set(x_51, 1, x_43);
lean_ctor_set(x_51, 2, x_44);
lean_ctor_set(x_51, 3, x_45);
lean_ctor_set(x_51, 4, x_46);
lean_ctor_set(x_51, 5, x_47);
lean_ctor_set(x_51, 6, x_48);
lean_ctor_set(x_51, 7, x_12);
lean_ctor_set_uint8(x_51, sizeof(void*)*8, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*8 + 1, x_50);
x_52 = l_Lean_Elab_Term_getCurrMacroScope(x_51, x_2, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_60 = l_Lean_addMacroScope(x_56, x_59, x_53);
x_61 = lean_box(0);
x_62 = l_Lean_SourceInfo_inhabited___closed__1;
x_63 = l_Lean_Elab_Term_mkFreshUserName___closed__2;
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_60);
lean_ctor_set(x_64, 3, x_61);
x_65 = l_Lean_Syntax_getId(x_64);
lean_dec(x_64);
if (lean_is_scalar(x_58)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_58;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_57);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_67 = lean_ctor_get(x_9, 0);
x_68 = lean_ctor_get(x_9, 1);
x_69 = lean_ctor_get(x_9, 2);
x_70 = lean_ctor_get(x_9, 3);
x_71 = lean_ctor_get(x_9, 4);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_9);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_70, x_72);
x_74 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_74, 0, x_67);
lean_ctor_set(x_74, 1, x_68);
lean_ctor_set(x_74, 2, x_69);
lean_ctor_set(x_74, 3, x_73);
lean_ctor_set(x_74, 4, x_71);
x_75 = lean_st_ref_set(x_2, x_74, x_10);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_1, 2);
lean_inc(x_79);
x_80 = lean_ctor_get(x_1, 3);
lean_inc(x_80);
x_81 = lean_ctor_get(x_1, 4);
lean_inc(x_81);
x_82 = lean_ctor_get(x_1, 5);
lean_inc(x_82);
x_83 = lean_ctor_get(x_1, 6);
lean_inc(x_83);
x_84 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_85 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 lean_ctor_release(x_1, 7);
 x_86 = x_1;
} else {
 lean_dec_ref(x_1);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 8, 2);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_77);
lean_ctor_set(x_87, 1, x_78);
lean_ctor_set(x_87, 2, x_79);
lean_ctor_set(x_87, 3, x_80);
lean_ctor_set(x_87, 4, x_81);
lean_ctor_set(x_87, 5, x_82);
lean_ctor_set(x_87, 6, x_83);
lean_ctor_set(x_87, 7, x_70);
lean_ctor_set_uint8(x_87, sizeof(void*)*8, x_84);
lean_ctor_set_uint8(x_87, sizeof(void*)*8 + 1, x_85);
x_88 = l_Lean_Elab_Term_getCurrMacroScope(x_87, x_2, x_3, x_4, x_5, x_6, x_76);
lean_dec(x_87);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_96 = l_Lean_addMacroScope(x_92, x_95, x_89);
x_97 = lean_box(0);
x_98 = l_Lean_SourceInfo_inhabited___closed__1;
x_99 = l_Lean_Elab_Term_mkFreshUserName___closed__2;
x_100 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_100, 2, x_96);
lean_ctor_set(x_100, 3, x_97);
x_101 = l_Lean_Syntax_getId(x_100);
lean_dec(x_100);
if (lean_is_scalar(x_94)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_94;
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_93);
return x_102;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshUserName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_mkFreshUserName(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Term_mkFreshUserName(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_mkIdentFrom(x_1, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_mkIdentFrom(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_mkFreshIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inst");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkFreshInstanceName___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_mkFreshInstanceName___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_mkFreshInstanceName___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkFreshInstanceName___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_2, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 3);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_12, x_13);
lean_ctor_set(x_9, 3, x_14);
x_15 = lean_st_ref_set(x_2, x_9, x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_1, 7);
lean_dec(x_18);
lean_ctor_set(x_1, 7, x_12);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_Elab_Term_mkFreshInstanceName___closed__4;
x_26 = l_Lean_addMacroScope(x_24, x_25, x_20);
x_27 = lean_box(0);
x_28 = l_Lean_SourceInfo_inhabited___closed__1;
x_29 = l_Lean_Elab_Term_mkFreshInstanceName___closed__3;
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
lean_ctor_set(x_22, 0, x_31);
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = l_Lean_Elab_Term_mkFreshInstanceName___closed__4;
x_35 = l_Lean_addMacroScope(x_32, x_34, x_20);
x_36 = lean_box(0);
x_37 = l_Lean_SourceInfo_inhabited___closed__1;
x_38 = l_Lean_Elab_Term_mkFreshInstanceName___closed__3;
x_39 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_36);
x_40 = l_Lean_Syntax_getId(x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_33);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_1, 1);
x_44 = lean_ctor_get(x_1, 2);
x_45 = lean_ctor_get(x_1, 3);
x_46 = lean_ctor_get(x_1, 4);
x_47 = lean_ctor_get(x_1, 5);
x_48 = lean_ctor_get(x_1, 6);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_51, 0, x_42);
lean_ctor_set(x_51, 1, x_43);
lean_ctor_set(x_51, 2, x_44);
lean_ctor_set(x_51, 3, x_45);
lean_ctor_set(x_51, 4, x_46);
lean_ctor_set(x_51, 5, x_47);
lean_ctor_set(x_51, 6, x_48);
lean_ctor_set(x_51, 7, x_12);
lean_ctor_set_uint8(x_51, sizeof(void*)*8, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*8 + 1, x_50);
x_52 = l_Lean_Elab_Term_getCurrMacroScope(x_51, x_2, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = l_Lean_Elab_Term_mkFreshInstanceName___closed__4;
x_60 = l_Lean_addMacroScope(x_56, x_59, x_53);
x_61 = lean_box(0);
x_62 = l_Lean_SourceInfo_inhabited___closed__1;
x_63 = l_Lean_Elab_Term_mkFreshInstanceName___closed__3;
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_60);
lean_ctor_set(x_64, 3, x_61);
x_65 = l_Lean_Syntax_getId(x_64);
lean_dec(x_64);
if (lean_is_scalar(x_58)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_58;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_57);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_67 = lean_ctor_get(x_9, 0);
x_68 = lean_ctor_get(x_9, 1);
x_69 = lean_ctor_get(x_9, 2);
x_70 = lean_ctor_get(x_9, 3);
x_71 = lean_ctor_get(x_9, 4);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_9);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_70, x_72);
x_74 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_74, 0, x_67);
lean_ctor_set(x_74, 1, x_68);
lean_ctor_set(x_74, 2, x_69);
lean_ctor_set(x_74, 3, x_73);
lean_ctor_set(x_74, 4, x_71);
x_75 = lean_st_ref_set(x_2, x_74, x_10);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_1, 2);
lean_inc(x_79);
x_80 = lean_ctor_get(x_1, 3);
lean_inc(x_80);
x_81 = lean_ctor_get(x_1, 4);
lean_inc(x_81);
x_82 = lean_ctor_get(x_1, 5);
lean_inc(x_82);
x_83 = lean_ctor_get(x_1, 6);
lean_inc(x_83);
x_84 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_85 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 lean_ctor_release(x_1, 7);
 x_86 = x_1;
} else {
 lean_dec_ref(x_1);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 8, 2);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_77);
lean_ctor_set(x_87, 1, x_78);
lean_ctor_set(x_87, 2, x_79);
lean_ctor_set(x_87, 3, x_80);
lean_ctor_set(x_87, 4, x_81);
lean_ctor_set(x_87, 5, x_82);
lean_ctor_set(x_87, 6, x_83);
lean_ctor_set(x_87, 7, x_70);
lean_ctor_set_uint8(x_87, sizeof(void*)*8, x_84);
lean_ctor_set_uint8(x_87, sizeof(void*)*8 + 1, x_85);
x_88 = l_Lean_Elab_Term_getCurrMacroScope(x_87, x_2, x_3, x_4, x_5, x_6, x_76);
lean_dec(x_87);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = l_Lean_Elab_Term_mkFreshInstanceName___closed__4;
x_96 = l_Lean_addMacroScope(x_92, x_95, x_89);
x_97 = lean_box(0);
x_98 = l_Lean_SourceInfo_inhabited___closed__1;
x_99 = l_Lean_Elab_Term_mkFreshInstanceName___closed__3;
x_100 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_100, 2, x_96);
lean_ctor_set(x_100, 3, x_97);
x_101 = l_Lean_Syntax_getId(x_100);
lean_dec(x_100);
if (lean_is_scalar(x_94)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_94;
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_93);
return x_102;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_mkFreshInstanceName(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = l___private_Lean_Elab_Term_1__hasCDot___main(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_1__hasCDot___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cdot");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_1__hasCDot___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___private_Lean_Elab_Term_1__hasCDot___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_1__hasCDot___main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_5 = lean_name_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Lean_Elab_Term_1__hasCDot___main___closed__2;
x_7 = lean_name_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1(x_3, x_3, x_8, x_9);
lean_dec(x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_1__hasCDot___main___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_1__hasCDot___main___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_1__hasCDot___main(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_1__hasCDot(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Elab_Term_1__hasCDot___main(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_1__hasCDot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_1__hasCDot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Term_2__expandCDot___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = x_2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_array_fget(x_2, x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_fset(x_2, x_1, x_12);
x_14 = x_11;
lean_inc(x_4);
x_15 = l___private_Lean_Elab_Term_2__expandCDot___main(x_14, x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_1, x_20);
x_22 = x_18;
x_23 = lean_array_fset(x_13, x_1, x_22);
lean_dec(x_1);
x_1 = x_21;
x_2 = x_23;
x_3 = x_19;
x_5 = x_17;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_IO_Prim_fopenFlags___closed__12;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_IO_Prim_fopenFlags___closed__12;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_IO_Prim_fopenFlags___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_2__expandCDot___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_8 = lean_name_eq(x_5, x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = l___private_Lean_Elab_Term_1__hasCDot___main___closed__2;
x_13 = lean_name_eq(x_5, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = x_6;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Term_2__expandCDot___main___spec__1), 5, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = x_16;
x_18 = lean_apply_3(x_17, x_2, x_3, x_4);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_20, 0, x_1);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_20);
lean_ctor_set(x_1, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_18, 0, x_25);
return x_18;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_30 = x_26;
} else {
 lean_dec_ref(x_26);
 x_30 = lean_box(0);
}
lean_ctor_set(x_1, 1, x_28);
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_free_object(x_1);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_4, x_37);
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
lean_dec(x_3);
x_40 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
x_41 = l_Lean_addMacroScope(x_39, x_40, x_4);
x_42 = lean_box(0);
x_43 = l_Lean_SourceInfo_inhabited___closed__1;
x_44 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__2;
x_45 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_41);
lean_ctor_set(x_45, 3, x_42);
lean_inc(x_45);
x_46 = lean_array_push(x_2, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_38);
return x_48;
}
}
else
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_1);
x_49 = l___private_Lean_Elab_Term_1__hasCDot___main___closed__2;
x_50 = lean_name_eq(x_5, x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = x_6;
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Term_2__expandCDot___main___spec__1), 5, 2);
lean_closure_set(x_53, 0, x_52);
lean_closure_set(x_53, 1, x_51);
x_54 = x_53;
x_55 = lean_apply_3(x_54, x_2, x_3, x_4);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_ctor_get(x_56, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_56, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_61 = x_56;
} else {
 lean_dec_ref(x_56);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_5);
lean_ctor_set(x_62, 1, x_59);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
if (lean_is_scalar(x_58)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_58;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_57);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_5);
x_65 = lean_ctor_get(x_55, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_55, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_67 = x_55;
} else {
 lean_dec_ref(x_55);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_6);
lean_dec(x_5);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_4, x_69);
x_71 = lean_ctor_get(x_3, 0);
lean_inc(x_71);
lean_dec(x_3);
x_72 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
x_73 = l_Lean_addMacroScope(x_71, x_72, x_4);
x_74 = lean_box(0);
x_75 = l_Lean_SourceInfo_inhabited___closed__1;
x_76 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__2;
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_74);
lean_inc(x_77);
x_78 = lean_array_push(x_2, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_70);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_2);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_4);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_3);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_2);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_4);
return x_84;
}
}
}
lean_object* l___private_Lean_Elab_Term_2__expandCDot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Term_2__expandCDot___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l___private_Lean_Elab_Term_1__hasCDot___main(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Array_empty___closed__1;
x_8 = l___private_Lean_Elab_Term_2__expandCDot___main(x_1, x_7, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_12, x_12, x_13, x_7);
lean_dec(x_12);
x_15 = l_Lean_nullKind___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__9;
x_18 = lean_array_push(x_17, x_16);
x_19 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__17;
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_array_push(x_20, x_11);
x_22 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__7;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_8, 0, x_24);
return x_8;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_25 = lean_ctor_get(x_8, 0);
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_8);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_28, x_28, x_29, x_7);
lean_dec(x_28);
x_31 = l_Lean_nullKind___closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__9;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__17;
x_36 = lean_array_push(x_34, x_35);
x_37 = lean_array_push(x_36, x_27);
x_38 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__7;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_26);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type mismatch");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
if (lean_obj_tag(x_5) == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_31; 
x_31 = l_Lean_MessageData_Inhabited___closed__1;
x_13 = x_31;
goto block_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_ctor_get(x_4, 0);
lean_inc(x_32);
lean_dec(x_4);
x_33 = l_Lean_MessageData_Inhabited___closed__1;
x_34 = l_Lean_Meta_throwAppTypeMismatch___rarg(x_32, x_3, x_33, x_8, x_9, x_10, x_11, x_12);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_5, 0);
x_36 = l_Lean_MessageData_ofList___closed__3;
lean_inc(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
if (lean_obj_tag(x_4) == 0)
{
x_13 = x_37;
goto block_30;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
lean_dec(x_4);
x_39 = l_Lean_Meta_throwAppTypeMismatch___rarg(x_38, x_3, x_37, x_8, x_9, x_10, x_11, x_12);
return x_39;
}
}
block_30:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_14 = l_Lean_indentExpr(x_3);
x_15 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_MessageData_ofList___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_KernelException_toMessageData___closed__12;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_indentExpr(x_2);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
x_24 = l_Lean_KernelException_toMessageData___closed__15;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_indentExpr(x_1);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_13);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_29;
}
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = 0;
x_12 = l_Lean_Elab_setMacroStackOption(x_10, x_11);
lean_ctor_set(x_6, 0, x_12);
x_13 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get(x_6, 2);
x_17 = lean_ctor_get(x_6, 3);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_18 = 0;
x_19 = l_Lean_Elab_setMacroStackOption(x_14, x_18);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_16);
lean_ctor_set(x_20, 3, x_17);
x_21 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_20, x_7, x_8);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutMacroStackAtErr___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_trySynthInstance___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_6, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_MetavarContext_assignExpr(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_6, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_26 = l_Lean_MetavarContext_assignExpr(x_23, x_1, x_2);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_25);
x_28 = lean_st_ref_set(x_6, x_27, x_12);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
x_31 = lean_box(0);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to synthesize instance");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthesized type class instance is not definitionally equal to expression ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferred by typing rules, synthesized");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6;
x_2 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferred");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = l_Lean_Elab_Term_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_16 = l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(x_14, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_indentExpr(x_14);
x_20 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_22;
}
case 1:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_14);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
lean_dec(x_17);
lean_inc(x_1);
x_25 = l_Lean_Elab_Term_isExprMVarAssigned(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_1, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = 1;
x_33 = lean_box(x_32);
lean_ctor_set(x_29, 0, x_33);
return x_29;
}
else
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_dec(x_29);
x_35 = 1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_25, 1);
lean_inc(x_38);
lean_dec(x_25);
x_39 = l_Lean_mkMVar(x_1);
x_40 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_39, x_2, x_3, x_4, x_5, x_6, x_7, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_24);
lean_inc(x_41);
x_43 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_41, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = l_Lean_indentExpr(x_24);
x_48 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Lean_MessageData_ofList___closed__3;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_indentExpr(x_41);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_55, x_2, x_3, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_41);
lean_dec(x_24);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_43);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_43, 0);
lean_dec(x_62);
x_63 = 1;
x_64 = lean_box(x_63);
lean_ctor_set(x_43, 0, x_64);
return x_43;
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_43, 1);
lean_inc(x_65);
lean_dec(x_43);
x_66 = 1;
x_67 = lean_box(x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_65);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_41);
lean_dec(x_24);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_43);
if (x_69 == 0)
{
return x_43;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_43, 0);
x_71 = lean_ctor_get(x_43, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_43);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
default: 
{
uint8_t x_73; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_16);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_16, 0);
lean_dec(x_74);
x_75 = 0;
x_76 = lean_box(x_75);
lean_ctor_set(x_16, 0, x_76);
return x_16;
}
else
{
lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_16, 1);
lean_inc(x_77);
lean_dec(x_16);
x_78 = 0;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_16);
if (x_81 == 0)
{
return x_16;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_16, 0);
x_83 = lean_ctor_get(x_16, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_16);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* l_Lean_Meta_trySynthInstance___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_trySynthInstance___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_getLevel___at_Lean_Elab_Term_tryCoe___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_InferType_4__getLevelImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Elab_Term_tryCoe___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CoeT");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryCoe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coe");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_tryCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_16 = l___private_Lean_Meta_InferType_4__getLevelImp(x_2, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_19 = l___private_Lean_Meta_InferType_4__getLevelImp(x_1, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Term_tryCoe___closed__2;
lean_inc(x_24);
x_26 = l_Lean_mkConst(x_25, x_24);
x_27 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_2);
x_28 = lean_array_push(x_27, x_2);
lean_inc(x_3);
x_29 = lean_array_push(x_28, x_3);
lean_inc(x_1);
x_30 = lean_array_push(x_29, x_1);
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_30, x_30, x_31, x_26);
lean_dec(x_30);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = 1;
x_35 = lean_box(0);
lean_inc(x_7);
x_36 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_33, x_34, x_35, x_7, x_8, x_9, x_10, x_21);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Elab_Term_tryCoe___closed__4;
x_40 = l_Lean_mkConst(x_39, x_24);
x_41 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_inc(x_2);
x_42 = lean_array_push(x_41, x_2);
lean_inc(x_1);
x_43 = lean_array_push(x_42, x_1);
lean_inc(x_3);
x_44 = lean_array_push(x_43, x_3);
lean_inc(x_37);
x_45 = lean_array_push(x_44, x_37);
x_46 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_45, x_45, x_31, x_40);
lean_dec(x_45);
x_47 = l_Lean_Expr_mvarId_x21(x_37);
lean_dec(x_37);
x_48 = lean_ctor_get(x_9, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_9, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_9, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_9, 3);
lean_inc(x_51);
x_52 = 0;
x_53 = l_Lean_Elab_setMacroStackOption(x_48, x_52);
x_54 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_50);
lean_ctor_set(x_54, 3, x_51);
lean_inc(x_10);
lean_inc(x_54);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_47);
x_55 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_47, x_5, x_6, x_7, x_8, x_54, x_10, x_38);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; uint8_t x_57; 
lean_dec(x_9);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_59, 0, x_1);
lean_ctor_set(x_59, 1, x_2);
lean_ctor_set(x_59, 2, x_3);
lean_ctor_set(x_59, 3, x_4);
x_60 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_47, x_59, x_5, x_6, x_7, x_8, x_54, x_10, x_58);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_60, 0);
lean_dec(x_62);
lean_ctor_set(x_60, 0, x_46);
return x_60;
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_46);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
else
{
uint8_t x_65; 
lean_dec(x_54);
lean_dec(x_47);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_55);
if (x_65 == 0)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_55, 0);
lean_dec(x_66);
lean_ctor_set(x_55, 0, x_46);
return x_55;
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_55, 1);
lean_inc(x_67);
lean_dec(x_55);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_46);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; 
lean_dec(x_54);
lean_dec(x_47);
lean_dec(x_46);
x_69 = lean_ctor_get(x_55, 0);
lean_inc(x_69);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_55, 1);
lean_inc(x_70);
lean_dec(x_55);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_72, x_5, x_6, x_7, x_8, x_9, x_10, x_70);
lean_dec(x_72);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_69);
x_74 = lean_ctor_get(x_55, 1);
lean_inc(x_74);
lean_dec(x_55);
x_75 = lean_box(0);
x_76 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_75, x_5, x_6, x_7, x_8, x_9, x_10, x_74);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_19);
if (x_77 == 0)
{
return x_19;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_19, 0);
x_79 = lean_ctor_get(x_19, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_19);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_16);
if (x_81 == 0)
{
return x_16;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_16, 0);
x_83 = lean_ctor_get(x_16, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_16);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_12);
if (x_85 == 0)
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_12, 0);
lean_dec(x_86);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_12, 1);
lean_inc(x_87);
lean_dec(x_12);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_3);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_12);
if (x_89 == 0)
{
return x_12;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_12, 0);
x_91 = lean_ctor_get(x_12, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_12);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
lean_object* l_Lean_Meta_getLevel___at_Lean_Elab_Term_tryCoe___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getLevel___at_Lean_Elab_Term_tryCoe___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Elab_Term_tryCoe___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_mkFreshExprMVar___at_Lean_Elab_Term_tryCoe___spec__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_tryCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_tryCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 3);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_10, x_11);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_6, 3);
lean_dec(x_15);
x_16 = lean_ctor_get(x_6, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_6, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_6, 0);
lean_dec(x_18);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_10, x_19);
lean_dec(x_10);
lean_ctor_set(x_6, 1, x_20);
x_21 = l_Lean_Meta_whnfRef;
x_22 = lean_st_ref_get(x_21, x_8);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_apply_6(x_23, x_1, x_4, x_5, x_6, x_7, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_6);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_10, x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_11);
lean_ctor_set(x_28, 3, x_12);
x_29 = l_Lean_Meta_whnfRef;
x_30 = lean_st_ref_get(x_29, x_8);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_apply_6(x_31, x_1, x_4, x_5, x_28, x_7, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_34 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_35 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_34, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_3__isTypeApp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 2;
lean_ctor_set_uint8(x_10, 5, x_12);
x_13 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 5)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_13, 0, x_20);
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_13, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_13, 0, x_29);
return x_13;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_dec(x_13);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_37 = lean_ctor_get_uint8(x_10, 0);
x_38 = lean_ctor_get_uint8(x_10, 1);
x_39 = lean_ctor_get_uint8(x_10, 2);
x_40 = lean_ctor_get_uint8(x_10, 3);
x_41 = lean_ctor_get_uint8(x_10, 4);
x_42 = lean_ctor_get_uint8(x_10, 6);
x_43 = lean_ctor_get_uint8(x_10, 7);
lean_dec(x_10);
x_44 = 2;
x_45 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_45, 0, x_37);
lean_ctor_set_uint8(x_45, 1, x_38);
lean_ctor_set_uint8(x_45, 2, x_39);
lean_ctor_set_uint8(x_45, 3, x_40);
lean_ctor_set_uint8(x_45, 4, x_41);
lean_ctor_set_uint8(x_45, 5, x_44);
lean_ctor_set_uint8(x_45, 6, x_42);
lean_ctor_set_uint8(x_45, 7, x_43);
lean_ctor_set(x_4, 0, x_45);
x_46 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 5)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
if (lean_is_scalar(x_49)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_49;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_48);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_47);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_56 = x_46;
} else {
 lean_dec_ref(x_46);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_46, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_46, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_61 = x_46;
} else {
 lean_dec_ref(x_46);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_63 = lean_ctor_get(x_4, 0);
x_64 = lean_ctor_get(x_4, 1);
x_65 = lean_ctor_get(x_4, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_4);
x_66 = lean_ctor_get_uint8(x_63, 0);
x_67 = lean_ctor_get_uint8(x_63, 1);
x_68 = lean_ctor_get_uint8(x_63, 2);
x_69 = lean_ctor_get_uint8(x_63, 3);
x_70 = lean_ctor_get_uint8(x_63, 4);
x_71 = lean_ctor_get_uint8(x_63, 6);
x_72 = lean_ctor_get_uint8(x_63, 7);
if (lean_is_exclusive(x_63)) {
 x_73 = x_63;
} else {
 lean_dec_ref(x_63);
 x_73 = lean_box(0);
}
x_74 = 2;
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 0, 8);
} else {
 x_75 = x_73;
}
lean_ctor_set_uint8(x_75, 0, x_66);
lean_ctor_set_uint8(x_75, 1, x_67);
lean_ctor_set_uint8(x_75, 2, x_68);
lean_ctor_set_uint8(x_75, 3, x_69);
lean_ctor_set_uint8(x_75, 4, x_70);
lean_ctor_set_uint8(x_75, 5, x_74);
lean_ctor_set_uint8(x_75, 6, x_71);
lean_ctor_set_uint8(x_75, 7, x_72);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_64);
lean_ctor_set(x_76, 2, x_65);
x_77 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_76, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
if (lean_obj_tag(x_78) == 5)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
x_81 = lean_ctor_get(x_78, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_82);
lean_dec(x_78);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_83);
if (lean_is_scalar(x_80)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_80;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_79);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_78);
x_86 = lean_ctor_get(x_77, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_87 = x_77;
} else {
 lean_dec_ref(x_77);
 x_87 = lean_box(0);
}
x_88 = lean_box(0);
if (lean_is_scalar(x_87)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_87;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_77, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_77, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_92 = x_77;
} else {
 lean_dec_ref(x_77);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Term_3__isTypeApp_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_3__isTypeApp_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_10 = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_20__mkFun___boxed), 6, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Lean_MonadLCtx___spec__2___rarg), 7, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_209 = lean_st_ref_get(x_8, x_9);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_210, 2);
lean_inc(x_211);
lean_dec(x_210);
x_212 = lean_ctor_get_uint8(x_211, sizeof(void*)*1);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
lean_dec(x_209);
x_214 = 0;
x_13 = x_214;
x_14 = x_213;
goto block_208;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_dec(x_209);
x_216 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_217 = l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(x_216, x_5, x_6, x_7, x_8, x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_unbox(x_218);
lean_dec(x_218);
x_13 = x_220;
x_14 = x_219;
goto block_208;
}
block_208:
{
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_15 = lean_st_ref_get(x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
lean_dec(x_17);
x_20 = lean_st_ref_take(x_8, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_21, 2);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_27);
x_28 = lean_st_ref_set(x_8, x_21, x_23);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_8);
x_30 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_get(x_8, x_32);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_st_ref_take(x_8, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_36, 2);
lean_dec(x_40);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_19);
x_42 = lean_st_ref_set(x_8, x_36, x_38);
lean_dec(x_8);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_31);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_31);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = lean_ctor_get(x_37, 0);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_19);
lean_ctor_set(x_36, 2, x_48);
x_49 = lean_st_ref_set(x_8, x_36, x_38);
lean_dec(x_8);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_31);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_36, 0);
x_54 = lean_ctor_get(x_36, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_36);
x_55 = lean_ctor_get(x_37, 0);
lean_inc(x_55);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_56 = x_37;
} else {
 lean_dec_ref(x_37);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 1, 1);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_19);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_57);
x_59 = lean_st_ref_set(x_8, x_58, x_38);
lean_dec(x_8);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_31);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_63 = lean_ctor_get(x_30, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_30, 1);
lean_inc(x_64);
lean_dec(x_30);
x_65 = lean_st_ref_get(x_8, x_64);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_take(x_8, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_68, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_dec(x_67);
x_71 = !lean_is_exclusive(x_68);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_68, 2);
lean_dec(x_72);
x_73 = !lean_is_exclusive(x_69);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_19);
x_74 = lean_st_ref_set(x_8, x_68, x_70);
lean_dec(x_8);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_74, 0);
lean_dec(x_76);
lean_ctor_set_tag(x_74, 1);
lean_ctor_set(x_74, 0, x_63);
return x_74;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_63);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_69, 0);
lean_inc(x_79);
lean_dec(x_69);
x_80 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*1, x_19);
lean_ctor_set(x_68, 2, x_80);
x_81 = lean_st_ref_set(x_8, x_68, x_70);
lean_dec(x_8);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_83 = x_81;
} else {
 lean_dec_ref(x_81);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
 lean_ctor_set_tag(x_84, 1);
}
lean_ctor_set(x_84, 0, x_63);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_85 = lean_ctor_get(x_68, 0);
x_86 = lean_ctor_get(x_68, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_68);
x_87 = lean_ctor_get(x_69, 0);
lean_inc(x_87);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 x_88 = x_69;
} else {
 lean_dec_ref(x_69);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 1, 1);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set_uint8(x_89, sizeof(void*)*1, x_19);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_86);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_st_ref_set(x_8, x_90, x_70);
lean_dec(x_8);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
 lean_ctor_set_tag(x_94, 1);
}
lean_ctor_set(x_94, 0, x_63);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
else
{
lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_95 = lean_ctor_get(x_22, 0);
lean_inc(x_95);
lean_dec(x_22);
x_96 = 0;
x_97 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set_uint8(x_97, sizeof(void*)*1, x_96);
lean_ctor_set(x_21, 2, x_97);
x_98 = lean_st_ref_set(x_8, x_21, x_23);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
lean_inc(x_8);
x_100 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_st_ref_get(x_8, x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_st_ref_take(x_8, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 2);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
lean_dec(x_105);
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 x_111 = x_106;
} else {
 lean_dec_ref(x_106);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_107, 0);
lean_inc(x_112);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 x_113 = x_107;
} else {
 lean_dec_ref(x_107);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 1, 1);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set_uint8(x_114, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_111)) {
 x_115 = lean_alloc_ctor(0, 3, 0);
} else {
 x_115 = x_111;
}
lean_ctor_set(x_115, 0, x_109);
lean_ctor_set(x_115, 1, x_110);
lean_ctor_set(x_115, 2, x_114);
x_116 = lean_st_ref_set(x_8, x_115, x_108);
lean_dec(x_8);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_118 = x_116;
} else {
 lean_dec_ref(x_116);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_101);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_120 = lean_ctor_get(x_100, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_100, 1);
lean_inc(x_121);
lean_dec(x_100);
x_122 = lean_st_ref_get(x_8, x_121);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_st_ref_take(x_8, x_123);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_125, 2);
lean_inc(x_126);
x_127 = lean_ctor_get(x_124, 1);
lean_inc(x_127);
lean_dec(x_124);
x_128 = lean_ctor_get(x_125, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 lean_ctor_release(x_125, 2);
 x_130 = x_125;
} else {
 lean_dec_ref(x_125);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_126, 0);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(0, 1, 1);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set_uint8(x_133, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_130)) {
 x_134 = lean_alloc_ctor(0, 3, 0);
} else {
 x_134 = x_130;
}
lean_ctor_set(x_134, 0, x_128);
lean_ctor_set(x_134, 1, x_129);
lean_ctor_set(x_134, 2, x_133);
x_135 = lean_st_ref_set(x_8, x_134, x_127);
lean_dec(x_8);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_137 = x_135;
} else {
 lean_dec_ref(x_135);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
 lean_ctor_set_tag(x_138, 1);
}
lean_ctor_set(x_138, 0, x_120);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_139 = lean_ctor_get(x_21, 0);
x_140 = lean_ctor_get(x_21, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_21);
x_141 = lean_ctor_get(x_22, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 x_142 = x_22;
} else {
 lean_dec_ref(x_22);
 x_142 = lean_box(0);
}
x_143 = 0;
if (lean_is_scalar(x_142)) {
 x_144 = lean_alloc_ctor(0, 1, 1);
} else {
 x_144 = x_142;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set_uint8(x_144, sizeof(void*)*1, x_143);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_139);
lean_ctor_set(x_145, 1, x_140);
lean_ctor_set(x_145, 2, x_144);
x_146 = lean_st_ref_set(x_8, x_145, x_23);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
lean_dec(x_146);
lean_inc(x_8);
x_148 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = lean_st_ref_get(x_8, x_150);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_153 = lean_st_ref_take(x_8, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_154, 2);
lean_inc(x_155);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
lean_dec(x_153);
x_157 = lean_ctor_get(x_154, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 lean_ctor_release(x_154, 2);
 x_159 = x_154;
} else {
 lean_dec_ref(x_154);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_155, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 x_161 = x_155;
} else {
 lean_dec_ref(x_155);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(0, 1, 1);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set_uint8(x_162, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_159)) {
 x_163 = lean_alloc_ctor(0, 3, 0);
} else {
 x_163 = x_159;
}
lean_ctor_set(x_163, 0, x_157);
lean_ctor_set(x_163, 1, x_158);
lean_ctor_set(x_163, 2, x_162);
x_164 = lean_st_ref_set(x_8, x_163, x_156);
lean_dec(x_8);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_166 = x_164;
} else {
 lean_dec_ref(x_164);
 x_166 = lean_box(0);
}
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_149);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_168 = lean_ctor_get(x_148, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_148, 1);
lean_inc(x_169);
lean_dec(x_148);
x_170 = lean_st_ref_get(x_8, x_169);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
lean_dec(x_170);
x_172 = lean_st_ref_take(x_8, x_171);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_173, 2);
lean_inc(x_174);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
lean_dec(x_172);
x_176 = lean_ctor_get(x_173, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_173, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 lean_ctor_release(x_173, 2);
 x_178 = x_173;
} else {
 lean_dec_ref(x_173);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_174, 0);
lean_inc(x_179);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 x_180 = x_174;
} else {
 lean_dec_ref(x_174);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(0, 1, 1);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set_uint8(x_181, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 3, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_176);
lean_ctor_set(x_182, 1, x_177);
lean_ctor_set(x_182, 2, x_181);
x_183 = lean_st_ref_set(x_8, x_182, x_175);
lean_dec(x_8);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_185 = x_183;
} else {
 lean_dec_ref(x_183);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
 lean_ctor_set_tag(x_186, 1);
}
lean_ctor_set(x_186, 0, x_168);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_187 = lean_ctor_get(x_7, 3);
lean_inc(x_187);
x_188 = l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(x_8, x_14);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_191 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_195 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_189, x_194, x_187, x_5, x_6, x_7, x_8, x_193);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_195, 0);
lean_dec(x_197);
lean_ctor_set(x_195, 0, x_192);
return x_195;
}
else
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_dec(x_195);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_192);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_200 = lean_ctor_get(x_191, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_191, 1);
lean_inc(x_201);
lean_dec(x_191);
x_202 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_203 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_189, x_202, x_187, x_5, x_6, x_7, x_8, x_201);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_204 = !lean_is_exclusive(x_203);
if (x_204 == 0)
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_203, 0);
lean_dec(x_205);
lean_ctor_set_tag(x_203, 1);
lean_ctor_set(x_203, 0, x_200);
return x_203;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_203, 1);
lean_inc(x_206);
lean_dec(x_203);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_200);
lean_ctor_set(x_207, 1, x_206);
return x_207;
}
}
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Monad");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 2);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 2;
lean_ctor_set_uint8(x_9, 5, x_13);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 5)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_18);
x_21 = lean_array_push(x_20, x_18);
x_22 = l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_22, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(x_24, x_4, x_5, x_6, x_7, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 1)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_19);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_26, 0, x_32);
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_18);
lean_ctor_set(x_35, 1, x_19);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_18);
x_38 = !lean_is_exclusive(x_26);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_26, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_26, 0, x_40);
return x_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_dec(x_26);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_19);
lean_dec(x_18);
x_44 = !lean_is_exclusive(x_26);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set_tag(x_26, 0);
lean_ctor_set(x_26, 0, x_46);
return x_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_26, 1);
lean_inc(x_47);
lean_dec(x_26);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_23, 0);
lean_dec(x_51);
x_52 = lean_box(0);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_52);
return x_23;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_dec(x_23);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_56 = !lean_is_exclusive(x_15);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_15, 0);
lean_dec(x_57);
x_58 = lean_box(0);
lean_ctor_set(x_15, 0, x_58);
return x_15;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_15, 1);
lean_inc(x_59);
lean_dec(x_15);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_62 = !lean_is_exclusive(x_15);
if (x_62 == 0)
{
return x_15;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_15, 0);
x_64 = lean_ctor_get(x_15, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_15);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_66 = lean_ctor_get_uint8(x_9, 0);
x_67 = lean_ctor_get_uint8(x_9, 1);
x_68 = lean_ctor_get_uint8(x_9, 2);
x_69 = lean_ctor_get_uint8(x_9, 3);
x_70 = lean_ctor_get_uint8(x_9, 4);
x_71 = lean_ctor_get_uint8(x_9, 6);
x_72 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_73 = 2;
x_74 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_74, 0, x_66);
lean_ctor_set_uint8(x_74, 1, x_67);
lean_ctor_set_uint8(x_74, 2, x_68);
lean_ctor_set_uint8(x_74, 3, x_69);
lean_ctor_set_uint8(x_74, 4, x_70);
lean_ctor_set_uint8(x_74, 5, x_73);
lean_ctor_set_uint8(x_74, 6, x_71);
lean_ctor_set_uint8(x_74, 7, x_72);
x_75 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_10);
lean_ctor_set(x_75, 2, x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_76 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_75, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
if (lean_obj_tag(x_77) == 5)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
x_81 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_79);
x_82 = lean_array_push(x_81, x_79);
x_83 = l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_84 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_83, x_82, x_2, x_3, x_4, x_5, x_6, x_7, x_78);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(x_85, x_4, x_5, x_6, x_7, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 1)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_90 = x_87;
} else {
 lean_dec_ref(x_87);
 x_90 = lean_box(0);
}
x_91 = lean_ctor_get(x_88, 0);
lean_inc(x_91);
lean_dec(x_88);
x_92 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_92, 0, x_79);
lean_ctor_set(x_92, 1, x_80);
lean_ctor_set(x_92, 2, x_91);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
if (lean_is_scalar(x_90)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_90;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_89);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_88);
lean_dec(x_80);
lean_dec(x_79);
x_95 = lean_ctor_get(x_87, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
x_97 = lean_box(0);
if (lean_is_scalar(x_96)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_96;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_95);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_80);
lean_dec(x_79);
x_99 = lean_ctor_get(x_87, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_100 = x_87;
} else {
 lean_dec_ref(x_87);
 x_100 = lean_box(0);
}
x_101 = lean_box(0);
if (lean_is_scalar(x_100)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_100;
 lean_ctor_set_tag(x_102, 0);
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_99);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_103 = lean_ctor_get(x_84, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_104 = x_84;
} else {
 lean_dec_ref(x_84);
 x_104 = lean_box(0);
}
x_105 = lean_box(0);
if (lean_is_scalar(x_104)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_104;
 lean_ctor_set_tag(x_106, 0);
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_103);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_77);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_107 = lean_ctor_get(x_76, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_108 = x_76;
} else {
 lean_dec_ref(x_76);
 x_108 = lean_box(0);
}
x_109 = lean_box(0);
if (lean_is_scalar(x_108)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_108;
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_107);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_111 = lean_ctor_get(x_76, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_76, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_113 = x_76;
} else {
 lean_dec_ref(x_76);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
}
}
lean_object* l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Term_4__isMonad_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_4__isMonad_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_synthesizeInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_12 = l___private_Lean_Meta_SynthInstance_9__trySynthInstanceImp(x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_22; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
else
{
lean_object* x_23; 
lean_free_object(x_12);
lean_dec(x_14);
x_23 = lean_box(0);
x_16 = x_23;
goto block_21;
}
block_21:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
x_17 = l_Lean_indentExpr(x_10);
x_18 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_20;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
else
{
lean_object* x_34; 
lean_dec(x_24);
x_34 = lean_box(0);
x_26 = x_34;
goto block_31;
}
block_31:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_26);
x_27 = l_Lean_indentExpr(x_10);
x_28 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_30;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_12);
if (x_35 == 0)
{
return x_12;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_12, 0);
x_37 = lean_ctor_get(x_12, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_12);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeInst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_synthesizeInst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_10 = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_20__mkFun___boxed), 6, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppOptM___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Lean_MonadLCtx___spec__2___rarg), 7, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_209 = lean_st_ref_get(x_8, x_9);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_210, 2);
lean_inc(x_211);
lean_dec(x_210);
x_212 = lean_ctor_get_uint8(x_211, sizeof(void*)*1);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
lean_dec(x_209);
x_214 = 0;
x_13 = x_214;
x_14 = x_213;
goto block_208;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_dec(x_209);
x_216 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_217 = l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(x_216, x_5, x_6, x_7, x_8, x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_unbox(x_218);
lean_dec(x_218);
x_13 = x_220;
x_14 = x_219;
goto block_208;
}
block_208:
{
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_15 = lean_st_ref_get(x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
lean_dec(x_17);
x_20 = lean_st_ref_take(x_8, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_21, 2);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_27);
x_28 = lean_st_ref_set(x_8, x_21, x_23);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_8);
x_30 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_get(x_8, x_32);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_st_ref_take(x_8, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_36, 2);
lean_dec(x_40);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_19);
x_42 = lean_st_ref_set(x_8, x_36, x_38);
lean_dec(x_8);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_31);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_31);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = lean_ctor_get(x_37, 0);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_19);
lean_ctor_set(x_36, 2, x_48);
x_49 = lean_st_ref_set(x_8, x_36, x_38);
lean_dec(x_8);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_31);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_36, 0);
x_54 = lean_ctor_get(x_36, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_36);
x_55 = lean_ctor_get(x_37, 0);
lean_inc(x_55);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_56 = x_37;
} else {
 lean_dec_ref(x_37);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 1, 1);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_19);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_57);
x_59 = lean_st_ref_set(x_8, x_58, x_38);
lean_dec(x_8);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_31);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_63 = lean_ctor_get(x_30, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_30, 1);
lean_inc(x_64);
lean_dec(x_30);
x_65 = lean_st_ref_get(x_8, x_64);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_take(x_8, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_68, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_dec(x_67);
x_71 = !lean_is_exclusive(x_68);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_68, 2);
lean_dec(x_72);
x_73 = !lean_is_exclusive(x_69);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_19);
x_74 = lean_st_ref_set(x_8, x_68, x_70);
lean_dec(x_8);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_74, 0);
lean_dec(x_76);
lean_ctor_set_tag(x_74, 1);
lean_ctor_set(x_74, 0, x_63);
return x_74;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_63);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_69, 0);
lean_inc(x_79);
lean_dec(x_69);
x_80 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*1, x_19);
lean_ctor_set(x_68, 2, x_80);
x_81 = lean_st_ref_set(x_8, x_68, x_70);
lean_dec(x_8);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_83 = x_81;
} else {
 lean_dec_ref(x_81);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
 lean_ctor_set_tag(x_84, 1);
}
lean_ctor_set(x_84, 0, x_63);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_85 = lean_ctor_get(x_68, 0);
x_86 = lean_ctor_get(x_68, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_68);
x_87 = lean_ctor_get(x_69, 0);
lean_inc(x_87);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 x_88 = x_69;
} else {
 lean_dec_ref(x_69);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 1, 1);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set_uint8(x_89, sizeof(void*)*1, x_19);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_86);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_st_ref_set(x_8, x_90, x_70);
lean_dec(x_8);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
 lean_ctor_set_tag(x_94, 1);
}
lean_ctor_set(x_94, 0, x_63);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
else
{
lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_95 = lean_ctor_get(x_22, 0);
lean_inc(x_95);
lean_dec(x_22);
x_96 = 0;
x_97 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set_uint8(x_97, sizeof(void*)*1, x_96);
lean_ctor_set(x_21, 2, x_97);
x_98 = lean_st_ref_set(x_8, x_21, x_23);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
lean_inc(x_8);
x_100 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_st_ref_get(x_8, x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_st_ref_take(x_8, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 2);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
lean_dec(x_105);
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 x_111 = x_106;
} else {
 lean_dec_ref(x_106);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_107, 0);
lean_inc(x_112);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 x_113 = x_107;
} else {
 lean_dec_ref(x_107);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 1, 1);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set_uint8(x_114, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_111)) {
 x_115 = lean_alloc_ctor(0, 3, 0);
} else {
 x_115 = x_111;
}
lean_ctor_set(x_115, 0, x_109);
lean_ctor_set(x_115, 1, x_110);
lean_ctor_set(x_115, 2, x_114);
x_116 = lean_st_ref_set(x_8, x_115, x_108);
lean_dec(x_8);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_118 = x_116;
} else {
 lean_dec_ref(x_116);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_101);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_120 = lean_ctor_get(x_100, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_100, 1);
lean_inc(x_121);
lean_dec(x_100);
x_122 = lean_st_ref_get(x_8, x_121);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_st_ref_take(x_8, x_123);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_125, 2);
lean_inc(x_126);
x_127 = lean_ctor_get(x_124, 1);
lean_inc(x_127);
lean_dec(x_124);
x_128 = lean_ctor_get(x_125, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 lean_ctor_release(x_125, 2);
 x_130 = x_125;
} else {
 lean_dec_ref(x_125);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_126, 0);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(0, 1, 1);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set_uint8(x_133, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_130)) {
 x_134 = lean_alloc_ctor(0, 3, 0);
} else {
 x_134 = x_130;
}
lean_ctor_set(x_134, 0, x_128);
lean_ctor_set(x_134, 1, x_129);
lean_ctor_set(x_134, 2, x_133);
x_135 = lean_st_ref_set(x_8, x_134, x_127);
lean_dec(x_8);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_137 = x_135;
} else {
 lean_dec_ref(x_135);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
 lean_ctor_set_tag(x_138, 1);
}
lean_ctor_set(x_138, 0, x_120);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_139 = lean_ctor_get(x_21, 0);
x_140 = lean_ctor_get(x_21, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_21);
x_141 = lean_ctor_get(x_22, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 x_142 = x_22;
} else {
 lean_dec_ref(x_22);
 x_142 = lean_box(0);
}
x_143 = 0;
if (lean_is_scalar(x_142)) {
 x_144 = lean_alloc_ctor(0, 1, 1);
} else {
 x_144 = x_142;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set_uint8(x_144, sizeof(void*)*1, x_143);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_139);
lean_ctor_set(x_145, 1, x_140);
lean_ctor_set(x_145, 2, x_144);
x_146 = lean_st_ref_set(x_8, x_145, x_23);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
lean_dec(x_146);
lean_inc(x_8);
x_148 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = lean_st_ref_get(x_8, x_150);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_153 = lean_st_ref_take(x_8, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_154, 2);
lean_inc(x_155);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
lean_dec(x_153);
x_157 = lean_ctor_get(x_154, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 lean_ctor_release(x_154, 2);
 x_159 = x_154;
} else {
 lean_dec_ref(x_154);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_155, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 x_161 = x_155;
} else {
 lean_dec_ref(x_155);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(0, 1, 1);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set_uint8(x_162, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_159)) {
 x_163 = lean_alloc_ctor(0, 3, 0);
} else {
 x_163 = x_159;
}
lean_ctor_set(x_163, 0, x_157);
lean_ctor_set(x_163, 1, x_158);
lean_ctor_set(x_163, 2, x_162);
x_164 = lean_st_ref_set(x_8, x_163, x_156);
lean_dec(x_8);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_166 = x_164;
} else {
 lean_dec_ref(x_164);
 x_166 = lean_box(0);
}
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_149);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_168 = lean_ctor_get(x_148, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_148, 1);
lean_inc(x_169);
lean_dec(x_148);
x_170 = lean_st_ref_get(x_8, x_169);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
lean_dec(x_170);
x_172 = lean_st_ref_take(x_8, x_171);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_173, 2);
lean_inc(x_174);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
lean_dec(x_172);
x_176 = lean_ctor_get(x_173, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_173, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 lean_ctor_release(x_173, 2);
 x_178 = x_173;
} else {
 lean_dec_ref(x_173);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_174, 0);
lean_inc(x_179);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 x_180 = x_174;
} else {
 lean_dec_ref(x_174);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(0, 1, 1);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set_uint8(x_181, sizeof(void*)*1, x_19);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 3, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_176);
lean_ctor_set(x_182, 1, x_177);
lean_ctor_set(x_182, 2, x_181);
x_183 = lean_st_ref_set(x_8, x_182, x_175);
lean_dec(x_8);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_185 = x_183;
} else {
 lean_dec_ref(x_183);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
 lean_ctor_set_tag(x_186, 1);
}
lean_ctor_set(x_186, 0, x_168);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_187 = lean_ctor_get(x_7, 3);
lean_inc(x_187);
x_188 = l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(x_8, x_14);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_191 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_1__mkInstanceKey___spec__2___rarg(x_12, x_5, x_6, x_7, x_8, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_195 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_189, x_194, x_187, x_5, x_6, x_7, x_8, x_193);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_195, 0);
lean_dec(x_197);
lean_ctor_set(x_195, 0, x_192);
return x_195;
}
else
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_dec(x_195);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_192);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_200 = lean_ctor_get(x_191, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_191, 1);
lean_inc(x_201);
lean_dec(x_191);
x_202 = l_Lean_Meta_mkAppM___rarg___closed__2;
x_203 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_189, x_202, x_187, x_5, x_6, x_7, x_8, x_201);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_204 = !lean_is_exclusive(x_203);
if (x_204 == 0)
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_203, 0);
lean_dec(x_205);
lean_ctor_set_tag(x_203, 1);
lean_ctor_set(x_203, 0, x_200);
return x_203;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_203, 1);
lean_inc(x_206);
lean_dec(x_203);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_200);
lean_ctor_set(x_207, 1, x_206);
return x_207;
}
}
}
}
}
}
lean_object* l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_2);
x_13 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_14 = lean_array_push(x_13, x_10);
x_15 = lean_array_push(x_14, x_11);
x_16 = lean_array_push(x_15, x_11);
x_17 = lean_array_push(x_16, x_12);
x_18 = l_Lean_Meta_mkPure___rarg___closed__4;
x_19 = l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(x_18, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Term_5__tryPureCoe_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Expr_getAppFn___main(x_2);
x_13 = l_Lean_Expr_isMVar(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Expr_getAppFn___main(x_3);
x_15 = l_Lean_Expr_isMVar(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_17 = l_Lean_Elab_Term_tryCoe(x_2, x_3, x_4, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1(x_1, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_5);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_20, 0);
lean_dec(x_29);
lean_ctor_set_tag(x_20, 0);
lean_ctor_set(x_20, 0, x_16);
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_16);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_17);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_17, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_17, 1);
lean_inc(x_34);
lean_dec(x_17);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_16);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_11);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_11);
return x_39;
}
}
}
lean_object* l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkPure___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Term_5__tryPureCoe_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Term_5__tryPureCoe_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l___private_Lean_Meta_InferType_4__getLevelImp(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_decLevel___at_Lean_Meta_getDecLevel___spec__1(x_10, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 3);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_10, x_11);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_6, 3);
lean_dec(x_15);
x_16 = lean_ctor_get(x_6, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_6, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_6, 0);
lean_dec(x_18);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_10, x_19);
lean_dec(x_10);
lean_ctor_set(x_6, 1, x_20);
x_21 = l_Lean_Meta_inferTypeRef;
x_22 = lean_st_ref_get(x_21, x_8);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_apply_6(x_23, x_1, x_4, x_5, x_6, x_7, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_6);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_10, x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_11);
lean_ctor_set(x_28, 3, x_12);
x_29 = l_Lean_Meta_inferTypeRef;
x_30 = lean_st_ref_get(x_29, x_8);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_apply_6(x_31, x_1, x_4, x_5, x_28, x_7, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_34 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_35 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_34, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("MonadLiftT");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("liftM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("liftCoeM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coeM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_tryLiftAndCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_Term_4__isMonad_x3f(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
lean_dec(x_20);
x_25 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_26);
lean_inc(x_22);
x_28 = l___private_Lean_Elab_Term_5__tryPureCoe_x3f(x_22, x_26, x_13, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_31 = l___private_Lean_Elab_Term_3__isTypeApp_x3f(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_16);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_33);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_22);
lean_inc(x_38);
x_40 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_38, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_32);
lean_free_object(x_16);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = l_Lean_mkAppStx___closed__9;
lean_inc(x_38);
x_45 = lean_array_push(x_44, x_38);
lean_inc(x_22);
x_46 = lean_array_push(x_45, x_22);
x_47 = l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_48 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_47, x_46, x_5, x_6, x_7, x_8, x_9, x_10, x_43);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_51 = l_Lean_Elab_Term_synthesizeInst(x_49, x_5, x_6, x_7, x_8, x_9, x_10, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_39);
x_54 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_57 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_60 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_58);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_inc(x_66);
x_68 = l_Lean_mkConst(x_67, x_66);
x_69 = l_Lean_Elab_Term_mkExplicitBinder___closed__7;
lean_inc(x_38);
x_70 = lean_array_push(x_69, x_38);
lean_inc(x_22);
x_71 = lean_array_push(x_70, x_22);
lean_inc(x_52);
x_72 = lean_array_push(x_71, x_52);
lean_inc(x_39);
x_73 = lean_array_push(x_72, x_39);
lean_inc(x_3);
x_74 = lean_array_push(x_73, x_3);
x_75 = lean_unsigned_to_nat(0u);
x_76 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_74, x_74, x_75, x_68);
lean_dec(x_74);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_76);
x_77 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_76, x_5, x_6, x_7, x_8, x_9, x_10, x_62);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_80 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_78, x_5, x_6, x_7, x_8, x_9, x_10, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_76);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_dec(x_80);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_39);
x_84 = l___private_Lean_Meta_InferType_4__getLevelImp(x_39, x_7, x_8, x_9, x_10, x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_26);
x_87 = l___private_Lean_Meta_InferType_4__getLevelImp(x_26, x_7, x_8, x_9, x_10, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; lean_object* x_103; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_63);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_85);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_Elab_Term_tryCoe___closed__2;
x_93 = l_Lean_mkConst(x_92, x_91);
x_94 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_39);
x_95 = lean_array_push(x_94, x_39);
x_96 = l_Lean_Meta_commitWhen___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__4___closed__1;
x_97 = lean_array_push(x_95, x_96);
lean_inc(x_26);
x_98 = lean_array_push(x_97, x_26);
x_99 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_98, x_98, x_75, x_93);
lean_dec(x_98);
x_100 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
x_101 = 0;
lean_inc(x_39);
x_102 = l_Lean_mkForall(x_100, x_101, x_39, x_99);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_103 = l_Lean_Elab_Term_synthesizeInst(x_102, x_5, x_6, x_7, x_8, x_9, x_10, x_89);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
x_107 = l_Lean_mkConst(x_106, x_66);
x_108 = l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
x_109 = lean_array_push(x_108, x_38);
x_110 = lean_array_push(x_109, x_22);
x_111 = lean_array_push(x_110, x_39);
x_112 = lean_array_push(x_111, x_26);
x_113 = lean_array_push(x_112, x_52);
x_114 = lean_array_push(x_113, x_104);
x_115 = lean_array_push(x_114, x_24);
lean_inc(x_3);
x_116 = lean_array_push(x_115, x_3);
x_117 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_116, x_116, x_75, x_107);
lean_dec(x_116);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_117);
x_118 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_117, x_5, x_6, x_7, x_8, x_9, x_10, x_105);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_121 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_119, x_5, x_6, x_7, x_8, x_9, x_10, x_120);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; uint8_t x_123; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_unbox(x_122);
lean_dec(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_117);
x_124 = lean_ctor_get(x_121, 1);
lean_inc(x_124);
lean_dec(x_121);
x_125 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_1);
x_126 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_125, x_5, x_6, x_7, x_8, x_9, x_10, x_124);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_125, x_5, x_6, x_7, x_8, x_9, x_10, x_127);
return x_128;
}
else
{
uint8_t x_129; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_129 = !lean_is_exclusive(x_121);
if (x_129 == 0)
{
lean_object* x_130; 
x_130 = lean_ctor_get(x_121, 0);
lean_dec(x_130);
lean_ctor_set(x_121, 0, x_117);
return x_121;
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_ctor_get(x_121, 1);
lean_inc(x_131);
lean_dec(x_121);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_117);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_117);
x_133 = lean_ctor_get(x_121, 1);
lean_inc(x_133);
lean_dec(x_121);
x_134 = lean_box(0);
x_135 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_134, x_5, x_6, x_7, x_8, x_9, x_10, x_133);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_117);
x_136 = lean_ctor_get(x_118, 1);
lean_inc(x_136);
lean_dec(x_118);
x_137 = lean_box(0);
x_138 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_137, x_5, x_6, x_7, x_8, x_9, x_10, x_136);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_139 = lean_ctor_get(x_103, 1);
lean_inc(x_139);
lean_dec(x_103);
x_140 = lean_box(0);
x_141 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_140, x_5, x_6, x_7, x_8, x_9, x_10, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_85);
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_142 = lean_ctor_get(x_87, 1);
lean_inc(x_142);
lean_dec(x_87);
x_143 = lean_box(0);
x_144 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_143, x_5, x_6, x_7, x_8, x_9, x_10, x_142);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_145 = lean_ctor_get(x_84, 1);
lean_inc(x_145);
lean_dec(x_84);
x_146 = lean_box(0);
x_147 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_146, x_5, x_6, x_7, x_8, x_9, x_10, x_145);
return x_147;
}
}
else
{
uint8_t x_148; 
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_148 = !lean_is_exclusive(x_80);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_80, 0);
lean_dec(x_149);
lean_ctor_set(x_80, 0, x_76);
return x_80;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_80, 1);
lean_inc(x_150);
lean_dec(x_80);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_76);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_76);
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_152 = lean_ctor_get(x_80, 1);
lean_inc(x_152);
lean_dec(x_80);
x_153 = lean_box(0);
x_154 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_153, x_5, x_6, x_7, x_8, x_9, x_10, x_152);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_76);
lean_dec(x_66);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_155 = lean_ctor_get(x_77, 1);
lean_inc(x_155);
lean_dec(x_77);
x_156 = lean_box(0);
x_157 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_156, x_5, x_6, x_7, x_8, x_9, x_10, x_155);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_58);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_158 = lean_ctor_get(x_60, 1);
lean_inc(x_158);
lean_dec(x_60);
x_159 = lean_box(0);
x_160 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_159, x_5, x_6, x_7, x_8, x_9, x_10, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_161 = lean_ctor_get(x_57, 1);
lean_inc(x_161);
lean_dec(x_57);
x_162 = lean_box(0);
x_163 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_162, x_5, x_6, x_7, x_8, x_9, x_10, x_161);
return x_163;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_52);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_164 = lean_ctor_get(x_54, 1);
lean_inc(x_164);
lean_dec(x_54);
x_165 = lean_box(0);
x_166 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_165, x_5, x_6, x_7, x_8, x_9, x_10, x_164);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_167 = lean_ctor_get(x_51, 1);
lean_inc(x_167);
lean_dec(x_51);
x_168 = lean_box(0);
x_169 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_168, x_5, x_6, x_7, x_8, x_9, x_10, x_167);
return x_169;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_170 = lean_ctor_get(x_48, 1);
lean_inc(x_170);
lean_dec(x_48);
x_171 = lean_box(0);
x_172 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_171, x_5, x_6, x_7, x_8, x_9, x_10, x_170);
return x_172;
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_173 = lean_ctor_get(x_40, 1);
lean_inc(x_173);
lean_dec(x_40);
lean_ctor_set(x_32, 0, x_38);
lean_ctor_set(x_16, 0, x_39);
x_174 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_174, 0, x_26);
x_175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_175, 0, x_24);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_3);
x_177 = l___private_Lean_Meta_AppBuilder_22__mkEqNDRecImp___closed__6;
x_178 = lean_array_push(x_177, x_32);
x_179 = lean_array_push(x_178, x_16);
x_180 = lean_array_push(x_179, x_174);
x_181 = lean_array_push(x_180, x_29);
x_182 = lean_array_push(x_181, x_175);
x_183 = lean_array_push(x_182, x_176);
x_184 = l_Lean_Elab_Term_tryLiftAndCoe___closed__9;
x_185 = l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(x_184, x_183, x_5, x_6, x_7, x_8, x_9, x_10, x_173);
lean_dec(x_5);
return x_185;
}
}
else
{
uint8_t x_186; 
lean_dec(x_39);
lean_dec(x_38);
lean_free_object(x_32);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_186 = !lean_is_exclusive(x_40);
if (x_186 == 0)
{
return x_40;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_40, 0);
x_188 = lean_ctor_get(x_40, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_40);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
return x_189;
}
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_190 = lean_ctor_get(x_32, 0);
lean_inc(x_190);
lean_dec(x_32);
x_191 = lean_ctor_get(x_31, 1);
lean_inc(x_191);
lean_dec(x_31);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
lean_dec(x_190);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_22);
lean_inc(x_192);
x_194 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_192, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_191);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_unbox(x_195);
lean_dec(x_195);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_free_object(x_16);
x_197 = lean_ctor_get(x_194, 1);
lean_inc(x_197);
lean_dec(x_194);
x_198 = l_Lean_mkAppStx___closed__9;
lean_inc(x_192);
x_199 = lean_array_push(x_198, x_192);
lean_inc(x_22);
x_200 = lean_array_push(x_199, x_22);
x_201 = l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_202 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_201, x_200, x_5, x_6, x_7, x_8, x_9, x_10, x_197);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
lean_dec(x_202);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_205 = l_Lean_Elab_Term_synthesizeInst(x_203, x_5, x_6, x_7, x_8, x_9, x_10, x_204);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_193);
x_208 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_193, x_5, x_6, x_7, x_8, x_9, x_10, x_207);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_211 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_210);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_214 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_213);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_box(0);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_215);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_212);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_209);
lean_ctor_set(x_220, 1, x_219);
x_221 = l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_inc(x_220);
x_222 = l_Lean_mkConst(x_221, x_220);
x_223 = l_Lean_Elab_Term_mkExplicitBinder___closed__7;
lean_inc(x_192);
x_224 = lean_array_push(x_223, x_192);
lean_inc(x_22);
x_225 = lean_array_push(x_224, x_22);
lean_inc(x_206);
x_226 = lean_array_push(x_225, x_206);
lean_inc(x_193);
x_227 = lean_array_push(x_226, x_193);
lean_inc(x_3);
x_228 = lean_array_push(x_227, x_3);
x_229 = lean_unsigned_to_nat(0u);
x_230 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_228, x_228, x_229, x_222);
lean_dec(x_228);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_230);
x_231 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_230, x_5, x_6, x_7, x_8, x_9, x_10, x_216);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_234 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_232, x_5, x_6, x_7, x_8, x_9, x_10, x_233);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_unbox(x_235);
lean_dec(x_235);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_230);
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_dec(x_234);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_193);
x_238 = l___private_Lean_Meta_InferType_4__getLevelImp(x_193, x_7, x_8, x_9, x_10, x_237);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_26);
x_241 = l___private_Lean_Meta_InferType_4__getLevelImp(x_26, x_7, x_8, x_9, x_10, x_240);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; lean_object* x_256; lean_object* x_257; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_217);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_239);
lean_ctor_set(x_245, 1, x_244);
x_246 = l_Lean_Elab_Term_tryCoe___closed__2;
x_247 = l_Lean_mkConst(x_246, x_245);
x_248 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_193);
x_249 = lean_array_push(x_248, x_193);
x_250 = l_Lean_Meta_commitWhen___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__4___closed__1;
x_251 = lean_array_push(x_249, x_250);
lean_inc(x_26);
x_252 = lean_array_push(x_251, x_26);
x_253 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_252, x_252, x_229, x_247);
lean_dec(x_252);
x_254 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
x_255 = 0;
lean_inc(x_193);
x_256 = l_Lean_mkForall(x_254, x_255, x_193, x_253);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_257 = l_Lean_Elab_Term_synthesizeInst(x_256, x_5, x_6, x_7, x_8, x_9, x_10, x_243);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
x_261 = l_Lean_mkConst(x_260, x_220);
x_262 = l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
x_263 = lean_array_push(x_262, x_192);
x_264 = lean_array_push(x_263, x_22);
x_265 = lean_array_push(x_264, x_193);
x_266 = lean_array_push(x_265, x_26);
x_267 = lean_array_push(x_266, x_206);
x_268 = lean_array_push(x_267, x_258);
x_269 = lean_array_push(x_268, x_24);
lean_inc(x_3);
x_270 = lean_array_push(x_269, x_3);
x_271 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_270, x_270, x_229, x_261);
lean_dec(x_270);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_271);
x_272 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_271, x_5, x_6, x_7, x_8, x_9, x_10, x_259);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_275 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_273, x_5, x_6, x_7, x_8, x_9, x_10, x_274);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; uint8_t x_277; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_unbox(x_276);
lean_dec(x_276);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_271);
x_278 = lean_ctor_get(x_275, 1);
lean_inc(x_278);
lean_dec(x_275);
x_279 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_1);
x_280 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_279, x_5, x_6, x_7, x_8, x_9, x_10, x_278);
x_281 = lean_ctor_get(x_280, 1);
lean_inc(x_281);
lean_dec(x_280);
x_282 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_279, x_5, x_6, x_7, x_8, x_9, x_10, x_281);
return x_282;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_283 = lean_ctor_get(x_275, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_284 = x_275;
} else {
 lean_dec_ref(x_275);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(0, 2, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_271);
lean_ctor_set(x_285, 1, x_283);
return x_285;
}
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_271);
x_286 = lean_ctor_get(x_275, 1);
lean_inc(x_286);
lean_dec(x_275);
x_287 = lean_box(0);
x_288 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_287, x_5, x_6, x_7, x_8, x_9, x_10, x_286);
return x_288;
}
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; 
lean_dec(x_271);
x_289 = lean_ctor_get(x_272, 1);
lean_inc(x_289);
lean_dec(x_272);
x_290 = lean_box(0);
x_291 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_290, x_5, x_6, x_7, x_8, x_9, x_10, x_289);
return x_291;
}
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_292 = lean_ctor_get(x_257, 1);
lean_inc(x_292);
lean_dec(x_257);
x_293 = lean_box(0);
x_294 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_293, x_5, x_6, x_7, x_8, x_9, x_10, x_292);
return x_294;
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_239);
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_295 = lean_ctor_get(x_241, 1);
lean_inc(x_295);
lean_dec(x_241);
x_296 = lean_box(0);
x_297 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_296, x_5, x_6, x_7, x_8, x_9, x_10, x_295);
return x_297;
}
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_298 = lean_ctor_get(x_238, 1);
lean_inc(x_298);
lean_dec(x_238);
x_299 = lean_box(0);
x_300 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_299, x_5, x_6, x_7, x_8, x_9, x_10, x_298);
return x_300;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_301 = lean_ctor_get(x_234, 1);
lean_inc(x_301);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 x_302 = x_234;
} else {
 lean_dec_ref(x_234);
 x_302 = lean_box(0);
}
if (lean_is_scalar(x_302)) {
 x_303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_303 = x_302;
}
lean_ctor_set(x_303, 0, x_230);
lean_ctor_set(x_303, 1, x_301);
return x_303;
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_230);
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_304 = lean_ctor_get(x_234, 1);
lean_inc(x_304);
lean_dec(x_234);
x_305 = lean_box(0);
x_306 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_305, x_5, x_6, x_7, x_8, x_9, x_10, x_304);
return x_306;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_230);
lean_dec(x_220);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_307 = lean_ctor_get(x_231, 1);
lean_inc(x_307);
lean_dec(x_231);
x_308 = lean_box(0);
x_309 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_308, x_5, x_6, x_7, x_8, x_9, x_10, x_307);
return x_309;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_212);
lean_dec(x_209);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_310 = lean_ctor_get(x_214, 1);
lean_inc(x_310);
lean_dec(x_214);
x_311 = lean_box(0);
x_312 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_311, x_5, x_6, x_7, x_8, x_9, x_10, x_310);
return x_312;
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
lean_dec(x_209);
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_313 = lean_ctor_get(x_211, 1);
lean_inc(x_313);
lean_dec(x_211);
x_314 = lean_box(0);
x_315 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_314, x_5, x_6, x_7, x_8, x_9, x_10, x_313);
return x_315;
}
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_206);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_316 = lean_ctor_get(x_208, 1);
lean_inc(x_316);
lean_dec(x_208);
x_317 = lean_box(0);
x_318 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_317, x_5, x_6, x_7, x_8, x_9, x_10, x_316);
return x_318;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_319 = lean_ctor_get(x_205, 1);
lean_inc(x_319);
lean_dec(x_205);
x_320 = lean_box(0);
x_321 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_320, x_5, x_6, x_7, x_8, x_9, x_10, x_319);
return x_321;
}
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
x_322 = lean_ctor_get(x_202, 1);
lean_inc(x_322);
lean_dec(x_202);
x_323 = lean_box(0);
x_324 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_323, x_5, x_6, x_7, x_8, x_9, x_10, x_322);
return x_324;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_325 = lean_ctor_get(x_194, 1);
lean_inc(x_325);
lean_dec(x_194);
x_326 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_326, 0, x_192);
lean_ctor_set(x_16, 0, x_193);
x_327 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_327, 0, x_26);
x_328 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_328, 0, x_24);
x_329 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_329, 0, x_3);
x_330 = l___private_Lean_Meta_AppBuilder_22__mkEqNDRecImp___closed__6;
x_331 = lean_array_push(x_330, x_326);
x_332 = lean_array_push(x_331, x_16);
x_333 = lean_array_push(x_332, x_327);
x_334 = lean_array_push(x_333, x_29);
x_335 = lean_array_push(x_334, x_328);
x_336 = lean_array_push(x_335, x_329);
x_337 = l_Lean_Elab_Term_tryLiftAndCoe___closed__9;
x_338 = l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(x_337, x_336, x_5, x_6, x_7, x_8, x_9, x_10, x_325);
lean_dec(x_5);
return x_338;
}
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_339 = lean_ctor_get(x_194, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_194, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_194)) {
 lean_ctor_release(x_194, 0);
 lean_ctor_release(x_194, 1);
 x_341 = x_194;
} else {
 lean_dec_ref(x_194);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
return x_342;
}
}
}
}
else
{
uint8_t x_343; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_343 = !lean_is_exclusive(x_31);
if (x_343 == 0)
{
return x_31;
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_344 = lean_ctor_get(x_31, 0);
x_345 = lean_ctor_get(x_31, 1);
lean_inc(x_345);
lean_inc(x_344);
lean_dec(x_31);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
return x_346;
}
}
}
else
{
uint8_t x_347; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_347 = !lean_is_exclusive(x_28);
if (x_347 == 0)
{
lean_object* x_348; lean_object* x_349; 
x_348 = lean_ctor_get(x_28, 0);
lean_dec(x_348);
x_349 = lean_ctor_get(x_29, 0);
lean_inc(x_349);
lean_dec(x_29);
lean_ctor_set(x_28, 0, x_349);
return x_28;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_28, 1);
lean_inc(x_350);
lean_dec(x_28);
x_351 = lean_ctor_get(x_29, 0);
lean_inc(x_351);
lean_dec(x_29);
x_352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_350);
return x_352;
}
}
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_353 = lean_ctor_get(x_16, 0);
lean_inc(x_353);
lean_dec(x_16);
x_354 = lean_ctor_get(x_15, 1);
lean_inc(x_354);
lean_dec(x_15);
x_355 = lean_ctor_get(x_353, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_353, 1);
lean_inc(x_356);
x_357 = lean_ctor_get(x_353, 2);
lean_inc(x_357);
lean_dec(x_353);
x_358 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_356, x_5, x_6, x_7, x_8, x_9, x_10, x_354);
x_359 = lean_ctor_get(x_358, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_358, 1);
lean_inc(x_360);
lean_dec(x_358);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_359);
lean_inc(x_355);
x_361 = l___private_Lean_Elab_Term_5__tryPureCoe_x3f(x_355, x_359, x_13, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_360);
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_ctor_get(x_361, 1);
lean_inc(x_363);
lean_dec(x_361);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_364 = l___private_Lean_Elab_Term_3__isTypeApp_x3f(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_363);
if (lean_obj_tag(x_364) == 0)
{
lean_object* x_365; 
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
if (lean_obj_tag(x_365) == 0)
{
lean_object* x_366; lean_object* x_367; 
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_366);
return x_367;
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_368 = lean_ctor_get(x_365, 0);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
x_370 = lean_ctor_get(x_364, 1);
lean_inc(x_370);
lean_dec(x_364);
x_371 = lean_ctor_get(x_368, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_368, 1);
lean_inc(x_372);
lean_dec(x_368);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_355);
lean_inc(x_371);
x_373 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_371, x_355, x_5, x_6, x_7, x_8, x_9, x_10, x_370);
if (lean_obj_tag(x_373) == 0)
{
lean_object* x_374; uint8_t x_375; 
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_unbox(x_374);
lean_dec(x_374);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
lean_dec(x_369);
x_376 = lean_ctor_get(x_373, 1);
lean_inc(x_376);
lean_dec(x_373);
x_377 = l_Lean_mkAppStx___closed__9;
lean_inc(x_371);
x_378 = lean_array_push(x_377, x_371);
lean_inc(x_355);
x_379 = lean_array_push(x_378, x_355);
x_380 = l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_381 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_4__isMonad_x3f___spec__1(x_380, x_379, x_5, x_6, x_7, x_8, x_9, x_10, x_376);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_384 = l_Lean_Elab_Term_synthesizeInst(x_382, x_5, x_6, x_7, x_8, x_9, x_10, x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
lean_dec(x_384);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_372);
x_387 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_372, x_5, x_6, x_7, x_8, x_9, x_10, x_386);
if (lean_obj_tag(x_387) == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_388 = lean_ctor_get(x_387, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_387, 1);
lean_inc(x_389);
lean_dec(x_387);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_390 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_389);
if (lean_obj_tag(x_390) == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_390, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_390, 1);
lean_inc(x_392);
lean_dec(x_390);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_393 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_392);
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
lean_dec(x_393);
x_396 = lean_box(0);
x_397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_397, 0, x_394);
lean_ctor_set(x_397, 1, x_396);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_397);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_388);
lean_ctor_set(x_399, 1, x_398);
x_400 = l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_inc(x_399);
x_401 = l_Lean_mkConst(x_400, x_399);
x_402 = l_Lean_Elab_Term_mkExplicitBinder___closed__7;
lean_inc(x_371);
x_403 = lean_array_push(x_402, x_371);
lean_inc(x_355);
x_404 = lean_array_push(x_403, x_355);
lean_inc(x_385);
x_405 = lean_array_push(x_404, x_385);
lean_inc(x_372);
x_406 = lean_array_push(x_405, x_372);
lean_inc(x_3);
x_407 = lean_array_push(x_406, x_3);
x_408 = lean_unsigned_to_nat(0u);
x_409 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_407, x_407, x_408, x_401);
lean_dec(x_407);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_409);
x_410 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_409, x_5, x_6, x_7, x_8, x_9, x_10, x_395);
if (lean_obj_tag(x_410) == 0)
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_411 = lean_ctor_get(x_410, 0);
lean_inc(x_411);
x_412 = lean_ctor_get(x_410, 1);
lean_inc(x_412);
lean_dec(x_410);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_413 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_411, x_5, x_6, x_7, x_8, x_9, x_10, x_412);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; uint8_t x_415; 
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_unbox(x_414);
lean_dec(x_414);
if (x_415 == 0)
{
lean_object* x_416; lean_object* x_417; 
lean_dec(x_409);
x_416 = lean_ctor_get(x_413, 1);
lean_inc(x_416);
lean_dec(x_413);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_372);
x_417 = l___private_Lean_Meta_InferType_4__getLevelImp(x_372, x_7, x_8, x_9, x_10, x_416);
if (lean_obj_tag(x_417) == 0)
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_418 = lean_ctor_get(x_417, 0);
lean_inc(x_418);
x_419 = lean_ctor_get(x_417, 1);
lean_inc(x_419);
lean_dec(x_417);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_359);
x_420 = l___private_Lean_Meta_InferType_4__getLevelImp(x_359, x_7, x_8, x_9, x_10, x_419);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; uint8_t x_434; lean_object* x_435; lean_object* x_436; 
x_421 = lean_ctor_get(x_420, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_420, 1);
lean_inc(x_422);
lean_dec(x_420);
x_423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_423, 0, x_421);
lean_ctor_set(x_423, 1, x_396);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_418);
lean_ctor_set(x_424, 1, x_423);
x_425 = l_Lean_Elab_Term_tryCoe___closed__2;
x_426 = l_Lean_mkConst(x_425, x_424);
x_427 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_372);
x_428 = lean_array_push(x_427, x_372);
x_429 = l_Lean_Meta_commitWhen___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__4___closed__1;
x_430 = lean_array_push(x_428, x_429);
lean_inc(x_359);
x_431 = lean_array_push(x_430, x_359);
x_432 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_431, x_431, x_408, x_426);
lean_dec(x_431);
x_433 = l___private_Lean_Elab_Term_2__expandCDot___main___closed__3;
x_434 = 0;
lean_inc(x_372);
x_435 = l_Lean_mkForall(x_433, x_434, x_372, x_432);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_436 = l_Lean_Elab_Term_synthesizeInst(x_435, x_5, x_6, x_7, x_8, x_9, x_10, x_422);
if (lean_obj_tag(x_436) == 0)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_437 = lean_ctor_get(x_436, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_436, 1);
lean_inc(x_438);
lean_dec(x_436);
x_439 = l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
x_440 = l_Lean_mkConst(x_439, x_399);
x_441 = l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
x_442 = lean_array_push(x_441, x_371);
x_443 = lean_array_push(x_442, x_355);
x_444 = lean_array_push(x_443, x_372);
x_445 = lean_array_push(x_444, x_359);
x_446 = lean_array_push(x_445, x_385);
x_447 = lean_array_push(x_446, x_437);
x_448 = lean_array_push(x_447, x_357);
lean_inc(x_3);
x_449 = lean_array_push(x_448, x_3);
x_450 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_449, x_449, x_408, x_440);
lean_dec(x_449);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_450);
x_451 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_450, x_5, x_6, x_7, x_8, x_9, x_10, x_438);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_454 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_1, x_452, x_5, x_6, x_7, x_8, x_9, x_10, x_453);
if (lean_obj_tag(x_454) == 0)
{
lean_object* x_455; uint8_t x_456; 
x_455 = lean_ctor_get(x_454, 0);
lean_inc(x_455);
x_456 = lean_unbox(x_455);
lean_dec(x_455);
if (x_456 == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; 
lean_dec(x_450);
x_457 = lean_ctor_get(x_454, 1);
lean_inc(x_457);
lean_dec(x_454);
x_458 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_1);
x_459 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_458, x_5, x_6, x_7, x_8, x_9, x_10, x_457);
x_460 = lean_ctor_get(x_459, 1);
lean_inc(x_460);
lean_dec(x_459);
x_461 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_458, x_5, x_6, x_7, x_8, x_9, x_10, x_460);
return x_461;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_462 = lean_ctor_get(x_454, 1);
lean_inc(x_462);
if (lean_is_exclusive(x_454)) {
 lean_ctor_release(x_454, 0);
 lean_ctor_release(x_454, 1);
 x_463 = x_454;
} else {
 lean_dec_ref(x_454);
 x_463 = lean_box(0);
}
if (lean_is_scalar(x_463)) {
 x_464 = lean_alloc_ctor(0, 2, 0);
} else {
 x_464 = x_463;
}
lean_ctor_set(x_464, 0, x_450);
lean_ctor_set(x_464, 1, x_462);
return x_464;
}
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; 
lean_dec(x_450);
x_465 = lean_ctor_get(x_454, 1);
lean_inc(x_465);
lean_dec(x_454);
x_466 = lean_box(0);
x_467 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_466, x_5, x_6, x_7, x_8, x_9, x_10, x_465);
return x_467;
}
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; 
lean_dec(x_450);
x_468 = lean_ctor_get(x_451, 1);
lean_inc(x_468);
lean_dec(x_451);
x_469 = lean_box(0);
x_470 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_469, x_5, x_6, x_7, x_8, x_9, x_10, x_468);
return x_470;
}
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; 
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_471 = lean_ctor_get(x_436, 1);
lean_inc(x_471);
lean_dec(x_436);
x_472 = lean_box(0);
x_473 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_472, x_5, x_6, x_7, x_8, x_9, x_10, x_471);
return x_473;
}
}
else
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
lean_dec(x_418);
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_474 = lean_ctor_get(x_420, 1);
lean_inc(x_474);
lean_dec(x_420);
x_475 = lean_box(0);
x_476 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_475, x_5, x_6, x_7, x_8, x_9, x_10, x_474);
return x_476;
}
}
else
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; 
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_477 = lean_ctor_get(x_417, 1);
lean_inc(x_477);
lean_dec(x_417);
x_478 = lean_box(0);
x_479 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_478, x_5, x_6, x_7, x_8, x_9, x_10, x_477);
return x_479;
}
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_480 = lean_ctor_get(x_413, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_413)) {
 lean_ctor_release(x_413, 0);
 lean_ctor_release(x_413, 1);
 x_481 = x_413;
} else {
 lean_dec_ref(x_413);
 x_481 = lean_box(0);
}
if (lean_is_scalar(x_481)) {
 x_482 = lean_alloc_ctor(0, 2, 0);
} else {
 x_482 = x_481;
}
lean_ctor_set(x_482, 0, x_409);
lean_ctor_set(x_482, 1, x_480);
return x_482;
}
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; 
lean_dec(x_409);
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_483 = lean_ctor_get(x_413, 1);
lean_inc(x_483);
lean_dec(x_413);
x_484 = lean_box(0);
x_485 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_484, x_5, x_6, x_7, x_8, x_9, x_10, x_483);
return x_485;
}
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; 
lean_dec(x_409);
lean_dec(x_399);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_486 = lean_ctor_get(x_410, 1);
lean_inc(x_486);
lean_dec(x_410);
x_487 = lean_box(0);
x_488 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_487, x_5, x_6, x_7, x_8, x_9, x_10, x_486);
return x_488;
}
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; 
lean_dec(x_391);
lean_dec(x_388);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_489 = lean_ctor_get(x_393, 1);
lean_inc(x_489);
lean_dec(x_393);
x_490 = lean_box(0);
x_491 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_490, x_5, x_6, x_7, x_8, x_9, x_10, x_489);
return x_491;
}
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; 
lean_dec(x_388);
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_492 = lean_ctor_get(x_390, 1);
lean_inc(x_492);
lean_dec(x_390);
x_493 = lean_box(0);
x_494 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_493, x_5, x_6, x_7, x_8, x_9, x_10, x_492);
return x_494;
}
}
else
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; 
lean_dec(x_385);
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_495 = lean_ctor_get(x_387, 1);
lean_inc(x_495);
lean_dec(x_387);
x_496 = lean_box(0);
x_497 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_496, x_5, x_6, x_7, x_8, x_9, x_10, x_495);
return x_497;
}
}
else
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; 
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_498 = lean_ctor_get(x_384, 1);
lean_inc(x_498);
lean_dec(x_384);
x_499 = lean_box(0);
x_500 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_499, x_5, x_6, x_7, x_8, x_9, x_10, x_498);
return x_500;
}
}
else
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; 
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
x_501 = lean_ctor_get(x_381, 1);
lean_inc(x_501);
lean_dec(x_381);
x_502 = lean_box(0);
x_503 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_502, x_5, x_6, x_7, x_8, x_9, x_10, x_501);
return x_503;
}
}
else
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
lean_dec(x_355);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_504 = lean_ctor_get(x_373, 1);
lean_inc(x_504);
lean_dec(x_373);
if (lean_is_scalar(x_369)) {
 x_505 = lean_alloc_ctor(1, 1, 0);
} else {
 x_505 = x_369;
}
lean_ctor_set(x_505, 0, x_371);
x_506 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_506, 0, x_372);
x_507 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_507, 0, x_359);
x_508 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_508, 0, x_357);
x_509 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_509, 0, x_3);
x_510 = l___private_Lean_Meta_AppBuilder_22__mkEqNDRecImp___closed__6;
x_511 = lean_array_push(x_510, x_505);
x_512 = lean_array_push(x_511, x_506);
x_513 = lean_array_push(x_512, x_507);
x_514 = lean_array_push(x_513, x_362);
x_515 = lean_array_push(x_514, x_508);
x_516 = lean_array_push(x_515, x_509);
x_517 = l_Lean_Elab_Term_tryLiftAndCoe___closed__9;
x_518 = l_Lean_Meta_mkAppOptM___at___private_Lean_Elab_Term_5__tryPureCoe_x3f___spec__2(x_517, x_516, x_5, x_6, x_7, x_8, x_9, x_10, x_504);
lean_dec(x_5);
return x_518;
}
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_369);
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_519 = lean_ctor_get(x_373, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_373, 1);
lean_inc(x_520);
if (lean_is_exclusive(x_373)) {
 lean_ctor_release(x_373, 0);
 lean_ctor_release(x_373, 1);
 x_521 = x_373;
} else {
 lean_dec_ref(x_373);
 x_521 = lean_box(0);
}
if (lean_is_scalar(x_521)) {
 x_522 = lean_alloc_ctor(1, 2, 0);
} else {
 x_522 = x_521;
}
lean_ctor_set(x_522, 0, x_519);
lean_ctor_set(x_522, 1, x_520);
return x_522;
}
}
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_523 = lean_ctor_get(x_364, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_364, 1);
lean_inc(x_524);
if (lean_is_exclusive(x_364)) {
 lean_ctor_release(x_364, 0);
 lean_ctor_release(x_364, 1);
 x_525 = x_364;
} else {
 lean_dec_ref(x_364);
 x_525 = lean_box(0);
}
if (lean_is_scalar(x_525)) {
 x_526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_526 = x_525;
}
lean_ctor_set(x_526, 0, x_523);
lean_ctor_set(x_526, 1, x_524);
return x_526;
}
}
else
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; 
lean_dec(x_359);
lean_dec(x_357);
lean_dec(x_355);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_527 = lean_ctor_get(x_361, 1);
lean_inc(x_527);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 x_528 = x_361;
} else {
 lean_dec_ref(x_361);
 x_528 = lean_box(0);
}
x_529 = lean_ctor_get(x_362, 0);
lean_inc(x_529);
lean_dec(x_362);
if (lean_is_scalar(x_528)) {
 x_530 = lean_alloc_ctor(0, 2, 0);
} else {
 x_530 = x_528;
}
lean_ctor_set(x_530, 0, x_529);
lean_ctor_set(x_530, 1, x_527);
return x_530;
}
}
}
}
else
{
uint8_t x_531; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_531 = !lean_is_exclusive(x_15);
if (x_531 == 0)
{
return x_15;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; 
x_532 = lean_ctor_get(x_15, 0);
x_533 = lean_ctor_get(x_15, 1);
lean_inc(x_533);
lean_inc(x_532);
lean_dec(x_15);
x_534 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_534, 0, x_532);
lean_ctor_set(x_534, 1, x_533);
return x_534;
}
}
}
}
lean_object* l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getDecLevel___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_tryLiftAndCoe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_isDefEqNoConstantApprox(x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Elab_Term_tryLiftAndCoe(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_14, 0);
lean_dec(x_20);
lean_ctor_set(x_14, 0, x_3);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_ensureHasTypeAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_ensureHasTypeAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_11 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = l_Lean_Elab_Term_ensureHasTypeAux(x_1, x_12, x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_ensureHasType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_ensureHasType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = 2;
x_12 = l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(x_9, x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_Lean_Elab_abortExceptionId;
x_15 = lean_nat_dec_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_6, 3);
x_17 = l_Lean_InternalExceptionId_getName(x_13, x_8);
lean_dec(x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_18);
x_21 = l_Lean_Elab_logException___rarg___lambda__1___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = 2;
x_24 = l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_22, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_io_error_to_string(x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
lean_inc(x_16);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_16);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_17, 0, x_30);
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_io_error_to_string(x_31);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
lean_inc(x_16);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_16);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_32);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_13);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_8);
return x_39;
}
}
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_mkSort(x_11);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_14, x_1, x_2, x_5, x_6, x_7, x_8, x_12);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Term_6__exceptionToSorry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = 0;
x_56 = lean_box(0);
lean_inc(x_5);
x_57 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_55, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_10 = x_58;
x_11 = x_59;
goto block_54;
}
else
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_2, 0);
lean_inc(x_60);
lean_dec(x_2);
x_10 = x_60;
x_11 = x_9;
goto block_54;
}
block_54:
{
lean_object* x_12; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_10);
x_12 = l___private_Lean_Meta_InferType_4__getLevelImp(x_10, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Meta_mkSorry___rarg___lambda__1___closed__2;
x_19 = l_Lean_mkConst(x_18, x_17);
x_20 = l_Lean_Meta_mkSorry___rarg___lambda__1___closed__4;
x_21 = l_Lean_mkAppB(x_19, x_10, x_20);
x_22 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_22 == 0)
{
lean_object* x_23; 
lean_free_object(x_12);
x_23 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_21);
x_28 = !lean_is_exclusive(x_23);
if (x_28 == 0)
{
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Meta_mkSorry___rarg___lambda__1___closed__2;
x_37 = l_Lean_mkConst(x_36, x_35);
x_38 = l_Lean_Meta_mkSorry___rarg___lambda__1___closed__4;
x_39 = l_Lean_mkAppB(x_37, x_10, x_38);
x_40 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
x_45 = lean_ctor_get(x_41, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_47 = x_41;
} else {
 lean_dec_ref(x_41);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_39);
lean_ctor_set(x_49, 1, x_33);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_12);
if (x_50 == 0)
{
return x_12;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_12, 0);
x_52 = lean_ctor_get(x_12, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_12);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Term_6__exceptionToSorry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_6__exceptionToSorry(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwPostpone___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(x_7);
return x_11;
}
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_tryPostpone___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_tryPostpone(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Expr_getAppFn___main(x_1);
x_10 = l_Lean_Expr_isMVar(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Lean_Expr_getAppFn___main(x_15);
lean_dec(x_15);
x_18 = l_Lean_Expr_isMVar(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; 
lean_free_object(x_13);
x_20 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_16);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = l_Lean_Expr_getAppFn___main(x_21);
lean_dec(x_21);
x_24 = l_Lean_Expr_isMVar(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_22);
return x_27;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_tryPostponeIfMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_tryPostponeIfMVar(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Elab_registerPostponeId___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_7__postponeElabTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1;
x_28 = l_Lean_checkTraceOption(x_26, x_27);
if (x_28 == 0)
{
x_10 = x_9;
goto block_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc(x_1);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_1);
x_30 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = l_Lean_MessageData_hasCoeOfOptExpr___closed__1;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_27, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_10 = x_35;
goto block_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_27, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_10 = x_40;
goto block_25;
}
}
block_25:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_11 = 2;
x_12 = lean_box(0);
lean_inc(x_5);
x_13 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_mvarId_x21(x_14);
x_17 = lean_ctor_get(x_3, 6);
x_18 = lean_ctor_get(x_3, 3);
lean_inc(x_18);
lean_inc(x_17);
x_19 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_16, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_14);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_7__postponeElabTerm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_7__postponeElabTerm(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected syntax");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_13 = l_Lean_Syntax_prettyPrint(x_2);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_MessageData_ofList___closed__3;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_5, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_dec(x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
x_24 = lean_apply_9(x_22, x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_24) == 0)
{
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = l___private_Lean_Elab_Term_6__exceptionToSorry(x_25, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_31);
lean_dec(x_7);
lean_dec(x_6);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_24);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_24, 1);
x_35 = lean_ctor_get(x_24, 0);
lean_dec(x_35);
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
x_37 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_38 = lean_nat_dec_eq(x_36, x_37);
if (x_38 == 0)
{
lean_dec(x_23);
if (x_4 == 0)
{
lean_dec(x_36);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Elab_postponeExceptionId;
x_40 = lean_nat_dec_eq(x_36, x_39);
lean_dec(x_36);
if (x_40 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_24);
lean_dec(x_25);
x_41 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l___private_Lean_Elab_Term_7__postponeElabTerm(x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_42);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_25);
lean_inc(x_1);
x_44 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_5 = x_23;
x_12 = x_45;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_24, 1);
lean_inc(x_47);
lean_dec(x_24);
x_48 = lean_ctor_get(x_25, 0);
lean_inc(x_48);
x_49 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_50 = lean_nat_dec_eq(x_48, x_49);
if (x_50 == 0)
{
lean_dec(x_23);
if (x_4 == 0)
{
lean_object* x_51; 
lean_dec(x_48);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_25);
lean_ctor_set(x_51, 1, x_47);
return x_51;
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = l_Lean_Elab_postponeExceptionId;
x_53 = lean_nat_dec_eq(x_48, x_52);
lean_dec(x_48);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_25);
lean_ctor_set(x_54, 1, x_47);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_25);
x_55 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l___private_Lean_Elab_Term_7__postponeElabTerm(x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_56);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_48);
lean_dec(x_25);
lean_inc(x_1);
x_58 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_5 = x_23;
x_12 = x_59;
goto _start;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5(x_4, x_2);
lean_dec(x_4);
return x_7;
}
else
{
lean_dec(x_4);
return x_6;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5(x_8, x_2);
lean_dec(x_8);
return x_9;
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elaboration function for '");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has not been implemented");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_11 = l_Lean_Elab_Term_saveAllState___rarg(x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_9, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_termElabAttribute;
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
x_20 = l_Lean_PersistentEnvExtension_getState___rarg(x_19, x_17);
lean_dec(x_17);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_1);
x_22 = l_Lean_Syntax_getKind(x_1);
x_23 = l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1(x_21, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_System_FilePath_dirName___closed__1;
x_25 = l_Lean_Name_toStringWithSep___main(x_24, x_22);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_31, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main(x_12, x_1, x_2, x_3, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_34;
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___main___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find_x3f___at___private_Lean_Elab_Term_9__elabUsingElabFns___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_9__elabUsingElabFns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 3);
lean_dec(x_13);
lean_ctor_set(x_10, 3, x_1);
x_14 = lean_st_ref_set(x_3, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
x_23 = lean_ctor_get(x_10, 2);
x_24 = lean_ctor_get(x_10, 4);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set(x_25, 3, x_1);
lean_ctor_set(x_25, 4, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_11);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed), 6, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1;
x_2 = lean_alloc_closure((void*)(l_ReaderT_lift___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2;
x_2 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_monadQuotation___closed__1;
x_2 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4;
x_3 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6;
return x_1;
}
}
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l___private_Lean_Elab_Term_10__isExplicit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicit");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_10__isExplicit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___private_Lean_Elab_Term_10__isExplicit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_10__isExplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l___private_Lean_Elab_Term_10__isExplicit___closed__2;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Term_10__isExplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_10__isExplicit(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_11__isExplicitApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l_Lean_mkAppStx___closed__8;
x_4 = lean_name_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_dec(x_1);
x_8 = l___private_Lean_Elab_Term_10__isExplicit(x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Term_11__isExplicitApp___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_11__isExplicitApp(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* _init_l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("implicitBinder");
return x_1;
}
}
lean_object* _init_l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instBinder");
return x_1;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1;
lean_inc(x_2);
x_10 = lean_name_mk_string(x_2, x_9);
lean_inc(x_8);
x_11 = l_Lean_Syntax_isOfKind(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2;
lean_inc(x_2);
x_13 = lean_name_mk_string(x_2, x_12);
x_14 = l_Lean_Syntax_isOfKind(x_8, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_18 = 1;
return x_18;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1;
lean_inc(x_2);
x_10 = lean_name_mk_string(x_2, x_9);
lean_inc(x_8);
x_11 = l_Lean_Syntax_isOfKind(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2;
lean_inc(x_2);
x_13 = lean_name_mk_string(x_2, x_12);
x_14 = l_Lean_Syntax_isOfKind(x_8, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_18 = 1;
return x_18;
}
}
}
}
uint8_t l___private_Lean_Elab_Term_12__isLambdaWithImplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__7;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Syntax_getArgs(x_1);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(4u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_1);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_11);
lean_dec(x_11);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_mkAppStx___closed__6;
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2(x_1, x_14, x_12, x_13, x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
return x_16;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Term_12__isLambdaWithImplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_12__isLambdaWithImplicit(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_13__dropTermParens___main(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
lean_inc(x_1);
x_21 = l_Lean_Syntax_isOfKind(x_1, x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = 0;
x_2 = x_22;
goto block_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = l_Lean_Syntax_getArgs(x_1);
x_24 = lean_array_get_size(x_23);
lean_dec(x_23);
x_25 = lean_unsigned_to_nat(3u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
x_2 = x_26;
goto block_19;
}
block_19:
{
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_Syntax_getArg(x_1, x_3);
x_5 = l_Lean_nullKind___closed__2;
lean_inc(x_4);
x_6 = l_Lean_Syntax_isOfKind(x_4, x_5);
if (x_6 == 0)
{
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_Syntax_getArgs(x_4);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_4, x_11);
x_13 = l_Lean_Syntax_getArg(x_4, x_3);
lean_dec(x_4);
lean_inc(x_13);
x_14 = l_Lean_Syntax_isOfKind(x_13, x_5);
if (x_14 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l_Lean_Syntax_getArgs(x_13);
lean_dec(x_13);
x_16 = lean_array_get_size(x_15);
lean_dec(x_15);
x_17 = lean_nat_dec_eq(x_16, x_11);
lean_dec(x_16);
if (x_17 == 0)
{
lean_dec(x_12);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_12;
goto _start;
}
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_13__dropTermParens(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Term_13__dropTermParens___main(x_1);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_blockImplicitLambda(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l___private_Lean_Elab_Term_13__dropTermParens___main(x_1);
lean_inc(x_2);
x_3 = l___private_Lean_Elab_Term_10__isExplicit(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_inc(x_2);
x_4 = l___private_Lean_Elab_Term_11__isExplicitApp(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l___private_Lean_Elab_Term_12__isLambdaWithImplicit(x_2);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = 1;
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_blockImplicitLambda___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_blockImplicitLambda(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_Expr_isForall(x_11);
if (x_12 == 0)
{
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_dec(x_1);
return x_9;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_Expr_isForall(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Term_blockImplicitLambda(x_1);
if (x_10 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 7)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; uint64_t x_18; uint8_t x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_ctor_get_uint64(x_15, sizeof(void*)*3);
x_19 = (uint8_t)((x_18 << 24) >> 61);
x_20 = l_Lean_BinderInfo_isExplicit(x_19);
if (x_20 == 0)
{
lean_ctor_set(x_2, 0, x_15);
lean_ctor_set(x_14, 0, x_2);
return x_14;
}
else
{
lean_object* x_21; 
lean_dec(x_15);
lean_free_object(x_2);
x_21 = lean_box(0);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
}
else
{
lean_object* x_22; uint64_t x_23; uint8_t x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get_uint64(x_15, sizeof(void*)*3);
x_24 = (uint8_t)((x_23 << 24) >> 61);
x_25 = l_Lean_BinderInfo_isExplicit(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_ctor_set(x_2, 0, x_15);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
lean_free_object(x_2);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_free_object(x_2);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_14, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_14, 0, x_31);
return x_14;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_free_object(x_2);
x_35 = !lean_is_exclusive(x_14);
if (x_35 == 0)
{
return x_14;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 7)
{
lean_object* x_42; lean_object* x_43; uint64_t x_44; uint8_t x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get_uint64(x_41, sizeof(void*)*3);
x_45 = (uint8_t)((x_44 << 24) >> 61);
x_46 = l_Lean_BinderInfo_isExplicit(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_41);
if (lean_is_scalar(x_43)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_43;
}
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_41);
x_49 = lean_box(0);
if (lean_is_scalar(x_43)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_43;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_52 = x_40;
} else {
 lean_dec_ref(x_40);
 x_52 = lean_box(0);
}
x_53 = lean_box(0);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_9);
return x_60;
}
}
}
lean_object* l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Term_14__useImplicitLambda_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Array_isEmpty___rarg(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; 
x_11 = lean_st_ref_get(x_6, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_8, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
x_20 = l_Std_HashMap_inhabited___closed__1;
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = 1;
x_23 = 0;
x_24 = l_Lean_MetavarContext_MkBinding_mkBinding(x_22, x_19, x_1, x_2, x_23, x_23, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_st_ref_take(x_8, x_17);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_31, 1);
lean_dec(x_34);
lean_ctor_set(x_31, 1, x_29);
x_35 = lean_st_ref_set(x_8, x_31, x_32);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_28, x_5, x_6, x_7, x_8, x_36);
lean_dec(x_5);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_27);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_27);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_31, 0);
x_43 = lean_ctor_get(x_31, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_31);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_29);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_st_ref_set(x_8, x_44, x_32);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_28, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_5);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_27);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_51 = lean_ctor_get(x_24, 1);
lean_inc(x_51);
lean_dec(x_24);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_52, x_5, x_6, x_7, x_8, x_17);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_st_ref_take(x_8, x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = !lean_is_exclusive(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_57, 1);
lean_dec(x_60);
lean_ctor_set(x_57, 1, x_53);
x_61 = lean_st_ref_set(x_8, x_57, x_58);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
x_64 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_63, x_5, x_6, x_7, x_8, x_62);
lean_dec(x_5);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_ctor_get(x_57, 0);
x_66 = lean_ctor_get(x_57, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_57);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_53);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_st_ref_set(x_8, x_67, x_58);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
x_71 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_70, x_5, x_6, x_7, x_8, x_69);
lean_dec(x_5);
return x_71;
}
}
}
else
{
lean_object* x_72; 
lean_dec(x_5);
lean_dec(x_1);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_2);
lean_ctor_set(x_72, 1, x_9);
return x_72;
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("implicitForall");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_1, x_12, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
x_16 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
x_21 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2;
x_22 = l_Lean_checkTraceOption(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_free_object(x_16);
lean_inc(x_18);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_18);
x_24 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_21, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_18);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_ctor_get(x_9, 0);
lean_inc(x_31);
x_32 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2;
x_33 = l_Lean_checkTraceOption(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_inc(x_29);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_29);
x_36 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_32, x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_38 = x_36;
} else {
 lean_dec_ref(x_36);
 x_38 = lean_box(0);
}
if (lean_is_scalar(x_38)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_38;
}
lean_ctor_set(x_39, 0, x_29);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_16);
if (x_40 == 0)
{
return x_16;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_16, 0);
x_42 = lean_ctor_get(x_16, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_16);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 0);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_13);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_27__withLocalDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_expr_instantiate1(x_1, x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_14__useImplicitLambda_x3f___spec__1(x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_push(x_2, x_5);
x_18 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_3, x_4, x_15, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; uint8_t x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_16 = (uint8_t)((x_15 << 24) >> 61);
x_17 = l_Lean_BinderInfo_isExplicit(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_3);
x_18 = lean_st_ref_take(x_6, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_19, 3);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_22, x_23);
lean_ctor_set(x_19, 3, x_24);
x_25 = lean_st_ref_set(x_6, x_19, x_20);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = !lean_is_exclusive(x_5);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_28 = lean_ctor_get(x_5, 7);
lean_dec(x_28);
lean_ctor_set(x_5, 7, x_22);
x_29 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_26);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_addMacroScope(x_30, x_12, x_33);
x_36 = lean_box(x_2);
x_37 = lean_alloc_closure((void*)(l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_37, 0, x_14);
lean_closure_set(x_37, 1, x_4);
lean_closure_set(x_37, 2, x_1);
lean_closure_set(x_37, 3, x_36);
x_38 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_35, x_16, x_13, x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_39 = lean_ctor_get(x_5, 0);
x_40 = lean_ctor_get(x_5, 1);
x_41 = lean_ctor_get(x_5, 2);
x_42 = lean_ctor_get(x_5, 3);
x_43 = lean_ctor_get(x_5, 4);
x_44 = lean_ctor_get(x_5, 5);
x_45 = lean_ctor_get(x_5, 6);
x_46 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_47 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_5);
x_48 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_48, 0, x_39);
lean_ctor_set(x_48, 1, x_40);
lean_ctor_set(x_48, 2, x_41);
lean_ctor_set(x_48, 3, x_42);
lean_ctor_set(x_48, 4, x_43);
lean_ctor_set(x_48, 5, x_44);
lean_ctor_set(x_48, 6, x_45);
lean_ctor_set(x_48, 7, x_22);
lean_ctor_set_uint8(x_48, sizeof(void*)*8, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*8 + 1, x_47);
x_49 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_26);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Elab_Term_getCurrMacroScope(x_48, x_6, x_7, x_8, x_9, x_10, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_addMacroScope(x_50, x_12, x_53);
x_56 = lean_box(x_2);
x_57 = lean_alloc_closure((void*)(l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_57, 0, x_14);
lean_closure_set(x_57, 1, x_4);
lean_closure_set(x_57, 2, x_1);
lean_closure_set(x_57, 3, x_56);
x_58 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_55, x_16, x_13, x_57, x_48, x_6, x_7, x_8, x_9, x_10, x_54);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_59 = lean_ctor_get(x_19, 0);
x_60 = lean_ctor_get(x_19, 1);
x_61 = lean_ctor_get(x_19, 2);
x_62 = lean_ctor_get(x_19, 3);
x_63 = lean_ctor_get(x_19, 4);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_19);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_62, x_64);
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_59);
lean_ctor_set(x_66, 1, x_60);
lean_ctor_set(x_66, 2, x_61);
lean_ctor_set(x_66, 3, x_65);
lean_ctor_set(x_66, 4, x_63);
x_67 = lean_st_ref_set(x_6, x_66, x_20);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get(x_5, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_5, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_5, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_5, 3);
lean_inc(x_72);
x_73 = lean_ctor_get(x_5, 4);
lean_inc(x_73);
x_74 = lean_ctor_get(x_5, 5);
lean_inc(x_74);
x_75 = lean_ctor_get(x_5, 6);
lean_inc(x_75);
x_76 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_77 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 x_78 = x_5;
} else {
 lean_dec_ref(x_5);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(0, 8, 2);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_69);
lean_ctor_set(x_79, 1, x_70);
lean_ctor_set(x_79, 2, x_71);
lean_ctor_set(x_79, 3, x_72);
lean_ctor_set(x_79, 4, x_73);
lean_ctor_set(x_79, 5, x_74);
lean_ctor_set(x_79, 6, x_75);
lean_ctor_set(x_79, 7, x_62);
lean_ctor_set_uint8(x_79, sizeof(void*)*8, x_76);
lean_ctor_set_uint8(x_79, sizeof(void*)*8 + 1, x_77);
x_80 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_68);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_Elab_Term_getCurrMacroScope(x_79, x_6, x_7, x_8, x_9, x_10, x_82);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_addMacroScope(x_81, x_12, x_84);
x_87 = lean_box(x_2);
x_88 = lean_alloc_closure((void*)(l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_88, 0, x_14);
lean_closure_set(x_88, 1, x_4);
lean_closure_set(x_88, 2, x_1);
lean_closure_set(x_88, 3, x_87);
x_89 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_86, x_16, x_13, x_88, x_79, x_6, x_7, x_8, x_9, x_10, x_85);
return x_89;
}
}
else
{
lean_object* x_90; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_90 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_90;
}
}
else
{
lean_object* x_91; 
x_91 = l___private_Lean_Elab_Term_15__elabImplicitLambdaAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_91;
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main___lambda__1(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Term_16__elabImplicitLambda___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Term_16__elabImplicitLambda(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
x_13 = l_Lean_replaceRef(x_12, x_11);
lean_dec(x_12);
x_14 = l_Lean_replaceRef(x_13, x_11);
lean_dec(x_11);
lean_dec(x_13);
lean_ctor_set(x_7, 3, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
x_18 = lean_ctor_get(x_7, 2);
x_19 = lean_ctor_get(x_7, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_19);
x_21 = l_Lean_replaceRef(x_20, x_19);
lean_dec(x_20);
x_22 = l_Lean_replaceRef(x_21, x_19);
lean_dec(x_19);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_22);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg), 1, 0);
return x_7;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_MessageData_hasCoeOfOptExpr___closed__1;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___main(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_16, x_17);
lean_ctor_set(x_13, 3, x_18);
x_19 = lean_st_ref_set(x_6, x_13, x_14);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
x_24 = lean_ctor_get(x_5, 2);
x_25 = lean_ctor_get(x_5, 3);
x_26 = lean_ctor_get(x_5, 4);
x_27 = lean_ctor_get(x_5, 5);
x_28 = lean_ctor_get(x_5, 6);
x_29 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_30 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_31 = lean_ctor_get(x_5, 7);
lean_dec(x_31);
lean_inc(x_16);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_ctor_set(x_5, 7, x_16);
x_32 = lean_ctor_get(x_9, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_9, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_9, 3);
lean_inc(x_35);
x_36 = lean_nat_dec_eq(x_33, x_34);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_64; lean_object* x_65; lean_object* x_124; uint8_t x_125; 
x_38 = lean_ctor_get(x_9, 3);
lean_dec(x_38);
x_39 = lean_ctor_get(x_9, 2);
lean_dec(x_39);
x_40 = lean_ctor_get(x_9, 1);
lean_dec(x_40);
x_41 = lean_ctor_get(x_9, 0);
lean_dec(x_41);
x_42 = lean_nat_add(x_33, x_17);
lean_dec(x_33);
lean_inc(x_34);
lean_inc(x_42);
lean_inc(x_32);
lean_ctor_set(x_9, 1, x_42);
x_124 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_125 = l_Lean_checkTraceOption(x_32, x_124);
lean_dec(x_32);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_st_ref_get(x_10, x_20);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
lean_dec(x_127);
x_64 = x_129;
x_65 = x_128;
goto block_123;
}
else
{
lean_object* x_130; 
lean_inc(x_4);
x_130 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_130, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_131 = l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1;
x_132 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_124, x_132, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_st_ref_get(x_10, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_ctor_get(x_136, 0);
lean_inc(x_138);
lean_dec(x_136);
x_64 = x_138;
x_65 = x_137;
goto block_123;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_139 = lean_ctor_get(x_1, 0);
lean_inc(x_139);
x_140 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_141 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_130);
x_144 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_124, x_143, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
lean_dec(x_144);
x_146 = lean_st_ref_get(x_10, x_145);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
lean_dec(x_147);
x_64 = x_149;
x_65 = x_148;
goto block_123;
}
}
block_63:
{
if (lean_obj_tag(x_43) == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_45; 
x_45 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
return x_45;
}
else
{
lean_object* x_46; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_4);
x_46 = l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(x_4, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_1);
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
lean_dec(x_47);
x_52 = l_Array_empty___closed__1;
x_53 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_4, x_2, x_51, x_52, x_5, x_6, x_7, x_8, x_9, x_10, x_50);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_46);
if (x_54 == 0)
{
return x_46;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_46, 0);
x_56 = lean_ctor_get(x_46, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_46);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_5);
x_58 = lean_ctor_get(x_43, 0);
lean_inc(x_58);
lean_dec(x_43);
lean_inc(x_58);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_4);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_28);
x_61 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_61, 0, x_22);
lean_ctor_set(x_61, 1, x_23);
lean_ctor_set(x_61, 2, x_24);
lean_ctor_set(x_61, 3, x_25);
lean_ctor_set(x_61, 4, x_26);
lean_ctor_set(x_61, 5, x_27);
lean_ctor_set(x_61, 6, x_60);
lean_ctor_set(x_61, 7, x_16);
lean_ctor_set_uint8(x_61, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 1, x_30);
x_4 = x_58;
x_5 = x_61;
x_11 = x_44;
goto _start;
}
}
block_123:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_66 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_st_ref_get(x_10, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_st_ref_get(x_6, x_71);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_ctor_get(x_74, 3);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_environment_main_module(x_72);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_67);
lean_ctor_set(x_78, 2, x_42);
lean_ctor_set(x_78, 3, x_34);
lean_inc(x_4);
x_79 = l_Lean_Elab_getMacros(x_64, x_4, x_78, x_76);
lean_dec(x_64);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_st_ref_take(x_6, x_75);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = !lean_is_exclusive(x_83);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_83, 3);
lean_dec(x_86);
lean_ctor_set(x_83, 3, x_81);
x_87 = lean_st_ref_set(x_6, x_83, x_84);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_80);
x_43 = x_89;
x_44 = x_88;
goto block_63;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_90 = lean_ctor_get(x_83, 0);
x_91 = lean_ctor_get(x_83, 1);
x_92 = lean_ctor_get(x_83, 2);
x_93 = lean_ctor_get(x_83, 4);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_83);
x_94 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_94, 0, x_90);
lean_ctor_set(x_94, 1, x_91);
lean_ctor_set(x_94, 2, x_92);
lean_ctor_set(x_94, 3, x_81);
lean_ctor_set(x_94, 4, x_93);
x_95 = lean_st_ref_set(x_6, x_94, x_84);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_97, 0, x_80);
x_43 = x_97;
x_44 = x_96;
goto block_63;
}
}
else
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_79, 0);
lean_inc(x_98);
lean_dec(x_79);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_99, x_102, x_5, x_6, x_7, x_8, x_9, x_10, x_75);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_99);
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
return x_103;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_103, 0);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_103);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
else
{
lean_object* x_108; uint8_t x_109; 
x_108 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(x_75);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = lean_ctor_get(x_108, 1);
x_112 = lean_ctor_get(x_110, 0);
lean_inc(x_112);
x_113 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_114 = lean_nat_dec_eq(x_113, x_112);
lean_dec(x_112);
if (x_114 == 0)
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_108;
}
else
{
lean_object* x_115; 
lean_free_object(x_108);
lean_dec(x_110);
x_115 = lean_box(0);
x_43 = x_115;
x_44 = x_111;
goto block_63;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_116 = lean_ctor_get(x_108, 0);
x_117 = lean_ctor_get(x_108, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_108);
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
x_119 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_120 = lean_nat_dec_eq(x_119, x_118);
lean_dec(x_118);
if (x_120 == 0)
{
lean_object* x_121; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_116);
lean_ctor_set(x_121, 1, x_117);
return x_121;
}
else
{
lean_object* x_122; 
lean_dec(x_116);
x_122 = lean_box(0);
x_43 = x_122;
x_44 = x_117;
goto block_63;
}
}
}
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_173; lean_object* x_174; lean_object* x_223; uint8_t x_224; 
lean_dec(x_9);
x_150 = lean_nat_add(x_33, x_17);
lean_dec(x_33);
lean_inc(x_34);
lean_inc(x_150);
lean_inc(x_32);
x_151 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_151, 0, x_32);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_151, 2, x_34);
lean_ctor_set(x_151, 3, x_35);
x_223 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_224 = l_Lean_checkTraceOption(x_32, x_223);
lean_dec(x_32);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_225 = lean_st_ref_get(x_10, x_20);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
lean_dec(x_226);
x_173 = x_228;
x_174 = x_227;
goto block_222;
}
else
{
lean_object* x_229; 
lean_inc(x_4);
x_229 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_229, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_230 = l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1;
x_231 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
x_232 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_223, x_231, x_5, x_6, x_7, x_8, x_151, x_10, x_20);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_st_ref_get(x_10, x_233);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = lean_ctor_get(x_235, 0);
lean_inc(x_237);
lean_dec(x_235);
x_173 = x_237;
x_174 = x_236;
goto block_222;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_238 = lean_ctor_get(x_1, 0);
lean_inc(x_238);
x_239 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_239, 0, x_238);
x_240 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_241 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_229);
x_243 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_223, x_242, x_5, x_6, x_7, x_8, x_151, x_10, x_20);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
lean_dec(x_243);
x_245 = lean_st_ref_get(x_10, x_244);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
lean_dec(x_245);
x_248 = lean_ctor_get(x_246, 0);
lean_inc(x_248);
lean_dec(x_246);
x_173 = x_248;
x_174 = x_247;
goto block_222;
}
}
block_172:
{
if (lean_obj_tag(x_152) == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_154; 
x_154 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_151, x_10, x_153);
return x_154;
}
else
{
lean_object* x_155; 
lean_inc(x_10);
lean_inc(x_151);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_4);
x_155 = l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(x_4, x_1, x_5, x_6, x_7, x_8, x_151, x_10, x_153);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_151, x_10, x_157);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_1);
x_159 = lean_ctor_get(x_155, 1);
lean_inc(x_159);
lean_dec(x_155);
x_160 = lean_ctor_get(x_156, 0);
lean_inc(x_160);
lean_dec(x_156);
x_161 = l_Array_empty___closed__1;
x_162 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_4, x_2, x_160, x_161, x_5, x_6, x_7, x_8, x_151, x_10, x_159);
return x_162;
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_151);
lean_dec(x_5);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_163 = lean_ctor_get(x_155, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_155, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_165 = x_155;
} else {
 lean_dec_ref(x_155);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_5);
x_167 = lean_ctor_get(x_152, 0);
lean_inc(x_167);
lean_dec(x_152);
lean_inc(x_167);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_4);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_28);
x_170 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_170, 0, x_22);
lean_ctor_set(x_170, 1, x_23);
lean_ctor_set(x_170, 2, x_24);
lean_ctor_set(x_170, 3, x_25);
lean_ctor_set(x_170, 4, x_26);
lean_ctor_set(x_170, 5, x_27);
lean_ctor_set(x_170, 6, x_169);
lean_ctor_set(x_170, 7, x_16);
lean_ctor_set_uint8(x_170, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_170, sizeof(void*)*8 + 1, x_30);
x_4 = x_167;
x_5 = x_170;
x_9 = x_151;
x_11 = x_153;
goto _start;
}
}
block_222:
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_175 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_151, x_10, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_st_ref_get(x_10, x_177);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_181 = lean_ctor_get(x_179, 0);
lean_inc(x_181);
lean_dec(x_179);
x_182 = lean_st_ref_get(x_6, x_180);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = lean_ctor_get(x_183, 3);
lean_inc(x_185);
lean_dec(x_183);
x_186 = lean_environment_main_module(x_181);
x_187 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_176);
lean_ctor_set(x_187, 2, x_150);
lean_ctor_set(x_187, 3, x_34);
lean_inc(x_4);
x_188 = l_Lean_Elab_getMacros(x_173, x_4, x_187, x_185);
lean_dec(x_173);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_st_ref_take(x_6, x_184);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_ctor_get(x_192, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_192, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_192, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_192, 4);
lean_inc(x_197);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 lean_ctor_release(x_192, 2);
 lean_ctor_release(x_192, 3);
 lean_ctor_release(x_192, 4);
 x_198 = x_192;
} else {
 lean_dec_ref(x_192);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(0, 5, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_190);
lean_ctor_set(x_199, 4, x_197);
x_200 = lean_st_ref_set(x_6, x_199, x_193);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_189);
x_152 = x_202;
x_153 = x_201;
goto block_172;
}
else
{
lean_object* x_203; 
x_203 = lean_ctor_get(x_188, 0);
lean_inc(x_203);
lean_dec(x_188);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_206 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_206, 0, x_205);
x_207 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_207, 0, x_206);
x_208 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_204, x_207, x_5, x_6, x_7, x_8, x_151, x_10, x_184);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_204);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_211 = x_208;
} else {
 lean_dec_ref(x_208);
 x_211 = lean_box(0);
}
if (lean_is_scalar(x_211)) {
 x_212 = lean_alloc_ctor(1, 2, 0);
} else {
 x_212 = x_211;
}
lean_ctor_set(x_212, 0, x_209);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_213 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(x_184);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_213, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_216 = x_213;
} else {
 lean_dec_ref(x_213);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_214, 0);
lean_inc(x_217);
x_218 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_219 = lean_nat_dec_eq(x_218, x_217);
lean_dec(x_217);
if (x_219 == 0)
{
lean_object* x_220; 
lean_dec(x_151);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_216)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_216;
}
lean_ctor_set(x_220, 0, x_214);
lean_ctor_set(x_220, 1, x_215);
return x_220;
}
else
{
lean_object* x_221; 
lean_dec(x_216);
lean_dec(x_214);
x_221 = lean_box(0);
x_152 = x_221;
x_153 = x_215;
goto block_172;
}
}
}
}
}
}
else
{
lean_object* x_249; lean_object* x_250; uint8_t x_251; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_249 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_250 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_249, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_251 = !lean_is_exclusive(x_250);
if (x_251 == 0)
{
return x_250;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_252 = lean_ctor_get(x_250, 0);
x_253 = lean_ctor_get(x_250, 1);
lean_inc(x_253);
lean_inc(x_252);
lean_dec(x_250);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_252);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; uint8_t x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_255 = lean_ctor_get(x_5, 0);
x_256 = lean_ctor_get(x_5, 1);
x_257 = lean_ctor_get(x_5, 2);
x_258 = lean_ctor_get(x_5, 3);
x_259 = lean_ctor_get(x_5, 4);
x_260 = lean_ctor_get(x_5, 5);
x_261 = lean_ctor_get(x_5, 6);
x_262 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_263 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_inc(x_257);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_5);
lean_inc(x_16);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_inc(x_257);
lean_inc(x_256);
lean_inc(x_255);
x_264 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_264, 0, x_255);
lean_ctor_set(x_264, 1, x_256);
lean_ctor_set(x_264, 2, x_257);
lean_ctor_set(x_264, 3, x_258);
lean_ctor_set(x_264, 4, x_259);
lean_ctor_set(x_264, 5, x_260);
lean_ctor_set(x_264, 6, x_261);
lean_ctor_set(x_264, 7, x_16);
lean_ctor_set_uint8(x_264, sizeof(void*)*8, x_262);
lean_ctor_set_uint8(x_264, sizeof(void*)*8 + 1, x_263);
x_265 = lean_ctor_get(x_9, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_9, 1);
lean_inc(x_266);
x_267 = lean_ctor_get(x_9, 2);
lean_inc(x_267);
x_268 = lean_ctor_get(x_9, 3);
lean_inc(x_268);
x_269 = lean_nat_dec_eq(x_266, x_267);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_294; lean_object* x_295; lean_object* x_344; uint8_t x_345; 
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 x_270 = x_9;
} else {
 lean_dec_ref(x_9);
 x_270 = lean_box(0);
}
x_271 = lean_nat_add(x_266, x_17);
lean_dec(x_266);
lean_inc(x_267);
lean_inc(x_271);
lean_inc(x_265);
if (lean_is_scalar(x_270)) {
 x_272 = lean_alloc_ctor(0, 4, 0);
} else {
 x_272 = x_270;
}
lean_ctor_set(x_272, 0, x_265);
lean_ctor_set(x_272, 1, x_271);
lean_ctor_set(x_272, 2, x_267);
lean_ctor_set(x_272, 3, x_268);
x_344 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_345 = l_Lean_checkTraceOption(x_265, x_344);
lean_dec(x_265);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_346 = lean_st_ref_get(x_10, x_20);
x_347 = lean_ctor_get(x_346, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_346, 1);
lean_inc(x_348);
lean_dec(x_346);
x_349 = lean_ctor_get(x_347, 0);
lean_inc(x_349);
lean_dec(x_347);
x_294 = x_349;
x_295 = x_348;
goto block_343;
}
else
{
lean_object* x_350; 
lean_inc(x_4);
x_350 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_350, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_351 = l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1;
x_352 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_350);
x_353 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_344, x_352, x_264, x_6, x_7, x_8, x_272, x_10, x_20);
x_354 = lean_ctor_get(x_353, 1);
lean_inc(x_354);
lean_dec(x_353);
x_355 = lean_st_ref_get(x_10, x_354);
x_356 = lean_ctor_get(x_355, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_355, 1);
lean_inc(x_357);
lean_dec(x_355);
x_358 = lean_ctor_get(x_356, 0);
lean_inc(x_358);
lean_dec(x_356);
x_294 = x_358;
x_295 = x_357;
goto block_343;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_359 = lean_ctor_get(x_1, 0);
lean_inc(x_359);
x_360 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_360, 0, x_359);
x_361 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_362 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_361);
x_363 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_350);
x_364 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_344, x_363, x_264, x_6, x_7, x_8, x_272, x_10, x_20);
x_365 = lean_ctor_get(x_364, 1);
lean_inc(x_365);
lean_dec(x_364);
x_366 = lean_st_ref_get(x_10, x_365);
x_367 = lean_ctor_get(x_366, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_366, 1);
lean_inc(x_368);
lean_dec(x_366);
x_369 = lean_ctor_get(x_367, 0);
lean_inc(x_369);
lean_dec(x_367);
x_294 = x_369;
x_295 = x_368;
goto block_343;
}
}
block_293:
{
if (lean_obj_tag(x_273) == 0)
{
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_275; 
x_275 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_264, x_6, x_7, x_8, x_272, x_10, x_274);
return x_275;
}
else
{
lean_object* x_276; 
lean_inc(x_10);
lean_inc(x_272);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_4);
x_276 = l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(x_4, x_1, x_264, x_6, x_7, x_8, x_272, x_10, x_274);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; 
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
lean_dec(x_276);
x_279 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_264, x_6, x_7, x_8, x_272, x_10, x_278);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_1);
x_280 = lean_ctor_get(x_276, 1);
lean_inc(x_280);
lean_dec(x_276);
x_281 = lean_ctor_get(x_277, 0);
lean_inc(x_281);
lean_dec(x_277);
x_282 = l_Array_empty___closed__1;
x_283 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_4, x_2, x_281, x_282, x_264, x_6, x_7, x_8, x_272, x_10, x_280);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_272);
lean_dec(x_264);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_284 = lean_ctor_get(x_276, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_276, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_286 = x_276;
} else {
 lean_dec_ref(x_276);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(1, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
lean_dec(x_264);
x_288 = lean_ctor_get(x_273, 0);
lean_inc(x_288);
lean_dec(x_273);
lean_inc(x_288);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_4);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_261);
x_291 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_291, 0, x_255);
lean_ctor_set(x_291, 1, x_256);
lean_ctor_set(x_291, 2, x_257);
lean_ctor_set(x_291, 3, x_258);
lean_ctor_set(x_291, 4, x_259);
lean_ctor_set(x_291, 5, x_260);
lean_ctor_set(x_291, 6, x_290);
lean_ctor_set(x_291, 7, x_16);
lean_ctor_set_uint8(x_291, sizeof(void*)*8, x_262);
lean_ctor_set_uint8(x_291, sizeof(void*)*8 + 1, x_263);
x_4 = x_288;
x_5 = x_291;
x_9 = x_272;
x_11 = x_274;
goto _start;
}
}
block_343:
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_296 = l_Lean_Elab_Term_getCurrMacroScope(x_264, x_6, x_7, x_8, x_272, x_10, x_295);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_st_ref_get(x_10, x_298);
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_302 = lean_ctor_get(x_300, 0);
lean_inc(x_302);
lean_dec(x_300);
x_303 = lean_st_ref_get(x_6, x_301);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = lean_ctor_get(x_304, 3);
lean_inc(x_306);
lean_dec(x_304);
x_307 = lean_environment_main_module(x_302);
x_308 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_297);
lean_ctor_set(x_308, 2, x_271);
lean_ctor_set(x_308, 3, x_267);
lean_inc(x_4);
x_309 = l_Lean_Elab_getMacros(x_294, x_4, x_308, x_306);
lean_dec(x_294);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
lean_dec(x_309);
x_312 = lean_st_ref_take(x_6, x_305);
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_312, 1);
lean_inc(x_314);
lean_dec(x_312);
x_315 = lean_ctor_get(x_313, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_313, 1);
lean_inc(x_316);
x_317 = lean_ctor_get(x_313, 2);
lean_inc(x_317);
x_318 = lean_ctor_get(x_313, 4);
lean_inc(x_318);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 lean_ctor_release(x_313, 2);
 lean_ctor_release(x_313, 3);
 lean_ctor_release(x_313, 4);
 x_319 = x_313;
} else {
 lean_dec_ref(x_313);
 x_319 = lean_box(0);
}
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(0, 5, 0);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_315);
lean_ctor_set(x_320, 1, x_316);
lean_ctor_set(x_320, 2, x_317);
lean_ctor_set(x_320, 3, x_311);
lean_ctor_set(x_320, 4, x_318);
x_321 = lean_st_ref_set(x_6, x_320, x_314);
x_322 = lean_ctor_get(x_321, 1);
lean_inc(x_322);
lean_dec(x_321);
x_323 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_323, 0, x_310);
x_273 = x_323;
x_274 = x_322;
goto block_293;
}
else
{
lean_object* x_324; 
x_324 = lean_ctor_get(x_309, 0);
lean_inc(x_324);
lean_dec(x_309);
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
x_327 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_327, 0, x_326);
x_328 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_328, 0, x_327);
x_329 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_325, x_328, x_264, x_6, x_7, x_8, x_272, x_10, x_305);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_325);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
if (lean_is_exclusive(x_329)) {
 lean_ctor_release(x_329, 0);
 lean_ctor_release(x_329, 1);
 x_332 = x_329;
} else {
 lean_dec_ref(x_329);
 x_332 = lean_box(0);
}
if (lean_is_scalar(x_332)) {
 x_333 = lean_alloc_ctor(1, 2, 0);
} else {
 x_333 = x_332;
}
lean_ctor_set(x_333, 0, x_330);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; 
x_334 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(x_305);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_334)) {
 lean_ctor_release(x_334, 0);
 lean_ctor_release(x_334, 1);
 x_337 = x_334;
} else {
 lean_dec_ref(x_334);
 x_337 = lean_box(0);
}
x_338 = lean_ctor_get(x_335, 0);
lean_inc(x_338);
x_339 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_340 = lean_nat_dec_eq(x_339, x_338);
lean_dec(x_338);
if (x_340 == 0)
{
lean_object* x_341; 
lean_dec(x_272);
lean_dec(x_264);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_337)) {
 x_341 = lean_alloc_ctor(1, 2, 0);
} else {
 x_341 = x_337;
}
lean_ctor_set(x_341, 0, x_335);
lean_ctor_set(x_341, 1, x_336);
return x_341;
}
else
{
lean_object* x_342; 
lean_dec(x_337);
lean_dec(x_335);
x_342 = lean_box(0);
x_273 = x_342;
x_274 = x_336;
goto block_293;
}
}
}
}
}
else
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_370 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_371 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_370, x_264, x_6, x_7, x_8, x_9, x_10, x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_374 = x_371;
} else {
 lean_dec_ref(x_371);
 x_374 = lean_box(0);
}
if (lean_is_scalar(x_374)) {
 x_375 = lean_alloc_ctor(1, 2, 0);
} else {
 x_375 = x_374;
}
lean_ctor_set(x_375, 0, x_372);
lean_ctor_set(x_375, 1, x_373);
return x_375;
}
}
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; uint8_t x_393; uint8_t x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_376 = lean_ctor_get(x_13, 0);
x_377 = lean_ctor_get(x_13, 1);
x_378 = lean_ctor_get(x_13, 2);
x_379 = lean_ctor_get(x_13, 3);
x_380 = lean_ctor_get(x_13, 4);
lean_inc(x_380);
lean_inc(x_379);
lean_inc(x_378);
lean_inc(x_377);
lean_inc(x_376);
lean_dec(x_13);
x_381 = lean_unsigned_to_nat(1u);
x_382 = lean_nat_add(x_379, x_381);
x_383 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_383, 0, x_376);
lean_ctor_set(x_383, 1, x_377);
lean_ctor_set(x_383, 2, x_378);
lean_ctor_set(x_383, 3, x_382);
lean_ctor_set(x_383, 4, x_380);
x_384 = lean_st_ref_set(x_6, x_383, x_14);
x_385 = lean_ctor_get(x_384, 1);
lean_inc(x_385);
lean_dec(x_384);
x_386 = lean_ctor_get(x_5, 0);
lean_inc(x_386);
x_387 = lean_ctor_get(x_5, 1);
lean_inc(x_387);
x_388 = lean_ctor_get(x_5, 2);
lean_inc(x_388);
x_389 = lean_ctor_get(x_5, 3);
lean_inc(x_389);
x_390 = lean_ctor_get(x_5, 4);
lean_inc(x_390);
x_391 = lean_ctor_get(x_5, 5);
lean_inc(x_391);
x_392 = lean_ctor_get(x_5, 6);
lean_inc(x_392);
x_393 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_394 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 x_395 = x_5;
} else {
 lean_dec_ref(x_5);
 x_395 = lean_box(0);
}
lean_inc(x_379);
lean_inc(x_392);
lean_inc(x_391);
lean_inc(x_390);
lean_inc(x_389);
lean_inc(x_388);
lean_inc(x_387);
lean_inc(x_386);
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(0, 8, 2);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_386);
lean_ctor_set(x_396, 1, x_387);
lean_ctor_set(x_396, 2, x_388);
lean_ctor_set(x_396, 3, x_389);
lean_ctor_set(x_396, 4, x_390);
lean_ctor_set(x_396, 5, x_391);
lean_ctor_set(x_396, 6, x_392);
lean_ctor_set(x_396, 7, x_379);
lean_ctor_set_uint8(x_396, sizeof(void*)*8, x_393);
lean_ctor_set_uint8(x_396, sizeof(void*)*8 + 1, x_394);
x_397 = lean_ctor_get(x_9, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_9, 1);
lean_inc(x_398);
x_399 = lean_ctor_get(x_9, 2);
lean_inc(x_399);
x_400 = lean_ctor_get(x_9, 3);
lean_inc(x_400);
x_401 = lean_nat_dec_eq(x_398, x_399);
if (x_401 == 0)
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_426; lean_object* x_427; lean_object* x_476; uint8_t x_477; 
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 x_402 = x_9;
} else {
 lean_dec_ref(x_9);
 x_402 = lean_box(0);
}
x_403 = lean_nat_add(x_398, x_381);
lean_dec(x_398);
lean_inc(x_399);
lean_inc(x_403);
lean_inc(x_397);
if (lean_is_scalar(x_402)) {
 x_404 = lean_alloc_ctor(0, 4, 0);
} else {
 x_404 = x_402;
}
lean_ctor_set(x_404, 0, x_397);
lean_ctor_set(x_404, 1, x_403);
lean_ctor_set(x_404, 2, x_399);
lean_ctor_set(x_404, 3, x_400);
x_476 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_477 = l_Lean_checkTraceOption(x_397, x_476);
lean_dec(x_397);
if (x_477 == 0)
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; 
x_478 = lean_st_ref_get(x_10, x_385);
x_479 = lean_ctor_get(x_478, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_478, 1);
lean_inc(x_480);
lean_dec(x_478);
x_481 = lean_ctor_get(x_479, 0);
lean_inc(x_481);
lean_dec(x_479);
x_426 = x_481;
x_427 = x_480;
goto block_475;
}
else
{
lean_object* x_482; 
lean_inc(x_4);
x_482 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_482, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; 
x_483 = l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1;
x_484 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_484, 0, x_483);
lean_ctor_set(x_484, 1, x_482);
x_485 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_476, x_484, x_396, x_6, x_7, x_8, x_404, x_10, x_385);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
lean_dec(x_485);
x_487 = lean_st_ref_get(x_10, x_486);
x_488 = lean_ctor_get(x_487, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_487, 1);
lean_inc(x_489);
lean_dec(x_487);
x_490 = lean_ctor_get(x_488, 0);
lean_inc(x_490);
lean_dec(x_488);
x_426 = x_490;
x_427 = x_489;
goto block_475;
}
else
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; 
x_491 = lean_ctor_get(x_1, 0);
lean_inc(x_491);
x_492 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_492, 0, x_491);
x_493 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_494 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_494, 0, x_492);
lean_ctor_set(x_494, 1, x_493);
x_495 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_495, 0, x_494);
lean_ctor_set(x_495, 1, x_482);
x_496 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_476, x_495, x_396, x_6, x_7, x_8, x_404, x_10, x_385);
x_497 = lean_ctor_get(x_496, 1);
lean_inc(x_497);
lean_dec(x_496);
x_498 = lean_st_ref_get(x_10, x_497);
x_499 = lean_ctor_get(x_498, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_498, 1);
lean_inc(x_500);
lean_dec(x_498);
x_501 = lean_ctor_get(x_499, 0);
lean_inc(x_501);
lean_dec(x_499);
x_426 = x_501;
x_427 = x_500;
goto block_475;
}
}
block_425:
{
if (lean_obj_tag(x_405) == 0)
{
lean_dec(x_392);
lean_dec(x_391);
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_387);
lean_dec(x_386);
lean_dec(x_379);
if (x_3 == 0)
{
lean_object* x_407; 
x_407 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_396, x_6, x_7, x_8, x_404, x_10, x_406);
return x_407;
}
else
{
lean_object* x_408; 
lean_inc(x_10);
lean_inc(x_404);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_4);
x_408 = l___private_Lean_Elab_Term_14__useImplicitLambda_x3f(x_4, x_1, x_396, x_6, x_7, x_8, x_404, x_10, x_406);
if (lean_obj_tag(x_408) == 0)
{
lean_object* x_409; 
x_409 = lean_ctor_get(x_408, 0);
lean_inc(x_409);
if (lean_obj_tag(x_409) == 0)
{
lean_object* x_410; lean_object* x_411; 
x_410 = lean_ctor_get(x_408, 1);
lean_inc(x_410);
lean_dec(x_408);
x_411 = l___private_Lean_Elab_Term_9__elabUsingElabFns(x_4, x_1, x_2, x_396, x_6, x_7, x_8, x_404, x_10, x_410);
return x_411;
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
lean_dec(x_1);
x_412 = lean_ctor_get(x_408, 1);
lean_inc(x_412);
lean_dec(x_408);
x_413 = lean_ctor_get(x_409, 0);
lean_inc(x_413);
lean_dec(x_409);
x_414 = l_Array_empty___closed__1;
x_415 = l___private_Lean_Elab_Term_16__elabImplicitLambda___main(x_4, x_2, x_413, x_414, x_396, x_6, x_7, x_8, x_404, x_10, x_412);
return x_415;
}
}
else
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
lean_dec(x_404);
lean_dec(x_396);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_416 = lean_ctor_get(x_408, 0);
lean_inc(x_416);
x_417 = lean_ctor_get(x_408, 1);
lean_inc(x_417);
if (lean_is_exclusive(x_408)) {
 lean_ctor_release(x_408, 0);
 lean_ctor_release(x_408, 1);
 x_418 = x_408;
} else {
 lean_dec_ref(x_408);
 x_418 = lean_box(0);
}
if (lean_is_scalar(x_418)) {
 x_419 = lean_alloc_ctor(1, 2, 0);
} else {
 x_419 = x_418;
}
lean_ctor_set(x_419, 0, x_416);
lean_ctor_set(x_419, 1, x_417);
return x_419;
}
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_396);
x_420 = lean_ctor_get(x_405, 0);
lean_inc(x_420);
lean_dec(x_405);
lean_inc(x_420);
x_421 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_421, 0, x_4);
lean_ctor_set(x_421, 1, x_420);
x_422 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_422, 0, x_421);
lean_ctor_set(x_422, 1, x_392);
x_423 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_423, 0, x_386);
lean_ctor_set(x_423, 1, x_387);
lean_ctor_set(x_423, 2, x_388);
lean_ctor_set(x_423, 3, x_389);
lean_ctor_set(x_423, 4, x_390);
lean_ctor_set(x_423, 5, x_391);
lean_ctor_set(x_423, 6, x_422);
lean_ctor_set(x_423, 7, x_379);
lean_ctor_set_uint8(x_423, sizeof(void*)*8, x_393);
lean_ctor_set_uint8(x_423, sizeof(void*)*8 + 1, x_394);
x_4 = x_420;
x_5 = x_423;
x_9 = x_404;
x_11 = x_406;
goto _start;
}
}
block_475:
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_428 = l_Lean_Elab_Term_getCurrMacroScope(x_396, x_6, x_7, x_8, x_404, x_10, x_427);
x_429 = lean_ctor_get(x_428, 0);
lean_inc(x_429);
x_430 = lean_ctor_get(x_428, 1);
lean_inc(x_430);
lean_dec(x_428);
x_431 = lean_st_ref_get(x_10, x_430);
x_432 = lean_ctor_get(x_431, 0);
lean_inc(x_432);
x_433 = lean_ctor_get(x_431, 1);
lean_inc(x_433);
lean_dec(x_431);
x_434 = lean_ctor_get(x_432, 0);
lean_inc(x_434);
lean_dec(x_432);
x_435 = lean_st_ref_get(x_6, x_433);
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_436, 3);
lean_inc(x_438);
lean_dec(x_436);
x_439 = lean_environment_main_module(x_434);
x_440 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_429);
lean_ctor_set(x_440, 2, x_403);
lean_ctor_set(x_440, 3, x_399);
lean_inc(x_4);
x_441 = l_Lean_Elab_getMacros(x_426, x_4, x_440, x_438);
lean_dec(x_426);
if (lean_obj_tag(x_441) == 0)
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
x_442 = lean_ctor_get(x_441, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_441, 1);
lean_inc(x_443);
lean_dec(x_441);
x_444 = lean_st_ref_take(x_6, x_437);
x_445 = lean_ctor_get(x_444, 0);
lean_inc(x_445);
x_446 = lean_ctor_get(x_444, 1);
lean_inc(x_446);
lean_dec(x_444);
x_447 = lean_ctor_get(x_445, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_445, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_445, 2);
lean_inc(x_449);
x_450 = lean_ctor_get(x_445, 4);
lean_inc(x_450);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 lean_ctor_release(x_445, 3);
 lean_ctor_release(x_445, 4);
 x_451 = x_445;
} else {
 lean_dec_ref(x_445);
 x_451 = lean_box(0);
}
if (lean_is_scalar(x_451)) {
 x_452 = lean_alloc_ctor(0, 5, 0);
} else {
 x_452 = x_451;
}
lean_ctor_set(x_452, 0, x_447);
lean_ctor_set(x_452, 1, x_448);
lean_ctor_set(x_452, 2, x_449);
lean_ctor_set(x_452, 3, x_443);
lean_ctor_set(x_452, 4, x_450);
x_453 = lean_st_ref_set(x_6, x_452, x_446);
x_454 = lean_ctor_get(x_453, 1);
lean_inc(x_454);
lean_dec(x_453);
x_455 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_455, 0, x_442);
x_405 = x_455;
x_406 = x_454;
goto block_425;
}
else
{
lean_object* x_456; 
x_456 = lean_ctor_get(x_441, 0);
lean_inc(x_456);
lean_dec(x_441);
if (lean_obj_tag(x_456) == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
lean_dec(x_392);
lean_dec(x_391);
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_387);
lean_dec(x_386);
lean_dec(x_379);
lean_dec(x_4);
lean_dec(x_1);
x_457 = lean_ctor_get(x_456, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_456, 1);
lean_inc(x_458);
lean_dec(x_456);
x_459 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_459, 0, x_458);
x_460 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_460, 0, x_459);
x_461 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_457, x_460, x_396, x_6, x_7, x_8, x_404, x_10, x_437);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_457);
x_462 = lean_ctor_get(x_461, 0);
lean_inc(x_462);
x_463 = lean_ctor_get(x_461, 1);
lean_inc(x_463);
if (lean_is_exclusive(x_461)) {
 lean_ctor_release(x_461, 0);
 lean_ctor_release(x_461, 1);
 x_464 = x_461;
} else {
 lean_dec_ref(x_461);
 x_464 = lean_box(0);
}
if (lean_is_scalar(x_464)) {
 x_465 = lean_alloc_ctor(1, 2, 0);
} else {
 x_465 = x_464;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_463);
return x_465;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; uint8_t x_472; 
x_466 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___rarg(x_437);
x_467 = lean_ctor_get(x_466, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_466, 1);
lean_inc(x_468);
if (lean_is_exclusive(x_466)) {
 lean_ctor_release(x_466, 0);
 lean_ctor_release(x_466, 1);
 x_469 = x_466;
} else {
 lean_dec_ref(x_466);
 x_469 = lean_box(0);
}
x_470 = lean_ctor_get(x_467, 0);
lean_inc(x_470);
x_471 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_472 = lean_nat_dec_eq(x_471, x_470);
lean_dec(x_470);
if (x_472 == 0)
{
lean_object* x_473; 
lean_dec(x_404);
lean_dec(x_396);
lean_dec(x_392);
lean_dec(x_391);
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_387);
lean_dec(x_386);
lean_dec(x_379);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_469)) {
 x_473 = lean_alloc_ctor(1, 2, 0);
} else {
 x_473 = x_469;
}
lean_ctor_set(x_473, 0, x_467);
lean_ctor_set(x_473, 1, x_468);
return x_473;
}
else
{
lean_object* x_474; 
lean_dec(x_469);
lean_dec(x_467);
x_474 = lean_box(0);
x_405 = x_474;
x_406 = x_468;
goto block_425;
}
}
}
}
}
else
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; 
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
lean_dec(x_397);
lean_dec(x_392);
lean_dec(x_391);
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_387);
lean_dec(x_386);
lean_dec(x_379);
lean_dec(x_4);
lean_dec(x_1);
x_502 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_503 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_502, x_396, x_6, x_7, x_8, x_9, x_10, x_385);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_504 = lean_ctor_get(x_503, 0);
lean_inc(x_504);
x_505 = lean_ctor_get(x_503, 1);
lean_inc(x_505);
if (lean_is_exclusive(x_503)) {
 lean_ctor_release(x_503, 0);
 lean_ctor_release(x_503, 1);
 x_506 = x_503;
} else {
 lean_dec_ref(x_503);
 x_506 = lean_box(0);
}
if (lean_is_scalar(x_506)) {
 x_507 = lean_alloc_ctor(1, 2, 0);
} else {
 x_507 = x_506;
}
lean_ctor_set(x_507, 0, x_504);
lean_ctor_set(x_507, 1, x_505);
return x_507;
}
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_Term_17__elabTermAux___main(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Term_17__elabTermAux(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Term_17__elabTermAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Term_17__elabTermAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_Term_17__elabTermAux(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabTerm(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_13);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_ctor_set(x_8, 3, x_15);
x_16 = 1;
x_17 = l___private_Lean_Elab_Term_17__elabTermAux___main(x_2, x_3, x_16, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_22 = l_Lean_replaceRef(x_1, x_21);
x_23 = l_Lean_replaceRef(x_22, x_21);
lean_dec(x_22);
x_24 = l_Lean_replaceRef(x_23, x_21);
lean_dec(x_21);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
x_26 = 1;
x_27 = l___private_Lean_Elab_Term_17__elabTermAux___main(x_2, x_3, x_26, x_1, x_4, x_5, x_6, x_7, x_25, x_9, x_10);
return x_27;
}
}
}
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_8, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_1);
x_17 = l_Lean_replaceRef(x_16, x_15);
lean_dec(x_16);
x_18 = l_Lean_replaceRef(x_17, x_15);
lean_dec(x_15);
lean_dec(x_17);
lean_ctor_set(x_8, 3, x_18);
x_19 = l_Lean_Elab_Term_ensureHasType(x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_5);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_24 = l_Lean_replaceRef(x_1, x_23);
lean_dec(x_1);
x_25 = l_Lean_replaceRef(x_24, x_23);
lean_dec(x_24);
x_26 = l_Lean_replaceRef(x_25, x_23);
lean_dec(x_23);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_26);
x_28 = l_Lean_Elab_Term_ensureHasType(x_2, x_12, x_4, x_5, x_6, x_7, x_27, x_9, x_13);
lean_dec(x_5);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l___private_Lean_Elab_Term_17__elabTermAux___main(x_2, x_3, x_11, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_4, 6);
lean_inc(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_4, 6, x_17);
x_18 = 1;
x_19 = l_Lean_Elab_Term_elabTerm(x_12, x_3, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 5);
x_26 = lean_ctor_get(x_4, 6);
x_27 = lean_ctor_get(x_4, 7);
x_28 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_29 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
lean_inc(x_12);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_12);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
x_32 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
lean_ctor_set(x_32, 2, x_22);
lean_ctor_set(x_32, 3, x_23);
lean_ctor_set(x_32, 4, x_24);
lean_ctor_set(x_32, 5, x_25);
lean_ctor_set(x_32, 6, x_31);
lean_ctor_set(x_32, 7, x_27);
lean_ctor_set_uint8(x_32, sizeof(void*)*8, x_28);
lean_ctor_set_uint8(x_32, sizeof(void*)*8 + 1, x_29);
x_33 = 1;
x_34 = l_Lean_Elab_Term_elabTerm(x_12, x_3, x_33, x_32, x_5, x_6, x_7, x_8, x_9, x_13);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_11);
if (x_35 == 0)
{
return x_11;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_11, 0);
x_37 = lean_ctor_get(x_11, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_11);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = 1;
x_11 = lean_box(0);
lean_inc(x_4);
x_12 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_9, x_10, x_11, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_mvarId_x21(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_15);
x_16 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_15, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_13);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_16, 0);
lean_dec(x_27);
lean_ctor_set(x_16, 0, x_13);
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_dec(x_16);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkInstMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_mkInstMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CoeSort");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__5;
x_2 = l_Lean_MessageData_ofList___closed__3;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coeSort");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = 0;
x_11 = lean_box(0);
lean_inc(x_5);
x_12 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_15 = l___private_Lean_Meta_InferType_4__getLevelImp(x_1, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_13);
x_18 = l___private_Lean_Meta_InferType_4__getLevelImp(x_13, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_22);
x_24 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__2;
lean_inc(x_23);
x_25 = l_Lean_mkConst(x_24, x_23);
x_26 = l_Lean_mkAppStx___closed__9;
lean_inc(x_1);
x_27 = lean_array_push(x_26, x_1);
lean_inc(x_13);
x_28 = lean_array_push(x_27, x_13);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_28, x_28, x_29, x_25);
lean_dec(x_28);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = 1;
lean_inc(x_5);
x_33 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_31, x_32, x_11, x_5, x_6, x_7, x_8, x_20);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Expr_mvarId_x21(x_34);
x_46 = lean_ctor_get(x_7, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_7, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_7, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_7, 3);
lean_inc(x_49);
x_50 = 0;
x_51 = l_Lean_Elab_setMacroStackOption(x_46, x_50);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_48);
lean_ctor_set(x_52, 3, x_49);
lean_inc(x_8);
lean_inc(x_52);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_53 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_36, x_3, x_4, x_5, x_6, x_52, x_8, x_35);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__5;
lean_inc(x_3);
x_58 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_57, x_3, x_4, x_5, x_6, x_52, x_8, x_56);
lean_dec(x_52);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_37 = x_59;
x_38 = x_60;
goto block_45;
}
else
{
uint8_t x_61; 
lean_dec(x_52);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_61 = !lean_is_exclusive(x_53);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_53, 0);
lean_dec(x_62);
x_63 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__8;
x_64 = l_Lean_mkConst(x_63, x_23);
x_65 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_66 = lean_array_push(x_65, x_1);
x_67 = lean_array_push(x_66, x_13);
x_68 = lean_array_push(x_67, x_2);
x_69 = lean_array_push(x_68, x_34);
x_70 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_69, x_69, x_29, x_64);
lean_dec(x_69);
lean_ctor_set(x_53, 0, x_70);
return x_53;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_71 = lean_ctor_get(x_53, 1);
lean_inc(x_71);
lean_dec(x_53);
x_72 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__8;
x_73 = l_Lean_mkConst(x_72, x_23);
x_74 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_75 = lean_array_push(x_74, x_1);
x_76 = lean_array_push(x_75, x_13);
x_77 = lean_array_push(x_76, x_2);
x_78 = lean_array_push(x_77, x_34);
x_79 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_78, x_78, x_29, x_73);
lean_dec(x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_71);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_52);
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_81 = lean_ctor_get(x_53, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_53, 1);
lean_inc(x_82);
lean_dec(x_53);
x_37 = x_81;
x_38 = x_82;
goto block_45;
}
block_45:
{
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__6;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_37);
x_43 = l___private_Lean_Elab_Term_18__tryCoeSort___closed__5;
x_44 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_44;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_18);
if (x_83 == 0)
{
return x_18;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_18, 0);
x_85 = lean_ctor_get(x_18, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_18);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_15);
if (x_87 == 0)
{
return x_15;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_15, 0);
x_89 = lean_ctor_get(x_15, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_15);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_18__tryCoeSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_18__tryCoeSort(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_isType___at_Lean_Elab_Term_ensureType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_InferType_21__isTypeImp___at_Lean_Meta_isType___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_st_ref_take(x_1, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_6);
x_13 = l_Lean_MetavarContext_addLevelMVarDecl(x_12, x_6);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_1, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = l_Lean_mkLevelMVar(x_6);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_mkLevelMVar(x_6);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_6);
x_24 = l_Lean_MetavarContext_addLevelMVarDecl(x_21, x_6);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
x_26 = lean_st_ref_set(x_1, x_25, x_10);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = l_Lean_mkLevelMVar(x_6);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg___boxed), 4, 0);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_ensureType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l___private_Lean_Meta_InferType_21__isTypeImp___at_Lean_Meta_isType___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_5, x_6, x_7, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_mkSort(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_20 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_14, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l___private_Lean_Elab_Term_18__tryCoeSort(x_14, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_20, 0);
lean_dec(x_26);
lean_ctor_set(x_20, 0, x_1);
return x_20;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_9, 0);
lean_dec(x_38);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_dec(x_9);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_1);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_9);
if (x_41 == 0)
{
return x_9;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_9, 0);
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_9);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Meta_isType___at_Lean_Elab_Term_ensureType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_isType___at_Lean_Elab_Term_ensureType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_ensureType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_ensureType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_9 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_mkSort(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Lean_Elab_Term_elabTerm(x_1, x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_6, 3);
x_20 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_1);
x_21 = l_Lean_replaceRef(x_20, x_19);
lean_dec(x_20);
x_22 = l_Lean_replaceRef(x_21, x_19);
lean_dec(x_19);
lean_dec(x_21);
lean_ctor_set(x_6, 3, x_22);
x_23 = l_Lean_Elab_Term_ensureType(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_6, 0);
x_25 = lean_ctor_get(x_6, 1);
x_26 = lean_ctor_get(x_6, 2);
x_27 = lean_ctor_get(x_6, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_6);
x_28 = l_Lean_replaceRef(x_1, x_27);
lean_dec(x_1);
x_29 = l_Lean_replaceRef(x_28, x_27);
lean_dec(x_28);
x_30 = l_Lean_replaceRef(x_29, x_27);
lean_dec(x_27);
lean_dec(x_29);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_25);
lean_ctor_set(x_31, 2, x_26);
lean_ctor_set(x_31, 3, x_30);
x_32 = l_Lean_Elab_Term_ensureType(x_16, x_2, x_3, x_4, x_5, x_31, x_7, x_17);
lean_dec(x_3);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_15);
if (x_33 == 0)
{
return x_15;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_15);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l___private_Lean_MonadEnv_1__mkAuxNameAux___main(x_13, x_1, x_2);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_MonadEnv_1__mkAuxNameAux___main(x_17, x_1, x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("auxiliary declaration cannot be created when declaration name is not available");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkAuxName___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkAuxName___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_mkAuxName___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Name_append___main(x_12, x_1);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_15;
}
}
}
lean_object* l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_mkAuxName___at_Lean_Elab_Term_mkAuxName___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkAuxName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_mkAuxName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabProp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_getAppArgs___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProp___rarg), 1, 0);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabProp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabProp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("prop");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProp___boxed), 8, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Syntax_isNone(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Elab_Term_elabLevel(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_levelZero;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_19__elabOptLevel(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabSort(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Term_19__elabOptLevel(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_mkSort(x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Lean_mkSort(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabSort(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Expr_ctorName___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSort___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabSort___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabTypeStx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Term_19__elabOptLevel(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_mkLevelSucc(x_14);
x_16 = l_Lean_mkSort(x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = l_Lean_mkLevelSucc(x_17);
x_20 = l_Lean_mkSort(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTypeStx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabTypeStx(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTypeStx___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabHole(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = 0;
x_11 = lean_box(0);
lean_inc(x_5);
x_12 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_mvarId_x21(x_13);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Term_registerMVarErrorContext(x_15, x_1, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_13);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Term_elabHole___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabHole(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabHole___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabHole___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_mkHole___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabHole___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_apply_2(x_3, x_4, x_5);
x_12 = l___private_Lean_Meta_Basic_31__withLocalContextImp___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg), 10, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthetic hole has already been defined with an incompatible local context");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthetic hole has already beend defined and delayed assigned with an incompatible local context");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthetic hole has already been defined and assigned to value incompatible with the current context");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabSyntheticHole___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabSyntheticHole___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabSyntheticHole(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_158 = lean_unsigned_to_nat(1u);
x_159 = l_Lean_Syntax_getArg(x_1, x_158);
x_160 = l_Lean_Syntax_isIdent(x_159);
if (x_160 == 0)
{
lean_object* x_161; 
lean_dec(x_159);
x_161 = lean_box(0);
x_10 = x_161;
goto block_157;
}
else
{
lean_object* x_162; 
x_162 = l_Lean_Syntax_getId(x_159);
lean_dec(x_159);
x_10 = x_162;
goto block_157;
}
block_157:
{
uint8_t x_11; 
x_11 = l_Lean_Name_isAnonymous(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_st_ref_get(x_6, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_MetavarContext_findUserName_x3f(x_15, x_10);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_15);
x_17 = 2;
lean_inc(x_5);
x_18 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_17, x_10, x_5, x_6, x_7, x_8, x_14);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Expr_mvarId_x21(x_19);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Term_registerMVarErrorContext(x_21, x_1, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_19);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_16, 0);
lean_inc(x_28);
lean_dec(x_16);
lean_inc(x_28);
x_29 = l_Lean_mkMVar(x_28);
x_30 = l_Lean_Elab_Term_getMVarDecl(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_ctor_get(x_5, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
x_36 = l_Array_empty___closed__1;
lean_inc(x_34);
lean_inc(x_35);
x_37 = l_Lean_LocalContext_isSubPrefixOf(x_35, x_34, x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_free_object(x_30);
lean_dec(x_29);
lean_inc(x_28);
lean_inc(x_15);
x_38 = lean_metavar_ctx_get_expr_assignment(x_15, x_28);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
lean_dec(x_32);
lean_inc(x_28);
x_39 = lean_metavar_ctx_is_delayed_assigned(x_15, x_28);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = l_Lean_LocalContext_isSubPrefixOf(x_34, x_35, x_36);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_41 = l_Lean_Elab_Term_elabSyntheticHole___closed__3;
x_42 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_42;
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_43 = 2;
lean_inc(x_5);
x_44 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_43, x_10, x_5, x_6, x_7, x_8, x_33);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Expr_mvarId_x21(x_45);
x_48 = lean_box(0);
x_49 = l_Lean_Elab_Term_registerMVarErrorContext(x_47, x_1, x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_take(x_6, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_45);
x_56 = l_Lean_MetavarContext_assignExpr(x_55, x_28, x_45);
lean_ctor_set(x_52, 0, x_56);
x_57 = lean_st_ref_set(x_6, x_52, x_53);
lean_dec(x_6);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set(x_57, 0, x_45);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_45);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_52, 0);
x_63 = lean_ctor_get(x_52, 1);
x_64 = lean_ctor_get(x_52, 2);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_52);
lean_inc(x_45);
x_65 = l_Lean_MetavarContext_assignExpr(x_62, x_28, x_45);
x_66 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
lean_ctor_set(x_66, 2, x_64);
x_67 = lean_st_ref_set(x_6, x_66, x_53);
lean_dec(x_6);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_45);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_71 = l_Lean_Elab_Term_elabSyntheticHole___closed__6;
x_72 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_73 = lean_ctor_get(x_38, 0);
lean_inc(x_73);
lean_dec(x_38);
x_74 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_73, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_76 = lean_ctor_get(x_74, 0);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
x_78 = l_Lean_MetavarContext_isWellFormed___main(x_15, x_34, x_76);
x_79 = lean_unbox(x_78);
lean_dec(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_free_object(x_74);
x_80 = lean_ctor_get(x_32, 4);
lean_inc(x_80);
lean_dec(x_32);
x_81 = l_Lean_indentExpr(x_76);
x_82 = l_Lean_Elab_Term_elabSyntheticHole___closed__9;
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_84, 0, x_83);
x_85 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_35, x_80, x_84, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
return x_85;
}
else
{
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_74;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_86 = lean_ctor_get(x_74, 0);
x_87 = lean_ctor_get(x_74, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_74);
lean_inc(x_86);
x_88 = l_Lean_MetavarContext_isWellFormed___main(x_15, x_34, x_86);
x_89 = lean_unbox(x_88);
lean_dec(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_32, 4);
lean_inc(x_90);
lean_dec(x_32);
x_91 = l_Lean_indentExpr(x_86);
x_92 = l_Lean_Elab_Term_elabSyntheticHole___closed__9;
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_94, 0, x_93);
x_95 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_35, x_90, x_94, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
return x_95;
}
else
{
lean_object* x_96; 
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_86);
lean_ctor_set(x_96, 1, x_87);
return x_96;
}
}
}
}
else
{
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_97 = lean_ctor_get(x_30, 0);
x_98 = lean_ctor_get(x_30, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_30);
x_99 = lean_ctor_get(x_5, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
x_101 = l_Array_empty___closed__1;
lean_inc(x_99);
lean_inc(x_100);
x_102 = l_Lean_LocalContext_isSubPrefixOf(x_100, x_99, x_101);
if (x_102 == 0)
{
lean_object* x_103; 
lean_dec(x_29);
lean_inc(x_28);
lean_inc(x_15);
x_103 = lean_metavar_ctx_get_expr_assignment(x_15, x_28);
if (lean_obj_tag(x_103) == 0)
{
uint8_t x_104; 
lean_dec(x_97);
lean_inc(x_28);
x_104 = lean_metavar_ctx_is_delayed_assigned(x_15, x_28);
if (x_104 == 0)
{
uint8_t x_105; 
x_105 = l_Lean_LocalContext_isSubPrefixOf(x_99, x_100, x_101);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_106 = l_Lean_Elab_Term_elabSyntheticHole___closed__3;
x_107 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_106, x_3, x_4, x_5, x_6, x_7, x_8, x_98);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_107;
}
else
{
uint8_t x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_108 = 2;
lean_inc(x_5);
x_109 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_108, x_10, x_5, x_6, x_7, x_8, x_98);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = l_Lean_Expr_mvarId_x21(x_110);
x_113 = lean_box(0);
x_114 = l_Lean_Elab_Term_registerMVarErrorContext(x_112, x_1, x_113, x_3, x_4, x_5, x_6, x_7, x_8, x_111);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
x_116 = lean_st_ref_take(x_6, x_115);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_ctor_get(x_117, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_117, 2);
lean_inc(x_121);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 lean_ctor_release(x_117, 2);
 x_122 = x_117;
} else {
 lean_dec_ref(x_117);
 x_122 = lean_box(0);
}
lean_inc(x_110);
x_123 = l_Lean_MetavarContext_assignExpr(x_119, x_28, x_110);
if (lean_is_scalar(x_122)) {
 x_124 = lean_alloc_ctor(0, 3, 0);
} else {
 x_124 = x_122;
}
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_120);
lean_ctor_set(x_124, 2, x_121);
x_125 = lean_st_ref_set(x_6, x_124, x_118);
lean_dec(x_6);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_127 = x_125;
} else {
 lean_dec_ref(x_125);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_110);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_129 = l_Lean_Elab_Term_elabSyntheticHole___closed__6;
x_130 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_129, x_3, x_4, x_5, x_6, x_7, x_8, x_98);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_dec(x_28);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_131 = lean_ctor_get(x_103, 0);
lean_inc(x_131);
lean_dec(x_103);
x_132 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_131, x_3, x_4, x_5, x_6, x_7, x_8, x_98);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
lean_inc(x_133);
x_136 = l_Lean_MetavarContext_isWellFormed___main(x_15, x_99, x_133);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_135);
x_138 = lean_ctor_get(x_97, 4);
lean_inc(x_138);
lean_dec(x_97);
x_139 = l_Lean_indentExpr(x_133);
x_140 = l_Lean_Elab_Term_elabSyntheticHole___closed__9;
x_141 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_139);
x_142 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_142, 0, x_141);
x_143 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_100, x_138, x_142, x_3, x_4, x_5, x_6, x_7, x_8, x_134);
return x_143;
}
else
{
lean_object* x_144; 
lean_dec(x_100);
lean_dec(x_97);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_scalar(x_135)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_135;
}
lean_ctor_set(x_144, 0, x_133);
lean_ctor_set(x_144, 1, x_134);
return x_144;
}
}
}
else
{
lean_object* x_145; 
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_97);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_29);
lean_ctor_set(x_145, 1, x_98);
return x_145;
}
}
}
}
else
{
uint8_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_146 = 2;
lean_inc(x_5);
x_147 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_2, x_146, x_10, x_5, x_6, x_7, x_8, x_9);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = l_Lean_Expr_mvarId_x21(x_148);
x_151 = lean_box(0);
x_152 = l_Lean_Elab_Term_registerMVarErrorContext(x_150, x_1, x_151, x_3, x_4, x_5, x_6, x_7, x_8, x_149);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_152, 0);
lean_dec(x_154);
lean_ctor_set(x_152, 0, x_148);
return x_152;
}
else
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
lean_dec(x_152);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_148);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("syntheticHole");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSyntheticHole), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabSyntheticHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_20__mkTacticMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = 2;
x_12 = lean_box(0);
lean_inc(x_5);
x_13 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_10, x_11, x_12, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_mvarId_x21(x_14);
x_17 = lean_ctor_get(x_7, 3);
lean_inc(x_17);
x_18 = l_Lean_Elab_Term_getDeclName_x3f(x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_2);
x_22 = l_Lean_Elab_Term_registerSyntheticMVar(x_17, x_16, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_7);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_14);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
lean_object* l___private_Lean_Elab_Term_20__mkTacticMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_20__mkTacticMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'by' tactic, expected type has not been provided");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabByTactic___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabByTactic___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabByTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_elabByTactic___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Term_20__mkTacticMVar(x_12, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_13;
}
}
}
lean_object* l_Lean_Elab_Term_elabByTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabByTactic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("byTactic");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabByTactic___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Prod.mk");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Prod_hasQuote___rarg___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_2);
x_11 = l_Lean_Syntax_inhabited;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = l_Lean_Prod_hasQuote___rarg___closed__4;
x_16 = l_Lean_addMacroScope(x_14, x_15, x_13);
x_17 = l_Lean_SourceInfo_inhabited___closed__1;
x_18 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3;
x_19 = l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5;
x_20 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_16);
lean_ctor_set(x_20, 3, x_19);
x_21 = l_Array_empty___closed__1;
x_22 = lean_array_push(x_21, x_20);
x_23 = lean_array_push(x_21, x_12);
x_24 = lean_array_push(x_23, x_3);
x_25 = l_Lean_nullKind___closed__2;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_22, x_26);
x_28 = l_Lean_mkAppStx___closed__8;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_2 = x_10;
x_3 = x_29;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_21__mkPairsAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_21__mkPairsAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_21__mkPairsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_21__mkPairsAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkPairs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_1);
x_8 = l___private_Lean_Elab_Term_21__mkPairsAux___main(x_1, x_6, x_7, x_2, x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_mkPairs(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Term_22__elabCDot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_37 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_st_ref_get(x_8, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_st_ref_get(x_4, x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_7, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_7, 2);
lean_inc(x_49);
x_50 = lean_environment_main_module(x_43);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_38);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_49);
lean_inc(x_1);
x_52 = l_Lean_Elab_Term_expandCDot_x3f(x_1, x_51, x_47);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_st_ref_take(x_4, x_46);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_56, 3);
lean_dec(x_59);
lean_ctor_set(x_56, 3, x_54);
x_60 = lean_st_ref_set(x_4, x_56, x_57);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_10 = x_53;
x_11 = x_61;
goto block_36;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
x_64 = lean_ctor_get(x_56, 2);
x_65 = lean_ctor_get(x_56, 4);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_62);
lean_ctor_set(x_66, 1, x_63);
lean_ctor_set(x_66, 2, x_64);
lean_ctor_set(x_66, 3, x_54);
lean_ctor_set(x_66, 4, x_65);
x_67 = lean_st_ref_set(x_4, x_66, x_57);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_10 = x_53;
x_11 = x_68;
goto block_36;
}
}
else
{
lean_object* x_69; 
lean_dec(x_2);
lean_dec(x_1);
x_69 = lean_ctor_get(x_52, 0);
lean_inc(x_69);
lean_dec(x_52);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_70, x_73, x_3, x_4, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_70);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
return x_74;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_74, 0);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_74);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; uint8_t x_80; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_79 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___rarg(x_46);
x_80 = !lean_is_exclusive(x_79);
if (x_80 == 0)
{
return x_79;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_79, 0);
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_79);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
block_36:
{
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 1;
x_13 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_3, 6);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_3, 6, x_18);
x_19 = 1;
x_20 = l_Lean_Elab_Term_elabTerm(x_14, x_2, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
x_23 = lean_ctor_get(x_3, 2);
x_24 = lean_ctor_get(x_3, 3);
x_25 = lean_ctor_get(x_3, 4);
x_26 = lean_ctor_get(x_3, 5);
x_27 = lean_ctor_get(x_3, 6);
x_28 = lean_ctor_get(x_3, 7);
x_29 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_30 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
lean_inc(x_14);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
x_33 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_33, 0, x_21);
lean_ctor_set(x_33, 1, x_22);
lean_ctor_set(x_33, 2, x_23);
lean_ctor_set(x_33, 3, x_24);
lean_ctor_set(x_33, 4, x_25);
lean_ctor_set(x_33, 5, x_26);
lean_ctor_set(x_33, 6, x_32);
lean_ctor_set(x_33, 7, x_28);
lean_ctor_set_uint8(x_33, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_33, sizeof(void*)*8 + 1, x_30);
x_34 = 1;
x_35 = l_Lean_Elab_Term_elabTerm(x_14, x_2, x_34, x_33, x_4, x_5, x_6, x_7, x_8, x_11);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_22__elabCDot___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_array_push(x_4, x_7);
x_9 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_9;
x_4 = x_8;
goto _start;
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected parentheses notation");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabParen___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabParen___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tupleTail");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_elabParen___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabParen(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_34; lean_object* x_152; uint8_t x_153; 
x_152 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
lean_inc(x_1);
x_153 = l_Lean_Syntax_isOfKind(x_1, x_152);
if (x_153 == 0)
{
uint8_t x_154; 
x_154 = 0;
x_34 = x_154;
goto block_151;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_155 = l_Lean_Syntax_getArgs(x_1);
x_156 = lean_array_get_size(x_155);
lean_dec(x_155);
x_157 = lean_unsigned_to_nat(3u);
x_158 = lean_nat_dec_eq(x_156, x_157);
lean_dec(x_156);
x_34 = x_158;
goto block_151;
}
block_33:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 6);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_3, 6, x_15);
x_16 = 1;
x_17 = l_Lean_Elab_Term_elabTerm(x_10, x_2, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_18 = lean_ctor_get(x_3, 0);
x_19 = lean_ctor_get(x_3, 1);
x_20 = lean_ctor_get(x_3, 2);
x_21 = lean_ctor_get(x_3, 3);
x_22 = lean_ctor_get(x_3, 4);
x_23 = lean_ctor_get(x_3, 5);
x_24 = lean_ctor_get(x_3, 6);
x_25 = lean_ctor_get(x_3, 7);
x_26 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_27 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_3);
lean_inc(x_10);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
x_30 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_19);
lean_ctor_set(x_30, 2, x_20);
lean_ctor_set(x_30, 3, x_21);
lean_ctor_set(x_30, 4, x_22);
lean_ctor_set(x_30, 5, x_23);
lean_ctor_set(x_30, 6, x_29);
lean_ctor_set(x_30, 7, x_25);
lean_ctor_set_uint8(x_30, sizeof(void*)*8, x_26);
lean_ctor_set_uint8(x_30, sizeof(void*)*8 + 1, x_27);
x_31 = 1;
x_32 = l_Lean_Elab_Term_elabTerm(x_10, x_2, x_31, x_30, x_4, x_5, x_6, x_7, x_8, x_11);
return x_32;
}
}
block_151:
{
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_2);
lean_dec(x_1);
x_35 = l_Lean_Elab_Term_elabParen___closed__3;
x_36 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_140; uint8_t x_141; 
x_37 = lean_unsigned_to_nat(1u);
x_38 = l_Lean_Syntax_getArg(x_1, x_37);
x_140 = l_Lean_nullKind___closed__2;
lean_inc(x_38);
x_141 = l_Lean_Syntax_isOfKind(x_38, x_140);
if (x_141 == 0)
{
uint8_t x_142; 
x_142 = 0;
x_39 = x_142;
goto block_139;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_143 = l_Lean_Syntax_getArgs(x_38);
x_144 = lean_array_get_size(x_143);
lean_dec(x_143);
x_145 = lean_unsigned_to_nat(0u);
x_146 = lean_nat_dec_eq(x_144, x_145);
if (x_146 == 0)
{
lean_object* x_147; uint8_t x_148; 
x_147 = lean_unsigned_to_nat(2u);
x_148 = lean_nat_dec_eq(x_144, x_147);
lean_dec(x_144);
x_39 = x_148;
goto block_139;
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_144);
lean_dec(x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_149 = l_Lean_unitToExpr___lambda__1___closed__3;
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_9);
return x_150;
}
}
block_139:
{
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_2);
lean_dec(x_1);
x_40 = l_Lean_Elab_Term_elabParen___closed__3;
x_41 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; 
x_42 = lean_unsigned_to_nat(0u);
x_43 = l_Lean_Syntax_getArg(x_38, x_42);
x_44 = l_Lean_Syntax_getArg(x_38, x_37);
lean_dec(x_38);
x_45 = l_Lean_nullKind___closed__2;
lean_inc(x_44);
x_46 = l_Lean_Syntax_isOfKind(x_44, x_45);
if (x_46 == 0)
{
uint8_t x_135; 
x_135 = 0;
x_47 = x_135;
goto block_134;
}
else
{
lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_136 = l_Lean_Syntax_getArgs(x_44);
x_137 = lean_array_get_size(x_136);
lean_dec(x_136);
x_138 = lean_nat_dec_eq(x_137, x_37);
lean_dec(x_137);
x_47 = x_138;
goto block_134;
}
block_134:
{
if (x_47 == 0)
{
lean_dec(x_1);
if (x_46 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_2);
x_48 = l_Lean_Elab_Term_elabParen___closed__3;
x_49 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = l_Lean_Syntax_getArgs(x_44);
lean_dec(x_44);
x_51 = lean_array_get_size(x_50);
lean_dec(x_50);
x_52 = lean_nat_dec_eq(x_51, x_42);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_43);
lean_dec(x_2);
x_53 = l_Lean_Elab_Term_elabParen___closed__3;
x_54 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_53, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_54;
}
else
{
lean_object* x_55; 
x_55 = l___private_Lean_Elab_Term_22__elabCDot(x_43, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_55;
}
}
}
else
{
lean_object* x_56; uint8_t x_57; uint8_t x_101; lean_object* x_127; uint8_t x_128; 
x_56 = l_Lean_Syntax_getArg(x_44, x_42);
lean_dec(x_44);
x_127 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_56);
x_128 = l_Lean_Syntax_isOfKind(x_56, x_127);
if (x_128 == 0)
{
uint8_t x_129; 
x_129 = 0;
x_101 = x_129;
goto block_126;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_130 = l_Lean_Syntax_getArgs(x_56);
x_131 = lean_array_get_size(x_130);
lean_dec(x_130);
x_132 = lean_unsigned_to_nat(2u);
x_133 = lean_nat_dec_eq(x_131, x_132);
lean_dec(x_131);
x_101 = x_133;
goto block_126;
}
block_100:
{
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_56);
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
x_58 = l_Lean_Elab_Term_elabParen___closed__3;
x_59 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_60 = l_Lean_Syntax_getArg(x_56, x_37);
lean_dec(x_56);
x_61 = l_Lean_Syntax_getArgs(x_60);
lean_dec(x_60);
x_62 = l_Lean_mkOptionalNode___closed__2;
x_63 = lean_array_push(x_62, x_43);
x_64 = lean_unsigned_to_nat(2u);
x_65 = l_Array_empty___closed__1;
x_66 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_64, x_61, x_42, x_65);
lean_dec(x_61);
x_67 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_66, x_66, x_42, x_63);
lean_dec(x_66);
x_68 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_st_ref_get(x_8, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_ctor_get(x_72, 0);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_st_ref_get(x_4, x_73);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_ctor_get(x_76, 3);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_7, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_7, 2);
lean_inc(x_80);
x_81 = lean_environment_main_module(x_74);
x_82 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_69);
lean_ctor_set(x_82, 2, x_79);
lean_ctor_set(x_82, 3, x_80);
x_83 = l_Lean_Elab_Term_mkPairs(x_67, x_82, x_78);
lean_dec(x_67);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_st_ref_take(x_4, x_77);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = !lean_is_exclusive(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_87, 3);
lean_dec(x_90);
lean_ctor_set(x_87, 3, x_85);
x_91 = lean_st_ref_set(x_4, x_87, x_88);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_10 = x_84;
x_11 = x_92;
goto block_33;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_93 = lean_ctor_get(x_87, 0);
x_94 = lean_ctor_get(x_87, 1);
x_95 = lean_ctor_get(x_87, 2);
x_96 = lean_ctor_get(x_87, 4);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_87);
x_97 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_97, 0, x_93);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_85);
lean_ctor_set(x_97, 4, x_96);
x_98 = lean_st_ref_set(x_4, x_97, x_88);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_10 = x_84;
x_11 = x_99;
goto block_33;
}
}
}
block_126:
{
if (x_101 == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = l_Lean_Elab_Term_elabParen___closed__5;
lean_inc(x_56);
x_103 = l_Lean_Syntax_isOfKind(x_56, x_102);
if (x_103 == 0)
{
uint8_t x_104; 
x_104 = 0;
x_57 = x_104;
goto block_100;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_105 = l_Lean_Syntax_getArgs(x_56);
x_106 = lean_array_get_size(x_105);
lean_dec(x_105);
x_107 = lean_unsigned_to_nat(2u);
x_108 = lean_nat_dec_eq(x_106, x_107);
lean_dec(x_106);
x_57 = x_108;
goto block_100;
}
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
lean_dec(x_1);
x_109 = l_Lean_Syntax_getArg(x_56, x_37);
lean_dec(x_56);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_110 = l_Lean_Elab_Term_elabType(x_109, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_111);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_113);
x_114 = l___private_Lean_Elab_Term_22__elabCDot(x_43, x_113, x_3, x_4, x_5, x_6, x_7, x_8, x_112);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_Elab_Term_ensureHasType(x_113, x_115, x_3, x_4, x_5, x_6, x_7, x_8, x_116);
lean_dec(x_4);
return x_117;
}
else
{
uint8_t x_118; 
lean_dec(x_113);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_118 = !lean_is_exclusive(x_114);
if (x_118 == 0)
{
return x_114;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_114, 0);
x_120 = lean_ctor_get(x_114, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_114);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_43);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_122 = !lean_is_exclusive(x_110);
if (x_122 == 0)
{
return x_110;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_110, 0);
x_124 = lean_ctor_get(x_110, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_110);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParen), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_4 = l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_array_fget(x_3, x_10);
x_12 = l_Lean_mkAppStx___closed__9;
x_13 = lean_array_push(x_12, x_11);
x_14 = lean_array_push(x_13, x_6);
lean_inc(x_2);
x_15 = l_Lean_mkAppStx(x_2, x_14);
x_4 = x_10;
x_5 = lean_box(0);
x_6 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_expandListLit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___private_Init_LeanInit_15__quoteList___main___rarg___closed__7;
x_11 = l_Lean_mkIdentFrom(x_5, x_10);
lean_dec(x_5);
x_12 = l___private_Init_LeanInit_15__quoteList___main___rarg___closed__4;
x_13 = l_Lean_mkIdentFrom(x_9, x_12);
lean_dec(x_9);
x_14 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_15 = l_Array_empty___closed__1;
x_16 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_8, x_14, x_4, x_15);
lean_dec(x_14);
x_17 = lean_array_get_size(x_16);
x_18 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(x_1, x_11, x_16, x_17, lean_box(0), x_13);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandListLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandListLit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("listLit");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandListLit___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected array literal syntax");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.toArray");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_expandArrayLit___closed__2;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_expandArrayLit___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_expandArrayLit___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Array_hasQuote___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandArrayLit___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_List_repr___rarg___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_expandArrayLit___closed__7;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_List_repr___rarg___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arrayLit");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandArrayLit___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_Elab_Term_expandArrayLit___closed__11;
lean_inc(x_1);
x_39 = l_Lean_Syntax_isOfKind(x_1, x_38);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = 0;
x_4 = x_40;
goto block_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = l_Lean_Syntax_getArgs(x_1);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(3u);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_42);
x_4 = x_44;
goto block_37;
}
block_37:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = l_Lean_Elab_Term_expandArrayLit___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_Array_hasQuote___rarg___closed__2;
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_Lean_SourceInfo_inhabited___closed__1;
x_16 = l_Lean_Elab_Term_expandArrayLit___closed__4;
x_17 = l_Lean_Elab_Term_expandArrayLit___closed__6;
x_18 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_17);
x_19 = l_Array_empty___closed__1;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_10, x_10, x_21, x_19);
lean_dec(x_10);
x_23 = l_Lean_nullKind___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Elab_Term_expandArrayLit___closed__8;
x_26 = lean_array_push(x_25, x_24);
x_27 = l_Lean_Elab_Term_expandArrayLit___closed__9;
x_28 = lean_array_push(x_26, x_27);
x_29 = l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_array_push(x_19, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_push(x_20, x_32);
x_34 = l_Lean_mkAppStx___closed__8;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_3);
return x_36;
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandArrayLit), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandArrayLit___closed__11;
x_4 = l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_23__resolveLocalNameAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_local_ctx_find_from_user_name(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
x_2 = x_5;
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = l_Lean_LocalDecl_toExpr(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = l_Lean_LocalDecl_toExpr(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_23__resolveLocalNameAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Term_23__resolveLocalNameAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Term_24__resolveLocalName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = l___private_Lean_Elab_Term_23__resolveLocalNameAux___main(x_9, x_1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Term_24__resolveLocalName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_24__resolveLocalName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l___private_Lean_Elab_Term_24__resolveLocalName(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
lean_ctor_set(x_11, 0, x_23);
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
lean_dec(x_19);
lean_ctor_set(x_11, 0, x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_11);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_20);
lean_free_object(x_11);
lean_dec(x_19);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_10, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_10, 0, x_29);
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_11, 0);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_36 = x_10;
} else {
 lean_dec_ref(x_10);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (lean_is_scalar(x_36)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_36;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_34);
lean_dec(x_33);
x_40 = lean_ctor_get(x_10, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_41 = x_10;
} else {
 lean_dec_ref(x_10);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_4);
lean_dec(x_1);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_8);
return x_45;
}
}
}
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_isLocalIdent_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_2, x_13);
lean_dec(x_2);
x_15 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_7, x_8, x_9, x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_3);
x_2 = x_14;
x_3 = x_18;
x_10 = x_17;
goto _start;
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_Term_25__mkFreshLevelMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
lean_inc(x_1);
x_10 = l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1(x_1, x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_foldMAux___main___at___private_Lean_Elab_Term_25__mkFreshLevelMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Term_25__mkFreshLevelMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_25__mkFreshLevelMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_1);
x_14 = lean_environment_find(x_13, x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_9);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_getConstInfo___rarg___lambda__1___closed__3;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_1);
x_25 = lean_environment_find(x_24, x_1);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_26, 0, x_1);
x_27 = l_Lean_getConstInfo___rarg___lambda__1___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_ctor_get(x_25, 0);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
return x_33;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("too many explicit universe levels");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkConst___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkConst___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkConst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_ConstantInfo_lparams(x_11);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_List_lengthAux___main___rarg(x_13, x_14);
lean_dec(x_13);
x_16 = l_List_lengthAux___main___rarg(x_2, x_14);
x_17 = lean_nat_dec_lt(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_nat_sub(x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
x_19 = l___private_Lean_Elab_Term_25__mkFreshLevelMVars(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l_List_append___rarg(x_2, x_21);
x_23 = l_Lean_mkConst(x_1, x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = l_List_append___rarg(x_2, x_24);
x_27 = l_Lean_mkConst(x_1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_29 = l_Lean_Elab_Term_mkConst___closed__3;
x_30 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_10);
if (x_31 == 0)
{
return x_10;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_10, 0);
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_10);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_mkConst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_mkConst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_4);
lean_inc(x_1);
x_18 = l_Lean_Elab_Term_mkConst(x_16, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_13, 0, x_19);
lean_ctor_set(x_3, 1, x_2);
x_2 = x_3;
x_3 = x_15;
x_10 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_free_object(x_13);
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_3, 1);
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
lean_inc(x_4);
lean_inc(x_1);
x_29 = l_Lean_Elab_Term_mkConst(x_27, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_32);
x_2 = x_3;
x_3 = x_26;
x_10 = x_31;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_28);
lean_free_object(x_3);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_36 = x_29;
} else {
 lean_dec_ref(x_29);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
lean_inc(x_4);
lean_inc(x_1);
x_43 = l_Lean_Elab_Term_mkConst(x_40, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_2);
x_2 = x_47;
x_3 = x_39;
x_10 = x_45;
goto _start;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_43, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_51 = x_43;
} else {
 lean_dec_ref(x_43);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_26__mkConsts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1(x_2, x_12, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_13;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_foldlM___main___at___private_Lean_Elab_Term_26__mkConsts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Term_26__mkConsts___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Term_26__mkConsts(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_resolveGlobalName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getCurrNamespace(x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_getOpenDecls(x_2, x_3, x_4, x_5, x_6, x_7, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l_Lean_Elab_resolveGlobalName(x_12, x_14, x_18, x_1);
lean_dec(x_14);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = l_Lean_Elab_resolveGlobalName(x_12, x_14, x_20, x_1);
lean_dec(x_14);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Term_resolveGlobalName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_resolveGlobalName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown identifier '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of explicit universe parameters, '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is a local");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_resolveName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
lean_inc(x_1);
x_11 = l___private_Lean_Elab_Term_24__resolveLocalName(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_List_isEmpty___rarg(x_2);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = l___private_Lean_Elab_Term_26__mkConsts(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_6);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_2);
lean_inc(x_1);
x_16 = l_Lean_Elab_Term_resolveGlobalName(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_List_isEmpty___rarg(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_1);
x_20 = l___private_Lean_Elab_Term_26__mkConsts(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
lean_dec(x_6);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_17);
lean_dec(x_3);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_extractMacroScopes(x_1);
x_25 = l_Lean_MacroScopesView_format(x_24, x_22);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Elab_Term_resolveName___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
lean_dec(x_6);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
lean_dec(x_12);
x_37 = !lean_is_exclusive(x_11);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_11, 1);
x_39 = lean_ctor_get(x_11, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
x_41 = l_List_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_free_object(x_11);
lean_dec(x_36);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_40);
x_43 = l_Lean_Elab_Term_resolveName___closed__6;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Elab_Term_resolveName___closed__9;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_46, x_4, x_5, x_6, x_7, x_8, x_9, x_38);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_40);
lean_dec(x_6);
lean_dec(x_4);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_36);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_11, 0, x_53);
return x_11;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_11, 1);
lean_inc(x_54);
lean_dec(x_11);
x_55 = lean_ctor_get(x_36, 0);
lean_inc(x_55);
x_56 = l_List_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_36);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = l_Lean_Elab_Term_resolveName___closed__6;
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_Elab_Term_resolveName___closed__9;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_61, x_4, x_5, x_6, x_7, x_8, x_9, x_54);
lean_dec(x_6);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_55);
lean_dec(x_6);
lean_dec(x_4);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_36);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_54);
return x_69;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_resolveName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_resolveName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
return x_11;
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid occurrence of `·` notation, it must be surrounded by parentheses (e.g. `(· + 1)`)");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBadCDot___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_elabBadCDot___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_elabBadCDot(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBadCDot___boxed), 2, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___private_Lean_Elab_Term_1__hasCDot___main___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Elab_throwIllFormedSyntax___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabStrLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_isStrLit_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_mkStrLit(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabStrLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabStrLit(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabStrLit___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_strLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l___private_Lean_Meta_LevelDefEq_2__decLevelImp(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = l_Lean_Meta_decLevel___rarg___lambda__1___closed__3;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Meta_decLevel___rarg___lambda__1___closed__6;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_16, x_4, x_5, x_6, x_7, x_11);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_9, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_9);
if (x_24 == 0)
{
return x_9;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 0);
x_26 = lean_ctor_get(x_9, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_9);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabNumLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Literal_type___closed__3;
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabNumLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_67; lean_object* x_68; 
x_67 = l_Lean_numLitKind;
x_68 = l_Lean_Syntax_isNatLitAux(x_67, x_1);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_2);
lean_dec(x_1);
x_69 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
return x_69;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_69);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_68, 0);
lean_inc(x_74);
lean_dec(x_68);
x_75 = l_Lean_mkNatLit(x_74);
x_10 = x_75;
x_11 = x_9;
goto block_66;
}
block_66:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_55; lean_object* x_56; 
x_12 = 1;
x_13 = lean_box(0);
lean_inc(x_5);
x_14 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_mvarId_x21(x_15);
x_18 = lean_box(0);
x_55 = l_Lean_Elab_Term_elabNumLit___closed__1;
x_56 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_17, x_55, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_19 = x_57;
goto block_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_2, 0);
lean_inc(x_59);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_15);
x_60 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_59, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_58);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_19 = x_61;
goto block_54;
}
else
{
uint8_t x_62; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
return x_60;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_60, 0);
x_64 = lean_ctor_get(x_60, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_60);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
block_54:
{
lean_object* x_20; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_15);
x_20 = l___private_Lean_Meta_InferType_4__getLevelImp(x_15, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1(x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_18);
x_27 = l_Lean_Meta_evalNat___main___closed__7;
lean_inc(x_26);
x_28 = l_Lean_mkConst(x_27, x_26);
lean_inc(x_15);
x_29 = l_Lean_mkApp(x_28, x_15);
x_30 = l_Lean_Elab_Term_mkInstMVar(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Lean_Meta_evalNat___main___closed__8;
x_34 = l_Lean_mkConst(x_33, x_26);
x_35 = l_Lean_mkApp3(x_34, x_15, x_32, x_10);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = l_Lean_Meta_evalNat___main___closed__8;
x_39 = l_Lean_mkConst(x_38, x_26);
x_40 = l_Lean_mkApp3(x_39, x_15, x_36, x_10);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_10);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
return x_23;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_23, 0);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_23);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_20);
if (x_50 == 0)
{
return x_20;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_20, 0);
x_52 = lean_ctor_get(x_20, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_20);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
}
lean_object* l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_decLevel___at_Lean_Elab_Term_elabNumLit___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabNumLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabNumLit(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNumLit___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_numLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabCharLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_isCharLit_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; uint32_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unbox_uint32(x_12);
lean_dec(x_12);
x_14 = lean_uint32_to_nat(x_13);
x_15 = l_Lean_mkNatLit(x_14);
x_16 = l_Lean_charToExpr___lambda__1___closed__1;
x_17 = l_Lean_mkApp(x_16, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
}
}
lean_object* l_Lean_Elab_Term_elabCharLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabCharLit(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabCharLit___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_charLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabQuotedName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_isNameLit_x3f(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Term_elabStrLit___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Name_toExprAux___main(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Term_elabQuotedName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabQuotedName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("quotedName");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabQuotedName___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_Term_27__mkSomeContext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<TermElabM>");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_27__mkSomeContext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l___private_Lean_Elab_Term_27__mkSomeContext___closed__1;
x_4 = l_Lean_FileMap_Inhabited___closed__1;
x_5 = lean_box(0);
x_6 = l_Lean_firstFrontendMacroScope;
x_7 = 1;
x_8 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_1);
lean_ctor_set(x_8, 4, x_2);
lean_ctor_set(x_8, 5, x_2);
lean_ctor_set(x_8, 6, x_2);
lean_ctor_set(x_8, 7, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*8, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*8 + 1, x_7);
return x_8;
}
}
lean_object* _init_l___private_Lean_Elab_Term_27__mkSomeContext() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Elab_Term_27__mkSomeContext___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = l_Lean_Elab_Term_setElabConfig(x_10);
lean_ctor_set(x_4, 0, x_11);
x_12 = lean_st_mk_ref(x_3, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_13);
x_15 = lean_apply_7(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_13, x_17);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_4, 0);
x_31 = lean_ctor_get(x_4, 1);
x_32 = lean_ctor_get(x_4, 2);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_4);
x_33 = l_Lean_Elab_Term_setElabConfig(x_30);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_32);
x_35 = lean_st_mk_ref(x_3, x_8);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_36);
x_38 = lean_apply_7(x_1, x_2, x_36, x_34, x_5, x_6, x_7, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_st_ref_get(x_36, x_40);
lean_dec(x_36);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set(x_45, 1, x_42);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_36);
x_47 = lean_ctor_get(x_38, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_49 = x_38;
} else {
 lean_dec_ref(x_38);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_run___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = l_Lean_Elab_Term_setElabConfig(x_10);
lean_ctor_set(x_4, 0, x_11);
x_12 = lean_st_mk_ref(x_3, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_13);
x_15 = lean_apply_7(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_13, x_17);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_4, 0);
x_28 = lean_ctor_get(x_4, 1);
x_29 = lean_ctor_get(x_4, 2);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_4);
x_30 = l_Lean_Elab_Term_setElabConfig(x_27);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
lean_ctor_set(x_31, 2, x_29);
x_32 = lean_st_mk_ref(x_3, x_8);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_33);
x_35 = lean_apply_7(x_1, x_2, x_33, x_31, x_5, x_6, x_7, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_st_ref_get(x_33, x_37);
lean_dec(x_33);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_33);
x_42 = lean_ctor_get(x_35, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_35, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_44 = x_35;
} else {
 lean_dec_ref(x_35);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_run_x27___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_toIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_st_mk_ref(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_mk_ref(x_5, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = l_Lean_Elab_Term_setElabConfig(x_16);
lean_ctor_set(x_4, 0, x_17);
x_18 = lean_st_mk_ref(x_7, x_14);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_19);
x_21 = lean_apply_7(x_1, x_6, x_19, x_4, x_13, x_2, x_10, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_19, x_23);
lean_dec(x_19);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_st_ref_get(x_13, x_26);
lean_dec(x_13);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_st_ref_get(x_10, x_29);
lean_dec(x_10);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_25);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set(x_38, 1, x_25);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
else
{
lean_object* x_42; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_10);
x_42 = lean_ctor_get(x_21, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_21, 1);
lean_inc(x_43);
lean_dec(x_21);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_MessageData_toString(x_44, x_43);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_tag(x_45, 1);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_49);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_45);
if (x_53 == 0)
{
return x_45;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_45, 0);
x_55 = lean_ctor_get(x_45, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_45);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_21);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_21, 0);
lean_dec(x_58);
x_59 = lean_ctor_get(x_42, 0);
lean_inc(x_59);
lean_dec(x_42);
x_60 = l_Nat_repr(x_59);
x_61 = l_Lean_InternalExceptionId_toString___closed__1;
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_21, 0, x_63);
return x_21;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_ctor_get(x_21, 1);
lean_inc(x_64);
lean_dec(x_21);
x_65 = lean_ctor_get(x_42, 0);
lean_inc(x_65);
lean_dec(x_42);
x_66 = l_Nat_repr(x_65);
x_67 = l_Lean_InternalExceptionId_toString___closed__1;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_64);
return x_70;
}
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_71 = lean_ctor_get(x_4, 0);
x_72 = lean_ctor_get(x_4, 1);
x_73 = lean_ctor_get(x_4, 2);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_4);
x_74 = l_Lean_Elab_Term_setElabConfig(x_71);
x_75 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
lean_ctor_set(x_75, 2, x_73);
x_76 = lean_st_mk_ref(x_7, x_14);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_77);
x_79 = lean_apply_7(x_1, x_6, x_77, x_75, x_13, x_2, x_10, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_st_ref_get(x_77, x_81);
lean_dec(x_77);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_st_ref_get(x_13, x_84);
lean_dec(x_13);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_st_ref_get(x_10, x_87);
lean_dec(x_10);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_86);
lean_ctor_set(x_92, 1, x_83);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_89);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_80);
lean_ctor_set(x_94, 1, x_93);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
return x_95;
}
else
{
lean_object* x_96; 
lean_dec(x_77);
lean_dec(x_13);
lean_dec(x_10);
x_96 = lean_ctor_get(x_79, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_79, 1);
lean_inc(x_97);
lean_dec(x_79);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_MessageData_toString(x_98, x_97);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
x_103 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_103, 0, x_100);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_102;
 lean_ctor_set_tag(x_104, 1);
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_99, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_99, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_107 = x_99;
} else {
 lean_dec_ref(x_99);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_109 = lean_ctor_get(x_79, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_110 = x_79;
} else {
 lean_dec_ref(x_79);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_96, 0);
lean_inc(x_111);
lean_dec(x_96);
x_112 = l_Nat_repr(x_111);
x_113 = l_Lean_InternalExceptionId_toString___closed__1;
x_114 = lean_string_append(x_113, x_112);
lean_dec(x_112);
x_115 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_115, 0, x_114);
if (lean_is_scalar(x_110)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_110;
}
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_109);
return x_116;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_TermElabM_toIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_toIO___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_10 = l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3(x_1, x_9, x_4);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_9, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4(x_1, x_4, x_5, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5(x_1, x_7, x_8, x_3);
return x_9;
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_9, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_6 = l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3(x_1, x_4, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6(x_1, x_5, x_8, x_7);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_MessageLog_forM___at_Lean_Elab_Term_MetaHasEval___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(x_2, x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Message_toString(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_IO_println___at___private_Init_System_IO_1__printlnAux___spec__1(x_4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_MetaM_run_x27___rarg___closed__1;
x_2 = l_Lean_Elab_Term_setElabConfig(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_MetaHasEval___rarg___closed__1;
x_2 = l_Lean_Meta_hasEval___rarg___closed__1;
x_3 = l_Array_empty___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MetaHasEval___rarg___lambda__1), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_29 = l_Lean_getMaxRecDepth(x_3);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_box(0);
lean_inc(x_3);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Lean_NameGenerator_Inhabited___closed__3;
x_34 = l_Lean_TraceState_Inhabited___closed__1;
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_st_mk_ref(x_35, x_6);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_46 = l_Lean_Meta_State_inhabited___closed__7;
x_47 = lean_st_mk_ref(x_46, x_38);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_State_inhabited___closed__1;
x_51 = lean_st_mk_ref(x_50, x_49);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l___private_Lean_Elab_Term_27__mkSomeContext;
x_55 = l_Lean_Elab_Term_MetaHasEval___rarg___closed__2;
lean_inc(x_37);
lean_inc(x_32);
lean_inc(x_48);
lean_inc(x_52);
x_56 = lean_apply_7(x_4, x_54, x_52, x_55, x_48, x_32, x_37, x_53);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_st_ref_get(x_52, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_ctor_get(x_60, 2);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Elab_Term_MetaHasEval___rarg___closed__3;
x_64 = l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(x_63, x_62, x_61);
lean_dec(x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_get(x_52, x_65);
lean_dec(x_52);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_st_ref_get(x_48, x_67);
lean_dec(x_48);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(x_32, x_37, x_69);
lean_dec(x_32);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_st_ref_get(x_37, x_71);
lean_dec(x_37);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
lean_dec(x_73);
x_76 = 1;
x_77 = lean_box(x_76);
x_78 = lean_apply_5(x_1, x_75, x_3, x_57, x_77, x_74);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_57);
lean_dec(x_37);
lean_dec(x_3);
lean_dec(x_1);
x_79 = lean_ctor_get(x_70, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_70, 1);
lean_inc(x_80);
lean_dec(x_70);
x_7 = x_79;
x_8 = x_80;
goto block_28;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_57);
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_3);
lean_dec(x_1);
x_81 = lean_ctor_get(x_64, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_64, 1);
lean_inc(x_82);
lean_dec(x_64);
x_83 = lean_io_error_to_string(x_81);
x_84 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_31);
lean_ctor_set(x_86, 1, x_85);
x_39 = x_86;
x_40 = x_82;
goto block_45;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_48);
lean_dec(x_3);
lean_dec(x_1);
x_87 = lean_ctor_get(x_56, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_56, 1);
lean_inc(x_88);
lean_dec(x_56);
x_89 = lean_st_ref_get(x_52, x_88);
lean_dec(x_52);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 2);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l_Lean_Elab_Term_MetaHasEval___rarg___closed__3;
x_94 = l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(x_93, x_92, x_91);
lean_dec(x_92);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_39 = x_87;
x_40 = x_95;
goto block_45;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_87);
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_io_error_to_string(x_96);
x_99 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_31);
lean_ctor_set(x_101, 1, x_100);
x_39 = x_101;
x_40 = x_97;
goto block_45;
}
}
block_28:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_MessageData_toString(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = l_Nat_repr(x_22);
x_24 = l_Lean_InternalExceptionId_toString___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_8);
return x_27;
}
}
block_45:
{
lean_object* x_41; 
x_41 = l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(x_32, x_37, x_40);
lean_dec(x_37);
lean_dec(x_32);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_7 = x_39;
x_8 = x_42;
goto block_28;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_7 = x_43;
x_8 = x_44;
goto block_28;
}
}
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MetaHasEval___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at_Lean_Elab_Term_MetaHasEval___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forM___at_Lean_Elab_Term_MetaHasEval___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_MessageLog_forM___at_Lean_Elab_Term_MetaHasEval___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MessageLog_forM___at_Lean_Elab_Term_MetaHasEval___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_MetaHasEval___rarg(x_1, x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
lean_object* _init_l___private_Lean_Elab_Term_28__regTraceClasses___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Elab_Term_tryCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_28__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_Lean_Elab_Term_28__regTraceClasses___closed__1;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Elab_logDbgTrace___rarg___closed__2;
x_9 = l_Lean_registerTraceClass(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
return x_6;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_6);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_3);
if (x_24 == 0)
{
return x_3;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_Sorry(lean_object*);
lean_object* initialize_Lean_Structure(lean_object*);
lean_object* initialize_Lean_Meta_ExprDefEq(lean_object*);
lean_object* initialize_Lean_Meta_AppBuilder(lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(lean_object*);
lean_object* initialize_Lean_Meta_CollectMVars(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
lean_object* initialize_Lean_Hygiene(lean_object*);
lean_object* initialize_Lean_Util_RecDepth(lean_object*);
lean_object* initialize_Lean_Elab_Log(lean_object*);
lean_object* initialize_Lean_Elab_Alias(lean_object*);
lean_object* initialize_Lean_Elab_ResolveName(lean_object*);
lean_object* initialize_Lean_Elab_Level(lean_object*);
lean_object* initialize_Lean_Elab_Attributes(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Term(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Log(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Alias(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ResolveName(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Level(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_State_inhabited___closed__1 = _init_l_Lean_Elab_Term_State_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_State_inhabited___closed__1);
l_Lean_Elab_Term_State_inhabited = _init_l_Lean_Elab_Term_State_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_State_inhabited);
l_Lean_Elab_Term_TermElabM_inhabited___closed__1 = _init_l_Lean_Elab_Term_TermElabM_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_TermElabM_inhabited___closed__1);
l_Lean_Elab_Term_SavedState_inhabited___closed__1 = _init_l_Lean_Elab_Term_SavedState_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited___closed__1);
l_Lean_Elab_Term_SavedState_inhabited___closed__2 = _init_l_Lean_Elab_Term_SavedState_inhabited___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited___closed__2);
l_Lean_Elab_Term_SavedState_inhabited = _init_l_Lean_Elab_Term_SavedState_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited);
l_Lean_Elab_Term_TermElabResult_inhabited___closed__1 = _init_l_Lean_Elab_Term_TermElabResult_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_TermElabResult_inhabited___closed__1);
l_Lean_Elab_Term_TermElabResult_inhabited = _init_l_Lean_Elab_Term_TermElabResult_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_TermElabResult_inhabited);
l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1 = _init_l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1);
l_Lean_Elab_Term_Lean_Ref___closed__1 = _init_l_Lean_Elab_Term_Lean_Ref___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Ref___closed__1);
l_Lean_Elab_Term_Lean_Ref___closed__2 = _init_l_Lean_Elab_Term_Lean_Ref___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Ref___closed__2);
l_Lean_Elab_Term_Lean_Ref___closed__3 = _init_l_Lean_Elab_Term_Lean_Ref___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Ref___closed__3);
l_Lean_Elab_Term_Lean_Ref___closed__4 = _init_l_Lean_Elab_Term_Lean_Ref___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Ref___closed__4);
l_Lean_Elab_Term_Lean_Ref = _init_l_Lean_Elab_Term_Lean_Ref();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Ref);
l_Lean_Elab_Term_monadLog___closed__1 = _init_l_Lean_Elab_Term_monadLog___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__1);
l_Lean_Elab_Term_monadLog___closed__2 = _init_l_Lean_Elab_Term_monadLog___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__2);
l_Lean_Elab_Term_monadLog___closed__3 = _init_l_Lean_Elab_Term_monadLog___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__3);
l_Lean_Elab_Term_monadLog___closed__4 = _init_l_Lean_Elab_Term_monadLog___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__4);
l_Lean_Elab_Term_monadLog___closed__5 = _init_l_Lean_Elab_Term_monadLog___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__5);
l_Lean_Elab_Term_monadLog___closed__6 = _init_l_Lean_Elab_Term_monadLog___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__6);
l_Lean_Elab_Term_monadLog___closed__7 = _init_l_Lean_Elab_Term_monadLog___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__7);
l_Lean_Elab_Term_monadLog = _init_l_Lean_Elab_Term_monadLog();
lean_mark_persistent(l_Lean_Elab_Term_monadLog);
l_Lean_Elab_Term_monadQuotation___closed__1 = _init_l_Lean_Elab_Term_monadQuotation___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__1);
l_Lean_Elab_Term_monadQuotation___closed__2 = _init_l_Lean_Elab_Term_monadQuotation___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__2);
l_Lean_Elab_Term_monadQuotation___closed__3 = _init_l_Lean_Elab_Term_monadQuotation___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__3);
l_Lean_Elab_Term_monadQuotation___closed__4 = _init_l_Lean_Elab_Term_monadQuotation___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__4);
l_Lean_Elab_Term_monadQuotation = _init_l_Lean_Elab_Term_monadQuotation();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation);
l_Lean_Elab_Term_mkTermElabAttribute___closed__1 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__1);
l_Lean_Elab_Term_mkTermElabAttribute___closed__2 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__2);
l_Lean_Elab_Term_mkTermElabAttribute___closed__3 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__3);
l_Lean_Elab_Term_mkTermElabAttribute___closed__4 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__4);
l_Lean_Elab_Term_mkTermElabAttribute___closed__5 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__5);
l_Lean_Elab_Term_mkTermElabAttribute___closed__6 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__6);
l_Lean_Elab_Term_mkTermElabAttribute___closed__7 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__7);
l_Lean_Elab_Term_mkTermElabAttribute___closed__8 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__8);
l_Lean_Elab_Term_mkTermElabAttribute___closed__9 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__9);
l_Lean_Elab_Term_termElabAttribute___closed__1 = _init_l_Lean_Elab_Term_termElabAttribute___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__1);
l_Lean_Elab_Term_termElabAttribute___closed__2 = _init_l_Lean_Elab_Term_termElabAttribute___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__2);
l_Lean_Elab_Term_termElabAttribute___closed__3 = _init_l_Lean_Elab_Term_termElabAttribute___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__3);
l_Lean_Elab_Term_termElabAttribute___closed__4 = _init_l_Lean_Elab_Term_termElabAttribute___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__4);
l_Lean_Elab_Term_termElabAttribute___closed__5 = _init_l_Lean_Elab_Term_termElabAttribute___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__5);
l_Lean_Elab_Term_termElabAttribute___closed__6 = _init_l_Lean_Elab_Term_termElabAttribute___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__6);
l_Lean_Elab_Term_termElabAttribute___closed__7 = _init_l_Lean_Elab_Term_termElabAttribute___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__7);
res = l_Lean_Elab_Term_mkTermElabAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_termElabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute);
lean_dec_ref(res);
l_Lean_Elab_Term_throwErrorIfErrors___closed__1 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__1);
l_Lean_Elab_Term_throwErrorIfErrors___closed__2 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__2);
l_Lean_Elab_Term_throwErrorIfErrors___closed__3 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__3);
l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__1);
l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__2);
l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_MVarErrorContext_logError___spec__2___closed__3);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__1 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__1);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__2 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__2);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__3 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__3);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__4 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__4);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__5 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__5);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__6 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__6);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__7 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__7);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__8 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__8);
l_Lean_Elab_Term_MVarErrorContext_logError___closed__9 = _init_l_Lean_Elab_Term_MVarErrorContext_logError___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_MVarErrorContext_logError___closed__9);
l_Lean_Elab_Term_mkExplicitBinder___closed__1 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__1);
l_Lean_Elab_Term_mkExplicitBinder___closed__2 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__2);
l_Lean_Elab_Term_mkExplicitBinder___closed__3 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__3);
l_Lean_Elab_Term_mkExplicitBinder___closed__4 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__4);
l_Lean_Elab_Term_mkExplicitBinder___closed__5 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__5);
l_Lean_Elab_Term_mkExplicitBinder___closed__6 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__6);
l_Lean_Elab_Term_mkExplicitBinder___closed__7 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__7);
l_Lean_Elab_Term_mkExplicitBinder___closed__8 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__8);
l_Lean_Elab_Term_levelMVarToParam___closed__1 = _init_l_Lean_Elab_Term_levelMVarToParam___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_levelMVarToParam___closed__1);
l_Lean_Elab_Term_levelMVarToParam___closed__2 = _init_l_Lean_Elab_Term_levelMVarToParam___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_levelMVarToParam___closed__2);
l_Lean_Elab_Term_mkFreshUserName___closed__1 = _init_l_Lean_Elab_Term_mkFreshUserName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshUserName___closed__1);
l_Lean_Elab_Term_mkFreshUserName___closed__2 = _init_l_Lean_Elab_Term_mkFreshUserName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshUserName___closed__2);
l_Lean_Elab_Term_mkFreshInstanceName___closed__1 = _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___closed__1);
l_Lean_Elab_Term_mkFreshInstanceName___closed__2 = _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___closed__2);
l_Lean_Elab_Term_mkFreshInstanceName___closed__3 = _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___closed__3);
l_Lean_Elab_Term_mkFreshInstanceName___closed__4 = _init_l_Lean_Elab_Term_mkFreshInstanceName___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___closed__4);
l___private_Lean_Elab_Term_1__hasCDot___main___closed__1 = _init_l___private_Lean_Elab_Term_1__hasCDot___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_1__hasCDot___main___closed__1);
l___private_Lean_Elab_Term_1__hasCDot___main___closed__2 = _init_l___private_Lean_Elab_Term_1__hasCDot___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_1__hasCDot___main___closed__2);
l___private_Lean_Elab_Term_2__expandCDot___main___closed__1 = _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_2__expandCDot___main___closed__1);
l___private_Lean_Elab_Term_2__expandCDot___main___closed__2 = _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_2__expandCDot___main___closed__2);
l___private_Lean_Elab_Term_2__expandCDot___main___closed__3 = _init_l___private_Lean_Elab_Term_2__expandCDot___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_2__expandCDot___main___closed__3);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13);
l_Lean_Elab_Term_tryCoe___closed__1 = _init_l_Lean_Elab_Term_tryCoe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__1);
l_Lean_Elab_Term_tryCoe___closed__2 = _init_l_Lean_Elab_Term_tryCoe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__2);
l_Lean_Elab_Term_tryCoe___closed__3 = _init_l_Lean_Elab_Term_tryCoe___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__3);
l_Lean_Elab_Term_tryCoe___closed__4 = _init_l_Lean_Elab_Term_tryCoe___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__4);
l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1 = _init_l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_4__isMonad_x3f___closed__1);
l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2 = _init_l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_4__isMonad_x3f___closed__2);
l_Lean_Elab_Term_tryLiftAndCoe___closed__1 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__1);
l_Lean_Elab_Term_tryLiftAndCoe___closed__2 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__2);
l_Lean_Elab_Term_tryLiftAndCoe___closed__3 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__3);
l_Lean_Elab_Term_tryLiftAndCoe___closed__4 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__4);
l_Lean_Elab_Term_tryLiftAndCoe___closed__5 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__5);
l_Lean_Elab_Term_tryLiftAndCoe___closed__6 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__6);
l_Lean_Elab_Term_tryLiftAndCoe___closed__7 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__7);
l_Lean_Elab_Term_tryLiftAndCoe___closed__8 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__8);
l_Lean_Elab_Term_tryLiftAndCoe___closed__9 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__9);
l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1 = _init_l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_7__postponeElabTerm___closed__1);
l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1 = _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__1);
l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2 = _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__2);
l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3 = _init_l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_8__elabUsingElabFnsAux___main___closed__3);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__1);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__2);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__3);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__4);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__5);
l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6 = _init_l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Term_9__elabUsingElabFns___closed__6);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter);
l___private_Lean_Elab_Term_10__isExplicit___closed__1 = _init_l___private_Lean_Elab_Term_10__isExplicit___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_10__isExplicit___closed__1);
l___private_Lean_Elab_Term_10__isExplicit___closed__2 = _init_l___private_Lean_Elab_Term_10__isExplicit___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_10__isExplicit___closed__2);
l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1 = _init_l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1();
lean_mark_persistent(l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__1);
l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2 = _init_l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2();
lean_mark_persistent(l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_12__isLambdaWithImplicit___spec__1___closed__2);
l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1 = _init_l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__1);
l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2 = _init_l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_15__elabImplicitLambdaAux___closed__2);
l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1 = _init_l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_17__elabTermAux___main___closed__1);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__1 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__1);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__2 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__2);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__3 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__3);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__4 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__4);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__5 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__5);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__6 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__6);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__7 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__7);
l___private_Lean_Elab_Term_18__tryCoeSort___closed__8 = _init_l___private_Lean_Elab_Term_18__tryCoeSort___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Term_18__tryCoeSort___closed__8);
l_Lean_Elab_Term_mkAuxName___closed__1 = _init_l_Lean_Elab_Term_mkAuxName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__1);
l_Lean_Elab_Term_mkAuxName___closed__2 = _init_l_Lean_Elab_Term_mkAuxName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__2);
l_Lean_Elab_Term_mkAuxName___closed__3 = _init_l_Lean_Elab_Term_mkAuxName___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__3);
l___regBuiltin_Lean_Elab_Term_elabProp___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabProp___closed__1);
l___regBuiltin_Lean_Elab_Term_elabProp___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabProp___closed__2);
l___regBuiltin_Lean_Elab_Term_elabProp___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabProp___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabProp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabSort___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSort___closed__1);
l___regBuiltin_Lean_Elab_Term_elabSort___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSort___closed__2);
res = l___regBuiltin_Lean_Elab_Term_elabSort(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1);
l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__2);
l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabHole___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabHole___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabHole___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabHole(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabSyntheticHole___closed__1 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__1);
l_Lean_Elab_Term_elabSyntheticHole___closed__2 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__2);
l_Lean_Elab_Term_elabSyntheticHole___closed__3 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__3);
l_Lean_Elab_Term_elabSyntheticHole___closed__4 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__4);
l_Lean_Elab_Term_elabSyntheticHole___closed__5 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__5);
l_Lean_Elab_Term_elabSyntheticHole___closed__6 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__6);
l_Lean_Elab_Term_elabSyntheticHole___closed__7 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__7);
l_Lean_Elab_Term_elabSyntheticHole___closed__8 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__8);
l_Lean_Elab_Term_elabSyntheticHole___closed__9 = _init_l_Lean_Elab_Term_elabSyntheticHole___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_elabSyntheticHole___closed__9);
l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__1);
l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__2);
l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSyntheticHole___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabSyntheticHole(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabByTactic___closed__1 = _init_l_Lean_Elab_Term_elabByTactic___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__1);
l_Lean_Elab_Term_elabByTactic___closed__2 = _init_l_Lean_Elab_Term_elabByTactic___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__2);
l_Lean_Elab_Term_elabByTactic___closed__3 = _init_l_Lean_Elab_Term_elabByTactic___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__3);
l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1);
l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__2);
l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1 = _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__1);
l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2 = _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__2);
l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3 = _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__3);
l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4 = _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__4);
l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5 = _init_l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Term_21__mkPairsAux___main___closed__5);
l_Lean_Elab_Term_elabParen___closed__1 = _init_l_Lean_Elab_Term_elabParen___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__1);
l_Lean_Elab_Term_elabParen___closed__2 = _init_l_Lean_Elab_Term_elabParen___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__2);
l_Lean_Elab_Term_elabParen___closed__3 = _init_l_Lean_Elab_Term_elabParen___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__3);
l_Lean_Elab_Term_elabParen___closed__4 = _init_l_Lean_Elab_Term_elabParen___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__4);
l_Lean_Elab_Term_elabParen___closed__5 = _init_l_Lean_Elab_Term_elabParen___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__5);
l___regBuiltin_Lean_Elab_Term_elabParen___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParen___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabParen(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1);
l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandListLit___closed__2);
l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandListLit___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandListLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandArrayLit___closed__1 = _init_l_Lean_Elab_Term_expandArrayLit___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__1);
l_Lean_Elab_Term_expandArrayLit___closed__2 = _init_l_Lean_Elab_Term_expandArrayLit___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__2);
l_Lean_Elab_Term_expandArrayLit___closed__3 = _init_l_Lean_Elab_Term_expandArrayLit___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__3);
l_Lean_Elab_Term_expandArrayLit___closed__4 = _init_l_Lean_Elab_Term_expandArrayLit___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__4);
l_Lean_Elab_Term_expandArrayLit___closed__5 = _init_l_Lean_Elab_Term_expandArrayLit___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__5);
l_Lean_Elab_Term_expandArrayLit___closed__6 = _init_l_Lean_Elab_Term_expandArrayLit___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__6);
l_Lean_Elab_Term_expandArrayLit___closed__7 = _init_l_Lean_Elab_Term_expandArrayLit___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__7);
l_Lean_Elab_Term_expandArrayLit___closed__8 = _init_l_Lean_Elab_Term_expandArrayLit___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__8);
l_Lean_Elab_Term_expandArrayLit___closed__9 = _init_l_Lean_Elab_Term_expandArrayLit___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__9);
l_Lean_Elab_Term_expandArrayLit___closed__10 = _init_l_Lean_Elab_Term_expandArrayLit___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__10);
l_Lean_Elab_Term_expandArrayLit___closed__11 = _init_l_Lean_Elab_Term_expandArrayLit___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__11);
l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_mkConst___closed__1 = _init_l_Lean_Elab_Term_mkConst___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__1);
l_Lean_Elab_Term_mkConst___closed__2 = _init_l_Lean_Elab_Term_mkConst___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__2);
l_Lean_Elab_Term_mkConst___closed__3 = _init_l_Lean_Elab_Term_mkConst___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__3);
l_Lean_Elab_Term_resolveName___closed__1 = _init_l_Lean_Elab_Term_resolveName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__1);
l_Lean_Elab_Term_resolveName___closed__2 = _init_l_Lean_Elab_Term_resolveName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__2);
l_Lean_Elab_Term_resolveName___closed__3 = _init_l_Lean_Elab_Term_resolveName___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__3);
l_Lean_Elab_Term_resolveName___closed__4 = _init_l_Lean_Elab_Term_resolveName___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__4);
l_Lean_Elab_Term_resolveName___closed__5 = _init_l_Lean_Elab_Term_resolveName___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__5);
l_Lean_Elab_Term_resolveName___closed__6 = _init_l_Lean_Elab_Term_resolveName___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__6);
l_Lean_Elab_Term_resolveName___closed__7 = _init_l_Lean_Elab_Term_resolveName___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__7);
l_Lean_Elab_Term_resolveName___closed__8 = _init_l_Lean_Elab_Term_resolveName___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__8);
l_Lean_Elab_Term_resolveName___closed__9 = _init_l_Lean_Elab_Term_resolveName___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__9);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__1 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__1);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__2 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__2);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__3 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__3);
l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabNumLit___closed__1 = _init_l_Lean_Elab_Term_elabNumLit___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabNumLit___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1);
l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2);
l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Term_27__mkSomeContext___closed__1 = _init_l___private_Lean_Elab_Term_27__mkSomeContext___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_27__mkSomeContext___closed__1);
l___private_Lean_Elab_Term_27__mkSomeContext___closed__2 = _init_l___private_Lean_Elab_Term_27__mkSomeContext___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_27__mkSomeContext___closed__2);
l___private_Lean_Elab_Term_27__mkSomeContext = _init_l___private_Lean_Elab_Term_27__mkSomeContext();
lean_mark_persistent(l___private_Lean_Elab_Term_27__mkSomeContext);
l_Lean_Elab_Term_MetaHasEval___rarg___closed__1 = _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_MetaHasEval___rarg___closed__1);
l_Lean_Elab_Term_MetaHasEval___rarg___closed__2 = _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_MetaHasEval___rarg___closed__2);
l_Lean_Elab_Term_MetaHasEval___rarg___closed__3 = _init_l_Lean_Elab_Term_MetaHasEval___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_MetaHasEval___rarg___closed__3);
l___private_Lean_Elab_Term_28__regTraceClasses___closed__1 = _init_l___private_Lean_Elab_Term_28__regTraceClasses___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_28__regTraceClasses___closed__1);
res = l___private_Lean_Elab_Term_28__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
