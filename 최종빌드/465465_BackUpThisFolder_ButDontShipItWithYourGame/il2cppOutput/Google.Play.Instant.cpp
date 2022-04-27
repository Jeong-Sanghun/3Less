#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Play.Instant.CookieApi/CookieApiException
struct CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9AFCD92D1714D95D0A3E441088D11CE03683E0A7____F0FD6C5B410F25CB25C3B53346C8972FAE30F8EE7411DF910480AD6B2D60DB83_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08F1C32D7439C5FF216BA8665DEAE784C2107486;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD;
IL2CPP_EXTERN_C String_t* _stringLiteral14BF624D0EE52B08451B607934D4ACD091E5A962;
IL2CPP_EXTERN_C String_t* _stringLiteral155F938ECC7D7CEE877C1B6173D26A0DADF7FC41;
IL2CPP_EXTERN_C String_t* _stringLiteral1DBC313DD0C5C86C72F457846177880DBFCA50BB;
IL2CPP_EXTERN_C String_t* _stringLiteral206A49E8409D9D146B719C02C441BF670EFC3C59;
IL2CPP_EXTERN_C String_t* _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3126D9E65C7330570A199032544DC363F6860B07;
IL2CPP_EXTERN_C String_t* _stringLiteral375E45460BED88BF655B643925071B3FA01EAED0;
IL2CPP_EXTERN_C String_t* _stringLiteral37884CD0956A674DD949F6C9D791CF688551D8BA;
IL2CPP_EXTERN_C String_t* _stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30;
IL2CPP_EXTERN_C String_t* _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4;
IL2CPP_EXTERN_C String_t* _stringLiteral477A3C0F088B23D5EEABAE9B739AB13CC1761A05;
IL2CPP_EXTERN_C String_t* _stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249;
IL2CPP_EXTERN_C String_t* _stringLiteral53511942A2DA0695F699824B0F2E935BED815591;
IL2CPP_EXTERN_C String_t* _stringLiteral552CCC47CF6F71A8551589E43EA661195FBD28B3;
IL2CPP_EXTERN_C String_t* _stringLiteral566D534C20F6481F57997A1E2AA2399F5445AAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAC478B5CFAC728EEDFAD8EF987591C655083DD;
IL2CPP_EXTERN_C String_t* _stringLiteral6205E093ED019F2F6CA2384EF32DA73CEC7FF279;
IL2CPP_EXTERN_C String_t* _stringLiteral655A70BD5B464DC5995BA7103E094C3336B20B58;
IL2CPP_EXTERN_C String_t* _stringLiteral67E4A9E3DCD973240F073D3AF222DCF0112F3D7C;
IL2CPP_EXTERN_C String_t* _stringLiteral706FC243D251EEECD09FE983EE13C9DDA0C7E9FB;
IL2CPP_EXTERN_C String_t* _stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8;
IL2CPP_EXTERN_C String_t* _stringLiteral7256AE90A5C14CEDEE1F4FD12740E2A3DA5A2FF6;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA51A1B998FF613C657512EA7096F4CB59077C3;
IL2CPP_EXTERN_C String_t* _stringLiteral814DE712ECC0FDE2282B555AFEDA4CC5301C1DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral83663A4A0F3F9BEEB17A64970B0550CA15E0CF94;
IL2CPP_EXTERN_C String_t* _stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3;
IL2CPP_EXTERN_C String_t* _stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE;
IL2CPP_EXTERN_C String_t* _stringLiteral90E7DC36C4BD89C99B4C1A72F17DC64E2317D7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE7C47A281973AEF939451405FF7A43573F53F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA54EF25EAAB12F366DC8E46DC26D7A61C061B8DC;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralAF84927C763322FBCFF70B4B66CE1AE089B13F7B;
IL2CPP_EXTERN_C String_t* _stringLiteralBE8440A03FE90C6ED6A828FF73CF4B01AB45D82A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87;
IL2CPP_EXTERN_C String_t* _stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD789FA7D3295DF95002DDA8ACFBCE9317F2E095E;
IL2CPP_EXTERN_C String_t* _stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8;
IL2CPP_EXTERN_C String_t* _stringLiteralDDEC42E7FC9A9AC97FFC61FF0FDA1356CE5D4DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralDF108BD87314861363BAE8197B3E7F8795A1D164;
IL2CPP_EXTERN_C String_t* _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7;
IL2CPP_EXTERN_C String_t* _stringLiteralEB43612AC09E28C2019D7F21B4552DA0272C66E2;
IL2CPP_EXTERN_C String_t* _stringLiteralED0C386529F71799697581C77D27793017A7238C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE87E91654DB6D67A29C6AA7C70A19F62898C019;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B7E4B359A212C69B79D3E5FA2160A30A4580D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF911B780594C982EF0DC52B63F36060301B10B42;
IL2CPP_EXTERN_C String_t* _stringLiteralFA484A42540475BC90CD372B87A079C7D1AFB6D6;
IL2CPP_EXTERN_C String_t* _stringLiteralFDC3C406362C19D955580A47ABFD5B1054D704EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_mB217D75284AD362556B951D2D4521B65D88996EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallLauncher_ShowInstallPrompt_m866407BD78A2A67DBE946703A3C4A86034F03D5B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t09006AAA41610ED501E7F8CB8FCC884024C9EEC9 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Google.Play.Instant.CookieApi
struct CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F  : public RuntimeObject
{
};

