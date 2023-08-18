#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
216,
224,
225,
226,
227,
228,
229,
230,
231,
232,
235,
236,
408,
409,
411,
439,
440,
441,
461,
462,
463,
464,
562,
563,
564,
567,
604,
605,
606,
609,
611,
613,
615,
620,
628,
629,
630,
631,
632,
633,
634,
635,
636,
637,
638,
639,
640,
641,
642,
643,
644,
646,
647,
648,
649,
650,
651,
652,
744,
745,
746,
747,
748,
749,
750,
751,
752,
753,
754,
755,
756,
757,
758,
759,
760,
762,
763,
764,
765,
766,
767,
768,
895,
904,
907,
909,
914,
915,
917,
918,
922,
923,
925,
926,
929,
930,
931,
934,
936,
939,
941,
943,
1014,
1016,
1018,
1027,
1028,
1029,
1030,
1032,
1039,
1040,
1041,
1042,
1043,
1051,
1052,
1053,
1057,
1058,
1060,
1064,
1065,
1066,
1337,
1534,
1535,
8799,
8800,
8802,
8803,
8804,
8805,
8806,
8808,
8810,
8812,
8813,
8822,
8824,
8828,
8829,
8831,
8833,
8835,
8846,
8855,
8856,
8858,
8859,
8860,
8861,
8862,
8864,
8866,
9941,
9945,
9947,
9948,
9949,
9950,
10092,
10093,
10094,
10095,
10115,
10116,
10117,
10119,
10162,
10229,
10231,
10242,
10243,
10244,
10245,
10558,
10559,
10564,
10565,
10595,
10618,
10624,
10631,
10641,
10644,
10732,
10741,
10743,
10744,
10750,
10763,
10783,
10784,
10792,
10794,
10801,
10802,
10805,
10807,
10812,
10818,
10819,
10826,
10828,
10840,
10843,
10844,
10845,
10856,
10865,
10871,
10872,
10873,
10875,
10876,
10894,
10896,
10910,
10933,
10934,
10952,
10957,
10987,
10988,
11445,
11446,
11518,
11598,
11850,
11851,
11857,
11858,
11859,
11865,
11935,
12336,
12337,
12763,
12764,
13700,
13721,
13728,
13730,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 216,
ves_icall_System_Array_InternalCreate,
// token 224,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 225,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 226,
ves_icall_System_Array_CanChangePrimitive,
// token 227,
ves_icall_System_Array_FastCopy_raw,
// token 228,
ves_icall_System_Array_GetLength_raw,
// token 229,
ves_icall_System_Array_GetLowerBound_raw,
// token 230,
ves_icall_System_Array_GetGenericValue_icall,
// token 231,
ves_icall_System_Array_GetValueImpl_raw,
// token 232,
ves_icall_System_Array_SetGenericValue_icall,
// token 235,
ves_icall_System_Array_SetValueImpl_raw,
// token 236,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 408,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 409,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 411,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 439,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 440,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 441,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 461,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 462,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 463,
ves_icall_System_Enum_InternalGetCorElementType,
// token 464,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 562,
ves_icall_System_Environment_get_ProcessorCount,
// token 563,
ves_icall_System_Environment_get_TickCount,
// token 564,
ves_icall_System_Environment_get_TickCount64,
// token 567,
ves_icall_System_Environment_FailFast_raw,
// token 604,
ves_icall_System_GC_GetCollectionCount,
// token 605,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 606,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 609,
ves_icall_System_GC_SuppressFinalize_raw,
// token 611,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 613,
ves_icall_System_GC_GetGCMemoryInfo,
// token 615,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 620,
ves_icall_System_Object_MemberwiseClone_raw,
// token 628,
ves_icall_System_Math_Acos,
// token 629,
ves_icall_System_Math_Acosh,
// token 630,
ves_icall_System_Math_Asin,
// token 631,
ves_icall_System_Math_Asinh,
// token 632,
ves_icall_System_Math_Atan,
// token 633,
ves_icall_System_Math_Atan2,
// token 634,
ves_icall_System_Math_Atanh,
// token 635,
ves_icall_System_Math_Cbrt,
// token 636,
ves_icall_System_Math_Ceiling,
// token 637,
ves_icall_System_Math_Cos,
// token 638,
ves_icall_System_Math_Cosh,
// token 639,
ves_icall_System_Math_Exp,
// token 640,
ves_icall_System_Math_Floor,
// token 641,
ves_icall_System_Math_Log,
// token 642,
ves_icall_System_Math_Log10,
// token 643,
ves_icall_System_Math_Pow,
// token 644,
ves_icall_System_Math_Sin,
// token 646,
ves_icall_System_Math_Sinh,
// token 647,
ves_icall_System_Math_Sqrt,
// token 648,
ves_icall_System_Math_Tan,
// token 649,
ves_icall_System_Math_Tanh,
// token 650,
ves_icall_System_Math_FusedMultiplyAdd,
// token 651,
ves_icall_System_Math_Log2,
// token 652,
ves_icall_System_Math_ModF,
// token 744,
ves_icall_System_MathF_Acos,
// token 745,
ves_icall_System_MathF_Acosh,
// token 746,
ves_icall_System_MathF_Asin,
// token 747,
ves_icall_System_MathF_Asinh,
// token 748,
ves_icall_System_MathF_Atan,
// token 749,
ves_icall_System_MathF_Atan2,
// token 750,
ves_icall_System_MathF_Atanh,
// token 751,
ves_icall_System_MathF_Cbrt,
// token 752,
ves_icall_System_MathF_Ceiling,
// token 753,
ves_icall_System_MathF_Cos,
// token 754,
ves_icall_System_MathF_Cosh,
// token 755,
ves_icall_System_MathF_Exp,
// token 756,
ves_icall_System_MathF_Floor,
// token 757,
ves_icall_System_MathF_Log,
// token 758,
ves_icall_System_MathF_Log10,
// token 759,
ves_icall_System_MathF_Pow,
// token 760,
ves_icall_System_MathF_Sin,
// token 762,
ves_icall_System_MathF_Sinh,
// token 763,
ves_icall_System_MathF_Sqrt,
// token 764,
ves_icall_System_MathF_Tan,
// token 765,
ves_icall_System_MathF_Tanh,
// token 766,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 767,
ves_icall_System_MathF_Log2,
// token 768,
ves_icall_System_MathF_ModF,
// token 895,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 904,
ves_icall_RuntimeType_make_array_type_raw,
// token 907,
ves_icall_RuntimeType_make_byref_type_raw,
// token 909,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 914,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 915,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 917,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 918,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 922,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 923,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 925,
ves_icall_System_RuntimeType_getFullName_raw,
// token 926,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 929,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 930,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 931,
ves_icall_RuntimeType_GetFields_native_raw,
// token 934,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 936,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 939,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 941,
ves_icall_RuntimeType_GetName_raw,
// token 943,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1014,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1016,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1018,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1027,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1028,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1029,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1030,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1032,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1039,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1040,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1041,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1042,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1043,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1051,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1052,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1053,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1057,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1058,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1060,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1064,
ves_icall_System_String_FastAllocateString_raw,
// token 1065,
ves_icall_System_String_InternalIsInterned_raw,
// token 1066,
ves_icall_System_String_InternalIntern_raw,
// token 1337,
ves_icall_System_Type_internal_from_handle_raw,
// token 1534,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1535,
ves_icall_System_ValueType_Equals_raw,
// token 8799,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8800,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8802,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8803,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8804,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8805,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8806,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8808,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8810,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8812,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8813,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8822,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8824,
mono_monitor_exit_icall_raw,
// token 8828,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8829,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8831,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8833,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8835,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8846,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8855,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8856,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8858,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8859,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8860,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8861,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8862,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8864,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8866,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9941,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9945,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9947,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9948,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9949,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9950,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10092,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10093,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10094,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10095,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10115,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10116,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10117,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10119,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 10162,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10229,
mono_object_hash_icall_raw,
// token 10231,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10242,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10243,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10244,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 10245,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10558,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10559,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10564,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10565,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10595,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10618,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10624,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10631,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10641,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10644,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10732,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10741,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10743,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10744,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10750,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10763,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10783,
ves_icall_reflection_get_token_raw,
// token 10784,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10792,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10794,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10801,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10802,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10805,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10807,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10812,
ves_icall_reflection_get_token_raw,
// token 10818,
ves_icall_get_method_info_raw,
// token 10819,
ves_icall_get_method_attributes,
// token 10826,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10828,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10840,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10843,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10844,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10845,
ves_icall_reflection_get_token_raw,
// token 10856,
ves_icall_InternalInvoke_raw,
// token 10865,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10871,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10872,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10873,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10875,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10876,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10894,
ves_icall_InvokeClassConstructor_raw,
// token 10896,
ves_icall_InternalInvoke_raw,
// token 10910,
ves_icall_reflection_get_token_raw,
// token 10933,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10934,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10952,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10957,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10987,
ves_icall_reflection_get_token_raw,
// token 10988,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11445,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11446,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11518,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11598,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11850,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11851,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11857,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11858,
ves_icall_ModuleBuilder_getToken_raw,
// token 11859,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11865,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11935,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12336,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12337,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12763,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12764,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13700,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13721,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13728,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13730,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
