#include <mono/jit/jit.h>
extern void *mono_aot_module_Microsoft_AspNetCore_Components_info;
extern void *mono_aot_module_Microsoft_AspNetCore_Components_Web_info;
extern void *mono_aot_module_Microsoft_AspNetCore_Components_WebAssembly_info;
extern void *mono_aot_module_Microsoft_AspNetCore_Connections_Abstractions_info;
extern void *mono_aot_module_Microsoft_AspNetCore_Http_Connections_Client_info;
extern void *mono_aot_module_Microsoft_AspNetCore_Http_Connections_Common_info;
extern void *mono_aot_module_Microsoft_AspNetCore_SignalR_Client_info;
extern void *mono_aot_module_Microsoft_AspNetCore_SignalR_Client_Core_info;
extern void *mono_aot_module_Microsoft_AspNetCore_SignalR_Common_info;
extern void *mono_aot_module_Microsoft_AspNetCore_SignalR_Protocols_Json_info;
extern void *mono_aot_module_Microsoft_Extensions_Configuration_info;
extern void *mono_aot_module_Microsoft_Extensions_Configuration_Abstractions_info;
extern void *mono_aot_module_Microsoft_Extensions_Configuration_Json_info;
extern void *mono_aot_module_Microsoft_Extensions_DependencyInjection_info;
extern void *mono_aot_module_Microsoft_Extensions_DependencyInjection_Abstractions_info;
extern void *mono_aot_module_Microsoft_Extensions_Features_info;
extern void *mono_aot_module_Microsoft_Extensions_Logging_info;
extern void *mono_aot_module_Microsoft_Extensions_Logging_Abstractions_info;
extern void *mono_aot_module_Microsoft_Extensions_Options_info;
extern void *mono_aot_module_Microsoft_Extensions_Primitives_info;
extern void *mono_aot_module_Microsoft_JSInterop_info;
extern void *mono_aot_module_Newtonsoft_Json_info;
extern void *mono_aot_module_System_IO_Pipelines_info;
extern void *mono_aot_module_WalliFront_info;
extern void *mono_aot_module_Microsoft_CSharp_info;
extern void *mono_aot_module_System_Collections_Concurrent_info;
extern void *mono_aot_module_System_Collections_NonGeneric_info;
extern void *mono_aot_module_System_Collections_Specialized_info;
extern void *mono_aot_module_System_Collections_info;
extern void *mono_aot_module_System_ComponentModel_Primitives_info;
extern void *mono_aot_module_System_ComponentModel_TypeConverter_info;
extern void *mono_aot_module_System_ComponentModel_info;
extern void *mono_aot_module_System_Console_info;
extern void *mono_aot_module_System_Data_Common_info;
extern void *mono_aot_module_System_Diagnostics_TraceSource_info;
extern void *mono_aot_module_System_Drawing_Primitives_info;
extern void *mono_aot_module_System_Drawing_info;
extern void *mono_aot_module_System_Linq_Expressions_info;
extern void *mono_aot_module_System_Linq_info;
extern void *mono_aot_module_System_Memory_info;
extern void *mono_aot_module_System_Net_Http_info;
extern void *mono_aot_module_System_Net_Primitives_info;
extern void *mono_aot_module_System_Net_Requests_info;
extern void *mono_aot_module_System_Net_Security_info;
extern void *mono_aot_module_System_Net_WebSockets_Client_info;
extern void *mono_aot_module_System_Net_WebSockets_info;
extern void *mono_aot_module_System_ObjectModel_info;
extern void *mono_aot_module_System_Private_Uri_info;
extern void *mono_aot_module_System_Private_Xml_Linq_info;
extern void *mono_aot_module_System_Private_Xml_info;
extern void *mono_aot_module_System_Reflection_Emit_ILGeneration_info;
extern void *mono_aot_module_System_Reflection_Emit_Lightweight_info;
extern void *mono_aot_module_System_Reflection_Primitives_info;
extern void *mono_aot_module_System_Runtime_InteropServices_JavaScript_info;
extern void *mono_aot_module_System_Runtime_InteropServices_info;
extern void *mono_aot_module_System_Runtime_Numerics_info;
extern void *mono_aot_module_System_Runtime_Serialization_Formatters_info;
extern void *mono_aot_module_System_Runtime_Serialization_Primitives_info;
extern void *mono_aot_module_System_Runtime_info;
extern void *mono_aot_module_System_Security_Cryptography_info;
extern void *mono_aot_module_System_Text_Encoding_Extensions_info;
extern void *mono_aot_module_System_Text_Encodings_Web_info;
extern void *mono_aot_module_System_Text_Json_info;
extern void *mono_aot_module_System_Text_RegularExpressions_info;
extern void *mono_aot_module_System_Threading_Channels_info;
extern void *mono_aot_module_System_Threading_info;
extern void *mono_aot_module_System_Xml_Linq_info;
extern void *mono_aot_module_System_Xml_ReaderWriter_info;
extern void *mono_aot_module_System_Xml_XDocument_info;
extern void *mono_aot_module_System_info;
extern void *mono_aot_module_System_Private_CoreLib_info;
void register_aot_modules ()
{
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Components_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Components_Web_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Components_WebAssembly_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Connections_Abstractions_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Http_Connections_Client_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_Http_Connections_Common_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_SignalR_Client_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_SignalR_Client_Core_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_SignalR_Common_info);
	mono_aot_register_module (mono_aot_module_Microsoft_AspNetCore_SignalR_Protocols_Json_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Configuration_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Configuration_Abstractions_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Configuration_Json_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_DependencyInjection_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_DependencyInjection_Abstractions_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Features_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Logging_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Logging_Abstractions_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Options_info);
	mono_aot_register_module (mono_aot_module_Microsoft_Extensions_Primitives_info);
	mono_aot_register_module (mono_aot_module_Microsoft_JSInterop_info);
	mono_aot_register_module (mono_aot_module_Newtonsoft_Json_info);
	mono_aot_register_module (mono_aot_module_System_IO_Pipelines_info);
	mono_aot_register_module (mono_aot_module_WalliFront_info);
	mono_aot_register_module (mono_aot_module_Microsoft_CSharp_info);
	mono_aot_register_module (mono_aot_module_System_Collections_Concurrent_info);
	mono_aot_register_module (mono_aot_module_System_Collections_NonGeneric_info);
	mono_aot_register_module (mono_aot_module_System_Collections_Specialized_info);
	mono_aot_register_module (mono_aot_module_System_Collections_info);
	mono_aot_register_module (mono_aot_module_System_ComponentModel_Primitives_info);
	mono_aot_register_module (mono_aot_module_System_ComponentModel_TypeConverter_info);
	mono_aot_register_module (mono_aot_module_System_ComponentModel_info);
	mono_aot_register_module (mono_aot_module_System_Console_info);
	mono_aot_register_module (mono_aot_module_System_Data_Common_info);
	mono_aot_register_module (mono_aot_module_System_Diagnostics_TraceSource_info);
	mono_aot_register_module (mono_aot_module_System_Drawing_Primitives_info);
	mono_aot_register_module (mono_aot_module_System_Drawing_info);
	mono_aot_register_module (mono_aot_module_System_Linq_Expressions_info);
	mono_aot_register_module (mono_aot_module_System_Linq_info);
	mono_aot_register_module (mono_aot_module_System_Memory_info);
	mono_aot_register_module (mono_aot_module_System_Net_Http_info);
	mono_aot_register_module (mono_aot_module_System_Net_Primitives_info);
	mono_aot_register_module (mono_aot_module_System_Net_Requests_info);
	mono_aot_register_module (mono_aot_module_System_Net_Security_info);
	mono_aot_register_module (mono_aot_module_System_Net_WebSockets_Client_info);
	mono_aot_register_module (mono_aot_module_System_Net_WebSockets_info);
	mono_aot_register_module (mono_aot_module_System_ObjectModel_info);
	mono_aot_register_module (mono_aot_module_System_Private_Uri_info);
	mono_aot_register_module (mono_aot_module_System_Private_Xml_Linq_info);
	mono_aot_register_module (mono_aot_module_System_Private_Xml_info);
	mono_aot_register_module (mono_aot_module_System_Reflection_Emit_ILGeneration_info);
	mono_aot_register_module (mono_aot_module_System_Reflection_Emit_Lightweight_info);
	mono_aot_register_module (mono_aot_module_System_Reflection_Primitives_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_InteropServices_JavaScript_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_InteropServices_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_Numerics_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_Serialization_Formatters_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_Serialization_Primitives_info);
	mono_aot_register_module (mono_aot_module_System_Runtime_info);
	mono_aot_register_module (mono_aot_module_System_Security_Cryptography_info);
	mono_aot_register_module (mono_aot_module_System_Text_Encoding_Extensions_info);
	mono_aot_register_module (mono_aot_module_System_Text_Encodings_Web_info);
	mono_aot_register_module (mono_aot_module_System_Text_Json_info);
	mono_aot_register_module (mono_aot_module_System_Text_RegularExpressions_info);
	mono_aot_register_module (mono_aot_module_System_Threading_Channels_info);
	mono_aot_register_module (mono_aot_module_System_Threading_info);
	mono_aot_register_module (mono_aot_module_System_Xml_Linq_info);
	mono_aot_register_module (mono_aot_module_System_Xml_ReaderWriter_info);
	mono_aot_register_module (mono_aot_module_System_Xml_XDocument_info);
	mono_aot_register_module (mono_aot_module_System_info);
	mono_aot_register_module (mono_aot_module_System_Private_CoreLib_info);
}
#define EE_MODE_LLVMONLY_INTERP 1