struct CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_StaticFields
{
	// System.Boolean Google.Play.Instant.CookieApi::_verifiedContentProvider
	bool ____verifiedContentProvider_8;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Google.Play.Instant.GooglePlayInstantUtils
struct GooglePlayInstantUtils_tE6B6D0D49A8B3501E6FACAEDF70DC6A36DFAD80F  : public RuntimeObject
{
};

// Google.Play.Instant.InstallLauncher
struct InstallLauncher_t218059BED4BC6DF7B53DE33297930E42795CEFF5  : public RuntimeObject
{
};

// Google.Play.Instant.PlaySignatureVerifier
struct PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D  : public RuntimeObject
{
};

struct PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_StaticFields
{
	// System.Byte[] Google.Play.Instant.PlaySignatureVerifier::GooglePlayPackageSignature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___GooglePlayPackageSignature_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1095
struct __StaticArrayInitTypeSizeU3D1095_t200F1883D4F4E5268B56EE73F3713D39590F9A7B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1095_t200F1883D4F4E5268B56EE73F3713D39590F9A7B__padding[1095];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9AFCD92D1714D95D0A3E441088D11CE03683E0A7  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t9AFCD92D1714D95D0A3E441088D11CE03683E0A7_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1095 <PrivateImplementationDetails>::F0FD6C5B410F25CB25C3B53346C8972FAE30F8EE7411DF910480AD6B2D60DB83
	__StaticArrayInitTypeSizeU3D1095_t200F1883D4F4E5268B56EE73F3713D39590F9A7B ___F0FD6C5B410F25CB25C3B53346C8972FAE30F8EE7411DF910480AD6B2D60DB83_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_18;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Google.Play.Instant.CookieApi/CookieApiException
struct CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF  : public Exception_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;

// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.Play.Instant.CookieApi::CallMethod(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72 (String_t* ___methodName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___extrasBundle1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Byte[] Google.Play.Instant.CookieApi::GetInstantAppCookieBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CookieApi_GetInstantAppCookieBytes_m0279F3EEF3D799A459203949E5AD90E2F0AB3A39 (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Int32 Google.Play.Instant.CookieApi::ProcessGetMyUid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieApi_ProcessGetMyUid_m44BCAE9FC4C7CB8492FD2A2D05ED9BFE01279709 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte[]>(System.String,System.Object[])
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean Google.Play.Instant.CookieApi::SetInstantAppCookieBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieApi_SetInstantAppCookieBytes_m5CDD4A25AD52ACD6BC56B792D4530525186B3F14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cookie0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.AndroidJavaObject Google.Play.Common.UnityPlayerHelper::GetCurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* UnityPlayerHelper_GetCurrentActivity_m01933022BA2917CC1E67B036D93D9FFD0EA2300D (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean Google.Play.Instant.PlaySignatureVerifier::VerifyGooglePlayServices(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaySignatureVerifier_VerifyGooglePlayServices_mD0AF5D38A5DCF44C6BC6EF3C0BF95D3EC9E50BF0 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___packageManager0, const RuntimeMethod* method) ;
// System.Void Google.Play.Instant.CookieApi/CookieApiException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* __this, String_t* ___message0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.String>(System.String)
inline String_t* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Play.Instant.CookieApi::VerifyContentProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Google.Play.Instant.CookieApi/CookieApiException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApiException__ctor_m24176AC80E72E7E6D22E6A36E8F755306D00A38A (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.Play.Instant.InstallLauncher::CreatePostInstallIntent(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InstallLauncher_CreatePostInstallIntent_mAB8277CE9EF719A9A1B02AFCCE111C9FA978FC36 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity0, const RuntimeMethod* method) ;
// System.Void Google.Play.Instant.InstallLauncher::ShowInstallPrompt(UnityEngine.AndroidJavaObject,System.Int32,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallLauncher_ShowInstallPrompt_m866407BD78A2A67DBE946703A3C4A86034F03D5B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity0, int32_t ___requestCode1, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___postInstallIntent2, String_t* ___referrer3, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.Instant.PlaySignatureVerifier::VerifyGooglePlayPackage(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaySignatureVerifier_VerifyGooglePlayPackage_m7FE55D0AA1BD469631609631D7438A1725C5DEE4 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___packageManager0, String_t* ___packageName1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject[]>(System.String)
inline AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* AndroidJavaObject_Get_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_mB217D75284AD362556B951D2D4521B65D88996EA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_gshared)(___first0, ___second1, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Google.Play.Instant.CookieApi::GetInstantAppCookieMaxSizeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieApi_GetInstantAppCookieMaxSizeBytes_m96470306AADDDD36A7AA349937F3FC4A2CB7187E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF84927C763322FBCFF70B4B66CE1AE089B13F7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// using (var extrasBundle = new AndroidJavaObject(AndroidConstants.BundleClass))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_004b;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var resultBundle = CallMethod(MethodGetInstantAppCookieMaxSize, extrasBundle))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
				L_5 = CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72(_stringLiteralAF84927C763322FBCFF70B4B66CE1AE089B13F7B, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0038_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0041_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0041_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return resultBundle.Call<int>(AndroidConstants.BundleMethodGetInt, KeyResult);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
					NullCheck(L_10);
					ArrayElementTypeCheck (L_10, _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					NullCheck(L_8);
					int32_t L_11;
					L_11 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_8, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, L_10, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
					V_2 = L_11;
					goto IL_004c;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.String Google.Play.Instant.CookieApi::GetInstantAppCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieApi_GetInstantAppCookie_mE9EA83C745655A88E8E4DA7F0C5E101E966BFAA7 (const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var cookieBytes = GetInstantAppCookieBytes();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = CookieApi_GetInstantAppCookieBytes_m0279F3EEF3D799A459203949E5AD90E2F0AB3A39(NULL);
		V_0 = L_0;
		// return cookieBytes == null ? null : Encoding.UTF8.GetString(cookieBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}

IL_0015:
	{
		return (String_t*)NULL;
	}
}
// System.Byte[] Google.Play.Instant.CookieApi::GetInstantAppCookieBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CookieApi_GetInstantAppCookieBytes_m0279F3EEF3D799A459203949E5AD90E2F0AB3A39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral477A3C0F088B23D5EEABAE9B739AB13CC1761A05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AE7C47A281973AEF939451405FF7A43573F53F1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var extrasBundle = new AndroidJavaObject(AndroidConstants.BundleClass))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0071;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// extrasBundle.Call(AndroidConstants.BundleMethodPutInt, KeyUid, ProcessGetMyUid());
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, _stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
				int32_t L_8;
				L_8 = CookieApi_ProcessGetMyUid_m44BCAE9FC4C7CB8492FD2A2D05ED9BFE01279709(NULL);
				int32_t L_9 = L_8;
				RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_10);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
				NullCheck(L_4);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, L_7, NULL);
				// using (var resultBundle = CallMethod(MethodGetInstantAppCookie, extrasBundle))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
				L_12 = CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72(_stringLiteral9AE7C47A281973AEF939451405FF7A43573F53F1, L_11, NULL);
				V_1 = L_12;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005e_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_1;
							if (!L_13)
							{
								goto IL_0067_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_1;
							NullCheck(L_14);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
						}

IL_0067_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return resultBundle.Call<byte[]>(AndroidConstants.BundleMethodGetByteArray, KeyResult);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
					NullCheck(L_17);
					ArrayElementTypeCheck (L_17, _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					NullCheck(L_15);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
					L_18 = AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C(L_15, _stringLiteral477A3C0F088B23D5EEABAE9B739AB13CC1761A05, L_17, AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
					V_2 = L_18;
					goto IL_0072;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		return L_19;
	}
}
// System.Boolean Google.Play.Instant.CookieApi::SetInstantAppCookie(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieApi_SetInstantAppCookie_m1A0A639A4AB05647E69D4606C1079BAC100B5856 (String_t* ___cookie0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	{
		// var cookieBytes = cookie == null ? null : Encoding.UTF8.GetBytes(cookie);
		String_t* L_0 = ___cookie0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___cookie0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
	}

IL_0011:
	{
		// return SetInstantAppCookieBytes(cookieBytes);
		bool L_4;
		L_4 = CookieApi_SetInstantAppCookieBytes_m5CDD4A25AD52ACD6BC56B792D4530525186B3F14(G_B3_0, NULL);
		return L_4;
	}
}
// System.Boolean Google.Play.Instant.CookieApi::SetInstantAppCookieBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieApi_SetInstantAppCookieBytes_m5CDD4A25AD52ACD6BC56B792D4530525186B3F14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DBC313DD0C5C86C72F457846177880DBFCA50BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral206A49E8409D9D146B719C02C441BF670EFC3C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	{
		// using (var extrasBundle = new AndroidJavaObject(AndroidConstants.BundleClass))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral8EBE12F55EB8CC323D04E70A6BF5A3146346C9EE, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_008e;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// extrasBundle.Call(AndroidConstants.BundleMethodPutInt, KeyUid, ProcessGetMyUid());
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, _stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
				int32_t L_8;
				L_8 = CookieApi_ProcessGetMyUid_m44BCAE9FC4C7CB8492FD2A2D05ED9BFE01279709(NULL);
				int32_t L_9 = L_8;
				RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_10);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
				NullCheck(L_4);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, L_7, NULL);
				// extrasBundle.Call(AndroidConstants.BundleMethodPutByteArray, KeyCookie, cookie);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___cookie0;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_15);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
				NullCheck(L_11);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_11, _stringLiteral1DBC313DD0C5C86C72F457846177880DBFCA50BB, L_14, NULL);
				// using (var resultBundle = CallMethod(MethodSetInstantAppCookie, extrasBundle))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_0;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
				L_17 = CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72(_stringLiteral206A49E8409D9D146B719C02C441BF670EFC3C59, L_16, NULL);
				V_1 = L_17;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_007b_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_1;
							if (!L_18)
							{
								goto IL_0084_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_1;
							NullCheck(L_19);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
						}

IL_0084_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return resultBundle.Call<bool>(AndroidConstants.BundleMethodGetBoolean, KeyResult);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
					NullCheck(L_22);
					ArrayElementTypeCheck (L_22, _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
					NullCheck(L_20);
					bool L_23;
					L_23 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_20, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, L_22, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
					V_2 = L_23;
					goto IL_008f;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// }
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Void Google.Play.Instant.CookieApi::VerifyContentProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral552CCC47CF6F71A8551589E43EA661195FBD28B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA54EF25EAAB12F366DC8E46DC26D7A61C061B8DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8440A03FE90C6ED6A828FF73CF4B01AB45D82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF108BD87314861363BAE8197B3E7F8795A1D164);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// if (_verifiedContentProvider)
		bool L_0 = ((CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_StaticFields*)il2cpp_codegen_static_fields_for(CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_il2cpp_TypeInfo_var))->____verifiedContentProvider_8;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// using (var context = UnityPlayerHelper.GetCurrentActivity())
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = UnityPlayerHelper_GetCurrentActivity_m01933022BA2917CC1E67B036D93D9FFD0EA2300D(NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00ac;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00ac:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var packageManager = context.Call<AndroidJavaObject>(AndroidConstants.ContextMethodGetPackageManager))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
				L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
				NullCheck(L_4);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
				L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_1 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0099_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
							if (!L_7)
							{
								goto IL_00a2_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_00a2_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (var providerInfo = packageManager.Call<AndroidJavaObject>(
						//     AndroidConstants.PackageManagerMethodResolveContentProvider, Authority, 0))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
						NullCheck(L_11);
						ArrayElementTypeCheck (L_11, _stringLiteralBE8440A03FE90C6ED6A828FF73CF4B01AB45D82A);
						(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralBE8440A03FE90C6ED6A828FF73CF4B01AB45D82A);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
						int32_t L_13 = 0;
						RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
						NullCheck(L_12);
						ArrayElementTypeCheck (L_12, L_14);
						(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
						NullCheck(L_9);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15;
						L_15 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_9, _stringLiteralA54EF25EAAB12F366DC8E46DC26D7A61C061B8DC, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_15;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008f_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_2;
									if (!L_16)
									{
										goto IL_0098_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_2;
									NullCheck(L_17);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
								}

IL_0098_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// if (!PlaySignatureVerifier.VerifyGooglePlayServices(packageManager))
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_1;
								il2cpp_codegen_runtime_class_init_inline(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
								bool L_19;
								L_19 = PlaySignatureVerifier_VerifyGooglePlayServices_mD0AF5D38A5DCF44C6BC6EF3C0BF95D3EC9E50BF0(L_18, NULL);
								if (L_19)
								{
									goto IL_0055_3;
								}
							}
							{
								// throw new CookieApiException("Failed to verify the signature of Google Play Services.");
								CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* L_20 = (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var)));
								NullCheck(L_20);
								CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BAC478B5CFAC728EEDFAD8EF987591C655083DD)), NULL);
								IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6_RuntimeMethod_var)));
							}

IL_0055_3:
							{
								// if (providerInfo == null)
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_2;
								if (L_21)
								{
									goto IL_0063_3;
								}
							}
							{
								// throw new CookieApiException("Failed to resolve the instant apps content provider.");
								CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* L_22 = (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var)));
								NullCheck(L_22);
								CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDEC42E7FC9A9AC97FFC61FF0FDA1356CE5D4DB1)), NULL);
								IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6_RuntimeMethod_var)));
							}

IL_0063_3:
							{
								// var packageName = providerInfo.Get<string>(AndroidConstants.ProviderInfoFieldPackageName);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_2;
								NullCheck(L_23);
								String_t* L_24;
								L_24 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_23, _stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
								V_3 = L_24;
								// if (!string.Equals(packageName, AndroidConstants.GooglePlayServicesPackageName))
								String_t* L_25 = V_3;
								bool L_26;
								L_26 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_25, _stringLiteral552CCC47CF6F71A8551589E43EA661195FBD28B3, NULL);
								if (L_26)
								{
									goto IL_008d_3;
								}
							}
							{
								// throw new CookieApiException(
								//     string.Format("Package \"{0}\" is an invalid instant apps content provider.", packageName));
								String_t* L_27 = V_3;
								String_t* L_28;
								L_28 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83663A4A0F3F9BEEB17A64970B0550CA15E0CF94)), L_27, NULL);
								CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* L_29 = (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var)));
								NullCheck(L_29);
								CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC(L_29, L_28, NULL);
								IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6_RuntimeMethod_var)));
							}

IL_008d_3:
							{
								// }
								goto IL_00ad;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ad:
	{
		// Debug.Log("Verified instant apps content provider.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDF108BD87314861363BAE8197B3E7F8795A1D164, NULL);
		// _verifiedContentProvider = true;
		((CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_StaticFields*)il2cpp_codegen_static_fields_for(CookieApi_t7FB5712FA38C1B0625536D4AE966BFB1A9580F5F_il2cpp_TypeInfo_var))->____verifiedContentProvider_8 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Google.Play.Instant.CookieApi::CallMethod(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72 (String_t* ___methodName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___extrasBundle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BF624D0EE52B08451B607934D4ACD091E5A962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral655A70BD5B464DC5995BA7103E094C3336B20B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// VerifyContentProvider();
		CookieApi_VerifyContentProvider_mDC24F0A3AB45235E04671350F2971E01026A51F6(NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// using (var context = UnityPlayerHelper.GetCurrentActivity())
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
			L_0 = UnityPlayerHelper_GetCurrentActivity_m01933022BA2917CC1E67B036D93D9FFD0EA2300D(NULL);
			V_1 = L_0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0089_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = V_1;
						if (!L_1)
						{
							goto IL_0092_1;
						}
					}
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_1;
						NullCheck(L_2);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
					}

IL_0092_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (var contentResolver = context.Call<AndroidJavaObject>(AndroidConstants.ContextMethodGetContentResolver))
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
					L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
					NullCheck(L_3);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
					L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral655A70BD5B464DC5995BA7103E094C3336B20B58, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
					V_2 = L_5;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_007d_2:
						{// begin finally (depth: 3)
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
								if (!L_6)
								{
									goto IL_0086_2;
								}
							}
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
								NullCheck(L_7);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
							}

IL_0086_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							// using (var uriClass = new AndroidJavaClass(AndroidConstants.UriClass))
							AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
							NullCheck(L_8);
							AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_8, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
							V_3 = L_8;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0071_3:
								{// begin finally (depth: 4)
									{
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_9 = V_3;
										if (!L_9)
										{
											goto IL_007a_3;
										}
									}
									{
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = V_3;
										NullCheck(L_10);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
									}

IL_007a_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								{
									// using (var uri = uriClass.CallStatic<AndroidJavaObject>(AndroidConstants.UriMethodParse, ContentAuthority))
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = V_3;
									ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
									ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
									NullCheck(L_13);
									ArrayElementTypeCheck (L_13, _stringLiteral14BF624D0EE52B08451B607934D4ACD091E5A962);
									(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral14BF624D0EE52B08451B607934D4ACD091E5A962);
									NullCheck(L_11);
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
									L_14 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_11, _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA, L_13, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
									V_4 = L_14;
								}
								{
									auto __finallyBlock = il2cpp::utils::Finally([&]
									{

FINALLY_0063_4:
										{// begin finally (depth: 5)
											{
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_4;
												if (!L_15)
												{
													goto IL_006e_4;
												}
											}
											{
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_4;
												NullCheck(L_16);
												InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
											}

IL_006e_4:
											{
												return;
											}
										}// end finally (depth: 5)
									});
									try
									{// begin try (depth: 5)
										// resultBundle = contentResolver.Call<AndroidJavaObject>(
										//     AndroidConstants.ContentResolverMethodCall, uri, methodName, null, extrasBundle);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_2;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_4;
										NullCheck(L_19);
										ArrayElementTypeCheck (L_19, L_20);
										(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
										String_t* L_22 = ___methodName0;
										NullCheck(L_21);
										ArrayElementTypeCheck (L_21, L_22);
										(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___extrasBundle1;
										NullCheck(L_23);
										ArrayElementTypeCheck (L_23, L_24);
										(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_24);
										NullCheck(L_17);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25;
										L_25 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_17, _stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3, L_23, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_0 = L_25;
										// }
										goto IL_006f_4;
									}// end try (depth: 5)
									catch(Il2CppExceptionWrapper& e)
									{
										__finallyBlock.StoreException(e.ex);
									}
								}

IL_006f_4:
								{
									goto IL_007b_3;
								}
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_007b_3:
						{
							goto IL_0087_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0087_2:
				{
					goto IL_0093_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0093_1:
		{
			// }
			goto IL_00aa;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{// begin catch(UnityEngine.AndroidJavaException)
		// catch (AndroidJavaException ex)
		V_5 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		// throw new CookieApiException(
		//     string.Format("Failed to call {0} on the instant apps content provider.", methodName), ex);
		String_t* L_26 = ___methodName0;
		String_t* L_27;
		L_27 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral155F938ECC7D7CEE877C1B6173D26A0DADF7FC41)), L_26, NULL);
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_28 = V_5;
		CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* L_29 = (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		CookieApiException__ctor_m24176AC80E72E7E6D22E6A36E8F755306D00A38A(L_29, L_27, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00aa:
	{
		// if (resultBundle == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_0;
		if (L_30)
		{
			goto IL_00be;
		}
	}
	{
		// throw new CookieApiException(
		//     string.Format("Null result calling {0} on the instant apps content provider.", methodName));
		String_t* L_31 = ___methodName0;
		String_t* L_32;
		L_32 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED0C386529F71799697581C77D27793017A7238C)), L_31, NULL);
		CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* L_33 = (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieApi_CallMethod_m3015C6D630FC69BCC459E978AF93ADE05A94FA72_RuntimeMethod_var)));
	}

IL_00be:
	{
		// return resultBundle;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = V_0;
		return L_34;
	}
}
// System.Int32 Google.Play.Instant.CookieApi::ProcessGetMyUid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieApi_ProcessGetMyUid_m44BCAE9FC4C7CB8492FD2A2D05ED9BFE01279709 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E4A9E3DCD973240F073D3AF222DCF0112F3D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// using (var processClass = new AndroidJavaClass(AndroidConstants.ProcessClass))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return processClass.CallStatic<int>(AndroidConstants.ProcessMethodMyUid);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
			L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
			NullCheck(L_3);
			int32_t L_5;
			L_5 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_3, _stringLiteral67E4A9E3DCD973240F073D3AF222DCF0112F3D7C, L_4, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
			V_1 = L_5;
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.Instant.CookieApi/CookieApiException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApiException__ctor_m24176AC80E72E7E6D22E6A36E8F755306D00A38A (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CookieApiException(string message, Exception innerException) : base(message, innerException)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.Instant.CookieApi/CookieApiException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieApiException__ctor_mC50E588BE956094AEA01FF546E6F3C4E50D0AFFC (CookieApiException_tFA5EF30E4AB26FF002319A7AA9F998C2203746CF* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CookieApiException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Google.Play.Instant.GooglePlayInstantUtils::IsInstantApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GooglePlayInstantUtils_IsInstantApp_m04C47EA66DC09AA440A506E0109516DE6A247D51 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.Instant.InstallLauncher::ShowInstallPrompt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallLauncher_ShowInstallPrompt_m8275E7CB880886C3BA61B6298020D6B9DF855B7F (String_t* ___referrer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// using (var activity = UnityPlayerHelper.GetCurrentActivity())
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = UnityPlayerHelper_GetCurrentActivity_m01933022BA2917CC1E67B036D93D9FFD0EA2300D(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var postInstallIntent = CreatePostInstallIntent(activity))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
				L_4 = InstallLauncher_CreatePostInstallIntent_mAB8277CE9EF719A9A1B02AFCCE111C9FA978FC36(L_3, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_001c_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0025_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0025_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// ShowInstallPrompt(activity, IgnoredRequestCode, postInstallIntent, referrer);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
					String_t* L_9 = ___referrer0;
					InstallLauncher_ShowInstallPrompt_m866407BD78A2A67DBE946703A3C4A86034F03D5B(L_7, ((int32_t)1001), L_8, L_9, NULL);
					// }
					goto IL_0030;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Google.Play.Instant.InstallLauncher::ShowInstallPrompt(UnityEngine.AndroidJavaObject,System.Int32,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallLauncher_ShowInstallPrompt_m866407BD78A2A67DBE946703A3C4A86034F03D5B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity0, int32_t ___requestCode1, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___postInstallIntent2, String_t* ___referrer3, const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException("ShowInstallPrompt should only be called from instant apps.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB43612AC09E28C2019D7F21B4552DA0272C66E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstallLauncher_ShowInstallPrompt_m866407BD78A2A67DBE946703A3C4A86034F03D5B_RuntimeMethod_var)));
	}
}
// UnityEngine.AndroidJavaObject Google.Play.Instant.InstallLauncher::CreatePostInstallIntent(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InstallLauncher_CreatePostInstallIntent_mAB8277CE9EF719A9A1B02AFCCE111C9FA978FC36 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// using (var activityClass = activity.Call<AndroidJavaObject>(AndroidConstants.ObjectMethodGetClass))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___activity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return new AndroidJavaObject(AndroidConstants.IntentClass, activity, activityClass);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___activity0;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_8, NULL);
			V_1 = L_10;
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		return L_11;
	}
}
// System.Void Google.Play.Instant.InstallLauncher::PutPostInstallIntentStringExtra(UnityEngine.AndroidJavaObject,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallLauncher_PutPostInstallIntentStringExtra_mE89B97D414C868C311F836575EAB406CC30C249B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___postInstallIntent0, String_t* ___extraKey1, String_t* ___extraValue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// using (postInstallIntent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodPutExtra, extraKey,
		//     extraValue))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___postInstallIntent0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___extraKey1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___extraValue2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0025;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// }
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.String Google.Play.Instant.InstallLauncher::GetPostInstallIntentStringExtra(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallLauncher_GetPostInstallIntentStringExtra_mE72285AB1D0D3881B08520E3E03700B86CDEE32B (String_t* ___extraKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// using (var activity = UnityPlayerHelper.GetCurrentActivity())
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = UnityPlayerHelper_GetCurrentActivity_m01933022BA2917CC1E67B036D93D9FFD0EA2300D(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0042;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var intent = activity.Call<AndroidJavaObject>(AndroidConstants.ActivityMethodGetIntent))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
				L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
				NullCheck(L_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
				L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002f_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0038_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0038_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return intent.Call<string>(AndroidConstants.IntentMethodGetStringExtra, extraKey);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
					String_t* L_11 = ___extraKey0;
					NullCheck(L_10);
					ArrayElementTypeCheck (L_10, L_11);
					(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
					NullCheck(L_8);
					String_t* L_12;
					L_12 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_8, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_10, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
					V_2 = L_12;
					goto IL_0043;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.AndroidJavaObject Google.Play.Instant.InstallLauncher::CreateMarketDetailsUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InstallLauncher_CreateMarketDetailsUri_m0E37A56A9437EF2D8A75683C8D38DF2CCC3FB641 (String_t* ___referrer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA51A1B998FF613C657512EA7096F4CB59077C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral814DE712ECC0FDE2282B555AFEDA4CC5301C1DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90E7DC36C4BD89C99B4C1A72F17DC64E2317D7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF911B780594C982EF0DC52B63F36060301B10B42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA484A42540475BC90CD372B87A079C7D1AFB6D6);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	{
		// using (var uriBuilder = new AndroidJavaObject(AndroidConstants.UriBuilderClass))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral90E7DC36C4BD89C99B4C1A72F17DC64E2317D7C9, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cd:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00d6;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00d6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (uriBuilder.Call<AndroidJavaObject>(AndroidConstants.UriBuilderMethodScheme, "market"))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, _stringLiteralFA484A42540475BC90CD372B87A079C7D1AFB6D6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralFA484A42540475BC90CD372B87A079C7D1AFB6D6);
				NullCheck(L_4);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
				L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_1 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00c3_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
							if (!L_8)
							{
								goto IL_00cc_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_00cc_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (uriBuilder.Call<AndroidJavaObject>(AndroidConstants.UriBuilderMethodAuthority, "details"))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
						NullCheck(L_12);
						ArrayElementTypeCheck (L_12, _stringLiteral814DE712ECC0FDE2282B555AFEDA4CC5301C1DE1);
						(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral814DE712ECC0FDE2282B555AFEDA4CC5301C1DE1);
						NullCheck(L_10);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
						L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_10, _stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_13;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00b9_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_2;
									if (!L_14)
									{
										goto IL_00c2_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_2;
									NullCheck(L_15);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
								}

IL_00c2_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (uriBuilder.Call<AndroidJavaObject>(
								//     AndroidConstants.UriBuilderMethodAppendQueryParameter, "id", Application.identifier))
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_0;
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
								NullCheck(L_18);
								ArrayElementTypeCheck (L_18, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
								(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
								String_t* L_20;
								L_20 = Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006(NULL);
								NullCheck(L_19);
								ArrayElementTypeCheck (L_19, L_20);
								(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
								NullCheck(L_16);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21;
								L_21 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_16, _stringLiteralF911B780594C982EF0DC52B63F36060301B10B42, L_19, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
								V_3 = L_21;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00af_3:
									{// begin finally (depth: 4)
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_3;
											if (!L_22)
											{
												goto IL_00b8_3;
											}
										}
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_3;
											NullCheck(L_23);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
										}

IL_00b8_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// if (!string.IsNullOrEmpty(referrer))
										String_t* L_24 = ___referrer0;
										bool L_25;
										L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
										if (L_25)
										{
											goto IL_009b_4;
										}
									}
									{
										// using (uriBuilder.Call<AndroidJavaObject>(
										//     AndroidConstants.UriBuilderMethodAppendQueryParameter, "referrer", referrer))
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_0;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
										NullCheck(L_28);
										ArrayElementTypeCheck (L_28, _stringLiteral7EA51A1B998FF613C657512EA7096F4CB59077C3);
										(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral7EA51A1B998FF613C657512EA7096F4CB59077C3);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_28;
										String_t* L_30 = ___referrer0;
										NullCheck(L_29);
										ArrayElementTypeCheck (L_29, L_30);
										(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_30);
										NullCheck(L_26);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31;
										L_31 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_26, _stringLiteralF911B780594C982EF0DC52B63F36060301B10B42, L_29, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_4 = L_31;
									}
									{
										auto __finallyBlock = il2cpp::utils::Finally([&]
										{

FINALLY_008f_4:
											{// begin finally (depth: 5)
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = V_4;
													if (!L_32)
													{
														goto IL_009a_4;
													}
												}
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33 = V_4;
													NullCheck(L_33);
													InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
												}

IL_009a_4:
												{
													return;
												}
											}// end finally (depth: 5)
										});
										try
										{// begin try (depth: 5)
											// }
											goto IL_009b_4;
										}// end try (depth: 5)
										catch(Il2CppExceptionWrapper& e)
										{
											__finallyBlock.StoreException(e.ex);
										}
									}

IL_009b_4:
									{
										// return uriBuilder.Call<AndroidJavaObject>(AndroidConstants.UriBuilderMethodBuild);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = V_0;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35;
										L_35 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
										NullCheck(L_34);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36;
										L_36 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_34, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_35, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_4 = L_36;
										goto IL_00d7;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d7:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = V_4;
		return L_37;
	}
}
// System.Boolean Google.Play.Instant.InstallLauncher::IsLegacyPlayStore(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallLauncher_IsLegacyPlayStore_mAD9338A36FF42F34FAE86DD9CE6FF08A23AC39CB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___context0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___installIntent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral566D534C20F6481F57997A1E2AA2399F5445AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	{
		// using (var packageManager =
		//     context.Call<AndroidJavaObject>(AndroidConstants.ContextMethodGetPackageManager))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___context0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004a;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var resolveInfo =
				//     packageManager.Call<AndroidJavaObject>(AndroidConstants.PackageManagerMethodResolveActivity,
				//         installIntent,
				//         0))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___installIntent1;
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_8);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
				int32_t L_10 = 0;
				RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_11);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
				NullCheck(L_5);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
				L_12 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteral566D534C20F6481F57997A1E2AA2399F5445AAA2, L_9, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_1 = L_12;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0037_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_1;
							if (!L_13)
							{
								goto IL_0040_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_1;
							NullCheck(L_14);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
						}

IL_0040_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return resolveInfo == null;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
					V_2 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					goto IL_004b;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void Google.Play.Instant.InstallLauncher::ShowLegacyInstallPrompt(UnityEngine.AndroidJavaObject,System.Int32,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallLauncher_ShowLegacyInstallPrompt_mE066AB8A5544AC9D90956CE672E2ABF1891C8280 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity0, int32_t ___requestCode1, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___uri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F1C32D7439C5FF216BA8665DEAE784C2107486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37884CD0956A674DD949F6C9D791CF688551D8BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53511942A2DA0695F699824B0F2E935BED815591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6205E093ED019F2F6CA2384EF32DA73CEC7FF279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD789FA7D3295DF95002DDA8ACFBCE9317F2E095E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B7E4B359A212C69B79D3E5FA2160A30A4580D5);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	{
		// using (var intent = new AndroidJavaObject(AndroidConstants.IntentClass, AndroidConstants.IntentActionView))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral53511942A2DA0695F699824B0F2E935BED815591);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral53511942A2DA0695F699824B0F2E935BED815591);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_2, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0100:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0109;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0109:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (intent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodAddCategory,
				//     AndroidConstants.IntentCategoryDefault))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, _stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
				NullCheck(L_5);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
				L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_1 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00f6_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
							if (!L_9)
							{
								goto IL_00ff_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_1;
							NullCheck(L_10);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
						}

IL_00ff_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (intent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodSetPackage,
						//     AndroidConstants.GooglePlayStorePackageName))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
						NullCheck(L_13);
						ArrayElementTypeCheck (L_13, _stringLiteral37884CD0956A674DD949F6C9D791CF688551D8BA);
						(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral37884CD0956A674DD949F6C9D791CF688551D8BA);
						NullCheck(L_11);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
						L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_11, _stringLiteralD789FA7D3295DF95002DDA8ACFBCE9317F2E095E, L_13, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_14;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00ec_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_2;
									if (!L_15)
									{
										goto IL_00f5_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_2;
									NullCheck(L_16);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
								}

IL_00f5_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (intent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodSetData, uri))
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_0;
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___uri2;
								NullCheck(L_19);
								ArrayElementTypeCheck (L_19, L_20);
								(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
								NullCheck(L_17);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21;
								L_21 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_17, _stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86, L_19, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
								V_3 = L_21;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00e2_3:
									{// begin finally (depth: 4)
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_3;
											if (!L_22)
											{
												goto IL_00eb_3;
											}
										}
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_3;
											NullCheck(L_23);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
										}

IL_00eb_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// using (intent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodPutExtra, "callerId",
										//     Application.identifier))
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = V_0;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
										NullCheck(L_26);
										ArrayElementTypeCheck (L_26, _stringLiteral08F1C32D7439C5FF216BA8665DEAE784C2107486);
										(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral08F1C32D7439C5FF216BA8665DEAE784C2107486);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
										String_t* L_28;
										L_28 = Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006(NULL);
										NullCheck(L_27);
										ArrayElementTypeCheck (L_27, L_28);
										(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_28);
										NullCheck(L_24);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
										L_29 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_24, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_27, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_4 = L_29;
									}
									{
										auto __finallyBlock = il2cpp::utils::Finally([&]
										{

FINALLY_00d6_4:
											{// begin finally (depth: 5)
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_4;
													if (!L_30)
													{
														goto IL_00e1_4;
													}
												}
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = V_4;
													NullCheck(L_31);
													InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
												}

IL_00e1_4:
												{
													return;
												}
											}// end finally (depth: 5)
										});
										try
										{// begin try (depth: 5)
											{
												// using (intent.Call<AndroidJavaObject>(AndroidConstants.IntentMethodPutExtra, "overlay", true))
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = V_0;
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
												NullCheck(L_34);
												ArrayElementTypeCheck (L_34, _stringLiteral6205E093ED019F2F6CA2384EF32DA73CEC7FF279);
												(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6205E093ED019F2F6CA2384EF32DA73CEC7FF279);
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
												bool L_36 = ((bool)1);
												RuntimeObject* L_37 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_36);
												NullCheck(L_35);
												ArrayElementTypeCheck (L_35, L_37);
												(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
												NullCheck(L_32);
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38;
												L_38 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_32, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_35, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
												V_5 = L_38;
											}
											{
												auto __finallyBlock = il2cpp::utils::Finally([&]
												{

FINALLY_00ca_5:
													{// begin finally (depth: 6)
														{
															AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39 = V_5;
															if (!L_39)
															{
																goto IL_00d5_5;
															}
														}
														{
															AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = V_5;
															NullCheck(L_40);
															InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_40);
														}

IL_00d5_5:
														{
															return;
														}
													}// end finally (depth: 6)
												});
												try
												{// begin try (depth: 6)
													// activity.Call(AndroidConstants.ActivityMethodStartActivityForResult, intent, requestCode);
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = ___activity0;
													ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
													ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = V_0;
													NullCheck(L_43);
													ArrayElementTypeCheck (L_43, L_44);
													(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
													ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_43;
													int32_t L_46 = ___requestCode1;
													int32_t L_47 = L_46;
													RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
													NullCheck(L_45);
													ArrayElementTypeCheck (L_45, L_48);
													(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_48);
													NullCheck(L_41);
													AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_41, _stringLiteralF7B7E4B359A212C69B79D3E5FA2160A30A4580D5, L_45, NULL);
													// }
													goto IL_010a;
												}// end try (depth: 6)
												catch(Il2CppExceptionWrapper& e)
												{
													__finallyBlock.StoreException(e.ex);
												}
											}
										}// end try (depth: 5)
										catch(Il2CppExceptionWrapper& e)
										{
											__finallyBlock.StoreException(e.ex);
										}
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Google.Play.Instant.PlaySignatureVerifier::VerifyGooglePlayServices(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaySignatureVerifier_VerifyGooglePlayServices_mD0AF5D38A5DCF44C6BC6EF3C0BF95D3EC9E50BF0 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___packageManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral552CCC47CF6F71A8551589E43EA661195FBD28B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return VerifyGooglePlayPackage(packageManager, AndroidConstants.GooglePlayServicesPackageName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___packageManager0;
		il2cpp_codegen_runtime_class_init_inline(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PlaySignatureVerifier_VerifyGooglePlayPackage_m7FE55D0AA1BD469631609631D7438A1725C5DEE4(L_0, _stringLiteral552CCC47CF6F71A8551589E43EA661195FBD28B3, NULL);
		return L_1;
	}
}
// System.Boolean Google.Play.Instant.PlaySignatureVerifier::VerifyGooglePlayPackage(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaySignatureVerifier_VerifyGooglePlayPackage_m7FE55D0AA1BD469631609631D7438A1725C5DEE4 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___packageManager0, String_t* ___packageName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_mB217D75284AD362556B951D2D4521B65D88996EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375E45460BED88BF655B643925071B3FA01EAED0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral706FC243D251EEECD09FE983EE13C9DDA0C7E9FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7256AE90A5C14CEDEE1F4FD12740E2A3DA5A2FF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE87E91654DB6D67A29C6AA7C70A19F62898C019);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_1 = NULL;
	bool V_2 = false;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (var packageInfo = packageManager.Call<AndroidJavaObject>(
			//     AndroidConstants.PackageManagerMethodGetPackageInfo, packageName, AndroidConstants.PackageManagerFieldGetSignatures))
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___packageManager0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
			String_t* L_3 = ___packageName1;
			NullCheck(L_2);
			ArrayElementTypeCheck (L_2, L_3);
			(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
			int32_t L_5 = ((int32_t)64);
			RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_6);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
			NullCheck(L_0);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
			L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralEE87E91654DB6D67A29C6AA7C70A19F62898C019, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			V_0 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0074_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
						if (!L_8)
						{
							goto IL_007d_1;
						}
					}
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_007d_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// var signatures = packageInfo.Get<AndroidJavaObject[]>(AndroidConstants.PackageInfoFieldSignatures);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
					NullCheck(L_10);
					AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_11;
					L_11 = AndroidJavaObject_Get_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_mB217D75284AD362556B951D2D4521B65D88996EA(L_10, _stringLiteral706FC243D251EEECD09FE983EE13C9DDA0C7E9FB, AndroidJavaObject_Get_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_mB217D75284AD362556B951D2D4521B65D88996EA_RuntimeMethod_var);
					V_1 = L_11;
					// if (signatures.Length != 1)
					AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_12 = V_1;
					NullCheck(L_12);
					if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((int32_t)1)))
					{
						goto IL_0055_2;
					}
				}
				{
					// Debug.LogErrorFormat(
					//     "Unexpected signature count {0} for package {1}", signatures.Length, packageName);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
					AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_15 = V_1;
					NullCheck(L_15);
					int32_t L_16 = ((int32_t)(((RuntimeArray*)L_15)->max_length));
					RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
					NullCheck(L_14);
					ArrayElementTypeCheck (L_14, L_17);
					(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
					String_t* L_19 = ___packageName1;
					NullCheck(L_18);
					ArrayElementTypeCheck (L_18, L_19);
					(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral375E45460BED88BF655B643925071B3FA01EAED0, L_18, NULL);
					// return false;
					V_2 = (bool)0;
					goto IL_009b;
				}

IL_0055_2:
				{
					// var signature = signatures[0];
					AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_20 = V_1;
					NullCheck(L_20);
					int32_t L_21 = 0;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
					// var bytes = signature.Call<byte[]>(AndroidConstants.SignatureMethodToByteArray);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23;
					L_23 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
					NullCheck(L_22);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
					L_24 = AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C(L_22, _stringLiteral7256AE90A5C14CEDEE1F4FD12740E2A3DA5A2FF6, L_23, AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
					// return Enumerable.SequenceEqual(bytes, GooglePlayPackageSignature);
					il2cpp_codegen_runtime_class_init_inline(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_StaticFields*)il2cpp_codegen_static_fields_for(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var))->___GooglePlayPackageSignature_1;
					bool L_26;
					L_26 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A((RuntimeObject*)L_24, (RuntimeObject*)L_25, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var);
					V_2 = L_26;
					goto IL_009b;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(UnityEngine.AndroidJavaException)
		// catch (AndroidJavaException ex)
		V_3 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		// Debug.LogErrorFormat("Exception verifying package {0}: {1}", packageName, ex);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		String_t* L_29 = ___packageName1;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_31 = V_3;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDC3C406362C19D955580A47ABFD5B1054D704EC)), L_30, NULL);
		// return false;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009b;
	}// end catch (depth: 1)

IL_009b:
	{
		// }
		bool L_32 = V_2;
		return L_32;
	}
}
// System.Void Google.Play.Instant.PlaySignatureVerifier::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySignatureVerifier__cctor_mB929E8E68343BB434AD3759CDB84634EA72D3900 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9AFCD92D1714D95D0A3E441088D11CE03683E0A7____F0FD6C5B410F25CB25C3B53346C8972FAE30F8EE7411DF910480AD6B2D60DB83_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] GooglePlayPackageSignature =
		// {
		//     0x30, 0x82, 0x04, 0x43, 0x30, 0x82, 0x03, 0x2B, 0xA0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x09, 0x00, 0xC2, 0xE0,
		//     0x87, 0x46, 0x64, 0x4A, 0x30, 0x8D, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01,
		//     0x04, 0x05, 0x00, 0x30, 0x74, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53,
		//     0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0A, 0x43, 0x61, 0x6C, 0x69, 0x66, 0x6F, 0x72,
		//     0x6E, 0x69, 0x61, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x0D, 0x4D, 0x6F, 0x75, 0x6E,
		//     0x74, 0x61, 0x69, 0x6E, 0x20, 0x56, 0x69, 0x65, 0x77, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0A,
		//     0x13, 0x0B, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0x20, 0x49, 0x6E, 0x63, 0x2E, 0x31, 0x10, 0x30, 0x0E, 0x06,
		//     0x03, 0x55, 0x04, 0x0B, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F, 0x69, 0x64, 0x31, 0x10, 0x30, 0x0E, 0x06,
		//     0x03, 0x55, 0x04, 0x03, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F, 0x69, 0x64, 0x30, 0x1E, 0x17, 0x0D, 0x30,
		//     0x38, 0x30, 0x38, 0x32, 0x31, 0x32, 0x33, 0x31, 0x33, 0x33, 0x34, 0x5A, 0x17, 0x0D, 0x33, 0x36, 0x30, 0x31,
		//     0x30, 0x37, 0x32, 0x33, 0x31, 0x33, 0x33, 0x34, 0x5A, 0x30, 0x74, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55,
		//     0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0A, 0x43,
		//     0x61, 0x6C, 0x69, 0x66, 0x6F, 0x72, 0x6E, 0x69, 0x61, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x07,
		//     0x13, 0x0D, 0x4D, 0x6F, 0x75, 0x6E, 0x74, 0x61, 0x69, 0x6E, 0x20, 0x56, 0x69, 0x65, 0x77, 0x31, 0x14, 0x30,
		//     0x12, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x0B, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0x20, 0x49, 0x6E, 0x63,
		//     0x2E, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F, 0x69,
		//     0x64, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F, 0x69,
		//     0x64, 0x30, 0x82, 0x01, 0x20, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01,
		//     0x05, 0x00, 0x03, 0x82, 0x01, 0x0D, 0x00, 0x30, 0x82, 0x01, 0x08, 0x02, 0x82, 0x01, 0x01, 0x00, 0xAB, 0x56,
		//     0x2E, 0x00, 0xD8, 0x3B, 0xA2, 0x08, 0xAE, 0x0A, 0x96, 0x6F, 0x12, 0x4E, 0x29, 0xDA, 0x11, 0xF2, 0xAB, 0x56,
		//     0xD0, 0x8F, 0x58, 0xE2, 0xCC, 0xA9, 0x13, 0x03, 0xE9, 0xB7, 0x54, 0xD3, 0x72, 0xF6, 0x40, 0xA7, 0x1B, 0x1D,
		//     0xCB, 0x13, 0x09, 0x67, 0x62, 0x4E, 0x46, 0x56, 0xA7, 0x77, 0x6A, 0x92, 0x19, 0x3D, 0xB2, 0xE5, 0xBF, 0xB7,
		//     0x24, 0xA9, 0x1E, 0x77, 0x18, 0x8B, 0x0E, 0x6A, 0x47, 0xA4, 0x3B, 0x33, 0xD9, 0x60, 0x9B, 0x77, 0x18, 0x31,
		//     0x45, 0xCC, 0xDF, 0x7B, 0x2E, 0x58, 0x66, 0x74, 0xC9, 0xE1, 0x56, 0x5B, 0x1F, 0x4C, 0x6A, 0x59, 0x55, 0xBF,
		//     0xF2, 0x51, 0xA6, 0x3D, 0xAB, 0xF9, 0xC5, 0x5C, 0x27, 0x22, 0x22, 0x52, 0xE8, 0x75, 0xE4, 0xF8, 0x15, 0x4A,
		//     0x64, 0x5F, 0x89, 0x71, 0x68, 0xC0, 0xB1, 0xBF, 0xC6, 0x12, 0xEA, 0xBF, 0x78, 0x57, 0x69, 0xBB, 0x34, 0xAA,
		//     0x79, 0x84, 0xDC, 0x7E, 0x2E, 0xA2, 0x76, 0x4C, 0xAE, 0x83, 0x07, 0xD8, 0xC1, 0x71, 0x54, 0xD7, 0xEE, 0x5F,
		//     0x64, 0xA5, 0x1A, 0x44, 0xA6, 0x02, 0xC2, 0x49, 0x05, 0x41, 0x57, 0xDC, 0x02, 0xCD, 0x5F, 0x5C, 0x0E, 0x55,
		//     0xFB, 0xEF, 0x85, 0x19, 0xFB, 0xE3, 0x27, 0xF0, 0xB1, 0x51, 0x16, 0x92, 0xC5, 0xA0, 0x6F, 0x19, 0xD1, 0x83,
		//     0x85, 0xF5, 0xC4, 0xDB, 0xC2, 0xD6, 0xB9, 0x3F, 0x68, 0xCC, 0x29, 0x79, 0xC7, 0x0E, 0x18, 0xAB, 0x93, 0x86,
		//     0x6B, 0x3B, 0xD5, 0xDB, 0x89, 0x99, 0x55, 0x2A, 0x0E, 0x3B, 0x4C, 0x99, 0xDF, 0x58, 0xFB, 0x91, 0x8B, 0xED,
		//     0xC1, 0x82, 0xBA, 0x35, 0xE0, 0x03, 0xC1, 0xB4, 0xB1, 0x0D, 0xD2, 0x44, 0xA8, 0xEE, 0x24, 0xFF, 0xFD, 0x33,
		//     0x38, 0x72, 0xAB, 0x52, 0x21, 0x98, 0x5E, 0xDA, 0xB0, 0xFC, 0x0D, 0x0B, 0x14, 0x5B, 0x6A, 0xA1, 0x92, 0x85,
		//     0x8E, 0x79, 0x02, 0x01, 0x03, 0xA3, 0x81, 0xD9, 0x30, 0x81, 0xD6, 0x30, 0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E,
		//     0x04, 0x16, 0x04, 0x14, 0xC7, 0x7D, 0x8C, 0xC2, 0x21, 0x17, 0x56, 0x25, 0x9A, 0x7F, 0xD3, 0x82, 0xDF, 0x6B,
		//     0xE3, 0x98, 0xE4, 0xD7, 0x86, 0xA5, 0x30, 0x81, 0xA6, 0x06, 0x03, 0x55, 0x1D, 0x23, 0x04, 0x81, 0x9E, 0x30,
		//     0x81, 0x9B, 0x80, 0x14, 0xC7, 0x7D, 0x8C, 0xC2, 0x21, 0x17, 0x56, 0x25, 0x9A, 0x7F, 0xD3, 0x82, 0xDF, 0x6B,
		//     0xE3, 0x98, 0xE4, 0xD7, 0x86, 0xA5, 0xA1, 0x78, 0xA4, 0x76, 0x30, 0x74, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03,
		//     0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0A,
		//     0x43, 0x61, 0x6C, 0x69, 0x66, 0x6F, 0x72, 0x6E, 0x69, 0x61, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04,
		//     0x07, 0x13, 0x0D, 0x4D, 0x6F, 0x75, 0x6E, 0x74, 0x61, 0x69, 0x6E, 0x20, 0x56, 0x69, 0x65, 0x77, 0x31, 0x14,
		//     0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x0B, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0x20, 0x49, 0x6E,
		//     0x63, 0x2E, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F,
		//     0x69, 0x64, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x07, 0x41, 0x6E, 0x64, 0x72, 0x6F,
		//     0x69, 0x64, 0x82, 0x09, 0x00, 0xC2, 0xE0, 0x87, 0x46, 0x64, 0x4A, 0x30, 0x8D, 0x30, 0x0C, 0x06, 0x03, 0x55,
		//     0x1D, 0x13, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xFF, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
		//     0x0D, 0x01, 0x01, 0x04, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x6D, 0xD2, 0x52, 0xCE, 0xEF, 0x85, 0x30,
		//     0x2C, 0x36, 0x0A, 0xAA, 0xCE, 0x93, 0x9B, 0xCF, 0xF2, 0xCC, 0xA9, 0x04, 0xBB, 0x5D, 0x7A, 0x16, 0x61, 0xF8,
		//     0xAE, 0x46, 0xB2, 0x99, 0x42, 0x04, 0xD0, 0xFF, 0x4A, 0x68, 0xC7, 0xED, 0x1A, 0x53, 0x1E, 0xC4, 0x59, 0x5A,
		//     0x62, 0x3C, 0xE6, 0x07, 0x63, 0xB1, 0x67, 0x29, 0x7A, 0x7A, 0xE3, 0x57, 0x12, 0xC4, 0x07, 0xF2, 0x08, 0xF0,
		//     0xCB, 0x10, 0x94, 0x29, 0x12, 0x4D, 0x7B, 0x10, 0x62, 0x19, 0xC0, 0x84, 0xCA, 0x3E, 0xB3, 0xF9, 0xAD, 0x5F,
		//     0xB8, 0x71, 0xEF, 0x92, 0x26, 0x9A, 0x8B, 0xE2, 0x8B, 0xF1, 0x6D, 0x44, 0xC8, 0xD9, 0xA0, 0x8E, 0x6C, 0xB2,
		//     0xF0, 0x05, 0xBB, 0x3F, 0xE2, 0xCB, 0x96, 0x44, 0x7E, 0x86, 0x8E, 0x73, 0x10, 0x76, 0xAD, 0x45, 0xB3, 0x3F,
		//     0x60, 0x09, 0xEA, 0x19, 0xC1, 0x61, 0xE6, 0x26, 0x41, 0xAA, 0x99, 0x27, 0x1D, 0xFD, 0x52, 0x28, 0xC5, 0xC5,
		//     0x87, 0x87, 0x5D, 0xDB, 0x7F, 0x45, 0x27, 0x58, 0xD6, 0x61, 0xF6, 0xCC, 0x0C, 0xCC, 0xB7, 0x35, 0x2E, 0x42,
		//     0x4C, 0xC4, 0x36, 0x5C, 0x52, 0x35, 0x32, 0xF7, 0x32, 0x51, 0x37, 0x59, 0x3C, 0x4A, 0xE3, 0x41, 0xF4, 0xDB,
		//     0x41, 0xED, 0xDA, 0x0D, 0x0B, 0x10, 0x71, 0xA7, 0xC4, 0x40, 0xF0, 0xFE, 0x9E, 0xA0, 0x1C, 0xB6, 0x27, 0xCA,
		//     0x67, 0x43, 0x69, 0xD0, 0x84, 0xBD, 0x2F, 0xD9, 0x11, 0xFF, 0x06, 0xCD, 0xBF, 0x2C, 0xFA, 0x10, 0xDC, 0x0F,
		//     0x89, 0x3A, 0xE3, 0x57, 0x62, 0x91, 0x90, 0x48, 0xC7, 0xEF, 0xC6, 0x4C, 0x71, 0x44, 0x17, 0x83, 0x42, 0xF7,
		//     0x05, 0x81, 0xC9, 0xDE, 0x57, 0x3A, 0xF5, 0x5B, 0x39, 0x0D, 0xD7, 0xFD, 0xB9, 0x41, 0x86, 0x31, 0x89, 0x5D,
		//     0x5F, 0x75, 0x9F, 0x30, 0x11, 0x26, 0x87, 0xFF, 0x62, 0x14, 0x10, 0xC0, 0x69, 0x30, 0x8A
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1095));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9AFCD92D1714D95D0A3E441088D11CE03683E0A7____F0FD6C5B410F25CB25C3B53346C8972FAE30F8EE7411DF910480AD6B2D60DB83_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_StaticFields*)il2cpp_codegen_static_fields_for(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var))->___GooglePlayPackageSignature_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_StaticFields*)il2cpp_codegen_static_fields_for(PlaySignatureVerifier_tA0BD5A374A837ADD3874962120168588E6E7559D_il2cpp_TypeInfo_var))->___GooglePlayPackageSignature_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
