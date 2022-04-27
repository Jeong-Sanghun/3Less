﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>
struct Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF;
// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>
struct Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>
struct HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<RenderHeads.Media.AVProVideo.Stream>
struct IEnumerable_1_tCD4CBC45C5CC687E1A7A66153DC5E7F9F1E52E9C;
// System.Collections.Generic.IEnumerable`1<RenderHeads.Media.AVProVideo.Stream/Chunk>
struct IEnumerable_1_tB2606E348995F2A5D1BE1825D3AB451E88C12D41;
// System.Collections.Generic.IEqualityComparer`1<RenderHeads.Media.AVProVideo.AudioOutput>
struct IEqualityComparer_1_tD1DB1580B3C146DD1D9502AC4F6C4A564380766E;
// System.Collections.Generic.IEqualityComparer`1<RenderHeads.Media.AVProVideo.MediaPlayer>
struct IEqualityComparer_1_t2CB5DEEE1ED80E584EE439D6DA4C995265F880D3;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.Dictionary`2/KeyCollection<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>
struct KeyCollection_t4890265C69CA02E3FB36E42F324FA61DC663C977;
// System.Collections.Generic.Dictionary`2/KeyCollection<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>
struct KeyCollection_t641BE9C17ECAA8F4F5C6E9BD7EE573D2DF36FFAD;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>
struct List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>
struct List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>
struct List_1_t883C630D2067C239C952528EF488E7D81CD1D12D;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>
struct List_1_t26134C5769E989D998FE57F2A4DA933E9158730A;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>
struct List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32Enum,System.Int32Enum>
struct UnityAction_3_t6DD5B8ECD125F220BE7E9DFC165CEEB0FC1165E1;
// UnityEngine.Events.UnityEvent`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32Enum,System.Int32Enum>
struct UnityEvent_3_t5D44EDD6BF9E7624E78EDBAEAF2476C3F53BCBB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>
struct ValueCollection_t412E5993E483D3E0C67A1AA0439E585494BFB520;
// System.Collections.Generic.Dictionary`2/ValueCollection<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>
struct ValueCollection_t327CBD9EBE247AA02EC9E4E2BD8CD04D7B40014B;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>[]
struct EntryU5BU5D_t80D2ABDBCD6DEF7F7C8A6D7A354D6132548F6D09;
// System.Collections.Generic.Dictionary`2/Entry<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>[]
struct EntryU5BU5D_t951FE7E1461224FB3B64058D29160B56AE5D7402;
// System.Collections.Generic.HashSet`1/Slot<RenderHeads.Media.AVProVideo.AudioOutput>[]
struct SlotU5BU5D_t6D5A47EAC7D278644B404ADAF4869DFF5D91948A;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[][]
struct TimestampedRenderTextureU5BU5DU5BU5D_t5EEEBB25211F971CCCE2A865D94F59BC784D4D97;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// RenderHeads.Media.AVProVideo.DisplayUGUI[]
struct DisplayUGUIU5BU5D_t09A3C056778FC40C6C40C293E683537EBDFC2571;
// System.Text.Encoding[]
struct EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// RenderHeads.Media.AVProVideo.MediaPlayer[]
struct MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// RenderHeads.Media.AVProVideo.Stream[]
struct StreamU5BU5D_t666A5307744CBFE6871C0BD4C907C22614F35286;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// RenderHeads.Media.AVProVideo.Subtitle[]
struct SubtitleU5BU5D_t31D5E1C14AB67A098731332C2CDCEB5904987FCA;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// RenderHeads.Media.AVProVideo.TimeRange[]
struct TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]
struct TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A;
// RenderHeads.Media.AVProVideo.Stream/Chunk[]
struct ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// RenderHeads.Media.AVProVideo.AudioOutput
struct AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988;
// RenderHeads.Media.AVProVideo.AudioOutputManager
struct AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// RenderHeads.Media.AVProVideo.Demos.AutoRotate
struct AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973;
// RenderHeads.Media.AVProVideo.BaseMediaPlayer
struct BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack
struct ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4;
// RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample
struct ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// RenderHeads.Media.AVProVideo.Demos.DemoInfo
struct DemoInfo_tA5E5A08015BD9C219876E57B8E1D1134146A317D;
// RenderHeads.Media.AVProVideo.DisplayIMGUI
struct DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E;
// RenderHeads.Media.AVProVideo.DisplayUGUI
struct DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// RenderHeads.Media.AVProVideo.Demos.FrameExtract
struct FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// RenderHeads.Media.AVProVideo.HLSStream
struct HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// RenderHeads.Media.AVProVideo.IMediaControl
struct IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9;
// RenderHeads.Media.AVProVideo.IMediaInfo
struct IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E;
// RenderHeads.Media.AVProVideo.IMediaPlayer
struct IMediaPlayer_t318B24718591C2BAB26B68D7D41384A5FACBB4E1;
// RenderHeads.Media.AVProVideo.IMediaProducer
struct IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B;
// RenderHeads.Media.AVProVideo.IMediaSubtitles
struct IMediaSubtitles_t379A695348ACBE9F195A02670DC611EB86F457F5;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer
struct LoadFromBuffer_t5F5D2F99593917CC82792B7CBFFF2A14D5A8E734;
// RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks
struct LoadFromBufferInChunks_tEA807C6C558003E89B615F9B4C62055E7E2A0703;
// RenderHeads.Media.AVProVideo.Demos.Mapping3D
struct Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5;
// RenderHeads.Media.AVProVideo.MediaPlayerEvent
struct MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen
struct NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// RenderHeads.Media.AVProVideo.NullMediaPlayer
struct NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// RenderHeads.Media.AVProVideo.Demos.PlaybackSync
struct PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// RenderHeads.Media.AVProVideo.Resampler
struct Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple
struct SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// RenderHeads.Media.AVProVideo.Demos.SimpleController
struct SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// RenderHeads.Media.AVProVideo.Demos.SphereDemo
struct SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// RenderHeads.Media.AVProVideo.Demos.StartEndPoint
struct StartEndPoint_t55339D8D2D40E6265D27AC4FBB4AFC2429C40BCE;
// RenderHeads.Media.AVProVideo.Stream
struct Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B;
// System.String
struct String_t;
// RenderHeads.Media.AVProVideo.Subtitle
struct Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// RenderHeads.Media.AVProVideo.Demos.VCR
struct VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// RenderHeads.Media.AVProVideo.Demos.VideoTrigger
struct VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsAndroid
struct OptionsAndroid_tA4DD487B0A748ACFA2AE0E79B796D182396B4493;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsIOS
struct OptionsIOS_t39AC9820862A12A72310CA6AFB31E68590DB5B3C;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsMacOSX
struct OptionsMacOSX_t7892068AC93834C1C2250DEB75DA35FA4FDC0186;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsPS4
struct OptionsPS4_tBACA26F1F03C89CD493A6FE5D80226CE043B9519;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsTVOS
struct OptionsTVOS_t1A79F16F22AF52AD11B32F63E31C1482044552BC;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWebGL
struct OptionsWebGL_tC856DC926F506903CCFE4BA93E9D7249141887AA;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows
struct OptionsWindows_t7F0C36D3852CF75629FD8D58952EF2EAA2775E4F;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsPhone
struct OptionsWindowsPhone_t7B9A7A286CECEC2DC84CD71C434D6AFA84414D7E;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsUWP
struct OptionsWindowsUWP_tD22FD30549E8DD0E4263DD362A56D3AD33245FA6;
// RenderHeads.Media.AVProVideo.MediaPlayer/ProcessExtractedFrame
struct ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture
struct TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C;
// RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22
struct U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Net.WebClient/ProgressData
struct ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F;

IL2CPP_EXTERN_C RuntimeClass* AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t26134C5769E989D998FE57F2A4DA933E9158730A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t300B42E43DD077730D02EE57F14456011FE621FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0389D2093F0DF02AF84FC252182068435CCB0E24;
IL2CPP_EXTERN_C String_t* _stringLiteral09EADB740E61C8FC8932639BB08EA6692033A952;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF3C245D30A858E114A60A1CA10B183FC44771C;
IL2CPP_EXTERN_C String_t* _stringLiteral0DDD7513CA3CF974574F534DE4EB3932424A12B9;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD2C90387BCCC68E9E3CD657096B89D1ADEDE73;
IL2CPP_EXTERN_C String_t* _stringLiteral10EA4E5EFF41124EDF14E3BECA92F08426A01666;
IL2CPP_EXTERN_C String_t* _stringLiteral128FE5FA0E7C5DBD7591F16EB76AD7CB9EC8D5EA;
IL2CPP_EXTERN_C String_t* _stringLiteral12A524A4F9469BCE0EB406BC279885C0DF9528E0;
IL2CPP_EXTERN_C String_t* _stringLiteral138DA67229C73477E63463BF6FD1A78BCD8ECFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral139D1616D057BD9D2BE92880842BDBEF2EF78030;
IL2CPP_EXTERN_C String_t* _stringLiteral13B18E65E7F281FEFF21459A74679DA681676AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral18722C0C95B6FC918E70920BFE25E510986B5EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral25BD48B302C637F5CA8C4B77E7F04F2CEDF2486D;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7AD5D8388EC82441ADA561D03ADCBDBA8F64F5;
IL2CPP_EXTERN_C String_t* _stringLiteral2CEFD90AF4E04F69CCE29EF9C29BFFCC31AEABD3;
IL2CPP_EXTERN_C String_t* _stringLiteral32C206406C9F4ABAF61F1F335D775AB68C56FA99;
IL2CPP_EXTERN_C String_t* _stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C36CD238383C63FF066F9E7664CA73025A8D111;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral3E8AB647081DA8EA45FCDD264232662FB58814CF;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0F1E6D09A79C2BE45033DDD83C93AD5BBEF640;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral43EAAC296F64D7E382A237C2F92A1F0BC6D59ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral45B5280635F9562E92DC9110D20BD17FF160DFB7;
IL2CPP_EXTERN_C String_t* _stringLiteral45CFEEE4F62A474970E25FE47E07529750C5411E;
IL2CPP_EXTERN_C String_t* _stringLiteral4CBB42A130D76CBE6E01F26C95E6C850224A00A8;
IL2CPP_EXTERN_C String_t* _stringLiteral4CEC1DB23B3A2ADCD06BE13A8686B7BC8F53DB92;
IL2CPP_EXTERN_C String_t* _stringLiteral4F96F6F3FEEC653D6B527B7E23B96B4CB9437DE9;
IL2CPP_EXTERN_C String_t* _stringLiteral549C86628792ECA1347D190E1C703E69D6236CEF;
IL2CPP_EXTERN_C String_t* _stringLiteral54ACF3D1AED2D5C05F724C03D527B1849CCFFF08;
IL2CPP_EXTERN_C String_t* _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A;
IL2CPP_EXTERN_C String_t* _stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433;
IL2CPP_EXTERN_C String_t* _stringLiteral5A11CB5D1DFFE940BB0A281ED7B5F709CE83BBAA;
IL2CPP_EXTERN_C String_t* _stringLiteral5D76811F3BAD567356C636C166E2D5DB51AE5DE6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EC945DD38D3EBAE45DF9B5FF437DEA7F5705890;
IL2CPP_EXTERN_C String_t* _stringLiteral6467A5F1778FA416FDC0EE4F5BE0A345E51F74EF;
IL2CPP_EXTERN_C String_t* _stringLiteral68A6CE0E5035D3BA57FC1904D9B94D8DBB4AAC2A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77F7BCDE3316D6DE390298CF601CA3B1FD6A2CA2;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE25474C84B90CA93A2F5D71179C8C18E922B3B;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0B5DB70B9C29345DC81C49180051DEA69FD220;
IL2CPP_EXTERN_C String_t* _stringLiteral7B449CBB82E44EDD3A011DD1F87DE2F6C4B37F62;
IL2CPP_EXTERN_C String_t* _stringLiteral80206936E8A01B3D39BDAA4EAFECA1119BB79EF7;
IL2CPP_EXTERN_C String_t* _stringLiteral818E0F38E0D79E904B0CF3705136246275D511C5;
IL2CPP_EXTERN_C String_t* _stringLiteral8E19801F3EFF616570844AE719CC7E2356DB01A4;
IL2CPP_EXTERN_C String_t* _stringLiteral9229404B023B828641F8C179E7652573A8F786C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9620B89CE26B704179A09BDDFA10A78EA31785C8;
IL2CPP_EXTERN_C String_t* _stringLiteral98E3D2E02B047AB03305A96E8B57B9502E445522;
IL2CPP_EXTERN_C String_t* _stringLiteral9A35EB0310C8FC75CC1CA30E30EA3B2165E64A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9ADAC31F9DB3F58EC16A6B99925F083D8AF04AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral9F762EF9062C3EE0AE1A4846E323DDD26132484E;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA6129237E15F4E146BECBC0B228C023E66657A0C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD657B1B096A5DF9E95A5949BFEDCC3F73EAE130;
IL2CPP_EXTERN_C String_t* _stringLiteralB022A7A54985DF415A9ED70D4B29CD229D486C03;
IL2CPP_EXTERN_C String_t* _stringLiteralB16B6A6093DD2259584E0FE667404BF1273EEB5B;
IL2CPP_EXTERN_C String_t* _stringLiteralB35E9D3D8BD6E2E5ED49505FDED0CE9CEA7C98EA;
IL2CPP_EXTERN_C String_t* _stringLiteralB995351146F35DB459855BD645FE52BC4F2E7F39;
IL2CPP_EXTERN_C String_t* _stringLiteralBFA3AB28C4D693C6B21396254C61E1629ED5D319;
IL2CPP_EXTERN_C String_t* _stringLiteralC0BBBFEF24D5E12DF9899019B91B17EAE1876463;
IL2CPP_EXTERN_C String_t* _stringLiteralC11E38F553DD44F945849F83A0FD83F8721F8D57;
IL2CPP_EXTERN_C String_t* _stringLiteralC12A04BC977FC49A2A760A6D510E47F5D36271B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D;
IL2CPP_EXTERN_C String_t* _stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralC43F6112995CF881665405288365F844B50FB772;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralC9B9D1D0695F7A7084B19AB81472D1889D027F4F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD273725E4FDEB95D34DF1FEB221D2194EBCE3A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEE53D74FE5D6CA0AB875B7CDD35509FB1A8AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD75887742FFD5FDFE0983398A386031AAC1DD29B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC9C7CD694D51D6AAA37E32F457C64063A75EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5B87595462B1299CC2AA421A01B45CED796A03;
IL2CPP_EXTERN_C String_t* _stringLiteralE35F9DA7C4E4A84ADBC5C1421F0B82AFD4F4585F;
IL2CPP_EXTERN_C String_t* _stringLiteralED3EDDE08603F6B8A7475B082385FE302279A8D9;
IL2CPP_EXTERN_C String_t* _stringLiteralEED25505439B6D4BC840BE43FEB6D9DA0F4EE058;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A47D564EA587B3DE7303F2562EFEFEEBA09063;
IL2CPP_EXTERN_C String_t* _stringLiteralF23EEF1DF238589AFB61D3085A95FBE90002199B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mEC43E773EEDDFF7C1D78289E90B414BA794921FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3698C7C93695270E190E27BB2A1B8E15935FE5E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDE706F4E951D52F98324EF377A3FBEC3BBBBFC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7E42076CD22BF28D8DD7335FB6CDEF5743EB86B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF8609B5AF9343CA4A6622A15130E41F93F133D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameExtract_OnMediaPlayerEvent_m6449B134A220814CF05367D10E283EA9704168C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_mF42BBC7649D50DB9C00BCFEC7A51B0EE4BB7F349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_mCF68B7476EF38FF551B5EE74372DBBAB18C6CC60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_m2D7D7F7295EAD5822BED637D0BB48740DE4726C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HLSStream_MyRemoteCertificateValidationCallback_mC4FB31D65A03389961F2AB79470158762C3B00FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HLSStream__ctor_mFA33CE2BEBADF45468D99659D2CE2FA7E56F8E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m3A8ECF662EF79C5C69249F55ED89BC312EC1C99B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m8022AAA55692D914BE5BFA89886755881345C683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m870A88EA43D028F4B2F191BC5E5149DF2A64ACA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7695357902EDFE511D7FCBBD8D20DFFF5B0A6FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m566F55AC0369282CAC610001D261F339269BC229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m18875FAC36C4CC7BC2A1C24716F7A13FBF841D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m27378412EDC3ABA52227B1353E193FBB57CE697A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBE5D74E2E3EE3A301BBA63177151E5F05292BAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m384C7F087AB5903C434492669A8887231B0D99D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA64C161BE2874B303CAE1D8759CB6BCA95237B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD00278AB8D6A3F270E78BEC2E246D73EFEE9DEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0B64087067DDF9FFD4075354C1749139ECB6B531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1CA3BC8EB496F50F159B4DAF7B2497C96CEF43B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA08D447CDF2C4ED753234403E7804F79DC1D6D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2F66D3CD4FD8B3BD8ABAFEC2FCF3C9934DEFED9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD1274DF5AC3C11E721C8C8775C05FAD8552C4BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resampler_OnVideoEvent_m059A86E1411D46A0B2056E78EB8CD698365C6B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleController_OnMediaPlayerEvent_mBDA41D63D94C80AAE41728A1D6A0154AC836C97E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadVideoWithFadingU3Ed__22_System_Collections_IEnumerator_Reset_mFDC90E55E5CA5A064E02FE16DC04753EA3A7C7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m007390ACD2A2F1C97C0E0BC788A4DF846D09B3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VCR_OnVideoEvent_m706B9D3526405100C25433BA3F0797CA6EDFEB27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
struct TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A;
struct ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>
struct Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t80D2ABDBCD6DEF7F7C8A6D7A354D6132548F6D09* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4890265C69CA02E3FB36E42F324FA61DC663C977* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t412E5993E483D3E0C67A1AA0439E585494BFB520* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>
struct Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t951FE7E1461224FB3B64058D29160B56AE5D7402* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t641BE9C17ECAA8F4F5C6E9BD7EE573D2DF36FFAD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t327CBD9EBE247AA02EC9E4E2BD8CD04D7B40014B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>
struct HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6D5A47EAC7D278644B404ADAF4869DFF5D91948A* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>
struct List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TimestampedRenderTextureU5BU5DU5BU5D_t5EEEBB25211F971CCCE2A865D94F59BC784D4D97* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TimestampedRenderTextureU5BU5DU5BU5D_t5EEEBB25211F971CCCE2A865D94F59BC784D4D97* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>
struct List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DisplayUGUIU5BU5D_t09A3C056778FC40C6C40C293E683537EBDFC2571* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DisplayUGUIU5BU5D_t09A3C056778FC40C6C40C293E683537EBDFC2571* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>
struct List_1_t883C630D2067C239C952528EF488E7D81CD1D12D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StreamU5BU5D_t666A5307744CBFE6871C0BD4C907C22614F35286* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StreamU5BU5D_t666A5307744CBFE6871C0BD4C907C22614F35286* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>
struct List_1_t26134C5769E989D998FE57F2A4DA933E9158730A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubtitleU5BU5D_t31D5E1C14AB67A098731332C2CDCEB5904987FCA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t26134C5769E989D998FE57F2A4DA933E9158730A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubtitleU5BU5D_t31D5E1C14AB67A098731332C2CDCEB5904987FCA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>
struct List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// RenderHeads.Media.AVProVideo.Android
struct Android_tA3E7312CF12B09EB2DD176676493FBD2EDF83DFF  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// RenderHeads.Media.AVProVideo.AudioOutputManager
struct AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>> RenderHeads.Media.AVProVideo.AudioOutputManager::_accessTrackers
	Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* ____accessTrackers_1;
	// System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]> RenderHeads.Media.AVProVideo.AudioOutputManager::_pcmData
	Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* ____pcmData_2;
};

struct AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_StaticFields
{
	// RenderHeads.Media.AVProVideo.AudioOutputManager RenderHeads.Media.AVProVideo.AudioOutputManager::_instance
	AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* ____instance_0;
};

// RenderHeads.Media.AVProVideo.BaseMediaPlayer
struct BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B  : public RuntimeObject
{
	// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::_playerDescription
	String_t* ____playerDescription_0;
	// RenderHeads.Media.AVProVideo.ErrorCode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_lastError
	int32_t ____lastError_1;
	// UnityEngine.FilterMode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureFilterMode
	int32_t ____defaultTextureFilterMode_2;
	// UnityEngine.TextureWrapMode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureWrapMode
	int32_t ____defaultTextureWrapMode_3;
	// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureAnisoLevel
	int32_t ____defaultTextureAnisoLevel_4;
	// RenderHeads.Media.AVProVideo.TimeRange[] RenderHeads.Media.AVProVideo.BaseMediaPlayer::_seekableTimeRanges
	TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1* ____seekableTimeRanges_5;
	// System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::_stallDetectionTimer
	float ____stallDetectionTimer_6;
	// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::_stallDetectionFrame
	int32_t ____stallDetectionFrame_7;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle> RenderHeads.Media.AVProVideo.BaseMediaPlayer::_subtitles
	List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* ____subtitles_8;
	// RenderHeads.Media.AVProVideo.Subtitle RenderHeads.Media.AVProVideo.BaseMediaPlayer::_currentSubtitle
	Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* ____currentSubtitle_9;
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// RenderHeads.Media.AVProVideo.Helper
struct Helper_t2E7BE1EC76159E0D7A56DFAD32186AEF87FAB313  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// RenderHeads.Media.AVProVideo.Resampler
struct Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]> RenderHeads.Media.AVProVideo.Resampler::_buffer
	List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* ____buffer_0;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Resampler::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_1;
	// UnityEngine.RenderTexture[] RenderHeads.Media.AVProVideo.Resampler::_outputTexture
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ____outputTexture_2;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_start
	int32_t ____start_3;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_end
	int32_t ____end_4;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_bufferSize
	int32_t ____bufferSize_5;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler::_baseTimestamp
	int64_t ____baseTimestamp_6;
	// System.Single RenderHeads.Media.AVProVideo.Resampler::_elapsedTimeSinceBase
	float ____elapsedTimeSinceBase_7;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.Resampler::_blendMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____blendMat_8;
	// RenderHeads.Media.AVProVideo.Resampler/ResampleMode RenderHeads.Media.AVProVideo.Resampler::_resampleMode
	int32_t ____resampleMode_9;
	// System.String RenderHeads.Media.AVProVideo.Resampler::_name
	String_t* ____name_10;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler::_lastTimeStamp
	int64_t ____lastTimeStamp_11;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_droppedFrames
	int32_t ____droppedFrames_12;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler::_lastDisplayedTimestamp
	int64_t ____lastDisplayedTimestamp_13;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_frameDisplayedTimer
	int32_t ____frameDisplayedTimer_14;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler::_currentDisplayedTimestamp
	int64_t ____currentDisplayedTimestamp_15;
	// System.Single RenderHeads.Media.AVProVideo.Resampler::<LastT>k__BackingField
	float ___U3CLastTU3Ek__BackingField_16;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler::<TextureTimeStamp>k__BackingField
	int64_t ___U3CTextureTimeStampU3Ek__BackingField_17;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_propAfterTex
	int32_t ____propAfterTex_20;
	// System.Int32 RenderHeads.Media.AVProVideo.Resampler::_propT
	int32_t ____propT_21;
};

// RenderHeads.Media.AVProVideo.Stream
struct Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B  : public RuntimeObject
{
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

// RenderHeads.Media.AVProVideo.Subtitle
struct Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820  : public RuntimeObject
{
	// System.Int32 RenderHeads.Media.AVProVideo.Subtitle::index
	int32_t ___index_0;
	// System.String RenderHeads.Media.AVProVideo.Subtitle::text
	String_t* ___text_1;
	// System.Int32 RenderHeads.Media.AVProVideo.Subtitle::timeStartMs
	int32_t ___timeStartMs_2;
	// System.Int32 RenderHeads.Media.AVProVideo.Subtitle::timeEndMs
	int32_t ___timeEndMs_3;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// RenderHeads.Media.AVProVideo.Windows
struct Windows_t126FAE1032D2E4265CF46BDF960990D6AE288C2C  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture
struct TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C  : public RuntimeObject
{
	// UnityEngine.RenderTexture RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_0;
	// System.Int64 RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture::timestamp
	int64_t ___timestamp_1;
	// System.Boolean RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture::used
	bool ___used_2;
};

// RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22
struct U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3  : public RuntimeObject
{
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RenderHeads.Media.AVProVideo.Demos.SimpleController RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::<>4__this
	SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* ___U3CU3E4__this_2;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::<fade>5__2
	float ___U3CfadeU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProVideo.DisplayUGUI>
struct Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Generic.Queue`1/Enumerator<System.String>
struct Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	String_t* ____currentElement_3;
};

// UnityEngine.Events.UnityEvent`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// RenderHeads.Media.AVProVideo.HLSStream
struct HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115  : public Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B
{
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream> RenderHeads.Media.AVProVideo.HLSStream::_streams
	List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* ____streams_4;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk> RenderHeads.Media.AVProVideo.HLSStream::_chunks
	List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* ____chunks_5;
	// System.String RenderHeads.Media.AVProVideo.HLSStream::_streamURL
	String_t* ____streamURL_6;
	// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::_width
	int32_t ____width_7;
	// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::_height
	int32_t ____height_8;
	// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::_bandwidth
	int32_t ____bandwidth_9;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// RenderHeads.Media.AVProVideo.NullMediaPlayer
struct NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7  : public BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B
{
	// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::_isPlaying
	bool ____isPlaying_10;
	// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::_isPaused
	bool ____isPaused_11;
	// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::_currentTime
	float ____currentTime_12;
	// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::_volume
	float ____volume_13;
	// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::_playbackRate
	float ____playbackRate_14;
	// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::_bLoop
	bool ____bLoop_15;
	// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::_Width
	int32_t ____Width_16;
	// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::_height
	int32_t ____height_17;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.NullMediaPlayer::_texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_18;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.NullMediaPlayer::_texture_AVPro
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_AVPro_19;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.NullMediaPlayer::_texture_AVPro1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_AVPro1_20;
	// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::_fakeFlipTime
	float ____fakeFlipTime_21;
	// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::_frameCount
	int32_t ____frameCount_22;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// RenderHeads.Media.AVProVideo.TimeRange
struct TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D 
{
	// System.Single RenderHeads.Media.AVProVideo.TimeRange::startTime
	float ___startTime_0;
	// System.Single RenderHeads.Media.AVProVideo.TimeRange::duration
	float ___duration_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82__padding[144];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native
struct Native_t7E9F40806C303CD67BE7E7C01C6DDB3024A6D8AE 
{
	union
	{
		struct
		{
		};
		uint8_t Native_t7E9F40806C303CD67BE7E7C01C6DDB3024A6D8AE__padding[1];
	};
};

// RenderHeads.Media.AVProVideo.Stream/Chunk
struct Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D 
{
	// System.String RenderHeads.Media.AVProVideo.Stream/Chunk::name
	String_t* ___name_0;
};
// Native definition for P/Invoke marshalling of RenderHeads.Media.AVProVideo.Stream/Chunk
struct Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_pinvoke
{
	char* ___name_0;
};
// Native definition for COM marshalling of RenderHeads.Media.AVProVideo.Stream/Chunk
struct Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_com
{
	Il2CppChar* ___name_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::15E4544087AC886E83EA2C6F84406B56B09370208D305B0ED3C2A2CAE4BDF76B
	__StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 ___15E4544087AC886E83EA2C6F84406B56B09370208D305B0ED3C2A2CAE4BDF76B_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};

struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// RenderHeads.Media.AVProVideo.MediaPlayerEvent
struct MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED  : public UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Uri System.Net.WebClient::_baseAddress
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseAddress_4;
	// System.Net.ICredentials System.Net.WebClient::_credentials
	RuntimeObject* ____credentials_5;
	// System.Net.WebHeaderCollection System.Net.WebClient::_headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ____headers_6;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::_requestParameters
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____requestParameters_7;
	// System.Net.WebResponse System.Net.WebClient::_webResponse
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ____webResponse_8;
	// System.Net.WebRequest System.Net.WebClient::_webRequest
	WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* ____webRequest_9;
	// System.Text.Encoding System.Net.WebClient::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_10;
	// System.String System.Net.WebClient::_method
	String_t* ____method_11;
	// System.Int64 System.Net.WebClient::_contentLength
	int64_t ____contentLength_12;
	// System.Boolean System.Net.WebClient::_canceled
	bool ____canceled_13;
	// System.Net.WebClient/ProgressData System.Net.WebClient::_progress
	ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F* ____progress_14;
	// System.Net.IWebProxy System.Net.WebClient::_proxy
	RuntimeObject* ____proxy_15;
	// System.Boolean System.Net.WebClient::_proxySet
	bool ____proxySet_16;
	// System.Int32 System.Net.WebClient::_callNesting
	int32_t ____callNesting_17;
	// System.Net.Cache.RequestCachePolicy System.Net.WebClient::<CachePolicy>k__BackingField
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___U3CCachePolicyU3Ek__BackingField_18;
};

struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_StaticFields
{
	// System.Char[] System.Net.WebClient::s_parseContentTypeSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_parseContentTypeSeparators_19;
	// System.Text.Encoding[] System.Net.WebClient::s_knownEncodings
	EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D* ___s_knownEncodings_20;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___store_2;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___store2_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_4;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_5;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_6;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___vtime_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyRawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData_10;
	// System.Security.Cryptography.Oid modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySignatureAlgorithm
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm_11;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyVersion
	int32_t ___lazyVersion_12;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySubjectName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName_13;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyIssuerName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName_14;
	// System.Security.Cryptography.X509Certificates.PublicKey modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPublicKey
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey_15;
	// System.Security.Cryptography.AsymmetricAlgorithm modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPrivateKey
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey_16;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyExtensions
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions_17;
};

// UnityEngine.Events.UnityAction`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RenderHeads.Media.AVProVideo.MediaPlayer/ProcessExtractedFrame
struct ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// RenderHeads.Media.AVProVideo.AudioOutput
struct AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.AudioOutput/AudioOutputMode RenderHeads.Media.AVProVideo.AudioOutput::_audioOutputMode
	int32_t ____audioOutputMode_4;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.AudioOutput::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_5;
	// UnityEngine.AudioSource RenderHeads.Media.AVProVideo.AudioOutput::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_6;
	// System.Int32 RenderHeads.Media.AVProVideo.AudioOutput::_channelMask
	int32_t ____channelMask_7;
};

// RenderHeads.Media.AVProVideo.Demos.AutoRotate
struct AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RenderHeads.Media.AVProVideo.Demos.AutoRotate::x
	float ___x_4;
	// System.Single RenderHeads.Media.AVProVideo.Demos.AutoRotate::y
	float ___y_5;
	// System.Single RenderHeads.Media.AVProVideo.Demos.AutoRotate::z
	float ___z_6;
	// System.Single RenderHeads.Media.AVProVideo.Demos.AutoRotate::_timer
	float ____timer_7;
};

// RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack
struct ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_4;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_trackIndex
	int32_t ____trackIndex_5;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_isQueued
	bool ____isQueued_6;
};

// RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample
struct ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_4;
};

// RenderHeads.Media.AVProVideo.Demos.DemoInfo
struct DemoInfo_tA5E5A08015BD9C219876E57B8E1D1134146A317D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RenderHeads.Media.AVProVideo.Demos.DemoInfo::_title
	String_t* ____title_4;
	// System.String RenderHeads.Media.AVProVideo.Demos.DemoInfo::_description
	String_t* ____description_5;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.DemoInfo::_media
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____media_6;
};

// RenderHeads.Media.AVProVideo.DisplayIMGUI
struct DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.DisplayIMGUI::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_5;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayIMGUI::_displayInEditor
	bool ____displayInEditor_6;
	// UnityEngine.ScaleMode RenderHeads.Media.AVProVideo.DisplayIMGUI::_scaleMode
	int32_t ____scaleMode_7;
	// UnityEngine.Color RenderHeads.Media.AVProVideo.DisplayIMGUI::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_8;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayIMGUI::_alphaBlend
	bool ____alphaBlend_9;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayIMGUI::_useDepth
	bool ____useDepth_10;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayIMGUI::_depth
	int32_t ____depth_11;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayIMGUI::_fullScreen
	bool ____fullScreen_12;
	// System.Single RenderHeads.Media.AVProVideo.DisplayIMGUI::_x
	float ____x_13;
	// System.Single RenderHeads.Media.AVProVideo.DisplayIMGUI::_y
	float ____y_14;
	// System.Single RenderHeads.Media.AVProVideo.DisplayIMGUI::_width
	float ____width_15;
	// System.Single RenderHeads.Media.AVProVideo.DisplayIMGUI::_height
	float ____height_16;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.DisplayIMGUI::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_22;
};

struct DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E_StaticFields
{
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayIMGUI::_propAlphaPack
	int32_t ____propAlphaPack_17;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayIMGUI::_propVertScale
	int32_t ____propVertScale_18;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayIMGUI::_propApplyGamma
	int32_t ____propApplyGamma_19;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayIMGUI::_propChromaTex
	int32_t ____propChromaTex_20;
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayIMGUI::_shaderAlphaPacking
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shaderAlphaPacking_21;
};

// RenderHeads.Media.AVProVideo.Demos.FrameExtract
struct FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.FrameExtract::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_5;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.FrameExtract::_accurateSeek
	bool ____accurateSeek_6;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.FrameExtract::_timeoutMs
	int32_t ____timeoutMs_7;
	// UnityEngine.GUISkin RenderHeads.Media.AVProVideo.Demos.FrameExtract::_skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____skin_8;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.FrameExtract::_asyncExtract
	bool ____asyncExtract_9;
	// System.Single RenderHeads.Media.AVProVideo.Demos.FrameExtract::_timeStepSeconds
	float ____timeStepSeconds_10;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.FrameExtract::_frameIndex
	int32_t ____frameIndex_11;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.Demos.FrameExtract::_texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_12;
	// UnityEngine.RenderTexture RenderHeads.Media.AVProVideo.Demos.FrameExtract::_displaySheet
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____displaySheet_13;
};

// RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer
struct LoadFromBuffer_t5F5D2F99593917CC82792B7CBFFF2A14D5A8E734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer::_mp
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mp_4;
	// System.String RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer::_filename
	String_t* ____filename_5;
};

// RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks
struct LoadFromBufferInChunks_tEA807C6C558003E89B615F9B4C62055E7E2A0703  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks::_mp
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mp_4;
	// System.String RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks::_filename
	String_t* ____filename_5;
};

// RenderHeads.Media.AVProVideo.Demos.Mapping3D
struct Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RenderHeads.Media.AVProVideo.Demos.Mapping3D::_cubePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cubePrefab_4;
	// System.Single RenderHeads.Media.AVProVideo.Demos.Mapping3D::_timer
	float ____timer_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RenderHeads.Media.AVProVideo.Demos.Mapping3D::_cubes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____cubes_8;
};

// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoLocation
	int32_t ___m_VideoLocation_4;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoPath
	String_t* ___m_VideoPath_5;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoOpen
	bool ___m_AutoOpen_6;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoStart
	bool ___m_AutoStart_7;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Loop
	bool ___m_Loop_8;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_Volume
	float ___m_Volume_9;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_Balance
	float ___m_Balance_10;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Muted
	bool ___m_Muted_11;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_PlaybackRate
	float ___m_PlaybackRate_12;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Resample
	bool ___m_Resample_13;
	// RenderHeads.Media.AVProVideo.Resampler/ResampleMode RenderHeads.Media.AVProVideo.MediaPlayer::m_ResampleMode
	int32_t ___m_ResampleMode_14;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_ResampleBufferSize
	int32_t ___m_ResampleBufferSize_15;
	// RenderHeads.Media.AVProVideo.Resampler RenderHeads.Media.AVProVideo.MediaPlayer::m_Resampler
	Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* ___m_Resampler_16;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Persistent
	bool ___m_Persistent_17;
	// RenderHeads.Media.AVProVideo.VideoMapping RenderHeads.Media.AVProVideo.MediaPlayer::m_videoMapping
	int32_t ___m_videoMapping_18;
	// RenderHeads.Media.AVProVideo.StereoPacking RenderHeads.Media.AVProVideo.MediaPlayer::m_StereoPacking
	int32_t ___m_StereoPacking_19;
	// RenderHeads.Media.AVProVideo.AlphaPacking RenderHeads.Media.AVProVideo.MediaPlayer::m_AlphaPacking
	int32_t ___m_AlphaPacking_20;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_DisplayDebugStereoColorTint
	bool ___m_DisplayDebugStereoColorTint_21;
	// UnityEngine.FilterMode RenderHeads.Media.AVProVideo.MediaPlayer::m_FilterMode
	int32_t ___m_FilterMode_22;
	// UnityEngine.TextureWrapMode RenderHeads.Media.AVProVideo.MediaPlayer::m_WrapMode
	int32_t ___m_WrapMode_23;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_AnisoLevel
	int32_t ___m_AnisoLevel_24;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_LoadSubtitles
	bool ___m_LoadSubtitles_25;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.MediaPlayer::m_SubtitleLocation
	int32_t ___m_SubtitleLocation_26;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.MediaPlayer::m_queueSubtitleLocation
	int32_t ___m_queueSubtitleLocation_27;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer::m_SubtitlePath
	String_t* ___m_SubtitlePath_28;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer::m_queueSubtitlePath
	String_t* ___m_queueSubtitlePath_29;
	// UnityEngine.Coroutine RenderHeads.Media.AVProVideo.MediaPlayer::m_loadSubtitlesRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_loadSubtitlesRoutine_30;
	// UnityEngine.Transform RenderHeads.Media.AVProVideo.MediaPlayer::m_AudioHeadTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AudioHeadTransform_31;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AudioFocusEnabled
	bool ___m_AudioFocusEnabled_32;
	// UnityEngine.Transform RenderHeads.Media.AVProVideo.MediaPlayer::m_AudioFocusTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AudioFocusTransform_33;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_AudioFocusWidthDegrees
	float ___m_AudioFocusWidthDegrees_34;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_AudioFocusOffLevelDB
	float ___m_AudioFocusOffLevelDB_35;
	// RenderHeads.Media.AVProVideo.MediaPlayerEvent RenderHeads.Media.AVProVideo.MediaPlayer::m_events
	MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* ___m_events_36;
	// RenderHeads.Media.AVProVideo.FileFormat RenderHeads.Media.AVProVideo.MediaPlayer::m_forceFileFormat
	int32_t ___m_forceFileFormat_37;
	// RenderHeads.Media.AVProVideo.IMediaControl RenderHeads.Media.AVProVideo.MediaPlayer::m_Control
	RuntimeObject* ___m_Control_38;
	// RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::m_Texture
	RuntimeObject* ___m_Texture_39;
	// RenderHeads.Media.AVProVideo.IMediaInfo RenderHeads.Media.AVProVideo.MediaPlayer::m_Info
	RuntimeObject* ___m_Info_40;
	// RenderHeads.Media.AVProVideo.IMediaPlayer RenderHeads.Media.AVProVideo.MediaPlayer::m_Player
	RuntimeObject* ___m_Player_41;
	// RenderHeads.Media.AVProVideo.IMediaSubtitles RenderHeads.Media.AVProVideo.MediaPlayer::m_Subtitles
	RuntimeObject* ___m_Subtitles_42;
	// System.IDisposable RenderHeads.Media.AVProVideo.MediaPlayer::m_Dispose
	RuntimeObject* ___m_Dispose_43;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoOpened
	bool ___m_VideoOpened_44;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoStartTriggered
	bool ___m_AutoStartTriggered_45;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_WasPlayingOnPause
	bool ___m_WasPlayingOnPause_46;
	// UnityEngine.Coroutine RenderHeads.Media.AVProVideo.MediaPlayer::_renderingCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____renderingCoroutine_47;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_ReadyToPlay
	bool ___m_EventFired_ReadyToPlay_49;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_Started
	bool ___m_EventFired_Started_50;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_FirstFrameReady
	bool ___m_EventFired_FirstFrameReady_51;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_FinishedPlaying
	bool ___m_EventFired_FinishedPlaying_52;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_MetaDataReady
	bool ___m_EventFired_MetaDataReady_53;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventState_PlaybackStalled
	bool ___m_EventState_PlaybackStalled_54;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventState_PlaybackBuffering
	bool ___m_EventState_PlaybackBuffering_55;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventState_PlaybackSeeking
	bool ___m_EventState_PlaybackSeeking_56;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_EventState_PreviousWidth
	int32_t ___m_EventState_PreviousWidth_57;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_EventState_PreviousHeight
	int32_t ___m_EventState_PreviousHeight_58;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_previousSubtitleIndex
	int32_t ___m_previousSubtitleIndex_59;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_FinishedFrameOpenCheck
	bool ___m_FinishedFrameOpenCheck_61;
	// System.UInt32 RenderHeads.Media.AVProVideo.MediaPlayer::m_sourceSampleRate
	uint32_t ___m_sourceSampleRate_62;
	// System.UInt32 RenderHeads.Media.AVProVideo.MediaPlayer::m_sourceChannels
	uint32_t ___m_sourceChannels_63;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_manuallySetAudioSourceProperties
	bool ___m_manuallySetAudioSourceProperties_64;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindows
	OptionsWindows_t7F0C36D3852CF75629FD8D58952EF2EAA2775E4F* ____optionsWindows_65;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsMacOSX RenderHeads.Media.AVProVideo.MediaPlayer::_optionsMacOSX
	OptionsMacOSX_t7892068AC93834C1C2250DEB75DA35FA4FDC0186* ____optionsMacOSX_66;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsIOS RenderHeads.Media.AVProVideo.MediaPlayer::_optionsIOS
	OptionsIOS_t39AC9820862A12A72310CA6AFB31E68590DB5B3C* ____optionsIOS_67;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsTVOS RenderHeads.Media.AVProVideo.MediaPlayer::_optionsTVOS
	OptionsTVOS_t1A79F16F22AF52AD11B32F63E31C1482044552BC* ____optionsTVOS_68;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsAndroid RenderHeads.Media.AVProVideo.MediaPlayer::_optionsAndroid
	OptionsAndroid_tA4DD487B0A748ACFA2AE0E79B796D182396B4493* ____optionsAndroid_69;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsPhone RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindowsPhone
	OptionsWindowsPhone_t7B9A7A286CECEC2DC84CD71C434D6AFA84414D7E* ____optionsWindowsPhone_70;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsUWP RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindowsUWP
	OptionsWindowsUWP_tD22FD30549E8DD0E4263DD362A56D3AD33245FA6* ____optionsWindowsUWP_71;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWebGL RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWebGL
	OptionsWebGL_tC856DC926F506903CCFE4BA93E9D7249141887AA* ____optionsWebGL_72;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsPS4 RenderHeads.Media.AVProVideo.MediaPlayer::_optionsPS4
	OptionsPS4_tBACA26F1F03C89CD493A6FE5D80226CE043B9519* ____optionsPS4_73;
};

struct MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_StaticFields
{
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::s_GlobalStartup
	bool ___s_GlobalStartup_48;
	// UnityEngine.Camera RenderHeads.Media.AVProVideo.MediaPlayer::m_DummyCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_DummyCamera_60;
};

// RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen
struct NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen::_player
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____player_4;
};

// RenderHeads.Media.AVProVideo.Demos.PlaybackSync
struct PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_masterPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____masterPlayer_4;
	// RenderHeads.Media.AVProVideo.MediaPlayer[] RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_slavePlayers
	MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* ____slavePlayers_5;
	// System.Single RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_toleranceMs
	float ____toleranceMs_6;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_matchVideo
	bool ____matchVideo_7;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_muteSlaves
	bool ____muteSlaves_8;
	// RenderHeads.Media.AVProVideo.Demos.PlaybackSync/State RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_state
	int32_t ____state_9;
};

// RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple
struct SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_videoPath
	String_t* ___m_videoPath_4;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_NumVideosAdded
	int32_t ___m_NumVideosAdded_5;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI> RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_aAddedVideos
	List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* ___m_aAddedVideos_6;
};

// RenderHeads.Media.AVProVideo.Demos.SimpleController
struct SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RenderHeads.Media.AVProVideo.Demos.SimpleController::_folder
	String_t* ____folder_4;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.SimpleController::_filenames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____filenames_5;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.SimpleController::_streams
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____streams_6;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.SimpleController::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_7;
	// RenderHeads.Media.AVProVideo.DisplayIMGUI RenderHeads.Media.AVProVideo.Demos.SimpleController::_display
	DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* ____display_8;
	// UnityEngine.GUISkin RenderHeads.Media.AVProVideo.Demos.SimpleController::_guiSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____guiSkin_9;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SimpleController::_width
	int32_t ____width_10;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SimpleController::_height
	int32_t ____height_11;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SimpleController::_durationSeconds
	float ____durationSeconds_12;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::_useFading
	bool ____useFading_13;
	// System.Collections.Generic.Queue`1<System.String> RenderHeads.Media.AVProVideo.Demos.SimpleController::_eventLog
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ____eventLog_14;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SimpleController::_eventTimer
	float ____eventTimer_15;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.Demos.SimpleController::_nextVideoLocation
	int32_t ____nextVideoLocation_16;
	// System.String RenderHeads.Media.AVProVideo.Demos.SimpleController::_nextVideoPath
	String_t* ____nextVideoPath_17;
};

// RenderHeads.Media.AVProVideo.Demos.SphereDemo
struct SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RenderHeads.Media.AVProVideo.Demos.SphereDemo::_spinX
	float ____spinX_4;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SphereDemo::_spinY
	float ____spinY_5;
};

// RenderHeads.Media.AVProVideo.Demos.StartEndPoint
struct StartEndPoint_t55339D8D2D40E6265D27AC4FBB4AFC2429C40BCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_4;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_startPointSeconds
	float ____startPointSeconds_5;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_endPointSeconds
	float ____endPointSeconds_6;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_loop
	bool ____loop_7;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_startLoopSeconds
	float ____startLoopSeconds_8;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_isStartQueued
	bool ____isStartQueued_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RenderHeads.Media.AVProVideo.Demos.VCR
struct VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_4;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::_mediaPlayerB
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayerB_5;
	// RenderHeads.Media.AVProVideo.DisplayUGUI RenderHeads.Media.AVProVideo.Demos.VCR::_mediaDisplay
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* ____mediaDisplay_6;
	// UnityEngine.RectTransform RenderHeads.Media.AVProVideo.Demos.VCR::_bufferedSliderRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____bufferedSliderRect_7;
	// UnityEngine.UI.Slider RenderHeads.Media.AVProVideo.Demos.VCR::_videoSeekSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____videoSeekSlider_8;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VCR::_setVideoSeekSliderValue
	float ____setVideoSeekSliderValue_9;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.VCR::_wasPlayingOnScrub
	bool ____wasPlayingOnScrub_10;
	// UnityEngine.UI.Slider RenderHeads.Media.AVProVideo.Demos.VCR::_audioVolumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____audioVolumeSlider_11;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VCR::_setAudioVolumeSliderValue
	float ____setAudioVolumeSliderValue_12;
	// UnityEngine.UI.Toggle RenderHeads.Media.AVProVideo.Demos.VCR::_AutoStartToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____AutoStartToggle_13;
	// UnityEngine.UI.Toggle RenderHeads.Media.AVProVideo.Demos.VCR::_MuteToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____MuteToggle_14;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.Demos.VCR::_location
	int32_t ____location_15;
	// System.String RenderHeads.Media.AVProVideo.Demos.VCR::_folder
	String_t* ____folder_16;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.VCR::_videoFiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____videoFiles_17;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.VCR::_VideoIndex
	int32_t ____VideoIndex_18;
	// UnityEngine.UI.Image RenderHeads.Media.AVProVideo.Demos.VCR::_bufferedSliderImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____bufferedSliderImage_19;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::_loadingPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____loadingPlayer_20;
};

// RenderHeads.Media.AVProVideo.Demos.VideoTrigger
struct VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VideoTrigger::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_4;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VideoTrigger::_fadeTimeMs
	float ____fadeTimeMs_5;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VideoTrigger::_fade
	float ____fade_6;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VideoTrigger::_fadeDirection
	float ____fadeDirection_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// RenderHeads.Media.AVProVideo.DisplayUGUI
struct DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.DisplayUGUI::_mediaPlayer
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ____mediaPlayer_36;
	// UnityEngine.Rect RenderHeads.Media.AVProVideo.DisplayUGUI::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_setNativeSize
	bool ____setNativeSize_38;
	// UnityEngine.ScaleMode RenderHeads.Media.AVProVideo.DisplayUGUI::_scaleMode
	int32_t ____scaleMode_39;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_noDefaultDisplay
	bool ____noDefaultDisplay_40;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_displayInEditor
	bool ____displayInEditor_41;
	// UnityEngine.Texture RenderHeads.Media.AVProVideo.DisplayUGUI::_defaultTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____defaultTexture_42;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_lastWidth
	int32_t ____lastWidth_43;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_lastHeight
	int32_t ____lastHeight_44;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_flipY
	bool ____flipY_45;
	// UnityEngine.Texture RenderHeads.Media.AVProVideo.DisplayUGUI::_lastTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____lastTexture_46;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_userMaterial
	bool ____userMaterial_57;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.DisplayUGUI::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_58;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> RenderHeads.Media.AVProVideo.DisplayUGUI::_vertices
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ____vertices_59;
};

struct DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_StaticFields
{
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayUGUI::_shaderStereoPacking
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shaderStereoPacking_47;
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayUGUI::_shaderAlphaPacking
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shaderAlphaPacking_48;
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayUGUI::_shaderAndroidOES
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shaderAndroidOES_49;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propAlphaPack
	int32_t ____propAlphaPack_50;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propVertScale
	int32_t ____propVertScale_51;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propStereo
	int32_t ____propStereo_52;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propApplyGamma
	int32_t ____propApplyGamma_53;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propUseYpCbCr
	int32_t ____propUseYpCbCr_54;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propChromaTex
	int32_t ____propChromaTex_56;
	// System.Collections.Generic.List`1<System.Int32> RenderHeads.Media.AVProVideo.DisplayUGUI::QuadIndices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___QuadIndices_60;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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
// RenderHeads.Media.AVProVideo.TimeRange[]
struct TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D m_Items[1];

	inline TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeRange_tFFA7E6CDD8550B3409B989C3D38F794836BB398D value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]
struct TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A  : public RuntimeArray
{
	ALIGN_FIELD (8) TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* m_Items[1];

	inline TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RenderHeads.Media.AVProVideo.MediaPlayer[]
struct MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D  : public RuntimeArray
{
	ALIGN_FIELD (8) MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* m_Items[1];

	inline MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RenderHeads.Media.AVProVideo.Stream/Chunk[]
struct ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38  : public RuntimeArray
{
	ALIGN_FIELD (8) Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D m_Items[1];

	inline Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_gshared (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_gshared (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_gshared_inline (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m3834CEECC275919CE3D1976DF830DBEB431EF0D4_gshared (UnityEvent_3_t5D44EDD6BF9E7624E78EDBAEAF2476C3F53BCBB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mFFA2A157BCCAC9E24B08D227ECC631AB2A830CC7_gshared (UnityAction_3_t6DD5B8ECD125F220BE7E9DFC165CEEB0FC1165E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32Enum,System.Int32Enum>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_m54E543C8BCEFD6061E91E90313B794F5B351159D_gshared (UnityEvent_3_t5D44EDD6BF9E7624E78EDBAEAF2476C3F53BCBB1* __this, UnityAction_3_t6DD5B8ECD125F220BE7E9DFC165CEEB0FC1165E1* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void RenderHeads.Media.AVProVideo.AudioOutputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutputManager__ctor_m16F708DABE3A0FEBB14A1C96B89F8BA72E61CCEE (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>::.ctor()
inline void Dictionary_2__ctor_mDE706F4E951D52F98324EF377A3FBEC3BBBBFC8B (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>::.ctor()
inline void Dictionary_2__ctor_m3698C7C93695270E190E27BB2A1B8E15935FE5E4 (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// RenderHeads.Media.AVProVideo.IMediaControl RenderHeads.Media.AVProVideo.MediaPlayer::get_Control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mEC43E773EEDDFF7C1D78289E90B414BA794921FF (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF*, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>::.ctor()
inline void HashSet_1__ctor_m7695357902EDFE511D7FCBBD8D20DFFF5B0A6FEC (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF8609B5AF9343CA4A6622A15130E41F93F133D09 (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___key0, HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF*, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*, HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>>::get_Item(TKey)
inline HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551 (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___key0, const RuntimeMethod* method)
{
	return ((  HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* (*) (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF*, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>::Contains(T)
inline bool HashSet_1_Contains_m870A88EA43D028F4B2F191BC5E5149DF2A64ACA8 (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* __this, AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>::get_Count()
inline int32_t HashSet_1_get_Count_m566F55AC0369282CAC610001D261F339269BC229_inline (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>::get_Item(TKey)
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385 (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___key0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB*, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>::Clear()
inline void HashSet_1_Clear_m8022AAA55692D914BE5BFA89886755881345C683 (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7E42076CD22BF28D8DD7335FB6CDEF5743EB86B6 (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___key0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB*, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RenderHeads.Media.AVProVideo.AudioOutputManager::GrabAudio(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutputManager_GrabAudio_mD6E2FF951FF611DE514BDFDB4BA789CCB92E4E2A (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___channels2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<RenderHeads.Media.AVProVideo.AudioOutput>::Add(T)
inline bool HashSet_1_Add_m3A8ECF662EF79C5C69249F55ED89BC312EC1C99B (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* __this, AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*, AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsExpectingNewVideoFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_IsExpectingNewVideoFrame_mD923F0939F537E680C3C2C104BFB4B38CF7DBE14 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle> RenderHeads.Media.AVProVideo.Helper::LoadSubtitlesSRT(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* Helper_LoadSubtitlesSRT_m828296E91BEC08644CCD740751E65A8926AC9A34 (String_t* ___data0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Subtitle::IsTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Subtitle_IsTime_m48987F9E1866A3C64BA42716D0B1AC08ADF60DCC (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* __this, float ___time0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>::get_Item(System.Int32)
inline Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* (*) (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>::get_Count()
inline int32_t List_1_get_Count_m2F66D3CD4FD8B3BD8ABAFEC2FCF3C9934DEFED9A_inline (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::.ctor()
inline void List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*, const RuntimeMethod*))List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>::get_Item(System.Int32)
inline Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3 (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* (*) (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5 (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>::get_Count()
inline int32_t List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_inline (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>::.ctor()
inline void List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.HLSStream::ExtractStreamInfo(System.String,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HLSStream_ExtractStreamInfo_m439D7DED0EE7C76EDA41BC08F192BBDBF0CA1BDC (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, String_t* ___line0, int32_t* ___width1, int32_t* ___height2, int32_t* ___bandwidth3, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.HLSStream::IsChunk(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HLSStream_IsChunk_m0FE628E2FB0010CBCFFF49C1344F6D8AFB463869 (String_t* ___line0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk>::Add(T)
inline void List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_inline (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D, const RuntimeMethod*))List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_gshared_inline)(__this, ___item0, method);
}
// System.Void RenderHeads.Media.AVProVideo.HLSStream::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HLSStream__ctor_mFA33CE2BEBADF45468D99659D2CE2FA7E56F8E9E (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, String_t* ___filename0, int32_t ___width1, int32_t ___height2, int32_t ___bandwidth3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream>::Add(T)
inline void List_1_Add_mBE5D74E2E3EE3A301BBA63177151E5F05292BAFC_inline (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* __this, Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*, Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m1411BB18992F52CFFC4FF0221A11824B3DBB5E79 (Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager_set_ServerCertificateValidationCallback_mF4776A82604A8AF679BCB18CA3D73F821E957A54 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient__ctor_mC6890BD603C98D56E8D475D0D11180980F228C3F (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, const RuntimeMethod* method) ;
// System.String System.Net.WebClient::DownloadString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebClient_DownloadString_mB577DB8FBE9A1118C5815271C6F6403C64D4894C (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* File_ReadAllLines_m562C333C151F3023033AF86CFD57AD0125C7D5FC (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.HLSStream::ParseFile(System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HLSStream_ParseFile_mAFBD79D61C4A7614893E11E3AC3F672DA4156C29 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___text0, String_t* ___path1, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* X509Chain_get_ChainPolicy_m947CBD207A65DB28D0EE7909004E44CBEDF34348 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationFlag(System.Security.Cryptography.X509Certificates.X509RevocationFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_RevocationFlag_m9E77262475AF7DE55ADC2F79D6BA8FBCB2C1EE69 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_RevocationMode_mD31CF4CA6A09443829F91980F8AC98E21D5888AE (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_UrlRetrievalTimeout(System.TimeSpan)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509ChainPolicy_set_UrlRetrievalTimeout_m6144C7BF504DA6E1B7FEE128DC78BBE29B03E373_inline (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_VerificationFlags(System.Security.Cryptography.X509Certificates.X509VerificationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_VerificationFlags_mA0C6910C20FCC1FB1DA1A35ED2E7429FA527A69E (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Chain_Build_mF368D6BAE5925C8311B41BFBA08C5D91277C67E5 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___certificate0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>::.ctor()
inline void UnityEvent_3__ctor_m007390ACD2A2F1C97C0E0BC788A4DF846D09B3B6 (UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C*, const RuntimeMethod*))UnityEvent_3__ctor_m3834CEECC275919CE3D1976DF830DBEB431EF0D4_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String RenderHeads.Media.AVProVideo.Helper::GetName(RenderHeads.Media.AVProVideo.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F (int32_t ___platform0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B (const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_color_m641A7661D421929DB60FD1AC40E43F960CEC81C1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m384F1EFC0BC71C18BC53C9F0AEE1AF0A0F8F7655 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color7, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat8, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345 (const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_m4E6F7BAFD87A2FE91048B0F602519811690CAA63 (float ___left0, float ___right1, float ___bottom2, float ___top3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m308AE19DE30E95FE9B0ED7A244021A46AC209775 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::InvalidateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_InvalidateState_mCC1D15C8888292B7F5E0F049F1FAD834728693A1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_Split_m88380E0EEF6DD409DEA41D27A0A0634E1928D367 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>::.ctor(System.Int32)
inline void List_1__ctor_m1CA3BC8EB496F50F159B4DAF7B2497C96CEF43B1 (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void RenderHeads.Media.AVProVideo.Subtitle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subtitle__ctor_m840EC094D0E2316B2A0B05448EA4EFC83A9BB1DC (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 RenderHeads.Media.AVProVideo.Helper::ParseTimeToMs(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_ParseTimeToMs_m10AF2C205F83C998088D238BADE0767D2E8DC915 (String_t* ___text0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle>::Add(T)
inline void List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_inline (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* __this, Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*, Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Resources::UnloadAsset(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resources_UnloadAsset_mEA84C20996BC20D1EB485333583FB96F2F487F09 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___assetToUnload0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::CloseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_CloseVideo_mD55B93A0C49F41FFE55148DEE56B432E6B7568F3 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer__ctor_mB429CB676E5E84D8B0812423C72B56A7FB6CB9E5 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) ;
// RenderHeads.Media.AVProVideo.IMediaInfo RenderHeads.Media.AVProVideo.MediaPlayer::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_Reset_m9B8013CC73ED2F823D339D3A4CDF371A5FCFBE9E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>::.ctor()
inline void List_1__ctor_mA08D447CDF2C4ED753234403E7804F79DC1D6D36 (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// RenderHeads.Media.AVProVideo.MediaPlayerEvent RenderHeads.Media.AVProVideo.MediaPlayer::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172 (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mFFA2A157BCCAC9E24B08D227ECC631AB2A830CC7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA (UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C* __this, UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tF70CC8FE12E31222846A1F69890C242712641A0C*, UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*, const RuntimeMethod*))UnityEvent_3_AddListener_m54E543C8BCEFD6061E91E90313B794F5B351159D_gshared)(__this, ___call0, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::InvalidateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_InvalidateBuffer_m92C6B5CF16C157B955C8AA54DF3F129382DE624E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::ReleaseRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_ReleaseRenderTextures_m372846F253C1851BFD531C4C0C00BAC6AE8EA5E2 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>::get_Item(System.Int32)
inline TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234 (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* (*) (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>::get_Count()
inline int32_t List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>::Clear()
inline void List_1_Clear_mA64C161BE2874B303CAE1D8759CB6BCA95237B97_inline (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture[]>::Add(T)
inline void List_1_Add_m18875FAC36C4CC7BC2A1C24716F7A13FBF841D11_inline (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* __this, TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*, TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimestampedRenderTexture__ctor_mE2669A04C003AA001F157709DF20B07BC3036608 (TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::findClosestFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_findClosestFrame_m433D21D02ECD97BB2A5E327B1BFD6EA6B5471A73 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::DiscardContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_TextureTimeStamp(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resampler_set_TextureTimeStamp_m14A47E36DC1F0205B98DBB7E9DB24AD4CD501D2A_inline (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::FindBeforeFrameIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_FindBeforeFrameIndex_m6DD5D7F2C5519776CB3D051144E978B97066032C (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::SampleFrame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_SampleFrame_mCD2E6705495052E2A17D4186FA52F8CE83D5DD6F (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, int32_t ___bufferIdx1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_LastT(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2_inline (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::SampleFrames(System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_SampleFrames_mB0F55B16B31158A3F44F1D59B287DCA531499E6E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___bufferIdx0, int32_t ___frameIdx11, int32_t ___frameIdx22, float ___t3, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Resampler::CheckRenderTexturesValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resampler_CheckRenderTexturesValid_mC35E7A36A62170C9BD611E626723FF2C1D9436E4 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::ConstructRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_ConstructRenderTextures_m22B88859BF1B4E005CB3750FEAF60E7E83FEB934 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::PointUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_PointUpdate_mEB0AA7CFE2371E5637EDA5087A0FA94FDE5C0044 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Resampler::LinearUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_LinearUpdate_m1521602F314775644E937A29B811249F535E7586 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.AutoRotate::Randomise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRotate_Randomise_m14AB1FFF1B93AF4C9F25775256BCA0EEDC5B74EF (AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::OpenVideoFromFile(RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, int32_t ___location0, String_t* ___path1, bool ___autoPlay2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::LoadVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeVideoExample_LoadVideo_mE0B78F6635074A43BEC8686680056598E3B00508 (ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D* __this, String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mD748D5A6771761276FC9D2575A6873E51F90EA98 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, float ___depth3, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayer_Pause_m676939B47ECC2CEC01BC28FDC575BAAF3576F936 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::OnNewMediaReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_OnNewMediaReady_m8F7875B561D4EEC787676D331576B94D0AFB002A (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::ExtractNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_ExtractNextFrame_m6F420F64FBCBB19A2A0819969CE0C3AA042ADAFB (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.MediaPlayer::ExtractFrame(UnityEngine.Texture2D,System.Single,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* MediaPlayer_ExtractFrame_mA70FE78B46CA0DCD74E7A2450052512449651B06 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___target0, float ___timeSeconds1, bool ___accurateSeek2, int32_t ___timeoutMs3, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::ProcessExtractedFrame(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer/ProcessExtractedFrame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessExtractedFrame__ctor_m62690CC0859B25A7D05A9F64F0A48DFCD8E00F09 (ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer::ExtractFrameAsync(UnityEngine.Texture2D,RenderHeads.Media.AVProVideo.MediaPlayer/ProcessExtractedFrame,System.Single,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayer_ExtractFrameAsync_m35BAA3F688D1438CB554A398FEEFF21214334CDB (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___target0, ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0* ___callback1, float ___timeSeconds2, bool ___accurateSeek3, int32_t ___timeoutMs4, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mD37A6215E8A48EF54F88D27698505A09CFADBF0E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE (float ___pixels0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692 (bool ___expand0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::SpawnCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D_SpawnCube_m11FFAA027B7AB965320D320E3F8D69581A50E1CE (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::RemoveCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D_RemoveCube_m62708F88D368CBD72CF48B41E49D4A22DCC15D39 (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
inline void List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::GetEnumerator()
inline Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0 (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProVideo.DisplayUGUI>::Dispose()
inline void Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91 (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProVideo.DisplayUGUI>::get_Current()
inline DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_inline (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE* __this, const RuntimeMethod* method)
{
	return ((  DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* (*) (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProVideo.DisplayUGUI>::MoveNext()
inline bool Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1 (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::get_Count()
inline int32_t List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_inline (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::get_Item(System.Int32)
inline DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<RenderHeads.Media.AVProVideo.MediaPlayer>()
inline MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* GameObject_AddComponent_TisMediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_m2D7D7F7295EAD5822BED637D0BB48740DE4726C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.CanvasRenderer>()
inline CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* GameObject_AddComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_mF42BBC7649D50DB9C00BCFEC7A51B0EE4BB7F349 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<RenderHeads.Media.AVProVideo.DisplayUGUI>()
inline DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* GameObject_AddComponent_TisDisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_mCF68B7476EF38FF551B5EE74372DBBAB18C6CC60 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::Add(T)
inline void List_1_Add_m27378412EDC3ABA52227B1353E193FBB57CE697A_inline (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::UpdateVideosLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_UpdateVideosLayout_m1761E98737D50A7A1CE6DAD6D640F853A450A6D6 (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer::CloseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD00278AB8D6A3F270E78BEC2E246D73EFEE9DEE9 (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::Clear()
inline void List_1_Clear_m384C7F087AB5903C434492669A8887231B0D99D6_inline (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>::.ctor()
inline void List_1__ctor_m0B64087067DDF9FFD4075354C1749139ECB6B531 (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::IsVideoLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChangeAudioTrack_IsVideoLoaded_mA03B218A22DFB0A01D7244C1184A4F1B8AF38FB7 (ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4* __this, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::DoChangeAudioTrack(RenderHeads.Media.AVProVideo.MediaPlayer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChangeAudioTrack_DoChangeAudioTrack_m41B17968A3FB5E7992A0E67C40EE0BEB7F258236 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::OpenVideoFromBuffer(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaPlayer_OpenVideoFromBuffer_m7A5FB623BB5001164FAF7509B96473D89C7C8EC4 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, bool ___autoPlay1, const RuntimeMethod* method) ;
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D (const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::StartOpenChunkedVideoFromBuffer(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaPlayer_StartOpenChunkedVideoFromBuffer_m9E062798AC5F97189E9BAEA944FB0BE406AA4711 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, uint64_t ___length0, bool ___autoPlay1, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::AddChunkToVideoBuffer(System.Byte[],System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaPlayer_AddChunkToVideoBuffer_m456514BE995C43857DB36D30427D4A0652C52037 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chunk0, uint64_t ___offset1, uint64_t ___chunkSize2, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::EndOpenChunkedVideoFromBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaPlayer_EndOpenChunkedVideoFromBuffer_m6F58A56835E3B42A9A50B6DBB7B969CAFE314DD6 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsAllVideosLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsAllVideosLoaded_mFC07BA6D3900507860FE84EC56EFE40C972E07BB (PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F* __this, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsPlaybackFinished(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsPlaybackFinished_m0D1EC31BF3A550D1960E398DEB20CCC976D76A07 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsVideoLoaded(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsVideoLoaded_mEEB4009CC5EC255F8447FEC8603FD7F7CE40E82D (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::IsVideoLoaded(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StartEndPoint_IsVideoLoaded_m6B3B883BB305E338B7592DA9974F07732001A3C2 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoStart(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoStart_m1BA79F218795AC6457DB085FEE85BEBA1E130ADC (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoCheckEnd(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoCheckEnd_mA74285992DBE365B5071CE72BD9D12C1D1B5EB07 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoCheckLoop(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoCheckLoop_mE83F8309F8B49FBFC312D600E506C79A60D4CE83 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, float ___positionLoop2, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.MediaPlayer::Rewind(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayer_Rewind_m60D4E47A06CBA186BBAEBD15938ECA01A1576CED (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, bool ___pause0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::GatherProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_GatherProperties_m05C311ADD4AFA46F40CE4A01FD2F17A95202F233 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::AddEvent(RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_AddEvent_m5F5F4191A29E5C77E01BCC04B15F219B09044875 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, int32_t ___et0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(T)
inline void Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadVideoWithFadingU3Ed__22__ctor_m617375071043C6696C2585F4712254101CDD44AB (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_depth_m3587BACB56CB2809E28F64EB459A0A5EC9E33BCC (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_op_Implicit_m67078950FC601939AC9678CAEDE8E171B812AE89 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_m08B85FF568BBF4D188D0F10D686C211654246970 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetLastRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_GetLastRect_mE5112C79F4C3C884FD60400BC65D34D25C6D9CA7 (const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSliderThumb_m9EE5EF8204397C2946D7F384AB7D8A17693837BD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,System.String[],System.Int32,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayout_SelectionGrid_m4725267E82317122AE1F5349E22CBDE9E9B9D11E (int32_t ___selected0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___texts1, int32_t ___xCount2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::LoadVideo(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_LoadVideo_m1E009B3601590EC4D6D4B655DF1D75F049345B38 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, String_t* ___filePath0, bool ___url1, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.String>::GetEnumerator()
inline Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor(System.Int32)
inline void Queue_1__ctor_mD1274DF5AC3C11E721C8C8775C05FAD8552C4BC6 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, int32_t, const RuntimeMethod*))Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared)(__this, ___capacity0, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::VideoIsReady(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleController_VideoIsReady_m2BE4F517B9B02C59665F480A2445A9C783D061B3 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::AudioIsReady(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleController_AudioIsReady_m63EBEB7100A10C8C576501108610050FC7BE51F6 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsGyroscope_mAB8E020FD5491BBF517D2C60CA1DDB4A5FC396D1 (const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputTracking::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_Recenter_m08E21C730EF172666DB09B3227016DA631EB6B22 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRSettings::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_enabled_mB93EAB3F282547FD575857B028DDD296C5B21D5F (bool ___value0, const RuntimeMethod* method) ;
// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::get_LoadingPlayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) ;
// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::get_PlayingPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.DisplayUGUI::set_CurrentMediaPlayer(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUGUI_set_CurrentMediaPlayer_m6167F40E60791C8500A691FD0EEEC5D8FB46B969 (DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnVideoSeekSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnVideoSeekSlider_m0BDAB8F6FF8D0BD738C89CEE1431ADEE2EEFF782 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnOpenVideoFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnOpenVideoFile_m3EFB5248CAF4B8746173642F9F8A296637D6F3B3 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::SwapPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_SwapPlayers_mBF148951CF5556E628060EAD00C4773B3533757D (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetRenderEventFunc();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetWidth(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetHeight(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetTextureHandle(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL _GetDuration(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetLastErrorCode(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetFrameCount(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C float DEFAULT_CALL _GetVideoDisplayRate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CanPlay(int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::GetRenderEventFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_GetRenderEventFunc_mBF68356E211199DB12A073F9FE33448832EE0F17 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "GetRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetRenderEventFunc)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native__GetWidth_m3DFDFD4AE40F07B8A4DD7F6FC5D3EC9C7E4BA3FB (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetWidth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetWidth)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Int32 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native__GetHeight_m7F700B6092CAC76DBB291D8846A06FEB46135C92 (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetHeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetHeight)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Int32 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetTextureHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native__GetTextureHandle_m4433BC7BCDB684A1F34E6BF35F9AEA7E07F175F9 (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetTextureHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetTextureHandle)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Int64 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetDuration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Native__GetDuration_mA94465AB6A09D5B98BE274D037853C50254252F1 (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetDuration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDuration)(___iPlayerIndex0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Int32 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetLastErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native__GetLastErrorCode_mBE38EAC72B97C66BD2626973273A8E3CA1BA239B (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetLastErrorCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastErrorCode)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Int32 RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetFrameCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native__GetFrameCount_mAE61081AB80535FDB83379DB59F30954A0C57D6E (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetFrameCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetFrameCount)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Single RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_GetVideoDisplayRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native__GetVideoDisplayRate_mA9E0AB900E614B796CD22214943D35752DCA0DA4 (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_GetVideoDisplayRate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(_GetVideoDisplayRate)(___iPlayerIndex0);
	#else
	float returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return returnValue;
}
// System.Boolean RenderHeads.Media.AVProVideo.AndroidMediaPlayer/Native::_CanPlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native__CanPlay_mEE9C46D1A36864894125E3BDB47C240A64C3B2CF (int32_t ___iPlayerIndex0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AVProLocal_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AVProLocal"), "_CanPlay", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AVProLocal_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CanPlay)(___iPlayerIndex0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___iPlayerIndex0);
	#endif

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// RenderHeads.Media.AVProVideo.AudioOutputManager RenderHeads.Media.AVProVideo.AudioOutputManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* AudioOutputManager_get_Instance_m934EF897110390E248A73D327435C5682B772F33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* L_0 = ((AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_StaticFields*)il2cpp_codegen_static_fields_for(AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _instance = new AudioOutputManager();
		AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* L_1 = (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585*)il2cpp_codegen_object_new(AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioOutputManager__ctor_m16F708DABE3A0FEBB14A1C96B89F8BA72E61CCEE(L_1, NULL);
		((AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_StaticFields*)il2cpp_codegen_static_fields_for(AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var))->____instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_StaticFields*)il2cpp_codegen_static_fields_for(AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var))->____instance_0), (void*)L_1);
	}

IL_0011:
	{
		// return _instance;
		AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* L_2 = ((AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_StaticFields*)il2cpp_codegen_static_fields_for(AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585_il2cpp_TypeInfo_var))->____instance_0;
		return L_2;
	}
}
// System.Void RenderHeads.Media.AVProVideo.AudioOutputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutputManager__ctor_m16F708DABE3A0FEBB14A1C96B89F8BA72E61CCEE (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3698C7C93695270E190E27BB2A1B8E15935FE5E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDE706F4E951D52F98324EF377A3FBEC3BBBBFC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AudioOutputManager()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _accessTrackers = new Dictionary<MediaPlayer, HashSet<AudioOutput>>();
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_0 = (Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF*)il2cpp_codegen_object_new(Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mDE706F4E951D52F98324EF377A3FBEC3BBBBFC8B(L_0, Dictionary_2__ctor_mDE706F4E951D52F98324EF377A3FBEC3BBBBFC8B_RuntimeMethod_var);
		__this->____accessTrackers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____accessTrackers_1), (void*)L_0);
		// _pcmData = new Dictionary<MediaPlayer, float[]>();
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_1 = (Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB*)il2cpp_codegen_object_new(Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m3698C7C93695270E190E27BB2A1B8E15935FE5E4(L_1, Dictionary_2__ctor_m3698C7C93695270E190E27BB2A1B8E15935FE5E4_RuntimeMethod_var);
		__this->____pcmData_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pcmData_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.AudioOutputManager::RequestAudio(RenderHeads.Media.AVProVideo.AudioOutput,RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[],System.Int32,System.Int32,RenderHeads.Media.AVProVideo.AudioOutput/AudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutputManager_RequestAudio_mFD1FDE97220BB78F5299D9504A21497A23207520 (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* __this, AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988* ____outputComponent0, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mediaPlayer1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data2, int32_t ___channelMask3, int32_t ___totalChannels4, int32_t ___audioOutputMode5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mEC43E773EEDDFF7C1D78289E90B414BA794921FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7E42076CD22BF28D8DD7335FB6CDEF5743EB86B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF8609B5AF9343CA4A6622A15130E41F93F133D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m3A8ECF662EF79C5C69249F55ED89BC312EC1C99B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m8022AAA55692D914BE5BFA89886755881345C683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m870A88EA43D028F4B2F191BC5E5149DF2A64ACA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7695357902EDFE511D7FCBBD8D20DFFF5B0A6FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m566F55AC0369282CAC610001D261F339269BC229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// if (mediaPlayer == null || mediaPlayer.Control == null || !mediaPlayer.Control.IsPlaying())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mediaPlayer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___mediaPlayer1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___mediaPlayer1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_001f;
		}
	}

IL_001e:
	{
		// return;
		return;
	}

IL_001f:
	{
		// int channels = mediaPlayer.Control.GetNumAudioChannels();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = ___mediaPlayer1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(44 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaControl::GetNumAudioChannels() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
		// if(channels <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0030:
	{
		// if (!_accessTrackers.ContainsKey(mediaPlayer))
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_11 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12 = ___mediaPlayer1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_mEC43E773EEDDFF7C1D78289E90B414BA794921FF(L_11, L_12, Dictionary_2_ContainsKey_mEC43E773EEDDFF7C1D78289E90B414BA794921FF_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		// _accessTrackers[mediaPlayer] = new HashSet<AudioOutput>();
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_14 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_15 = ___mediaPlayer1;
		HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* L_16 = (HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB*)il2cpp_codegen_object_new(HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		HashSet_1__ctor_m7695357902EDFE511D7FCBBD8D20DFFF5B0A6FEC(L_16, HashSet_1__ctor_m7695357902EDFE511D7FCBBD8D20DFFF5B0A6FEC_RuntimeMethod_var);
		NullCheck(L_14);
		Dictionary_2_set_Item_mF8609B5AF9343CA4A6622A15130E41F93F133D09(L_14, L_15, L_16, Dictionary_2_set_Item_mF8609B5AF9343CA4A6622A15130E41F93F133D09_RuntimeMethod_var);
	}

IL_004f:
	{
		// if (_accessTrackers[mediaPlayer].Contains(_outputComponent) || _accessTrackers[mediaPlayer].Count == 0 || _pcmData[mediaPlayer] == null)
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_17 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_18 = ___mediaPlayer1;
		NullCheck(L_17);
		HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* L_19;
		L_19 = Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551(L_17, L_18, Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var);
		AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988* L_20 = ____outputComponent0;
		NullCheck(L_19);
		bool L_21;
		L_21 = HashSet_1_Contains_m870A88EA43D028F4B2F191BC5E5149DF2A64ACA8(L_19, L_20, HashSet_1_Contains_m870A88EA43D028F4B2F191BC5E5149DF2A64ACA8_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0084;
		}
	}
	{
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_22 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_23 = ___mediaPlayer1;
		NullCheck(L_22);
		HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* L_24;
		L_24 = Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551(L_22, L_23, Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = HashSet_1_get_Count_m566F55AC0369282CAC610001D261F339269BC229_inline(L_24, HashSet_1_get_Count_m566F55AC0369282CAC610001D261F339269BC229_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_0084;
		}
	}
	{
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_26 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_27 = ___mediaPlayer1;
		NullCheck(L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28;
		L_28 = Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385(L_26, L_27, Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_00d9;
		}
	}

IL_0084:
	{
		// _accessTrackers[mediaPlayer].Clear();
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_29 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_30 = ___mediaPlayer1;
		NullCheck(L_29);
		HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* L_31;
		L_31 = Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551(L_29, L_30, Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var);
		NullCheck(L_31);
		HashSet_1_Clear_m8022AAA55692D914BE5BFA89886755881345C683(L_31, HashSet_1_Clear_m8022AAA55692D914BE5BFA89886755881345C683_RuntimeMethod_var);
		// int actualDataRequired = data.Length / totalChannels * channels;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = ___data2;
		NullCheck(L_32);
		int32_t L_33 = ___totalChannels4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))/L_33)), L_34));
		// _pcmData[mediaPlayer] = new float[actualDataRequired];
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_35 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_36 = ___mediaPlayer1;
		int32_t L_37 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		NullCheck(L_35);
		Dictionary_2_set_Item_m7E42076CD22BF28D8DD7335FB6CDEF5743EB86B6(L_35, L_36, L_38, Dictionary_2_set_Item_m7E42076CD22BF28D8DD7335FB6CDEF5743EB86B6_RuntimeMethod_var);
		// GrabAudio(mediaPlayer, _pcmData[mediaPlayer], channels);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_39 = ___mediaPlayer1;
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_40 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_41 = ___mediaPlayer1;
		NullCheck(L_40);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42;
		L_42 = Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385(L_40, L_41, Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		int32_t L_43 = V_0;
		AudioOutputManager_GrabAudio_mD6E2FF951FF611DE514BDFDB4BA789CCB92E4E2A(__this, L_39, L_42, L_43, NULL);
		// _accessTrackers[mediaPlayer].Add(_outputComponent);
		Dictionary_2_tC5561B2CB188BF47B4FA10CCF26DDEF10255AEDF* L_44 = __this->____accessTrackers_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_45 = ___mediaPlayer1;
		NullCheck(L_44);
		HashSet_1_t3A515FF128DD5E34EC77DBFF8F010060B37330CB* L_46;
		L_46 = Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551(L_44, L_45, Dictionary_2_get_Item_m87D9F904F767E83D20B3D5B9D2423E5503A8C551_RuntimeMethod_var);
		AudioOutput_t45569A9B737DD86D7A268FD61678D36D1076C988* L_47 = ____outputComponent0;
		NullCheck(L_46);
		bool L_48;
		L_48 = HashSet_1_Add_m3A8ECF662EF79C5C69249F55ED89BC312EC1C99B(L_46, L_47, HashSet_1_Add_m3A8ECF662EF79C5C69249F55ED89BC312EC1C99B_RuntimeMethod_var);
	}

IL_00d9:
	{
		// int samples = Math.Min(data.Length / totalChannels, _pcmData[mediaPlayer].Length / channels);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = ___data2;
		NullCheck(L_49);
		int32_t L_50 = ___totalChannels4;
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_51 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_52 = ___mediaPlayer1;
		NullCheck(L_51);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53;
		L_53 = Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385(L_51, L_52, Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)(((int32_t)(((RuntimeArray*)L_49)->max_length))/L_50)), ((int32_t)(((int32_t)(((RuntimeArray*)L_53)->max_length))/L_54)), NULL);
		V_1 = L_55;
		// int storedPos = 0;
		V_2 = 0;
		// int requestedPos = 0;
		V_3 = 0;
		// if (audioOutputMode == AudioOutput.AudioOutputMode.Multiple)
		int32_t L_56 = ___audioOutputMode5;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_0157;
		}
	}
	{
		// int lesserChannels = Math.Min(channels, totalChannels);
		int32_t L_57 = V_0;
		int32_t L_58 = ___totalChannels4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_59;
		L_59 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_57, L_58, NULL);
		V_5 = L_59;
		// for (int i = 0; i < samples; ++i)
		V_6 = 0;
		goto IL_0151;
	}

IL_010d:
	{
		// for (int j = 0; j < lesserChannels; ++j)
		V_7 = 0;
		goto IL_013c;
	}

IL_0112:
	{
		// if ((1 << j & channelMask) > 0)
		int32_t L_60 = V_7;
		int32_t L_61 = ___channelMask3;
		if ((((int32_t)((int32_t)(((int32_t)(1<<((int32_t)(L_60&((int32_t)31)))))&L_61))) <= ((int32_t)0)))
		{
			goto IL_0136;
		}
	}
	{
		// data[requestedPos + j] = _pcmData[mediaPlayer][storedPos + j];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = ___data2;
		int32_t L_63 = V_3;
		int32_t L_64 = V_7;
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_65 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_66 = ___mediaPlayer1;
		NullCheck(L_65);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67;
		L_67 = Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385(L_65, L_66, Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		int32_t L_68 = V_2;
		int32_t L_69 = V_7;
		NullCheck(L_67);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_68, L_69));
		float L_71 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, L_64))), (float)L_71);
	}

IL_0136:
	{
		// for (int j = 0; j < lesserChannels; ++j)
		int32_t L_72 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_013c:
	{
		// for (int j = 0; j < lesserChannels; ++j)
		int32_t L_73 = V_7;
		int32_t L_74 = V_5;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0112;
		}
	}
	{
		// storedPos += channels;
		int32_t L_75 = V_2;
		int32_t L_76 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
		// requestedPos += totalChannels;
		int32_t L_77 = V_3;
		int32_t L_78 = ___totalChannels4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_77, L_78));
		// for (int i = 0; i < samples; ++i)
		int32_t L_79 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0151:
	{
		// for (int i = 0; i < samples; ++i)
		int32_t L_80 = V_6;
		int32_t L_81 = V_1;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_010d;
		}
	}
	{
		return;
	}

IL_0157:
	{
		// else if(audioOutputMode == AudioOutput.AudioOutputMode.Single)
		int32_t L_82 = ___audioOutputMode5;
		if (L_82)
		{
			goto IL_01c7;
		}
	}
	{
		// int desiredChannel = 0;
		V_8 = 0;
		// for (int i = 0; i < 8; ++i)
		V_9 = 0;
		goto IL_017c;
	}

IL_0163:
	{
		// if ((channelMask & (1 << i)) > 0)
		int32_t L_83 = ___channelMask3;
		int32_t L_84 = V_9;
		if ((((int32_t)((int32_t)(L_83&((int32_t)(1<<((int32_t)(L_84&((int32_t)31)))))))) <= ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		// desiredChannel = i;
		int32_t L_85 = V_9;
		V_8 = L_85;
		// break;
		goto IL_0181;
	}

IL_0176:
	{
		// for (int i = 0; i < 8; ++i)
		int32_t L_86 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_017c:
	{
		// for (int i = 0; i < 8; ++i)
		int32_t L_87 = V_9;
		if ((((int32_t)L_87) < ((int32_t)8)))
		{
			goto IL_0163;
		}
	}

IL_0181:
	{
		// if(desiredChannel < channels)
		int32_t L_88 = V_8;
		int32_t L_89 = V_0;
		if ((((int32_t)L_88) >= ((int32_t)L_89)))
		{
			goto IL_01c7;
		}
	}
	{
		// for (int i = 0; i < samples; ++i)
		V_10 = 0;
		goto IL_01c2;
	}

IL_018b:
	{
		// for (int j = 0; j < totalChannels; ++j)
		V_11 = 0;
		goto IL_01ad;
	}

IL_0190:
	{
		// data[requestedPos + j] = _pcmData[mediaPlayer][storedPos + desiredChannel];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_90 = ___data2;
		int32_t L_91 = V_3;
		int32_t L_92 = V_11;
		Dictionary_2_tBAEFA0001C038323E9BB6B6E453D7907CFEC29BB* L_93 = __this->____pcmData_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_94 = ___mediaPlayer1;
		NullCheck(L_93);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95;
		L_95 = Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385(L_93, L_94, Dictionary_2_get_Item_m8B6E0DDB7552CC2ABC6261C465D9063575B20385_RuntimeMethod_var);
		int32_t L_96 = V_2;
		int32_t L_97 = V_8;
		NullCheck(L_95);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_96, L_97));
		float L_99 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, L_92))), (float)L_99);
		// for (int j = 0; j < totalChannels; ++j)
		int32_t L_100 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_01ad:
	{
		// for (int j = 0; j < totalChannels; ++j)
		int32_t L_101 = V_11;
		int32_t L_102 = ___totalChannels4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0190;
		}
	}
	{
		// storedPos += channels;
		int32_t L_103 = V_2;
		int32_t L_104 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_103, L_104));
		// requestedPos += totalChannels;
		int32_t L_105 = V_3;
		int32_t L_106 = ___totalChannels4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_105, L_106));
		// for (int i = 0; i < samples; ++i)
		int32_t L_107 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_01c2:
	{
		// for (int i = 0; i < samples; ++i)
		int32_t L_108 = V_10;
		int32_t L_109 = V_1;
		if ((((int32_t)L_108) < ((int32_t)L_109)))
		{
			goto IL_018b;
		}
	}

IL_01c7:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.AudioOutputManager::GrabAudio(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutputManager_GrabAudio_mD6E2FF951FF611DE514BDFDB4BA789CCB92E4E2A (AudioOutputManager_tEDBCF23298C6FAA847933B0E00262EAAF988B585* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___channels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.Control.GrabAudio(data, data.Length, channels);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___player0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___data1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___data1;
		NullCheck(L_3);
		int32_t L_4 = ___channels2;
		NullCheck(L_1);
		InterfaceActionInvoker3< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t >::Invoke(43 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::GrabAudio(System.Single[],System.Int32,System.Int32) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_1, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4);
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
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::OpenVideoFromBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_OpenVideoFromBuffer_mAABA7782C1E5C94E4B3DC02FADA65091ADE6FF02 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		// public virtual bool            OpenVideoFromBuffer(byte[] buffer) { return false; }
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::StartOpenVideoFromBuffer(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_StartOpenVideoFromBuffer_mD21B10C78F3682B7920E6AA6827522021D15B315 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, uint64_t ___length0, const RuntimeMethod* method) 
{
	{
		// public virtual bool            StartOpenVideoFromBuffer(ulong length) { return false; }
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::AddChunkToVideoBuffer(System.Byte[],System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_AddChunkToVideoBuffer_mEE131E65845EB6D85A47F3422A94BD94B50A8F30 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chunk0, uint64_t ___offset1, uint64_t ___length2, const RuntimeMethod* method) 
{
	{
		// public virtual bool            AddChunkToVideoBuffer(byte[] chunk, ulong offset, ulong length) { return false; }
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::EndOpenVideoFromBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_EndOpenVideoFromBuffer_m0A5CED9262E263EF1EEB7A846CD721009AB6A54E (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool            EndOpenVideoFromBuffer() { return false; }
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::CloseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_CloseVideo_mD55B93A0C49F41FFE55148DEE56B432E6B7568F3 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// _stallDetectionTimer = 0f;
		__this->____stallDetectionTimer_6 = (0.0f);
		// _stallDetectionFrame = 0;
		__this->____stallDetectionFrame_7 = 0;
		// _lastError = ErrorCode.None;
		__this->____lastError_1 = 0;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SeekWithTolerance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SeekWithTolerance_m09D7004DC80EAFA09F7C7AFE45AEEF0717F5271A (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, float ___timeMs0, float ___beforeMs1, float ___afterMs2, const RuntimeMethod* method) 
{
	{
		// public virtual void            SeekWithTolerance(float timeMs, float beforeMs, float afterMs) { Seek(timeMs); }
		float L_0 = ___timeMs0;
		VirtualActionInvoker1< float >::Invoke(106 /* System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::Seek(System.Single) */, __this, L_0);
		// public virtual void            SeekWithTolerance(float timeMs, float beforeMs, float afterMs) { Seek(timeMs); }
		return;
	}
}
// System.Double RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetCurrentDateTimeSecondsSince1970()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BaseMediaPlayer_GetCurrentDateTimeSecondsSince1970_mC29A7182898EB91F630B96CCFE38D0A96B9AD8D0 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual double        GetCurrentDateTimeSecondsSince1970() { return 0.0; }
		return (0.0);
	}
}
// RenderHeads.Media.AVProVideo.TimeRange[] RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetSeekableTimeRanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1* BaseMediaPlayer_GetSeekableTimeRanges_m39FC3FEB35997B612F1CE2BB014D1EC956E6C239 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual TimeRange[]    GetSeekableTimeRanges() { return _seekableTimeRanges; }
		TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1* L_0 = __this->____seekableTimeRanges_5;
		return L_0;
	}
}
// UnityEngine.Rect RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetCropRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BaseMediaPlayer_GetCropRect_mB38A48A179EFB1D7AA890169FC3FCD072ABB0318 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual  Rect        GetCropRect() { return new Rect(0f, 0f, 0f, 0f); }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::WaitForNextFrame(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_WaitForNextFrame_m2030DBCFFB213E35723E7957D3E1E23031145679 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___dummyCamera0, int32_t ___previousFrameCount1, const RuntimeMethod* method) 
{
	{
		// public virtual bool            WaitForNextFrame(Camera dummyCamera, int previousFrameCount) { return false; }
		return (bool)0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseMediaPlayer_GetTextureCount_m2F6AC68F3C3E3766224C82CC92B8C308D4A3754D (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int            GetTextureCount() { return 1; }
		return 1;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::SupportsTextureFrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_SupportsTextureFrameCount_mE4DBDDAC5390121468A882B78B65659E8C171FB2 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool            SupportsTextureFrameCount() { return true; }
		return (bool)1;
	}
}
// System.Int64 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTextureTimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BaseMediaPlayer_GetTextureTimeStamp_mE10B18A0509E78AAC27B0DC50331852EDC7D0644 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual long            GetTextureTimeStamp() { return long.MinValue; }
		return ((int64_t)(std::numeric_limits<int64_t>::min)());
	}
}
// System.Single[] RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTextureTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* BaseMediaPlayer_GetTextureTransform_m476F9C53199CB86B5A69050C6A0BDACF87EE474E (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual float[]        GetTextureTransform() { return new float[] { 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f }; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
		return L_2;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetBalance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetBalance_mB6DD1C06012BF2677936E4FF4F09374895C35114 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, float ___balance0, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetBalance(float balance) { }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseMediaPlayer_GetBalance_m6A5FC563F4866B3C1DFC603229D4DE97F9E39B0D (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float        GetBalance() { return 0f; }
		return (0.0f);
	}
}
// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetAudioTrackId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseMediaPlayer_GetAudioTrackId_mF2CC2CD43BA35EF19CEE8D8463FCE74B6C7E58B7 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public virtual string        GetAudioTrackId(int index) { return index.ToString(); }
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index0), NULL);
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetNumAudioChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseMediaPlayer_GetNumAudioChannels_mD4A3BB8BEF1C57DD5F72B0805C2F961546E94122 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int            GetNumAudioChannels() { return -1; }
		return (-1);
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetAudioHeadRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetAudioHeadRotation_mFFE4526C4C5D201AF30A0C2004875EDE33350F2B (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetAudioHeadRotation(Quaternion q) { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::ResetAudioHeadRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_ResetAudioHeadRotation_m9B276BC55B4CC48D929B80ABA21F3DFA2751AC2F (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void            ResetAudioHeadRotation() { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetAudioChannelMode(RenderHeads.Media.AVProVideo.Audio360ChannelMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetAudioChannelMode_m6FA6F9EADD777991D1624E6E28FE28238A0C92DE (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, int32_t ___channelMode0, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetAudioChannelMode(Audio360ChannelMode channelMode) { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetAudioFocusEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetAudioFocusEnabled_m75F1B99B70DA83AE06F2F48CD00B1755D94270E1 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetAudioFocusEnabled(bool enabled) { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetAudioFocusProperties(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetAudioFocusProperties_m7A2BF1881F7996B2926FAE64A6009ED03E578C11 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, float ___offFocusLevel0, float ___widthDegrees1, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetAudioFocusProperties(float offFocusLevel, float widthDegrees) { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetAudioFocusRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetAudioFocusRotation_m6CC8D85A69630C7398895DFDFD21F86B99131E8C (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	{
		// public virtual void            SetAudioFocusRotation(Quaternion q) { }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::ResetAudioFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_ResetAudioFocus_m8736707A1E91F2C74516D322DECAB09CC3F91AC2 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void            ResetAudioFocus() { }
		return;
	}
}
// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetVideoTrackId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseMediaPlayer_GetVideoTrackId_m39CF8B6BAABB60D2E9920EC904CF778231311213 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public virtual string        GetVideoTrackId(int index) { return index.ToString(); }
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index0), NULL);
		return L_0;
	}
}
// System.Int64 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetEstimatedTotalBandwidthUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BaseMediaPlayer_GetEstimatedTotalBandwidthUsed_mAEB75233D85C55E900FF2A5570CDAC1068E104E2 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual long            GetEstimatedTotalBandwidthUsed() { return -1; }
		return ((int64_t)(-1));
	}
}
// RenderHeads.Media.AVProVideo.ErrorCode RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetLastError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseMediaPlayer_GetLastError_m9E8A505D326E1864FEA030BE824F53451526AE8B (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// return _lastError;
		int32_t L_0 = __this->____lastError_1;
		return L_0;
	}
}
// System.Int64 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetLastExtendedErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BaseMediaPlayer_GetLastExtendedErrorCode_mD6696B09CB2BBBE8894CE368F84EFF5B8D19A647 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return ((int64_t)0);
	}
}
// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetPlayerDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseMediaPlayer_GetPlayerDescription_mDA61EE73BC1D9307B2CECFCECEF64C5607D8343A (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// return _playerDescription;
		String_t* L_0 = __this->____playerDescription_0;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::PlayerSupportsLinearColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_PlayerSupportsLinearColorSpace_m3FE56227BB0F2CE3C8D0551AFEE9692B0D70C3E4 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetBufferedTimeRangeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseMediaPlayer_GetBufferedTimeRangeCount_m97DC1915EEC7896A763632AE225C0DCEF89B6FC5 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int        GetBufferedTimeRangeCount() { return 0; }
		return 0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetBufferedTimeRange(System.Int32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_GetBufferedTimeRange_mAEF8D447BA1D77931C98BCEE1004372E27BBF762 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, int32_t ___index0, float* ___startTimeMs1, float* ___endTimeMs2, const RuntimeMethod* method) 
{
	{
		// public virtual bool        GetBufferedTimeRange(int index, ref float startTimeMs, ref float endTimeMs) { return false; }
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::SetTextureProperties(UnityEngine.FilterMode,UnityEngine.TextureWrapMode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_SetTextureProperties_m3D1F47826FFEF837C51899B0F0367C890883024D (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, int32_t ___filterMode0, int32_t ___wrapMode1, int32_t ___anisoLevel2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// _defaultTextureFilterMode = filterMode;
		int32_t L_0 = ___filterMode0;
		__this->____defaultTextureFilterMode_2 = L_0;
		// _defaultTextureWrapMode = wrapMode;
		int32_t L_1 = ___wrapMode1;
		__this->____defaultTextureWrapMode_3 = L_1;
		// _defaultTextureAnisoLevel = anisoLevel;
		int32_t L_2 = ___anisoLevel2;
		__this->____defaultTextureAnisoLevel_4 = L_2;
		// for (int i = 0; i < GetTextureCount(); ++i)
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		// ApplyTextureProperties(GetTexture(i));
		int32_t L_3 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = VirtualFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(128 /* UnityEngine.Texture RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTexture(System.Int32) */, __this, L_3);
		VirtualActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(170 /* System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::ApplyTextureProperties(UnityEngine.Texture) */, __this, L_4);
		// for (int i = 0; i < GetTextureCount(); ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < GetTextureCount(); ++i)
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(127 /* System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTextureCount() */, __this);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::ApplyTextureProperties(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_ApplyTextureProperties_mDCC842FF177A032890398181947058856E152BEB (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (texture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// texture.filterMode = _defaultTextureFilterMode;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		int32_t L_3 = __this->____defaultTextureFilterMode_2;
		NullCheck(L_2);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_2, L_3, NULL);
		// texture.wrapMode = _defaultTextureWrapMode;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture0;
		int32_t L_5 = __this->____defaultTextureWrapMode_3;
		NullCheck(L_4);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_4, L_5, NULL);
		// texture.anisoLevel = _defaultTextureAnisoLevel;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___texture0;
		int32_t L_7 = __this->____defaultTextureAnisoLevel_4;
		NullCheck(L_6);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_6, L_7, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::GrabAudio(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_GrabAudio_mDF8DFA7FEFB19B3B39E5C1F479FFF131A9559673 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___buffer0, int32_t ___floatCount1, int32_t ___channelCount2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsExpectingNewVideoFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_IsExpectingNewVideoFrame_mD923F0939F537E680C3C2C104BFB4B38CF7DBE14 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// if (HasVideo())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(120 /* System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::HasVideo() */, __this);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (!IsFinished() && (!IsPaused() || IsPlaying()))
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(124 /* System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsFinished() */, __this);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(123 /* System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsPaused() */, __this);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(122 /* System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsPlaying() */, __this);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		// return true;
		return (bool)1;
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::IsPlaybackStalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_IsPlaybackStalled_m44609F11AB1714E91A90BE7E1EBC808BB7666587 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (SupportsTextureFrameCount() && IsExpectingNewVideoFrame())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(130 /* System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::SupportsTextureFrameCount() */, __this);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		bool L_1;
		L_1 = BaseMediaPlayer_IsExpectingNewVideoFrame_mD923F0939F537E680C3C2C104BFB4B38CF7DBE14(__this, NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// int frameCount = GetTextureFrameCount();
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(129 /* System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetTextureFrameCount() */, __this);
		V_0 = L_2;
		// if (frameCount != _stallDetectionFrame)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____stallDetectionFrame_7;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// _stallDetectionTimer = 0f;
		__this->____stallDetectionTimer_6 = (0.0f);
		// _stallDetectionFrame = frameCount;
		int32_t L_5 = V_0;
		__this->____stallDetectionFrame_7 = L_5;
		goto IL_0046;
	}

IL_0034:
	{
		// _stallDetectionTimer += Time.deltaTime;
		float L_6 = __this->____stallDetectionTimer_6;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____stallDetectionTimer_6 = ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_0046:
	{
		// return (_stallDetectionTimer > StallDetectionDuration);
		float L_8 = __this->____stallDetectionTimer_6;
		return (bool)((((float)L_8) > ((float)(0.75f)))? 1 : 0);
	}

IL_0054:
	{
		// _stallDetectionTimer = 0f;
		__this->____stallDetectionTimer_6 = (0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.BaseMediaPlayer::LoadSubtitlesSRT(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMediaPlayer_LoadSubtitlesSRT_mD25DE3132EFDD112C4FC0B8DD9E8065C11864AB3 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(data))
		String_t* L_0 = ___data0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _subtitles = null;
		__this->____subtitles_8 = (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subtitles_8), (void*)(List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*)NULL);
		// _currentSubtitle = null;
		__this->____currentSubtitle_9 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSubtitle_9), (void*)(Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL);
		goto IL_002b;
	}

IL_0018:
	{
		// _subtitles = Helper.LoadSubtitlesSRT(data);
		String_t* L_2 = ___data0;
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_3;
		L_3 = Helper_LoadSubtitlesSRT_m828296E91BEC08644CCD740751E65A8926AC9A34(L_2, NULL);
		__this->____subtitles_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subtitles_8), (void*)L_3);
		// _currentSubtitle = null;
		__this->____currentSubtitle_9 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSubtitle_9), (void*)(Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL);
	}

IL_002b:
	{
		// return (_subtitles != null);
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_4 = __this->____subtitles_8;
		return (bool)((!(((RuntimeObject*)(List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::UpdateSubtitles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_UpdateSubtitles_m61E093C170BC89EE6D30142A9028C9E620BE1409 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2F66D3CD4FD8B3BD8ABAFEC2FCF3C9934DEFED9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (_subtitles != null)
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_0 = __this->____subtitles_8;
		if (!L_0)
		{
			goto IL_0093;
		}
	}
	{
		// float time = GetCurrentTimeMs();
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(109 /* System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetCurrentTimeMs() */, __this);
		V_0 = L_1;
		// int searchIndex = 0;
		V_1 = 0;
		// if (_currentSubtitle != null)
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_2 = __this->____currentSubtitle_9;
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// if (!_currentSubtitle.IsTime(time))
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_3 = __this->____currentSubtitle_9;
		float L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Subtitle_IsTime_m48987F9E1866A3C64BA42716D0B1AC08ADF60DCC(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		// if (time > _currentSubtitle.timeEndMs)
		float L_6 = V_0;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_7 = __this->____currentSubtitle_9;
		NullCheck(L_7);
		int32_t L_8 = L_7->___timeEndMs_3;
		if ((!(((float)L_6) > ((float)((float)L_8)))))
		{
			goto IL_0047;
		}
	}
	{
		// searchIndex = _currentSubtitle.index + 1;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_9 = __this->____currentSubtitle_9;
		NullCheck(L_9);
		int32_t L_10 = L_9->___index_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// _currentSubtitle = null;
		__this->____currentSubtitle_9 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSubtitle_9), (void*)(Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL);
	}

IL_004e:
	{
		// if (_currentSubtitle == null)
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_11 = __this->____currentSubtitle_9;
		if (L_11)
		{
			goto IL_0093;
		}
	}
	{
		// for (int i = searchIndex; i < _subtitles.Count; i++)
		int32_t L_12 = V_1;
		V_2 = L_12;
		goto IL_0085;
	}

IL_005a:
	{
		// if (_subtitles[i].IsTime(time))
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_13 = __this->____subtitles_8;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_15;
		L_15 = List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A(L_13, L_14, List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A_RuntimeMethod_var);
		float L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = Subtitle_IsTime_m48987F9E1866A3C64BA42716D0B1AC08ADF60DCC(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		// _currentSubtitle = _subtitles[i];
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_18 = __this->____subtitles_8;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_20;
		L_20 = List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A(L_18, L_19, List_1_get_Item_m96B7DCDEE1286B3050D9060D791AA6FB5C3B270A_RuntimeMethod_var);
		__this->____currentSubtitle_9 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSubtitle_9), (void*)L_20);
		// break;
		return;
	}

IL_0081:
	{
		// for (int i = searchIndex; i < _subtitles.Count; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0085:
	{
		// for (int i = searchIndex; i < _subtitles.Count; i++)
		int32_t L_22 = V_2;
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_23 = __this->____subtitles_8;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m2F66D3CD4FD8B3BD8ABAFEC2FCF3C9934DEFED9A_inline(L_23, List_1_get_Count_m2F66D3CD4FD8B3BD8ABAFEC2FCF3C9934DEFED9A_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_005a;
		}
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetSubtitleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseMediaPlayer_GetSubtitleIndex_m9707F1C04277BACA2963B478F77A3B2F281F9F92 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int result = -1;
		V_0 = (-1);
		// if (_currentSubtitle != null)
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_0 = __this->____currentSubtitle_9;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// result = _currentSubtitle.index;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_1 = __this->____currentSubtitle_9;
		NullCheck(L_1);
		int32_t L_2 = L_1->___index_0;
		V_0 = L_2;
	}

IL_0016:
	{
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetSubtitleText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseMediaPlayer_GetSubtitleText_mB51C42B048F451B94C255EDC64D5314C542F6509 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// if (_currentSubtitle != null)
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_1 = __this->____currentSubtitle_9;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// result = _currentSubtitle.text;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_2 = __this->____currentSubtitle_9;
		NullCheck(L_2);
		String_t* L_3 = L_2->___text_1;
		V_0 = L_3;
	}

IL_001a:
	{
		// return result;
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer_OnEnable_m050936088A7C798073FBB5807916C4D1DF11B2BE (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMediaPlayer__ctor_mB429CB676E5E84D8B0812423C72B56A7FB6CB9E5 (BaseMediaPlayer_t747E88D0BF6D5B09084262CBAFC3112425508C0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string _playerDescription = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____playerDescription_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerDescription_0), (void*)L_0);
		// protected FilterMode _defaultTextureFilterMode = FilterMode.Bilinear;
		__this->____defaultTextureFilterMode_2 = 1;
		// protected TextureWrapMode _defaultTextureWrapMode = TextureWrapMode.Clamp;
		__this->____defaultTextureWrapMode_3 = 1;
		// protected int _defaultTextureAnisoLevel = 1;
		__this->____defaultTextureAnisoLevel_4 = 1;
		// protected TimeRange[] _seekableTimeRanges = new TimeRange[0];
		TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1* L_1 = (TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1*)(TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1*)SZArrayNew(TimeRangeU5BU5D_tAF7ED1C077BAA14E750E741546045EA59D34F1D1_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->____seekableTimeRanges_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____seekableTimeRanges_5), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HLSStream_get_Width_m8C5AE3741698A3AF96D014FB400C8FC2A20C6C32 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// get { return _width; }
		int32_t L_0 = __this->____width_7;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HLSStream_get_Height_m612D4B3F03C32451CA7AB924A00CD815283861E2 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// get { return _height; }
		int32_t L_0 = __this->____height_8;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.HLSStream::get_Bandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HLSStream_get_Bandwidth_m7EA11A43FBF3B0E43AA65F39D26393F9F21C4DCE (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// get { return _bandwidth; }
		int32_t L_0 = __this->____bandwidth_9;
		return L_0;
	}
}
// System.String RenderHeads.Media.AVProVideo.HLSStream::get_URL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HLSStream_get_URL_m2345EF43C6C28B3CBABB6A389DBE219E30B3B013 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// get { return _streamURL; }
		String_t* L_0 = __this->____streamURL_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk> RenderHeads.Media.AVProVideo.HLSStream::GetAllChunks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* HLSStream_GetAllChunks_mC8233F6E43CC38FBE9C09134D81A03E1D7D28957 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* V_2 = NULL;
	{
		// List<Chunk> chunks = new List<Chunk>();
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_0 = (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*)il2cpp_codegen_object_new(List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E(L_0, List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_RuntimeMethod_var);
		V_0 = L_0;
		// for(int i = 0; i < _streams.Count; ++i)
		V_1 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		// var streamChunks = _streams[i].GetAllChunks();
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_1 = __this->____streams_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* L_3;
		L_3 = List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3(L_1, L_2, List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_4;
		L_4 = VirtualFuncInvoker0< List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* >::Invoke(8 /* System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk> RenderHeads.Media.AVProVideo.Stream::GetAllChunks() */, L_3);
		V_2 = L_4;
		// chunks.AddRange(streamChunks);
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_5 = V_0;
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_6 = V_2;
		NullCheck(L_5);
		List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5(L_5, L_6, List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_RuntimeMethod_var);
		// for(int i = 0; i < _streams.Count; ++i)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		// for(int i = 0; i < _streams.Count; ++i)
		int32_t L_8 = V_1;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_9 = __this->____streams_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_inline(L_9, List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		// chunks.AddRange(_chunks);
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_11 = V_0;
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_12 = __this->____chunks_5;
		NullCheck(L_11);
		List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5(L_11, L_12, List_1_AddRange_mB7B8C4B7B759228F6B8DEADEF44E6763F6756BD5_RuntimeMethod_var);
		// return chunks;
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_13 = V_0;
		return L_13;
	}
}
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream/Chunk> RenderHeads.Media.AVProVideo.HLSStream::GetChunks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* HLSStream_GetChunks_mE0A54C13FC17A313B3465C027EE64C8EC1521377 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// return _chunks;
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_0 = __this->____chunks_5;
		return L_0;
	}
}
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream> RenderHeads.Media.AVProVideo.HLSStream::GetAllStreams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* HLSStream_GetAllStreams_m733635DAE4492C932434F840336D330118730244 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* V_2 = NULL;
	{
		// List<Stream> streams = new List<Stream>();
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_0 = (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*)il2cpp_codegen_object_new(List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E(L_0, List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E_RuntimeMethod_var);
		V_0 = L_0;
		// for(int i = 0; i < _streams.Count; ++i)
		V_1 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		// var childrenStreams = _streams[i].GetAllStreams();
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_1 = __this->____streams_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* L_3;
		L_3 = List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3(L_1, L_2, List_1_get_Item_mC690D44A952250D0DCA58220CF109CEC5C155DB3_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_4;
		L_4 = VirtualFuncInvoker0< List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* >::Invoke(10 /* System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream> RenderHeads.Media.AVProVideo.Stream::GetAllStreams() */, L_3);
		V_2 = L_4;
		// streams.AddRange(childrenStreams);
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_5 = V_0;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_6 = V_2;
		NullCheck(L_5);
		List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D(L_5, L_6, List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D_RuntimeMethod_var);
		// for(int i = 0; i < _streams.Count; ++i)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		// for(int i = 0; i < _streams.Count; ++i)
		int32_t L_8 = V_1;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_9 = __this->____streams_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_inline(L_9, List_1_get_Count_m28C4E45E358CCC6861CD715CC5BFD33869B56C4B_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		// streams.AddRange(_streams);
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_11 = V_0;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_12 = __this->____streams_4;
		NullCheck(L_11);
		List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D(L_11, L_12, List_1_AddRange_mB851B0628FAC33E826986362FC980BD7BD02C09D_RuntimeMethod_var);
		// return streams;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_13 = V_0;
		return L_13;
	}
}
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Stream> RenderHeads.Media.AVProVideo.HLSStream::GetStreams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* HLSStream_GetStreams_mA50461C3546D5CE225539204FEDBEDFB44E05347 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, const RuntimeMethod* method) 
{
	{
		// return _streams;
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_0 = __this->____streams_4;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.HLSStream::ExtractStreamInfo(System.String,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HLSStream_ExtractStreamInfo_m439D7DED0EE7C76EDA41BC08F192BBDBF0CA1BDC (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, String_t* ___line0, int32_t* ___width1, int32_t* ___height2, int32_t* ___bandwidth3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138DA67229C73477E63463BF6FD1A78BCD8ECFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (line.StartsWith(STREAM_TAG))
		String_t* L_0 = ___line0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral138DA67229C73477E63463BF6FD1A78BCD8ECFE4, NULL);
		if (!L_1)
		{
			goto IL_015a;
		}
	}
	{
		// int bandwidthPos = line.IndexOf(BANDWITH_NAME);
		String_t* L_2 = ___line0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F, NULL);
		V_0 = L_3;
		// if (bandwidthPos >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// int endPos = line.IndexOf(',', bandwidthPos + BANDWITH_NAME.Length);
		String_t* L_5 = ___line0;
		int32_t L_6 = V_0;
		NullCheck(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F, NULL);
		NullCheck(L_5);
		int32_t L_8;
		L_8 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_5, ((int32_t)44), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		V_2 = L_8;
		// if (endPos < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// endPos = line.Length - 1;
		String_t* L_10 = ___line0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0042:
	{
		// if (endPos >= 0 && endPos - BANDWITH_NAME.Length > bandwidthPos)
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_13 = V_2;
		NullCheck(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F, NULL);
		int32_t L_15 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14))) <= ((int32_t)L_15)))
		{
			goto IL_008a;
		}
	}
	{
		// int length = endPos - bandwidthPos - BANDWITH_NAME.Length;
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), L_18));
		// string bandwidthString = line.Substring(bandwidthPos + BANDWITH_NAME.Length, length);
		String_t* L_19 = ___line0;
		int32_t L_20 = V_0;
		NullCheck(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCE1DD9F9171B1A75D30200C0D0DA3653380A395F, NULL);
		int32_t L_22 = V_3;
		NullCheck(L_19);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22, NULL);
		// if (!int.TryParse(bandwidthString, out bandwidth))
		int32_t* L_24 = ___bandwidth3;
		bool L_25;
		L_25 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_23, L_24, NULL);
		if (L_25)
		{
			goto IL_008a;
		}
	}
	{
		// bandwidth = 0;
		int32_t* L_26 = ___bandwidth3;
		*((int32_t*)L_26) = (int32_t)0;
		goto IL_008a;
	}

IL_0086:
	{
		// bandwidth = 0;
		int32_t* L_27 = ___bandwidth3;
		*((int32_t*)L_27) = (int32_t)0;
	}

IL_008a:
	{
		// int resolutionPos = line.IndexOf(RESOLUTION_NAME);
		String_t* L_28 = ___line0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_28, _stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D, NULL);
		V_1 = L_29;
		// if (resolutionPos >= 0)
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		// int endPos = line.IndexOf(',', resolutionPos + RESOLUTION_NAME.Length);
		String_t* L_31 = ___line0;
		int32_t L_32 = V_1;
		NullCheck(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D, NULL);
		NullCheck(L_31);
		int32_t L_34;
		L_34 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_31, ((int32_t)44), ((int32_t)il2cpp_codegen_add(L_32, L_33)), NULL);
		V_4 = L_34;
		// if (endPos < 0)
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00c2;
		}
	}
	{
		// endPos = line.Length - 1;
		String_t* L_36 = ___line0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00c2:
	{
		// if (endPos >= 0 && endPos - RESOLUTION_NAME.Length > resolutionPos)
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_39 = V_4;
		NullCheck(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D, NULL);
		int32_t L_41 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_39, L_40))) <= ((int32_t)L_41)))
		{
			goto IL_0158;
		}
	}
	{
		// int length = endPos - resolutionPos - RESOLUTION_NAME.Length;
		int32_t L_42 = V_4;
		int32_t L_43 = V_1;
		NullCheck(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D);
		int32_t L_44;
		L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_42, L_43)), L_44));
		// string resolutionString = line.Substring(resolutionPos + RESOLUTION_NAME.Length, length);
		String_t* L_45 = ___line0;
		int32_t L_46 = V_1;
		NullCheck(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralC223E82CEF26FE9D44238B942C6E968E5F7E125D, NULL);
		int32_t L_48 = V_5;
		NullCheck(L_45);
		String_t* L_49;
		L_49 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), L_48, NULL);
		V_6 = L_49;
		// int xPos = resolutionString.IndexOf('x');
		String_t* L_50 = V_6;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_50, ((int32_t)120), NULL);
		V_7 = L_51;
		// if (xPos < 0 || !int.TryParse(resolutionString.Substring(0, xPos), out width) ||
		//     !int.TryParse(resolutionString.Substring(xPos + 1, resolutionString.Length - (xPos + 1)), out height))
		int32_t L_52 = V_7;
		if ((((int32_t)L_52) < ((int32_t)0)))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_53 = V_6;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		String_t* L_55;
		L_55 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_53, 0, L_54, NULL);
		int32_t* L_56 = ___width1;
		bool L_57;
		L_57 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_55, L_56, NULL);
		if (!L_57)
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_58 = V_6;
		int32_t L_59 = V_7;
		String_t* L_60 = V_6;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_60, NULL);
		int32_t L_62 = V_7;
		NullCheck(L_58);
		String_t* L_63;
		L_63 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_58, ((int32_t)il2cpp_codegen_add(L_59, 1)), ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)il2cpp_codegen_add(L_62, 1)))), NULL);
		int32_t* L_64 = ___height2;
		bool L_65;
		L_65 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_0158;
		}
	}

IL_0142:
	{
		// width = height = 0;
		int32_t* L_66 = ___width1;
		int32_t* L_67 = ___height2;
		int32_t L_68 = 0;
		V_8 = L_68;
		*((int32_t*)L_67) = (int32_t)L_68;
		int32_t L_69 = V_8;
		*((int32_t*)L_66) = (int32_t)L_69;
		goto IL_0158;
	}

IL_014e:
	{
		// width = height = 0;
		int32_t* L_70 = ___width1;
		int32_t* L_71 = ___height2;
		int32_t L_72 = 0;
		V_8 = L_72;
		*((int32_t*)L_71) = (int32_t)L_72;
		int32_t L_73 = V_8;
		*((int32_t*)L_70) = (int32_t)L_73;
	}

IL_0158:
	{
		// return true;
		return (bool)1;
	}

IL_015a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.HLSStream::IsChunk(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HLSStream_IsChunk_m0FE628E2FB0010CBCFFF49C1344F6D8AFB463869 (String_t* ___line0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC43F6112995CF881665405288365F844B50FB772);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return line.StartsWith(CHUNK_TAG);
		String_t* L_0 = ___line0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralC43F6112995CF881665405288365F844B50FB772, NULL);
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProVideo.HLSStream::ParseFile(System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HLSStream_ParseFile_mAFBD79D61C4A7614893E11E3AC3F672DA4156C29 (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___text0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBE5D74E2E3EE3A301BBA63177151E5F05292BAFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D V_6;
	memset((&V_6), 0, sizeof(V_6));
	HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B11_0 = NULL;
	{
		// bool nextIsChunk = false;
		V_0 = (bool)0;
		// bool nextIsStream = false;
		V_1 = (bool)0;
		// int width = 0, height = 0, bitrate = 0;
		V_2 = 0;
		// int width = 0, height = 0, bitrate = 0;
		V_3 = 0;
		// int width = 0, height = 0, bitrate = 0;
		V_4 = 0;
		// for (int i = 0; i < text.Length; ++i)
		V_5 = 0;
		goto IL_00f3;
	}

IL_0013:
	{
		// if (ExtractStreamInfo(text[i], ref width, ref height, ref bitrate))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___text0;
		int32_t L_1 = V_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = HLSStream_ExtractStreamInfo_m439D7DED0EE7C76EDA41BC08F192BBDBF0CA1BDC(__this, L_3, (&V_2), (&V_3), (&V_4), NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// nextIsStream = true;
		V_1 = (bool)1;
		// nextIsChunk = false;
		V_0 = (bool)0;
		goto IL_00ed;
	}

IL_002e:
	{
		// else if (IsChunk(text[i]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___text0;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = HLSStream_IsChunk_m0FE628E2FB0010CBCFFF49C1344F6D8AFB463869(L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		// nextIsChunk = true;
		V_0 = (bool)1;
		// nextIsStream = false;
		V_1 = (bool)0;
		goto IL_00ed;
	}

IL_0042:
	{
		// else if (nextIsChunk)
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// chunk.name = path + text[i];
		String_t* L_11 = ___path1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___text0;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, L_15, NULL);
		(&V_6)->___name_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___name_0), (void*)L_16);
		// _chunks.Add(chunk);
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_17 = __this->____chunks_5;
		Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D L_18 = V_6;
		NullCheck(L_17);
		List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_inline(L_17, L_18, List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_RuntimeMethod_var);
		// nextIsChunk = false;
		V_0 = (bool)0;
		// nextIsStream = false;
		V_1 = (bool)0;
		goto IL_00ed;
	}

IL_006c:
	{
		// else if (nextIsStream)
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00e9;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// string fullpath = text[i].IndexOf("://") < 0 ? path + text[i] : text[i];
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___text0;
			int32_t L_21 = V_5;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(L_23);
			int32_t L_24;
			L_24 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_23, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
			if ((((int32_t)L_24) < ((int32_t)0)))
			{
				goto IL_0086_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = ___text0;
			int32_t L_26 = V_5;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			G_B11_0 = L_28;
			goto IL_0090_1;
		}

IL_0086_1:
		{
			String_t* L_29 = ___path1;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = ___text0;
			int32_t L_31 = V_5;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			String_t* L_34;
			L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_29, L_33, NULL);
			G_B11_0 = L_34;
		}

IL_0090_1:
		{
			// HLSStream stream = new HLSStream(fullpath, width, height, bitrate);
			int32_t L_35 = V_2;
			int32_t L_36 = V_3;
			int32_t L_37 = V_4;
			HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* L_38 = (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115*)il2cpp_codegen_object_new(HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			HLSStream__ctor_mFA33CE2BEBADF45468D99659D2CE2FA7E56F8E9E(L_38, G_B11_0, L_35, L_36, L_37, NULL);
			V_7 = L_38;
			// _streams.Add(stream);
			List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_39 = __this->____streams_4;
			HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* L_40 = V_7;
			NullCheck(L_39);
			List_1_Add_mBE5D74E2E3EE3A301BBA63177151E5F05292BAFC_inline(L_39, L_40, List_1_Add_mBE5D74E2E3EE3A301BBA63177151E5F05292BAFC_RuntimeMethod_var);
			// }
			goto IL_00e3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError("[AVProVideo]HLSParser cannot parse stream " + path + text[i] + ", " + e.Message);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3DEE53D74FE5D6CA0AB875B7CDD35509FB1A8AC)));
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3DEE53D74FE5D6CA0AB875B7CDD35509FB1A8AC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		String_t* L_44 = ___path1;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_43;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ___text0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		String_t* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_49);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_45;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)));
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		Exception_t* L_52 = V_8;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_52);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_53);
		String_t* L_54;
		L_54 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_51, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_54, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e3;
	}// end catch (depth: 1)

IL_00e3:
	{
		// nextIsChunk = false;
		V_0 = (bool)0;
		// nextIsStream = false;
		V_1 = (bool)0;
		goto IL_00ed;
	}

IL_00e9:
	{
		// nextIsChunk = false;
		V_0 = (bool)0;
		// nextIsStream = false;
		V_1 = (bool)0;
	}

IL_00ed:
	{
		// for (int i = 0; i < text.Length; ++i)
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00f3:
	{
		// for (int i = 0; i < text.Length; ++i)
		int32_t L_56 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = ___text0;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.HLSStream::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HLSStream__ctor_mFA33CE2BEBADF45468D99659D2CE2FA7E56F8E9E (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, String_t* ___filename0, int32_t ___width1, int32_t ___height2, int32_t ___bandwidth3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HLSStream_MyRemoteCertificateValidationCallback_mC4FB31D65A03389961F2AB79470158762C3B00FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// public HLSStream(string filename, int width = 0, int height = 0, int bandwidth = 0)
		Stream__ctor_m1411BB18992F52CFFC4FF0221A11824B3DBB5E79(__this, NULL);
		// _streams = new List<Stream>();
		List_1_t883C630D2067C239C952528EF488E7D81CD1D12D* L_0 = (List_1_t883C630D2067C239C952528EF488E7D81CD1D12D*)il2cpp_codegen_object_new(List_1_t883C630D2067C239C952528EF488E7D81CD1D12D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E(L_0, List_1__ctor_m8A4C6A610A7C6D803E10F30A8FFA0421FCF92A0E_RuntimeMethod_var);
		__this->____streams_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streams_4), (void*)L_0);
		// _chunks = new List<Chunk>();
		List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* L_1 = (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*)il2cpp_codegen_object_new(List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E(L_1, List_1__ctor_m497437DE6E0C2A844DB7E5AE84330AFA62EA9E8E_RuntimeMethod_var);
		__this->____chunks_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____chunks_5), (void*)L_1);
		// _width = width;
		int32_t L_2 = ___width1;
		__this->____width_7 = L_2;
		// _height = height;
		int32_t L_3 = ___height2;
		__this->____height_8 = L_3;
		// _bandwidth = bandwidth;
		int32_t L_4 = ___bandwidth3;
		__this->____bandwidth_9 = L_4;
		// _streamURL = filename;
		String_t* L_5 = ___filename0;
		__this->____streamURL_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamURL_6), (void*)L_5);
	}
	try
	{// begin try (depth: 1)
		{
			// string[] fileLines = null;
			V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
			// if (filename.ToLower().StartsWith("http://") || filename.ToLower().StartsWith("https://"))
			String_t* L_6 = ___filename0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_6, NULL);
			NullCheck(L_7);
			bool L_8;
			L_8 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C, NULL);
			if (L_8)
			{
				goto IL_005f_1;
			}
		}
		{
			String_t* L_9 = ___filename0;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
			NullCheck(L_10);
			bool L_11;
			L_11 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_10, _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, NULL);
			if (!L_11)
			{
				goto IL_00a4_1;
			}
		}

IL_005f_1:
		{
			// if (filename.ToLower().StartsWith("https://"))
			String_t* L_12 = ___filename0;
			NullCheck(L_12);
			String_t* L_13;
			L_13 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_12, NULL);
			NullCheck(L_13);
			bool L_14;
			L_14 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_13, _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, NULL);
			if (!L_14)
			{
				goto IL_0082_1;
			}
		}
		{
			// ServicePointManager.ServerCertificateValidationCallback = MyRemoteCertificateValidationCallback;
			RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_15 = (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367(L_15, __this, (intptr_t)((void*)HLSStream_MyRemoteCertificateValidationCallback_mC4FB31D65A03389961F2AB79470158762C3B00FC_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
			ServicePointManager_set_ServerCertificateValidationCallback_mF4776A82604A8AF679BCB18CA3D73F821E957A54(L_15, NULL);
		}

IL_0082_1:
		{
			// using (System.Net.WebClient webClient = new System.Net.WebClient())
			WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_16 = (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268*)il2cpp_codegen_object_new(WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			WebClient__ctor_mC6890BD603C98D56E8D475D0D11180980F228C3F(L_16, NULL);
			V_3 = L_16;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_009a_1:
				{// begin finally (depth: 2)
					{
						WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_17 = V_3;
						if (!L_17)
						{
							goto IL_00a3_1;
						}
					}
					{
						WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_18 = V_3;
						NullCheck(L_18);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
					}

IL_00a3_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// string fileString = webClient.DownloadString(filename);
				WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_19 = V_3;
				String_t* L_20 = ___filename0;
				NullCheck(L_19);
				String_t* L_21;
				L_21 = WebClient_DownloadString_mB577DB8FBE9A1118C5815271C6F6403C64D4894C(L_19, L_20, NULL);
				// fileLines = fileString.Split('\n');
				NullCheck(L_21);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
				L_22 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_21, ((int32_t)10), 0, NULL);
				V_0 = L_22;
				// }
				goto IL_00ab_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00a4_1:
		{
			// fileLines = File.ReadAllLines(filename);
			String_t* L_23 = ___filename0;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24;
			L_24 = File_ReadAllLines_m562C333C151F3023033AF86CFD57AD0125C7D5FC(L_23, NULL);
			V_0 = L_24;
		}

IL_00ab_1:
		{
			// int lastDash = filename.LastIndexOf('/');
			String_t* L_25 = ___filename0;
			NullCheck(L_25);
			int32_t L_26;
			L_26 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_25, ((int32_t)47), NULL);
			V_1 = L_26;
			// if(lastDash < 0)
			int32_t L_27 = V_1;
			if ((((int32_t)L_27) >= ((int32_t)0)))
			{
				goto IL_00c1_1;
			}
		}
		{
			// lastDash = filename.LastIndexOf('\\');
			String_t* L_28 = ___filename0;
			NullCheck(L_28);
			int32_t L_29;
			L_29 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_28, ((int32_t)92), NULL);
			V_1 = L_29;
		}

IL_00c1_1:
		{
			// string path = _streamURL.Substring(0, lastDash + 1);
			String_t* L_30 = __this->____streamURL_6;
			int32_t L_31 = V_1;
			NullCheck(L_30);
			String_t* L_32;
			L_32 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_30, 0, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
			V_2 = L_32;
			// ParseFile(fileLines, path);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_0;
			String_t* L_34 = V_2;
			HLSStream_ParseFile_mAFBD79D61C4A7614893E11E3AC3F672DA4156C29(__this, L_33, L_34, NULL);
			// }
			goto IL_00dc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00db;
		}
		throw e;
	}

CATCH_00db:
	{// begin catch(System.Exception)
		// throw e;
		IL2CPP_RAISE_MANAGED_EXCEPTION(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HLSStream__ctor_mFA33CE2BEBADF45468D99659D2CE2FA7E56F8E9E_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00dc:
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.HLSStream::MyRemoteCertificateValidationCallback(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HLSStream_MyRemoteCertificateValidationCallback_mC4FB31D65A03389961F2AB79470158762C3B00FC (HLSStream_t64DDF543D029D5C0EC9640766803A86DB8B6F115* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool isOk = true;
		V_0 = (bool)1;
		// if (sslPolicyErrors != SslPolicyErrors.None)
		int32_t L_0 = ___sslPolicyErrors3;
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		// for (int i = 0; i < chain.ChainStatus.Length; i++)
		V_1 = 0;
		goto IL_006c;
	}

IL_000a:
	{
		// if (chain.ChainStatus[i].Status == X509ChainStatusFlags.RevocationStatusUnknown)
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_1 = ___chain2;
		NullCheck(L_1);
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_2;
		L_2 = X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A(L_1, NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)64))))
		{
			goto IL_0068;
		}
	}
	{
		// chain.ChainPolicy.RevocationFlag = X509RevocationFlag.EntireChain;
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_5 = ___chain2;
		NullCheck(L_5);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_6;
		L_6 = X509Chain_get_ChainPolicy_m947CBD207A65DB28D0EE7909004E44CBEDF34348(L_5, NULL);
		NullCheck(L_6);
		X509ChainPolicy_set_RevocationFlag_m9E77262475AF7DE55ADC2F79D6BA8FBCB2C1EE69(L_6, 1, NULL);
		// chain.ChainPolicy.RevocationMode = X509RevocationMode.Online;
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_7 = ___chain2;
		NullCheck(L_7);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_8;
		L_8 = X509Chain_get_ChainPolicy_m947CBD207A65DB28D0EE7909004E44CBEDF34348(L_7, NULL);
		NullCheck(L_8);
		X509ChainPolicy_set_RevocationMode_mD31CF4CA6A09443829F91980F8AC98E21D5888AE(L_8, 1, NULL);
		// chain.ChainPolicy.UrlRetrievalTimeout = new TimeSpan(0, 1, 0);
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_9 = ___chain2;
		NullCheck(L_9);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_10;
		L_10 = X509Chain_get_ChainPolicy_m947CBD207A65DB28D0EE7909004E44CBEDF34348(L_9, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11;
		memset((&L_11), 0, sizeof(L_11));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_11), 0, 1, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509ChainPolicy_set_UrlRetrievalTimeout_m6144C7BF504DA6E1B7FEE128DC78BBE29B03E373_inline(L_10, L_11, NULL);
		// chain.ChainPolicy.VerificationFlags = X509VerificationFlags.NoFlag;
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_12 = ___chain2;
		NullCheck(L_12);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_13;
		L_13 = X509Chain_get_ChainPolicy_m947CBD207A65DB28D0EE7909004E44CBEDF34348(L_12, NULL);
		NullCheck(L_13);
		X509ChainPolicy_set_VerificationFlags_mA0C6910C20FCC1FB1DA1A35ED2E7429FA527A69E(L_13, 0, NULL);
		// bool chainIsValid = chain.Build((X509Certificate2)certificate);
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_14 = ___chain2;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_15 = ___certificate1;
		NullCheck(L_14);
		bool L_16;
		L_16 = X509Chain_Build_mF368D6BAE5925C8311B41BFBA08C5D91277C67E5(L_14, ((X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)CastclassClass((RuntimeObject*)L_15, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var)), NULL);
		// if (!chainIsValid)
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		// isOk = false;
		V_0 = (bool)0;
		// break;
		goto IL_0077;
	}

IL_0068:
	{
		// for (int i = 0; i < chain.ChainStatus.Length; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006c:
	{
		// for (int i = 0; i < chain.ChainStatus.Length; i++)
		int32_t L_18 = V_1;
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_19 = ___chain2;
		NullCheck(L_19);
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_20;
		L_20 = X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A(L_19, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000a;
		}
	}

IL_0077:
	{
		// return isOk;
		bool L_21 = V_0;
		return L_21;
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
// System.Void RenderHeads.Media.AVProVideo.MediaPlayerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPlayerEvent__ctor_m21B151D4706BE1D95C5A4FE6BC3804F6DC333AFA (MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m007390ACD2A2F1C97C0E0BC788A4DF846D09B3B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m007390ACD2A2F1C97C0E0BC788A4DF846D09B3B6(__this, UnityEvent_3__ctor_m007390ACD2A2F1C97C0E0BC788A4DF846D09B3B6_RuntimeMethod_var);
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
// System.Boolean RenderHeads.Media.AVProVideo.Subtitle::IsBefore(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Subtitle_IsBefore_m294979CBD3F555B50F7E31AEF10D5A21B931C245 (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// return (time > timeStartMs && time > timeEndMs);
		float L_0 = ___time0;
		int32_t L_1 = __this->___timeStartMs_2;
		if ((!(((float)L_0) > ((float)((float)L_1)))))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = ___time0;
		int32_t L_3 = __this->___timeEndMs_3;
		return (bool)((((float)L_2) > ((float)((float)L_3)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Subtitle::IsTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Subtitle_IsTime_m48987F9E1866A3C64BA42716D0B1AC08ADF60DCC (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// return (time >= timeStartMs && time < timeEndMs);
		float L_0 = ___time0;
		int32_t L_1 = __this->___timeStartMs_2;
		if ((!(((float)L_0) >= ((float)((float)L_1)))))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = ___time0;
		int32_t L_3 = __this->___timeEndMs_3;
		return (bool)((((float)L_2) < ((float)((float)L_3)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Subtitle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subtitle__ctor_m840EC094D0E2316B2A0B05448EA4EFC83A9BB1DC (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String RenderHeads.Media.AVProVideo.Helper::GetName(RenderHeads.Media.AVProVideo.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F (int32_t ___platform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t300B42E43DD077730D02EE57F14456011FE621FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = platform.ToString();
		Il2CppFakeBox<int32_t> L_0(Platform_t300B42E43DD077730D02EE57F14456011FE621FF_il2cpp_TypeInfo_var, (&___platform0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		// return result;
		return L_1;
	}
}
// System.String RenderHeads.Media.AVProVideo.Helper::GetErrorMessage(RenderHeads.Media.AVProVideo.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Helper_GetErrorMessage_m4F2F32AB37DCE4D7A88B50D3EE7310F9EAEF8B3B (int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09EADB740E61C8FC8932639BB08EA6692033A952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD2C90387BCCC68E9E3CD657096B89D1ADEDE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80206936E8A01B3D39BDAA4EAFECA1119BB79EF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB022A7A54985DF415A9ED70D4B29CD229D486C03);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___code0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___code0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)100))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___code0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)200))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_003a;
	}

IL_0018:
	{
		// result = "No Error";
		V_0 = _stringLiteral80206936E8A01B3D39BDAA4EAFECA1119BB79EF7;
		// break;
		goto IL_003a;
	}

IL_0020:
	{
		// result = "Loading failed.  File not found, codec not supported, video resolution too high or insufficient system resources.";
		V_0 = _stringLiteral0FD2C90387BCCC68E9E3CD657096B89D1ADEDE73;
		// break;
		goto IL_003a;
	}

IL_0028:
	{
		// result = "Decode failed.  Possible codec not supported, video resolution too high or insufficient system resources.";
		V_0 = _stringLiteral09EADB740E61C8FC8932639BB08EA6692033A952;
		// result += " On Android this is generally due to the hardware not having enough resources to decode the video. Most Android devices can only handle a maximum of one 4K video at once.";
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteralB022A7A54985DF415A9ED70D4B29CD229D486C03, NULL);
		V_0 = L_5;
	}

IL_003a:
	{
		// return result;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.String[] RenderHeads.Media.AVProVideo.Helper::GetPlatformNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Helper_GetPlatformNames_mA2EAE8E8B805D31A8C00B9DDE58540E2FDF134DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new string[] {
		//     GetName(Platform.Windows),
		//     GetName(Platform.MacOSX),
		//     GetName(Platform.iOS),
		//     GetName(Platform.tvOS),
		//     GetName(Platform.Android),
		//     GetName(Platform.WindowsPhone),
		//     GetName(Platform.WindowsUWP),
		//     GetName(Platform.WebGL),
		//     GetName(Platform.PS4),
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		String_t* L_4;
		L_4 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		String_t* L_6;
		L_6 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(2, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		String_t* L_8;
		L_8 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(3, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10;
		L_10 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(4, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		String_t* L_12;
		L_12 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(5, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		String_t* L_14;
		L_14 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(6, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		String_t* L_16;
		L_16 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(7, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		String_t* L_18;
		L_18 = Helper_GetName_m9F19385C0E7016145E5A5944BD5885D09B7C3D2F(8, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_18);
		return L_17;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::LogInfo(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_LogInfo_m61799E0E662240A911A2C374617B41C838D503D6 (String_t* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9620B89CE26B704179A09BDDFA10A78EA31785C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context == null)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("[AVProVideo] " + message);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9620B89CE26B704179A09BDDFA10A78EA31785C8, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		return;
	}

IL_001a:
	{
		// Debug.Log("[AVProVideo] " + message, context);
		String_t* L_4 = ___message0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9620B89CE26B704179A09BDDFA10A78EA31785C8, L_4, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.String RenderHeads.Media.AVProVideo.Helper::GetTimeString(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Helper_GetTimeString_m403F67E2199B33082699B4A1714ABEA5E1A363C7 (float ___totalSeconds0, bool ___showMilliseconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B449CBB82E44EDD3A011DD1F87DE2F6C4B37F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0BBBFEF24D5E12DF9899019B91B17EAE1876463);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3EDDE08603F6B8A7475B082385FE302279A8D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int hours = Mathf.FloorToInt(totalSeconds / (60f * 60f));
		float L_0 = ___totalSeconds0;
		int32_t L_1;
		L_1 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_0/(3600.0f))), NULL);
		V_0 = L_1;
		// float usedSeconds = hours * 60f * 60f;
		int32_t L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_2), (60.0f))), (60.0f)));
		// int minutes = Mathf.FloorToInt((totalSeconds - usedSeconds) / 60f);
		float L_3 = ___totalSeconds0;
		float L_4 = V_1;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/(60.0f))), NULL);
		V_2 = L_5;
		// usedSeconds += minutes * 60f;
		float L_6 = V_1;
		int32_t L_7 = V_2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)L_7), (60.0f)))));
		// int seconds = Mathf.FloorToInt(totalSeconds - usedSeconds);
		float L_8 = ___totalSeconds0;
		float L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		V_3 = L_10;
		// if (hours <= 0)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		// if (showMilliseconds)
		bool L_12 = ___showMilliseconds1;
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// int milliSeconds = (int)((totalSeconds - Mathf.Floor(totalSeconds)) * 1000f);
		float L_13 = ___totalSeconds0;
		float L_14 = ___totalSeconds0;
		float L_15;
		L_15 = floorf(L_14);
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_13, L_15)), (1000.0f))));
		// result = string.Format("{0:00}:{1:00}:{2:000}", minutes, seconds, milliSeconds);
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralED3EDDE08603F6B8A7475B082385FE302279A8D9, L_18, L_21, L_24, NULL);
		V_4 = L_25;
		goto IL_0100;
	}

IL_007b:
	{
		// result = string.Format("{0:00}:{1:00}", minutes, seconds);
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8, L_28, L_31, NULL);
		V_4 = L_32;
		goto IL_0100;
	}

IL_0095:
	{
		// if (showMilliseconds)
		bool L_33 = ___showMilliseconds1;
		if (!L_33)
		{
			goto IL_00e2;
		}
	}
	{
		// int milliSeconds = (int)((totalSeconds - Mathf.Floor(totalSeconds)) * 1000f);
		float L_34 = ___totalSeconds0;
		float L_35 = ___totalSeconds0;
		float L_36;
		L_36 = floorf(L_35);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_34, L_36)), (1000.0f))));
		// result = string.Format("{2}:{0:00}:{1:00}:{3:000}", minutes, seconds, hours, milliSeconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		int32_t L_39 = V_2;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_41);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_38;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_42;
		int32_t L_47 = V_0;
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_46;
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_53);
		String_t* L_54;
		L_54 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral7B449CBB82E44EDD3A011DD1F87DE2F6C4B37F62, L_50, NULL);
		V_4 = L_54;
		goto IL_0100;
	}

IL_00e2:
	{
		// result = string.Format("{2}:{0:00}:{1:00}", minutes, seconds, hours);
		int32_t L_55 = V_2;
		int32_t L_56 = L_55;
		RuntimeObject* L_57 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_56);
		int32_t L_58 = V_3;
		int32_t L_59 = L_58;
		RuntimeObject* L_60 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_59);
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64;
		L_64 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralC0BBBFEF24D5E12DF9899019B91B17EAE1876463, L_57, L_60, L_63, NULL);
		V_4 = L_64;
	}

IL_0100:
	{
		// return result;
		String_t* L_65 = V_4;
		return L_65;
	}
}
// RenderHeads.Media.AVProVideo.Orientation RenderHeads.Media.AVProVideo.Helper::GetOrientation(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_GetOrientation_mC6D853F3A165F27BC516C958E582EC9D5196880D (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___t0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Orientation result = Orientation.Landscape;
		V_0 = 0;
		// if (t[0] == 0f && t[1]== 1f && t[2] == -1f && t[3] == 0f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((float)L_5) == ((float)(1.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___t0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((float)L_8) == ((float)(-1.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___t0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// result = Orientation.Portrait;
		V_0 = 2;
		goto IL_00b3;
	}

IL_0031:
	{
		// if (t[0] == 0f && t[1] == -1f && t[2] == 1f && t[3] == 0f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___t0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___t0;
		NullCheck(L_15);
		int32_t L_16 = 1;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((float)L_17) == ((float)(-1.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___t0;
		NullCheck(L_18);
		int32_t L_19 = 2;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((float)L_20) == ((float)(1.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___t0;
		NullCheck(L_21);
		int32_t L_22 = 3;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((float)L_23) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// result = Orientation.PortraitFlipped;
		V_0 = 3;
		goto IL_00b3;
	}

IL_005d:
	{
		// if (t[0]== 1f && t[1] == 0f && t[2] == 0f && t[3] == 1f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___t0;
		NullCheck(L_24);
		int32_t L_25 = 0;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((float)L_26) == ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___t0;
		NullCheck(L_27);
		int32_t L_28 = 1;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = ___t0;
		NullCheck(L_30);
		int32_t L_31 = 2;
		float L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((float)L_32) == ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ___t0;
		NullCheck(L_33);
		int32_t L_34 = 3;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((float)L_35) == ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// result = Orientation.Landscape;
		V_0 = 0;
		goto IL_00b3;
	}

IL_0089:
	{
		// if (t[0] == -1f && t[1] == 0f && t[2] == 0f && t[3] == -1f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___t0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		float L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((float)L_38) == ((float)(-1.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = ___t0;
		NullCheck(L_39);
		int32_t L_40 = 1;
		float L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___t0;
		NullCheck(L_42);
		int32_t L_43 = 2;
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((float)L_44) == ((float)(0.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___t0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((float)L_47) == ((float)(-1.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// result = Orientation.LandscapeFlipped;
		V_0 = 1;
	}

IL_00b3:
	{
		// return result;
		int32_t L_48 = V_0;
		return L_48;
	}
}
// UnityEngine.Matrix4x4 RenderHeads.Media.AVProVideo.Helper::GetMatrixForOrientation(RenderHeads.Media.AVProVideo.Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Helper_GetMatrixForOrientation_m9FCBB1D2641C093572151FCF1E8EAA05A585CEF2 (int32_t ___ori0, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Matrix4x4 portrait = Matrix4x4.TRS(new Vector3(0f, 1f, 0f), Quaternion.Euler(0f, 0f, -90f), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (-90.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// Matrix4x4 portraitFlipped = Matrix4x4.TRS(new Vector3(1f, 0f, 0f), Quaternion.Euler(0f, 0f, 90f), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (90.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// Matrix4x4 landscapeFlipped = Matrix4x4.TRS(new Vector3(1f, 1f, 0f), Quaternion.identity, new Vector3(-1f, -1f, 1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		// Matrix4x4 result = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		V_3 = L_12;
		int32_t L_13 = ___ori0;
		switch (L_13)
		{
			case 0:
			{
				goto IL_00c1;
			}
			case 1:
			{
				goto IL_00b7;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00bf;
			}
		}
	}
	{
		goto IL_00c1;
	}

IL_00b7:
	{
		// result = landscapeFlipped;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = V_2;
		V_3 = L_14;
		// break;
		goto IL_00c1;
	}

IL_00bb:
	{
		// result = portrait;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15 = V_0;
		V_3 = L_15;
		// break;
		goto IL_00c1;
	}

IL_00bf:
	{
		// result = portraitFlipped;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = V_1;
		V_3 = L_16;
	}

IL_00c1:
	{
		// return result;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = V_3;
		return L_17;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::SetupStereoEyeModeMaterial(UnityEngine.Material,RenderHeads.Media.AVProVideo.StereoEye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_SetupStereoEyeModeMaterial_m8014500F9C5594D6A20DE8DE3D850CF8B1B89AD6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C36CD238383C63FF066F9E7664CA73025A8D111);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75887742FFD5FDFE0983398A386031AAC1DD29B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23EEF1DF238589AFB61D3085A95FBE90002199B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___mode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0057;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// material.DisableKeyword("FORCEEYE_LEFT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		NullCheck(L_1);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_1, _stringLiteralF23EEF1DF238589AFB61D3085A95FBE90002199B, NULL);
		// material.DisableKeyword("FORCEEYE_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		NullCheck(L_2);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_2, _stringLiteral3C36CD238383C63FF066F9E7664CA73025A8D111, NULL);
		// material.EnableKeyword("FORCEEYE_NONE");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_3);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_3, _stringLiteralD75887742FFD5FDFE0983398A386031AAC1DD29B, NULL);
		// break;
		return;
	}

IL_0035:
	{
		// material.DisableKeyword("FORCEEYE_NONE");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___material0;
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, _stringLiteralD75887742FFD5FDFE0983398A386031AAC1DD29B, NULL);
		// material.DisableKeyword("FORCEEYE_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		NullCheck(L_5);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_5, _stringLiteral3C36CD238383C63FF066F9E7664CA73025A8D111, NULL);
		// material.EnableKeyword("FORCEEYE_LEFT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___material0;
		NullCheck(L_6);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_6, _stringLiteralF23EEF1DF238589AFB61D3085A95FBE90002199B, NULL);
		// break;
		return;
	}

IL_0057:
	{
		// material.DisableKeyword("FORCEEYE_NONE");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___material0;
		NullCheck(L_7);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_7, _stringLiteralD75887742FFD5FDFE0983398A386031AAC1DD29B, NULL);
		// material.DisableKeyword("FORCEEYE_LEFT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material0;
		NullCheck(L_8);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_8, _stringLiteralF23EEF1DF238589AFB61D3085A95FBE90002199B, NULL);
		// material.EnableKeyword("FORCEEYE_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___material0;
		NullCheck(L_9);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_9, _stringLiteral3C36CD238383C63FF066F9E7664CA73025A8D111, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::SetupLayoutMaterial(UnityEngine.Material,RenderHeads.Media.AVProVideo.VideoMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_SetupLayoutMaterial_mAB77F7359A69BD5F39CE0546FCE18C5C8AF7D500 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, int32_t ___mapping1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BF3C245D30A858E114A60A1CA10B183FC44771C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C206406C9F4ABAF61F1F335D775AB68C56FA99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.DisableKeyword("LAYOUT_NONE");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		NullCheck(L_0);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_0, _stringLiteral32C206406C9F4ABAF61F1F335D775AB68C56FA99, NULL);
		// material.DisableKeyword("LAYOUT_EQUIRECT180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		NullCheck(L_1);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_1, _stringLiteral0BF3C245D30A858E114A60A1CA10B183FC44771C, NULL);
		int32_t L_2 = ___mapping1;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0025;
		}
	}
	{
		// material.EnableKeyword("LAYOUT_EQUIRECT180");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_3);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_3, _stringLiteral0BF3C245D30A858E114A60A1CA10B183FC44771C, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::SetupStereoMaterial(UnityEngine.Material,RenderHeads.Media.AVProVideo.StereoPacking,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_SetupStereoMaterial_mD146641F60FD72347071711698BD8432BC3D7CF6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, int32_t ___packing1, bool ___displayDebugTinting2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CEFD90AF4E04F69CCE29EF9C29BFFCC31AEABD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0F1E6D09A79C2BE45033DDD83C93AD5BBEF640);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E3D2E02B047AB03305A96E8B57B9502E445522);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB35E9D3D8BD6E2E5ED49505FDED0CE9CEA7C98EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE35F9DA7C4E4A84ADBC5C1421F0B82AFD4F4585F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.DisableKeyword("STEREO_CUSTOM_UV");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		NullCheck(L_0);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_0, _stringLiteral2CEFD90AF4E04F69CCE29EF9C29BFFCC31AEABD3, NULL);
		// material.DisableKeyword("STEREO_TOP_BOTTOM");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		NullCheck(L_1);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_1, _stringLiteral98E3D2E02B047AB03305A96E8B57B9502E445522, NULL);
		// material.DisableKeyword("STEREO_LEFT_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		NullCheck(L_2);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_2, _stringLiteralE35F9DA7C4E4A84ADBC5C1421F0B82AFD4F4585F, NULL);
		// material.DisableKeyword("MONOSCOPIC");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral3F0F1E6D09A79C2BE45033DDD83C93AD5BBEF640, NULL);
		int32_t L_4 = ___packing1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0044:
	{
		// material.EnableKeyword("STEREO_TOP_BOTTOM");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		NullCheck(L_5);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_5, _stringLiteral98E3D2E02B047AB03305A96E8B57B9502E445522, NULL);
		// break;
		goto IL_0069;
	}

IL_0051:
	{
		// material.EnableKeyword("STEREO_LEFT_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___material0;
		NullCheck(L_6);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_6, _stringLiteralE35F9DA7C4E4A84ADBC5C1421F0B82AFD4F4585F, NULL);
		// break;
		goto IL_0069;
	}

IL_005e:
	{
		// material.EnableKeyword("STEREO_CUSTOM_UV");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___material0;
		NullCheck(L_7);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_7, _stringLiteral2CEFD90AF4E04F69CCE29EF9C29BFFCC31AEABD3, NULL);
	}

IL_0069:
	{
		// if (displayDebugTinting)
		bool L_8 = ___displayDebugTinting2;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// material.EnableKeyword("STEREO_DEBUG");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___material0;
		NullCheck(L_9);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_9, _stringLiteralB35E9D3D8BD6E2E5ED49505FDED0CE9CEA7C98EA, NULL);
		return;
	}

IL_0078:
	{
		// material.DisableKeyword("STEREO_DEBUG");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___material0;
		NullCheck(L_10);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_10, _stringLiteralB35E9D3D8BD6E2E5ED49505FDED0CE9CEA7C98EA, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::SetupAlphaPackedMaterial(UnityEngine.Material,RenderHeads.Media.AVProVideo.AlphaPacking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_SetupAlphaPackedMaterial_mB1755F86B28782E047A7CF3E21486FDA45E23DDC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, int32_t ___packing1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12A524A4F9469BCE0EB406BC279885C0DF9528E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6467A5F1778FA416FDC0EE4F5BE0A345E51F74EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD657B1B096A5DF9E95A5949BFEDCC3F73EAE130);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.DisableKeyword("ALPHAPACK_TOP_BOTTOM");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		NullCheck(L_0);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_0, _stringLiteralAD657B1B096A5DF9E95A5949BFEDCC3F73EAE130, NULL);
		// material.DisableKeyword("ALPHAPACK_LEFT_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		NullCheck(L_1);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_1, _stringLiteral6467A5F1778FA416FDC0EE4F5BE0A345E51F74EF, NULL);
		// material.DisableKeyword("ALPHAPACK_NONE");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		NullCheck(L_2);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_2, _stringLiteral12A524A4F9469BCE0EB406BC279885C0DF9528E0, NULL);
		int32_t L_3 = ___packing1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0040;
			}
		}
	}
	{
		return;
	}

IL_0034:
	{
		// material.EnableKeyword("ALPHAPACK_TOP_BOTTOM");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___material0;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteralAD657B1B096A5DF9E95A5949BFEDCC3F73EAE130, NULL);
		// break;
		return;
	}

IL_0040:
	{
		// material.EnableKeyword("ALPHAPACK_LEFT_RIGHT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		NullCheck(L_5);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_5, _stringLiteral6467A5F1778FA416FDC0EE4F5BE0A345E51F74EF, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::SetupGammaMaterial(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_SetupGammaMaterial_m31C6B339DBA2E37189368404F879950C8EC03C9D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___playerSupportsLinear1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45B5280635F9562E92DC9110D20BD17FF160DFB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear && !playerSupportsLinear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = ___playerSupportsLinear1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// material.EnableKeyword("APPLY_GAMMA");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, _stringLiteral45B5280635F9562E92DC9110D20BD17FF160DFB7, NULL);
		return;
	}

IL_0017:
	{
		// material.DisableKeyword("APPLY_GAMMA");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_3);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, _stringLiteral45B5280635F9562E92DC9110D20BD17FF160DFB7, NULL);
		// }
		return;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.Helper::ConvertTimeSecondsToFrame(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_ConvertTimeSecondsToFrame_m80E0460C7A49A3670F557B9005E25777D1A0BFFB (float ___seconds0, float ___frameRate1, const RuntimeMethod* method) 
{
	{
		// return Mathf.FloorToInt(frameRate * seconds);
		float L_0 = ___frameRate1;
		float L_1 = ___seconds0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), NULL);
		return L_2;
	}
}
// System.Single RenderHeads.Media.AVProVideo.Helper::ConvertFrameToTimeSeconds(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Helper_ConvertFrameToTimeSeconds_m28978538B2873ADB99818E67B35DD03701187760 (int32_t ___frame0, float ___frameRate1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float frameDurationSeconds = 1f / frameRate;
		float L_0 = ___frameRate1;
		V_0 = ((float)((1.0f)/L_0));
		// return ((float)frame * frameDurationSeconds) + (frameDurationSeconds * 0.5f);        // Add half a frame we that the time lands in the middle of the frame range and not at the edges
		int32_t L_1 = ___frame0;
		float L_2 = V_0;
		float L_3 = V_0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_1), L_2)), ((float)il2cpp_codegen_multiply(L_3, (0.5f)))));
	}
}
// System.DateTime RenderHeads.Media.AVProVideo.Helper::ConvertSecondsSince1970ToDateTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Helper_ConvertSecondsSince1970ToDateTime_m46286699FF27739C102BB7F4F90B7866E041FCB7 (double ___secondsSince19700, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// System.TimeSpan time = System.TimeSpan.FromSeconds(secondsSince1970);
		double L_0 = ___secondsSince19700;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(L_0, NULL);
		V_0 = L_1;
		// return new System.DateTime(1970, 1, 1).Add(time);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		memset((&L_2), 0, sizeof(L_2));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_2), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1((&V_1), L_3, NULL);
		return L_4;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Helper::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,RenderHeads.Media.AVProVideo.AlphaPacking,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helper_DrawTexture_mB896C7F500A3F707CB906383AF444E9C7D43CA7E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, int32_t ___scaleMode2, int32_t ___alphaPacking3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// if (Event.current.type == EventType.Repaint)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0191;
		}
	}
	{
		// float textureWidth = texture.width;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		V_0 = ((float)L_3);
		// float textureHeight = texture.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		V_1 = ((float)L_5);
		int32_t L_6 = ___alphaPacking3;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = ___alphaPacking3;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		// textureWidth *= 0.5f;
		float L_8 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_8, (0.5f)));
		// break;
		goto IL_003a;
	}

IL_0032:
	{
		// textureHeight *= 0.5f;
		float L_9 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_9, (0.5f)));
	}

IL_003a:
	{
		// float aspectRatio = (float)textureWidth / (float)textureHeight;
		float L_10 = V_0;
		float L_11 = V_1;
		V_2 = ((float)(((float)L_10)/((float)L_11)));
		// Rect sourceRect = new Rect(0f, 0f, 1f, 1f);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		int32_t L_12 = ___scaleMode2;
		switch (L_12)
		{
			case 0:
			{
				goto IL_017e;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00e0;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0072:
	{
		// float screenRatio = screenRect.width / screenRect.height;
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___screenRect0), NULL);
		float L_14;
		L_14 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___screenRect0), NULL);
		V_4 = ((float)(L_13/L_14));
		// if (screenRatio > aspectRatio)
		float L_15 = V_4;
		float L_16 = V_2;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_00b4;
		}
	}
	{
		// float adjust = aspectRatio / screenRatio;
		float L_17 = V_2;
		float L_18 = V_4;
		V_5 = ((float)(L_17/L_18));
		// sourceRect = new Rect(0f, (1f - adjust) * 0.5f, 1f, adjust);
		float L_19 = V_5;
		float L_20 = V_5;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_19)), (0.5f))), (1.0f), L_20, NULL);
		goto IL_017e;
	}

IL_00b4:
	{
		// float adjust = screenRatio / aspectRatio;
		float L_21 = V_4;
		float L_22 = V_2;
		V_6 = ((float)(L_21/L_22));
		// sourceRect = new Rect(0.5f - adjust * 0.5f, 0f, adjust, 1f);
		float L_23 = V_6;
		float L_24 = V_6;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_23, (0.5f))))), (0.0f), L_24, (1.0f), NULL);
		// break;
		goto IL_017e;
	}

IL_00e0:
	{
		// float screenRatio = screenRect.width / screenRect.height;
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___screenRect0), NULL);
		float L_26;
		L_26 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___screenRect0), NULL);
		V_7 = ((float)(L_25/L_26));
		// if (screenRatio > aspectRatio)
		float L_27 = V_7;
		float L_28 = V_2;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_013b;
		}
	}
	{
		// float adjust = aspectRatio / screenRatio;
		float L_29 = V_2;
		float L_30 = V_7;
		V_8 = ((float)(L_29/L_30));
		// screenRect = new Rect(screenRect.xMin + screenRect.width * (1f - adjust) * 0.5f, screenRect.yMin, adjust * screenRect.width, screenRect.height);
		float L_31;
		L_31 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___screenRect0), NULL);
		float L_32;
		L_32 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___screenRect0), NULL);
		float L_33 = V_8;
		float L_34;
		L_34 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___screenRect0), NULL);
		float L_35 = V_8;
		float L_36;
		L_36 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___screenRect0), NULL);
		float L_37;
		L_37 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___screenRect0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&___screenRect0), ((float)il2cpp_codegen_add(L_31, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_32, ((float)il2cpp_codegen_subtract((1.0f), L_33)))), (0.5f))))), L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), L_37, NULL);
		goto IL_017e;
	}

IL_013b:
	{
		// float adjust = screenRatio / aspectRatio;
		float L_38 = V_7;
		float L_39 = V_2;
		V_9 = ((float)(L_38/L_39));
		// screenRect = new Rect(screenRect.xMin, screenRect.yMin + screenRect.height * (1f - adjust) * 0.5f, screenRect.width, adjust * screenRect.height);
		float L_40;
		L_40 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___screenRect0), NULL);
		float L_41;
		L_41 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___screenRect0), NULL);
		float L_42;
		L_42 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___screenRect0), NULL);
		float L_43 = V_9;
		float L_44;
		L_44 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___screenRect0), NULL);
		float L_45 = V_9;
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___screenRect0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&___screenRect0), L_40, ((float)il2cpp_codegen_add(L_41, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_42, ((float)il2cpp_codegen_subtract((1.0f), L_43)))), (0.5f))))), L_44, ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
	}

IL_017e:
	{
		// Graphics.DrawTexture(screenRect, texture, sourceRect, 0, 0, 0, 0, GUI.color, material);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_47 = ___screenRect0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_48 = ___texture1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		L_50 = GUI_get_color_m641A7661D421929DB60FD1AC40E43F960CEC81C1(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = ___material4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m384F1EFC0BC71C18BC53C9F0AEE1AF0A0F8F7655(L_47, L_48, L_49, 0, 0, 0, 0, L_50, L_51, NULL);
	}

IL_0191:
	{
		// }
		return;
	}
}
// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.Helper::GetReadableTexture(UnityEngine.Texture,System.Boolean,RenderHeads.Media.AVProVideo.Orientation,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Helper_GetReadableTexture_m8399BE2CA4EFE1663AA1E15CFEACC3E6022A5DF2 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___inputTexture0, bool ___requiresVerticalFlip1, int32_t ___ori2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___targetTexture3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B4_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B1_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B3_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B2_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B6_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B5_0 = NULL;
	{
		// Texture2D resultTexture = targetTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___targetTexture3;
		V_0 = L_0;
		// RenderTexture prevRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		// int textureWidth = inputTexture.width;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___inputTexture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		V_1 = L_3;
		// int textureHeight = inputTexture.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___inputTexture0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		V_2 = L_5;
		// RenderTexture tempRT = RenderTexture.GetTemporary(textureWidth, textureHeight, 0, RenderTextureFormat.ARGB32);
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8;
		L_8 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_6, L_7, 0, 0, NULL);
		V_3 = L_8;
		// if (ori == Orientation.Landscape)
		int32_t L_9 = ___ori2;
		G_B1_0 = L_1;
		if (L_9)
		{
			G_B4_0 = L_1;
			goto IL_00a7;
		}
	}
	{
		// if (!requiresVerticalFlip)
		bool L_10 = ___requiresVerticalFlip1;
		G_B2_0 = G_B1_0;
		if (L_10)
		{
			G_B3_0 = G_B1_0;
			goto IL_0031;
		}
	}
	{
		// Graphics.Blit(inputTexture, tempRT);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = ___inputTexture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_11, L_12, NULL);
		G_B4_0 = G_B2_0;
		goto IL_00a7;
	}

IL_0031:
	{
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// RenderTexture.active = tempRT;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_3;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_13, NULL);
		// GL.LoadPixelMatrix(0f, tempRT.width, 0f, tempRT.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		GL_LoadPixelMatrix_m4E6F7BAFD87A2FE91048B0F602519811690CAA63((0.0f), ((float)L_15), (0.0f), ((float)L_17), NULL);
		// Rect sourceRect = new Rect(0f, 0f, 1f, 1f);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_4), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		// Rect destRect = new Rect(0f, -1f, tempRT.width, tempRT.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (-1.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
		// Graphics.DrawTexture(destRect, inputTexture, sourceRect, 0, 0, 0, 0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23 = ___inputTexture0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m308AE19DE30E95FE9B0ED7A244021A46AC209775(L_22, L_23, L_24, 0, 0, 0, 0, NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// GL.InvalidateState();
		GL_InvalidateState_mCC1D15C8888292B7F5E0F049F1FAD834728693A1(NULL);
		G_B4_0 = G_B3_0;
	}

IL_00a7:
	{
		// if (resultTexture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = G_B4_0;
		if (!L_26)
		{
			G_B6_0 = G_B4_0;
			goto IL_00ba;
		}
	}
	{
		// resultTexture = new Texture2D(textureWidth, textureHeight, TextureFormat.ARGB32, false);
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_29, L_27, L_28, 5, (bool)0, NULL);
		V_0 = L_29;
		G_B6_0 = G_B5_0;
	}

IL_00ba:
	{
		// RenderTexture.active = tempRT;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_3;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_30, NULL);
		// resultTexture.ReadPixels(new Rect(0f, 0f, textureWidth, textureHeight), 0, 0, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_34;
		memset((&L_34), 0, sizeof(L_34));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_34), (0.0f), (0.0f), ((float)L_32), ((float)L_33), /*hidden argument*/NULL);
		NullCheck(L_31);
		Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_31, L_34, 0, 0, (bool)0, NULL);
		// resultTexture.Apply(false, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = V_0;
		NullCheck(L_35);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_35, (bool)0, (bool)0, NULL);
		// RenderTexture.ReleaseTemporary(tempRT);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = V_3;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_36, NULL);
		// RenderTexture.active = prevRT;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(G_B6_0, NULL);
		// return resultTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_0;
		return L_37;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.Helper::ParseTimeToMs(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Helper_ParseTimeToMs_m10AF2C205F83C998088D238BADE0767D2E8DC915 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int result = 0;
		V_0 = 0;
		// string[] digits = text.Split(new char[] { ':', ',' });
		String_t* L_0 = ___text0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_3, NULL);
		V_1 = L_4;
		// if (digits.Length == 4)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((uint32_t)4))))
		{
			goto IL_0057;
		}
	}
	{
		// int hours = int.Parse(digits[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9;
		L_9 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_8, NULL);
		V_2 = L_9;
		// int minutes = int.Parse(digits[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13;
		L_13 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_12, NULL);
		V_3 = L_13;
		// int seconds = int.Parse(digits[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = 2;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17;
		L_17 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_16, NULL);
		V_4 = L_17;
		// int milliseconds = int.Parse(digits[3]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 3;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21;
		L_21 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_20, NULL);
		// result = milliseconds + (seconds + (minutes + (hours * 60)) * 60) * 1000;
		int32_t L_22 = V_4;
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)60))))), ((int32_t)60))))), ((int32_t)1000)))));
	}

IL_0057:
	{
		// return result;
		int32_t L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.Subtitle> RenderHeads.Media.AVProVideo.Helper::LoadSubtitlesSRT(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* Helper_LoadSubtitlesSRT_m828296E91BEC08644CCD740751E65A8926AC9A34 (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1CA3BC8EB496F50F159B4DAF7B2497C96CEF43B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t26134C5769E989D998FE57F2A4DA933E9158730A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EAAC296F64D7E382A237C2F92A1F0BC6D59ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral818E0F38E0D79E904B0CF3705136246275D511C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	{
		// List<Subtitle> result = null;
		V_0 = (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*)NULL;
		// if (!string.IsNullOrEmpty(data))
		String_t* L_0 = ___data0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_012c;
		}
	}
	{
		// data = data.Trim();
		String_t* L_2 = ___data0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		___data0 = L_3;
		// var rx = new System.Text.RegularExpressions.Regex("\n\r|\r\n|\n|\r");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_4, _stringLiteral818E0F38E0D79E904B0CF3705136246275D511C5, NULL);
		// string[] lines = rx.Split(data);
		String_t* L_5 = ___data0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = Regex_Split_m88380E0EEF6DD409DEA41D27A0A0634E1928D367(L_4, L_5, NULL);
		V_1 = L_6;
		// if (lines.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) < ((int32_t)3)))
		{
			goto IL_0122;
		}
	}
	{
		// result = new List<Subtitle>(256);
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_8 = (List_1_t26134C5769E989D998FE57F2A4DA933E9158730A*)il2cpp_codegen_object_new(List_1_t26134C5769E989D998FE57F2A4DA933E9158730A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m1CA3BC8EB496F50F159B4DAF7B2497C96CEF43B1(L_8, ((int32_t)256), List_1__ctor_m1CA3BC8EB496F50F159B4DAF7B2497C96CEF43B1_RuntimeMethod_var);
		V_0 = L_8;
		// int count = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// Subtitle subtitle = null;
		V_4 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		// for (int i = 0; i < lines.Length; i++)
		V_5 = 0;
		goto IL_0107;
	}

IL_0049:
	{
		// if (index == 0)
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// subtitle = new Subtitle();
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_10 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)il2cpp_codegen_object_new(Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Subtitle__ctor_m840EC094D0E2316B2A0B05448EA4EFC83A9BB1DC(L_10, NULL);
		V_4 = L_10;
		// subtitle.index = count;// int.Parse(lines[i]);
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_11 = V_4;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		L_11->___index_0 = L_12;
		goto IL_00db;
	}

IL_005d:
	{
		// else if (index == 1)
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00a4;
		}
	}
	{
		// string[] times = lines[i].Split(new string[] { " --> " }, System.StringSplitOptions.RemoveEmptyEntries);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3);
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_17, L_19, 1, NULL);
		V_6 = L_20;
		// if (times.Length == 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_6;
		NullCheck(L_21);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) == ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}
	{
		// subtitle.timeStartMs = ParseTimeToMs(times[0]);
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_22 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_6;
		NullCheck(L_23);
		int32_t L_24 = 0;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26;
		L_26 = Helper_ParseTimeToMs_m10AF2C205F83C998088D238BADE0767D2E8DC915(L_25, NULL);
		NullCheck(L_22);
		L_22->___timeStartMs_2 = L_26;
		// subtitle.timeEndMs = ParseTimeToMs(times[1]);
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_27 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_6;
		NullCheck(L_28);
		int32_t L_29 = 1;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31;
		L_31 = Helper_ParseTimeToMs_m10AF2C205F83C998088D238BADE0767D2E8DC915(L_30, NULL);
		NullCheck(L_27);
		L_27->___timeEndMs_3 = L_31;
		goto IL_00db;
	}

IL_00a4:
	{
		// if (!string.IsNullOrEmpty(lines[i]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_1;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		String_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_35, NULL);
		if (L_36)
		{
			goto IL_00db;
		}
	}
	{
		// if (index == 2)
		int32_t L_37 = V_3;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00c0;
		}
	}
	{
		// subtitle.text = lines[i];
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_38 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_1;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		String_t* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		L_38->___text_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___text_1), (void*)L_42);
		goto IL_00db;
	}

IL_00c0:
	{
		// subtitle.text += "\n" + lines[i];
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_43 = V_4;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_44 = L_43;
		NullCheck(L_44);
		String_t* L_45 = L_44->___text_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_1;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		String_t* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		String_t* L_50;
		L_50 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_45, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_49, NULL);
		NullCheck(L_44);
		L_44->___text_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___text_1), (void*)L_50);
	}

IL_00db:
	{
		// if (string.IsNullOrEmpty(lines[i]) && index > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = V_1;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		String_t* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		bool L_55;
		L_55 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_54, NULL);
		if (!L_55)
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) <= ((int32_t)1)))
		{
			goto IL_00fd;
		}
	}
	{
		// result.Add(subtitle);
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_57 = V_0;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_58 = V_4;
		NullCheck(L_57);
		List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_inline(L_57, L_58, List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_RuntimeMethod_var);
		// index = 0;
		V_3 = 0;
		// count++;
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// subtitle = null;
		V_4 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		goto IL_0101;
	}

IL_00fd:
	{
		// index++;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0101:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_61 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0107:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_62 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = V_1;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// if (subtitle != null)
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_64 = V_4;
		if (!L_64)
		{
			goto IL_012c;
		}
	}
	{
		// result.Add(subtitle);
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_65 = V_0;
		Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820* L_66 = V_4;
		NullCheck(L_65);
		List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_inline(L_65, L_66, List_1_Add_m99E42EACE5AEB4B7511083ADB196D1E78AB1F382_RuntimeMethod_var);
		// subtitle = null;
		V_4 = (Subtitle_t641226955D97430C84B93F3488B9B1FCD57D2820*)NULL;
		goto IL_012c;
	}

IL_0122:
	{
		// Debug.LogWarning("[AVProVideo] SRT format doesn't appear to be valid");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral43EAAC296F64D7E382A237C2F92A1F0BC6D59ABE, NULL);
	}

IL_012c:
	{
		// return result;
		List_1_t26134C5769E989D998FE57F2A4DA933E9158730A* L_67 = V_0;
		return L_67;
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
// System.String RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullMediaPlayer_GetVersion_m0B5E0E2FF5169123EE32944FB4A7CCFC83086153 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "0.0.0";
		return _stringLiteral36C4B4074DE0349A5A7A3CEF8600D92296824996;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::OpenVideoFromFile(System.String,System.Int64,System.String,System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_OpenVideoFromFile_mC4B306AD8D9DD804B506B3080D052A4BC3991B19 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, String_t* ___path0, int64_t ___offset1, String_t* ___httpHeaderJson2, uint32_t ___sourceSamplerate3, uint32_t ___sourceChannels4, int32_t ___forceFileFormat5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D76811F3BAD567356C636C166E2D5DB51AE5DE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6129237E15F4E146BECBC0B228C023E66657A0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _texture_AVPro = (Texture2D)Resources.Load("AVPro");
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralA6129237E15F4E146BECBC0B228C023E66657A0C, NULL);
		__this->____texture_AVPro_19 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_AVPro_19), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// _texture_AVPro1 = (Texture2D)Resources.Load("AVPro1");
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral5D76811F3BAD567356C636C166E2D5DB51AE5DE6, NULL);
		__this->____texture_AVPro1_20 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_AVPro1_20), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// if( _texture_AVPro )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____texture_AVPro_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// _Width = _texture_AVPro.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->____texture_AVPro_19;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		__this->____Width_16 = L_5;
		// _height = _texture_AVPro.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->____texture_AVPro_19;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		__this->____height_17 = L_7;
	}

IL_0059:
	{
		// _texture = _texture_AVPro;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->____texture_AVPro_19;
		__this->____texture_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_18), (void*)L_8);
		// _fakeFlipTime = 0.0f;
		__this->____fakeFlipTime_21 = (0.0f);
		// _frameCount = 0;
		__this->____frameCount_22 = 0;
		// return true;
		return (bool)1;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::CloseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_CloseVideo_mD8914BEDF1CFA5254EE012AB2E0F7996C8A1A8FA (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// _frameCount = 0;
		__this->____frameCount_22 = 0;
		// Resources.UnloadAsset(_texture_AVPro);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____texture_AVPro_19;
		Resources_UnloadAsset_mEA84C20996BC20D1EB485333583FB96F2F487F09(L_0, NULL);
		// Resources.UnloadAsset(_texture_AVPro1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____texture_AVPro1_20;
		Resources_UnloadAsset_mEA84C20996BC20D1EB485333583FB96F2F487F09(L_1, NULL);
		// base.CloseVideo();
		BaseMediaPlayer_CloseVideo_mD55B93A0C49F41FFE55148DEE56B432E6B7568F3(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SetLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SetLooping_m05E82C2FF2B20BEC3C475D459325309228B7E59E (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, bool ___bLooping0, const RuntimeMethod* method) 
{
	{
		// _bLoop = bLooping;
		bool L_0 = ___bLooping0;
		__this->____bLoop_15 = L_0;
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsLooping_m63469BB952FE7F4324E4ABA3789BF4E2EDEEA0F1 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _bLoop;
		bool L_0 = __this->____bLoop_15;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::HasMetaData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_HasMetaData_m46D5A0FAE6975333B62DF6F2795E6BFC221AFAD2 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_CanPlay_m6A549BFCE58A892EC04B96C1CD470C2FA35FE718 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::HasAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_HasAudio_m8C4FD2857F22720DB2F370D68356F08FA333D867 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::HasVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_HasVideo_m060D0DB42A72C7BC9319F248800929E414227FF5 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Play_mB33CCA876F50CF5F2D1BB966CEC4232089C6DF14 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// _isPlaying = true;
		__this->____isPlaying_10 = (bool)1;
		// _isPaused = false;
		__this->____isPaused_11 = (bool)0;
		// _fakeFlipTime = 0.0f;
		__this->____fakeFlipTime_21 = (0.0f);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Pause_m524F72AFDCCE55901AEC1C1CB17A75EDCFE96F8A (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// _isPlaying = false;
		__this->____isPlaying_10 = (bool)0;
		// _isPaused = true;
		__this->____isPaused_11 = (bool)1;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Stop_mA0B5F4765B14E2D864E49D8112F5C5C1EC6B54CE (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// _isPlaying = false;
		__this->____isPlaying_10 = (bool)0;
		// _isPaused = false;
		__this->____isPaused_11 = (bool)0;
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsSeeking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsSeeking_m77CD5109F54C06EA7C1304D469B64BF3C9C001CC (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsPlaying_mF954254BDC4D9271A7FCE07D811B17448E9548BC (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _isPlaying;
		bool L_0 = __this->____isPlaying_10;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsPaused_m29B30158180209C995B7DE9DE32ECD10923FC3F1 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _isPaused;
		bool L_0 = __this->____isPaused_11;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsFinished_m71934BE0BC112E62CD59E5DDCFDFD09061544600 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _isPlaying && (_currentTime >= GetDurationMs());
		bool L_0 = __this->____isPlaying_10;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = __this->____currentTime_12;
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(114 /* System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetDurationMs() */, __this);
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)L_2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsBuffering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsBuffering_m64E4470428CA8BA102A8A2E6200813A5B3217D39 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetDurationMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetDurationMs_m37C839B61C543FA92A675785D35036554F05693B (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 10.0f * 1000.0f;
		return (10000.0f);
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetVideoWidth_mE994CF4A83F62AE1F538C2BDEC41AFF241F56992 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _Width;
		int32_t L_0 = __this->____Width_16;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetVideoHeight_m34211536F57759F3623EFD55A909DA2237D58777 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _height;
		int32_t L_0 = __this->____height_17;
		return L_0;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVideoDisplayRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetVideoDisplayRate_mFEB35ACB262834C4931DD8D83B36FEDA9896A900 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return FrameRate;
		return (10.0f);
	}
}
// UnityEngine.Texture RenderHeads.Media.AVProVideo.NullMediaPlayer::GetTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NullMediaPlayer_GetTexture_m78F6AF4860567C6B30B961CE43DCDCE4464AC6F1 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return _texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____texture_18;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetTextureFrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetTextureFrameCount_m86449C00161D42407F31312132268631DCD52012 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _frameCount;
		int32_t L_0 = __this->____frameCount_22;
		return L_0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::RequiresVerticalFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_RequiresVerticalFlip_m961699C943FDF5EFF3B72F07BA271E5785E04E87 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Rewind_mC201EE12A6666E6E08EEABAB8B66F25F48E79490 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// Seek( 0.0f );
		VirtualActionInvoker1< float >::Invoke(106 /* System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::Seek(System.Single) */, __this, (0.0f));
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Seek_m87CDA46A6AB91EE1CB79F5C930B5307E6DF6BB00 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, float ___timeMs0, const RuntimeMethod* method) 
{
	{
		// _currentTime = timeMs;
		float L_0 = ___timeMs0;
		__this->____currentTime_12 = L_0;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SeekFast(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SeekFast_m0BF60EFF0E4603D0B9B6497E7E62F28F7CB009E5 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, float ___timeMs0, const RuntimeMethod* method) 
{
	{
		// _currentTime = timeMs;
		float L_0 = ___timeMs0;
		__this->____currentTime_12 = L_0;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SeekWithTolerance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SeekWithTolerance_m48DE8A5471D7FCBD47EBCBCBC3F9F54D1AA7B3D9 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, float ___timeMs0, float ___beforeMs1, float ___afterMs2, const RuntimeMethod* method) 
{
	{
		// _currentTime = timeMs;
		float L_0 = ___timeMs0;
		__this->____currentTime_12 = L_0;
		// }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentTimeMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetCurrentTimeMs_m1A0742BBB49B2503C2CCEC22A3C03398F58678F8 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _currentTime;
		float L_0 = __this->____currentTime_12;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SetPlaybackRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SetPlaybackRate_m8607F41F7BF1302F7DEDE6B5730652E1D8101BD0 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, float ___rate0, const RuntimeMethod* method) 
{
	{
		// _playbackRate = rate;
		float L_0 = ___rate0;
		__this->____playbackRate_14 = L_0;
		// }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetPlaybackRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetPlaybackRate_m4FA52D02A635AEAE8D0A6E567ECA56F0496FDB6A (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _playbackRate;
		float L_0 = __this->____playbackRate_14;
		return L_0;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetBufferingProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetBufferingProgress_mF855AFE7A8752ED4DA87C71A8AFE33D5999C4797 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::MuteAudio(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_MuteAudio_m8A369E4C028685D7BEB8A7C360073BD0D7EB9708 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, bool ___bMuted0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.NullMediaPlayer::IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullMediaPlayer_IsMuted_mC376E01F74904452A5EF0EB2DAF99BB1616749C7 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SetVolume_mE31D3E9C1F48795CF15C4A5EDF8E47A25C3815E0 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, float ___volume0, const RuntimeMethod* method) 
{
	{
		// _volume = volume;
		float L_0 = ___volume0;
		__this->____volume_13 = L_0;
		// }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetVolume_mF52F5823B2F23411600AFC56427FB2685F95977C (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return _volume;
		float L_0 = __this->____volume_13;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetAudioTrackCount_mEB8D81B6577B804E526EBCFA9FC690AE68D325A0 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentAudioTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetCurrentAudioTrack_m97A3BBEC72AD0244FA0EAC1D9513B5316DA57002 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SetAudioTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SetAudioTrack_m24395095ADEBA77140E317490F260554258F462F (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVideoTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetVideoTrackCount_m4A5BA92FAB7F20524EA1BC2BD4770183EAF86F4B (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentVideoTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetCurrentVideoTrack_m79FD359910740A03F359CF6B810E40FC6AA68C98 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.String RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentAudioTrackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullMediaPlayer_GetCurrentAudioTrackId_m8682413A5665BDE4EAF6B04CB41047D8886AB8DC (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentAudioTrackBitrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetCurrentAudioTrackBitrate_m5A883582FBE5E87E15D878A328A59841C6B70BFA (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::SetVideoTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_SetVideoTrack_mFA6FDDF2C00C7A5C9DFF6389D54F18A2052BEB1E (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentVideoTrackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullMediaPlayer_GetCurrentVideoTrackId_mB2D21D39F144076F659A7F35BFC4F4216E5F1F81 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.NullMediaPlayer::GetCurrentVideoTrackBitrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullMediaPlayer_GetCurrentVideoTrackBitrate_mE3AC43F80A241BCA51BE2418B6720CC590DE457B (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Single RenderHeads.Media.AVProVideo.NullMediaPlayer::GetVideoFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullMediaPlayer_GetVideoFrameRate_m1454E5D68DC671254FB0E319EEB5C758A0BD0979 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Update_mD49A3D2A270B3CD7FA29A29A1E329B094F1C031A (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* G_B7_0 = NULL;
	NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* G_B6_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B8_0 = NULL;
	NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* G_B8_1 = NULL;
	{
		// UpdateSubtitles();
		VirtualActionInvoker0::Invoke(173 /* System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::UpdateSubtitles() */, __this);
		// if (_isPlaying)
		bool L_0 = __this->____isPlaying_10;
		if (!L_0)
		{
			goto IL_00b5;
		}
	}
	{
		// _currentTime += Time.deltaTime * 1000.0f;
		float L_1 = __this->____currentTime_12;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____currentTime_12 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, (1000.0f)))));
		// if (_currentTime >= GetDurationMs())
		float L_3 = __this->____currentTime_12;
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(114 /* System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetDurationMs() */, __this);
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0051;
		}
	}
	{
		// _currentTime = GetDurationMs();
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(114 /* System.Single RenderHeads.Media.AVProVideo.BaseMediaPlayer::GetDurationMs() */, __this);
		__this->____currentTime_12 = L_5;
		// if( _bLoop )
		bool L_6 = __this->____bLoop_15;
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// Rewind();
		VirtualActionInvoker0::Invoke(105 /* System.Void RenderHeads.Media.AVProVideo.BaseMediaPlayer::Rewind() */, __this);
	}

IL_0051:
	{
		// _fakeFlipTime += Time.deltaTime;
		float L_7 = __this->____fakeFlipTime_21;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____fakeFlipTime_21 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if( _fakeFlipTime >= (1.0 / FrameRate))
		float L_9 = __this->____fakeFlipTime_21;
		if ((!(((double)((double)L_9)) >= ((double)(0.10000000000000001)))))
		{
			goto IL_00b5;
		}
	}
	{
		// _fakeFlipTime = 0.0f;
		__this->____fakeFlipTime_21 = (0.0f);
		// _texture = ( _texture == _texture_AVPro ) ? _texture_AVPro1 : _texture_AVPro;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->____texture_18;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->____texture_AVPro_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, L_11, NULL);
		G_B6_0 = __this;
		if (L_12)
		{
			G_B7_0 = __this;
			goto IL_009c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->____texture_AVPro_19;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_00a2;
	}

IL_009c:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->____texture_AVPro1_20;
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
	}

IL_00a2:
	{
		NullCheck(G_B8_1);
		G_B8_1->____texture_18 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->____texture_18), (void*)G_B8_0);
		// _frameCount++;
		int32_t L_15 = __this->____frameCount_22;
		__this->____frameCount_22 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Render_mD1C23F50FED2A7B4FA188FCC2BE4972AB2AC9A67 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer_Dispose_mF186D35CAC48EA9B08E83704C91FAC947523C997 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.NullMediaPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullMediaPlayer__ctor_mD4CE17E2643A083527D6479CEA6333362029C946 (NullMediaPlayer_tBC7EF017F9508C73BBA163093A67433491AB90A7* __this, const RuntimeMethod* method) 
{
	{
		// private float        _playbackRate = 1.0f;
		__this->____playbackRate_14 = (1.0f);
		// private int            _Width = 256;
		__this->____Width_16 = ((int32_t)256);
		// private int            _height = 256;
		__this->____height_17 = ((int32_t)256);
		BaseMediaPlayer__ctor_mB429CB676E5E84D8B0812423C72B56A7FB6CB9E5(__this, NULL);
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
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::get_DroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_get_DroppedFrames_mB608223CB2DC584220E08CCDF83C05EB8FF8F2DA (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _droppedFrames; }
		int32_t L_0 = __this->____droppedFrames_12;
		return L_0;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::get_FrameDisplayedTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_get_FrameDisplayedTimer_m7F1AE81FBADBF80E5E62E20C1EFEB3F67D354785 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frameDisplayedTimer; }
		int32_t L_0 = __this->____frameDisplayedTimer_14;
		return L_0;
	}
}
// System.Int64 RenderHeads.Media.AVProVideo.Resampler::get_BaseTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Resampler_get_BaseTimestamp_m6C4039F507380A21FCC7D9ADE2A52D965DA89453 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _baseTimestamp; }
		int64_t L_0 = __this->____baseTimestamp_6;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_BaseTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_set_BaseTimestamp_mA9929C5DCFBAEE5D785F6ADE1A58F6AD303048E7 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { _baseTimestamp = value; }
		int64_t L_0 = ___value0;
		__this->____baseTimestamp_6 = L_0;
		// set { _baseTimestamp = value; }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.Resampler::get_ElapsedTimeSinceBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Resampler_get_ElapsedTimeSinceBase_mE10B8D7C010F22EDD5602BF742C3BBB9BA37DB56 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _elapsedTimeSinceBase; }
		float L_0 = __this->____elapsedTimeSinceBase_7;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_ElapsedTimeSinceBase(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_set_ElapsedTimeSinceBase_mCDD9A02CE217FA4C808B764D11FC45A3BCC3046A (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _elapsedTimeSinceBase = value; }
		float L_0 = ___value0;
		__this->____elapsedTimeSinceBase_7 = L_0;
		// set { _elapsedTimeSinceBase = value; }
		return;
	}
}
// System.Single RenderHeads.Media.AVProVideo.Resampler::get_LastT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Resampler_get_LastT_mF440DE499B43F2B1AAD83D9ACA518CE0401F438E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		float L_0 = __this->___U3CLastTU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_LastT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		float L_0 = ___value0;
		__this->___U3CLastTU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Int64 RenderHeads.Media.AVProVideo.Resampler::get_TextureTimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Resampler_get_TextureTimeStamp_m1DEB04BA9B9475C2EC178961AEF86894EBDAAE40 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		int64_t L_0 = __this->___U3CTextureTimeStampU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::set_TextureTimeStamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_set_TextureTimeStamp_m14A47E36DC1F0205B98DBB7E9DB24AD4CD501D2A (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		int64_t L_0 = ___value0;
		__this->___U3CTextureTimeStampU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::OnVideoEvent(RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_OnVideoEvent_m059A86E1411D46A0B2056E78EB8CD698365C6B26 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___et1, int32_t ___errorCode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___et1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___et1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// _elapsedTimeSinceBase = _bufferSize / _mediaPlayer.Info.GetVideoFrameRate();
		int32_t L_2 = __this->____bufferSize_5;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayer_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_4);
		__this->____elapsedTimeSinceBase_7 = ((float)(((float)L_2)/L_5));
		// break;
		return;
	}

IL_0027:
	{
		// Reset();
		Resampler_Reset_m9B8013CC73ED2F823D339D3A4CDF371A5FCFBE9E(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::.ctor(RenderHeads.Media.AVProVideo.MediaPlayer,System.String,System.Int32,RenderHeads.Media.AVProVideo.Resampler/ResampleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler__ctor_m7907B72CDF0A49193E8AFA5904F9A3F1662F9472 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, String_t* ___name1, int32_t ___bufferSize2, int32_t ___resampleMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA08D447CDF2C4ED753234403E7804F79DC1D6D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resampler_OnVideoEvent_m059A86E1411D46A0B2056E78EB8CD698365C6B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DDD7513CA3CF974574F534DE4EB3932424A12B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10EA4E5EFF41124EDF14E3BECA92F08426A01666);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F7BCDE3316D6DE390298CF601CA3B1FD6A2CA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E19801F3EFF616570844AE719CC7E2356DB01A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC11E38F553DD44F945849F83A0FD83F8721F8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD273725E4FDEB95D34DF1FEB221D2194EBCE3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// private List<TimestampedRenderTexture[]> _buffer = new List<TimestampedRenderTexture[]>();
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_0 = (List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C*)il2cpp_codegen_object_new(List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA08D447CDF2C4ED753234403E7804F79DC1D6D36(L_0, List_1__ctor_mA08D447CDF2C4ED753234403E7804F79DC1D6D36_RuntimeMethod_var);
		__this->____buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_0);
		// private string _name = "";
		__this->____name_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private long _lastTimeStamp = -1;
		__this->____lastTimeStamp_11 = ((int64_t)(-1));
		// public Resampler(MediaPlayer player, string name, int bufferSize = 2, ResampleMode resampleMode = ResampleMode.LINEAR)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _bufferSize = Mathf.Max(2, bufferSize);
		int32_t L_1 = ___bufferSize2;
		int32_t L_2;
		L_2 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(2, L_1, NULL);
		__this->____bufferSize_5 = L_2;
		// if (player.Info != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = ___player0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// _elapsedTimeSinceBase = _bufferSize / player.Info.GetVideoFrameRate();
		int32_t L_5 = __this->____bufferSize_5;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = ___player0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_6, NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_7);
		__this->____elapsedTimeSinceBase_7 = ((float)(((float)L_5)/L_8));
	}

IL_0052:
	{
		// player.Events.AddListener(OnVideoEvent);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = ___player0;
		NullCheck(L_9);
		MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* L_10;
		L_10 = MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998(L_9, NULL);
		UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* L_11 = (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*)il2cpp_codegen_object_new(UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172(L_11, __this, (intptr_t)((void*)Resampler_OnVideoEvent_m059A86E1411D46A0B2056E78EB8CD698365C6B26_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA(L_10, L_11, UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		// _mediaPlayer = player;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12 = ___player0;
		__this->____mediaPlayer_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mediaPlayer_1), (void*)L_12);
		// Shader blendShader = Shader.Find("AVProVideo/BlendFrames");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13;
		L_13 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral0DDD7513CA3CF974574F534DE4EB3932424A12B9, NULL);
		V_0 = L_13;
		// if (blendShader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		// _blendMat = new Material(blendShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_16 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_17, L_16, NULL);
		__this->____blendMat_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blendMat_8), (void*)L_17);
		// _propT = Shader.PropertyToID(ShaderPropT);
		int32_t L_18;
		L_18 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralC11E38F553DD44F945849F83A0FD83F8721F8D57, NULL);
		__this->____propT_21 = L_18;
		// _propAfterTex = Shader.PropertyToID(ShaderPropAftertex);
		int32_t L_19;
		L_19 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral10EA4E5EFF41124EDF14E3BECA92F08426A01666, NULL);
		__this->____propAfterTex_20 = L_19;
		goto IL_00bc;
	}

IL_00b2:
	{
		// Debug.LogError("[AVProVideo] Failed to find BlendFrames shader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral8E19801F3EFF616570844AE719CC7E2356DB01A4, NULL);
	}

IL_00bc:
	{
		// _resampleMode = resampleMode;
		int32_t L_20 = ___resampleMode3;
		__this->____resampleMode_9 = L_20;
		// _name = name;
		String_t* L_21 = ___name1;
		__this->____name_10 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_10), (void*)L_21);
		// Debug.Log("[AVProVideo] Resampler " + _name + " started");
		String_t* L_22 = __this->____name_10;
		String_t* L_23;
		L_23 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralCCD273725E4FDEB95D34DF1FEB221D2194EBCE3A, L_22, _stringLiteral77F7BCDE3316D6DE390298CF601CA3B1FD6A2CA2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture[] RenderHeads.Media.AVProVideo.Resampler::get_OutputTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* Resampler_get_OutputTexture_m7239D9319A05108E425540EC80C0F8B60B50C41C (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* V_0 = NULL;
	{
		// get { return _outputTexture; }
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->____outputTexture_2;
		V_0 = (TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46*)L_0;
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_1 = V_0;
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_Reset_m9B8013CC73ED2F823D339D3A4CDF371A5FCFBE9E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// _lastTimeStamp = -1;
		__this->____lastTimeStamp_11 = ((int64_t)(-1));
		// _baseTimestamp = 0;
		__this->____baseTimestamp_6 = ((int64_t)0);
		// InvalidateBuffer();
		Resampler_InvalidateBuffer_m92C6B5CF16C157B955C8AA54DF3F129382DE624E(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_Release_m1CFFFD9A98BE47226F169E02AED4D6FBD36725E4 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleaseRenderTextures();
		Resampler_ReleaseRenderTextures_m372846F253C1851BFD531C4C0C00BAC6AE8EA5E2(__this, NULL);
		// if (_blendMat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____blendMat_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Material.Destroy(_blendMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____blendMat_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::ReleaseRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_ReleaseRenderTextures_m372846F253C1851BFD531C4C0C00BAC6AE8EA5E2 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		V_0 = 0;
		goto IL_0090;
	}

IL_0007:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		V_1 = 0;
		goto IL_0056;
	}

IL_000b:
	{
		// if (_buffer[i][j].texture != null)
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_0 = __this->____buffer_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_2;
		L_2 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_0, L_1, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = L_5->___texture_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(_buffer[i][j].texture);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_8 = __this->____buffer_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_10;
		L_10 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_8, L_9, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = L_13->___texture_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_14, NULL);
		// _buffer[i][j].texture = null;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_15 = __this->____buffer_0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_17;
		L_17 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_15, L_16, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		L_20->___texture_0 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___texture_0), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0052:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0056:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_22 = V_1;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_23 = __this->____buffer_0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_25;
		L_25 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_23, L_24, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_25);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// if (_outputTexture != null && _outputTexture[i] != null)
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_26 = __this->____outputTexture_2;
		if (!L_26)
		{
			goto IL_008c;
		}
	}
	{
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_27 = __this->____outputTexture_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_008c;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(_outputTexture[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_32 = __this->____outputTexture_2;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_35, NULL);
	}

IL_008c:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0090:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_37 = V_0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_38 = __this->____buffer_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_38, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0007;
		}
	}
	{
		// _outputTexture = null;
		__this->____outputTexture_2 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outputTexture_2), (void*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::ConstructRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_ConstructRenderTextures_m22B88859BF1B4E005CB3750FEAF60E7E83FEB934 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m18875FAC36C4CC7BC2A1C24716F7A13FBF841D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA64C161BE2874B303CAE1D8759CB6BCA95237B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// ReleaseRenderTextures();
		Resampler_ReleaseRenderTextures_m372846F253C1851BFD531C4C0C00BAC6AE8EA5E2(__this, NULL);
		// _buffer.Clear();
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		List_1_Clear_mA64C161BE2874B303CAE1D8759CB6BCA95237B97_inline(L_0, List_1_Clear_mA64C161BE2874B303CAE1D8759CB6BCA95237B97_RuntimeMethod_var);
		// _outputTexture = new RenderTexture[_mediaPlayer.TextureProducer.GetTextureCount()];
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_1 = __this->____mediaPlayer_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_2);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_4 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->____outputTexture_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outputTexture_2), (void*)L_4);
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		V_0 = 0;
		goto IL_0104;
	}

IL_0033:
	{
		// Texture tex = _mediaPlayer.TextureProducer.GetTexture(i);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5 = __this->____mediaPlayer_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = InterfaceFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(1 /* UnityEngine.Texture RenderHeads.Media.AVProVideo.IMediaProducer::GetTexture(System.Int32) */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_6, L_7);
		V_1 = L_8;
		// _buffer.Add(new TimestampedRenderTexture[_bufferSize]);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_9 = __this->____buffer_0;
		int32_t L_10 = __this->____bufferSize_5;
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_11 = (TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A*)(TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A*)SZArrayNew(TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A_il2cpp_TypeInfo_var, (uint32_t)L_10);
		NullCheck(L_9);
		List_1_Add_m18875FAC36C4CC7BC2A1C24716F7A13FBF841D11_inline(L_9, L_11, List_1_Add_m18875FAC36C4CC7BC2A1C24716F7A13FBF841D11_RuntimeMethod_var);
		// for (int j = 0; j < _bufferSize; ++j)
		V_2 = 0;
		goto IL_0076;
	}

IL_005f:
	{
		// _buffer[i][j] = new TimestampedRenderTexture();
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_12 = __this->____buffer_0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_14;
		L_14 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_12, L_13, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_15 = V_2;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_16 = (TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C*)il2cpp_codegen_object_new(TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		TimestampedRenderTexture__ctor_mE2669A04C003AA001F157709DF20B07BC3036608(L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C*)L_16);
		// for (int j = 0; j < _bufferSize; ++j)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0076:
	{
		// for (int j = 0; j < _bufferSize; ++j)
		int32_t L_18 = V_2;
		int32_t L_19 = __this->____bufferSize_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_005f;
		}
	}
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		V_3 = 0;
		goto IL_00d5;
	}

IL_0083:
	{
		// _buffer[i][j].texture = RenderTexture.GetTemporary(tex.width, tex.height, 0);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_20 = __this->____buffer_0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_22;
		L_22 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_20, L_21, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30;
		L_30 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_27, L_29, 0, NULL);
		NullCheck(L_25);
		L_25->___texture_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___texture_0), (void*)L_30);
		// _buffer[i][j].timestamp = 0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_31 = __this->____buffer_0;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_33;
		L_33 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_31, L_32, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		L_36->___timestamp_1 = ((int64_t)0);
		// _buffer[i][j].used = false;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_37 = __this->____buffer_0;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_39;
		L_39 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_37, L_38, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		L_42->___used_2 = (bool)0;
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d5:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_44 = V_3;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_45 = __this->____buffer_0;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_47;
		L_47 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_45, L_46, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_47);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0083;
		}
	}
	{
		// _outputTexture[i] = RenderTexture.GetTemporary(tex.width, tex.height, 0);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_48 = __this->____outputTexture_2;
		int32_t L_49 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_50);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_52);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54;
		L_54 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_51, L_53, 0, NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_54);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_54);
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0104:
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_56 = V_0;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_57 = __this->____mediaPlayer_1;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_57);
		NullCheck(L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_58);
		if ((((int32_t)L_56) < ((int32_t)L_59)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Resampler::CheckRenderTexturesValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resampler_CheckRenderTexturesValid_mC35E7A36A62170C9BD611E626723FF2C1D9436E4 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		V_0 = 0;
		goto IL_00d4;
	}

IL_0007:
	{
		// Texture tex = _mediaPlayer.TextureProducer.GetTexture(i);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = InterfaceFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(1 /* UnityEngine.Texture RenderHeads.Media.AVProVideo.IMediaProducer::GetTexture(System.Int32) */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_1, L_2);
		V_1 = L_3;
		// for (int j = 0; j < _buffer.Count; ++j)
		V_2 = 0;
		goto IL_007e;
	}

IL_001d:
	{
		// if (_buffer[i][j].texture == null || _buffer[i][j].texture.width != tex.width || _buffer[i][j].texture.height != tex.height)
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_4 = __this->____buffer_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_6;
		L_6 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_4, L_5, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9->___texture_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_12 = __this->____buffer_0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_14;
		L_14 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_12, L_13, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = L_17->___texture_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_21))))
		{
			goto IL_0078;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_22 = __this->____buffer_0;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_24;
		L_24 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_22, L_23, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = L_27->___texture_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		if ((((int32_t)L_29) == ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}

IL_0078:
	{
		// return false;
		return (bool)0;
	}

IL_007a:
	{
		// for (int j = 0; j < _buffer.Count; ++j)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_007e:
	{
		// for (int j = 0; j < _buffer.Count; ++j)
		int32_t L_33 = V_2;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_34 = __this->____buffer_0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_34, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_001d;
		}
	}
	{
		// if (_outputTexture == null || _outputTexture[i] == null || _outputTexture[i].width != tex.width || _outputTexture[i].height != tex.height)
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_36 = __this->____outputTexture_2;
		if (!L_36)
		{
			goto IL_00ce;
		}
	}
	{
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_37 = __this->____outputTexture_2;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_42 = __this->____outputTexture_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		if ((!(((uint32_t)L_46) == ((uint32_t)L_48))))
		{
			goto IL_00ce;
		}
	}
	{
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_49 = __this->____outputTexture_2;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_52);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_54);
		if ((((int32_t)L_53) == ((int32_t)L_55)))
		{
			goto IL_00d0;
		}
	}

IL_00ce:
	{
		// return false;
		return (bool)0;
	}

IL_00d0:
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00d4:
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_57 = V_0;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_58 = __this->____mediaPlayer_1;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_58);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_59);
		if ((((int32_t)L_57) < ((int32_t)L_60)))
		{
			goto IL_0007;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::FindBeforeFrameIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_FindBeforeFrameIndex_m6DD5D7F2C5519776CB3D051144E978B97066032C (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (frameIdx >= _buffer.Count)
		int32_t L_0 = ___frameIdx0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_1, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// int foundFrame = -1;
		V_0 = (-1);
		// float smallestDif = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// int closest = -1;
		V_2 = (-1);
		// float smallestElapsed = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		V_4 = 0;
		goto IL_008f;
	}

IL_0025:
	{
		// if (_buffer[frameIdx][i].used)
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_3 = __this->____buffer_0;
		int32_t L_4 = ___frameIdx0;
		NullCheck(L_3);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_5;
		L_5 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_3, L_4, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___used_2;
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// float elapsed = (_buffer[frameIdx][i].timestamp - _baseTimestamp) / 10000000f;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_10 = __this->____buffer_0;
		int32_t L_11 = ___frameIdx0;
		NullCheck(L_10);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_12;
		L_12 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_10, L_11, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int64_t L_16 = L_15->___timestamp_1;
		int64_t L_17 = __this->____baseTimestamp_6;
		V_5 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_16, L_17)))/(10000000.0f)));
		// if (elapsed < smallestElapsed)
		float L_18 = V_5;
		float L_19 = V_3;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_006a;
		}
	}
	{
		// closest = i;
		int32_t L_20 = V_4;
		V_2 = L_20;
		// smallestElapsed = elapsed;
		float L_21 = V_5;
		V_3 = L_21;
	}

IL_006a:
	{
		// float dif = _elapsedTimeSinceBase - elapsed;
		float L_22 = __this->____elapsedTimeSinceBase_7;
		float L_23 = V_5;
		V_6 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		// if (dif >= 0 && dif < smallestDif)
		float L_24 = V_6;
		if ((!(((float)L_24) >= ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		float L_25 = V_6;
		float L_26 = V_1;
		if ((!(((float)L_25) < ((float)L_26))))
		{
			goto IL_0089;
		}
	}
	{
		// smallestDif = dif;
		float L_27 = V_6;
		V_1 = L_27;
		// foundFrame = i;
		int32_t L_28 = V_4;
		V_0 = L_28;
	}

IL_0089:
	{
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		int32_t L_30 = V_4;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_31 = __this->____buffer_0;
		int32_t L_32 = ___frameIdx0;
		NullCheck(L_31);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_33;
		L_33 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_31, L_32, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_33);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// if (foundFrame < 0)
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		// if (closest < 0)
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_00ab:
	{
		// return closest;
		int32_t L_36 = V_2;
		return L_36;
	}

IL_00ad:
	{
		// return foundFrame;
		int32_t L_37 = V_0;
		return L_37;
	}
}
// System.Int32 RenderHeads.Media.AVProVideo.Resampler::findClosestFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resampler_findClosestFrame_m433D21D02ECD97BB2A5E327B1BFD6EA6B5471A73 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (frameIdx >= _buffer.Count)
		int32_t L_0 = ___frameIdx0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_1, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// int foundPos = -1;
		V_0 = (-1);
		// float smallestDif = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		V_2 = 0;
		goto IL_0070;
	}

IL_001c:
	{
		// if (_buffer[frameIdx][i].used)
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_3 = __this->____buffer_0;
		int32_t L_4 = ___frameIdx0;
		NullCheck(L_3);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_5;
		L_5 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_3, L_4, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___used_2;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// float elapsed = (_buffer[frameIdx][i].timestamp - _baseTimestamp) / 10000000f;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_10 = __this->____buffer_0;
		int32_t L_11 = ___frameIdx0;
		NullCheck(L_10);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_12;
		L_12 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_10, L_11, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int64_t L_16 = L_15->___timestamp_1;
		int64_t L_17 = __this->____baseTimestamp_6;
		V_3 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_16, L_17)))/(10000000.0f)));
		// float dif = Mathf.Abs(_elapsedTimeSinceBase - elapsed);
		float L_18 = __this->____elapsedTimeSinceBase_7;
		float L_19 = V_3;
		float L_20;
		L_20 = fabsf(((float)il2cpp_codegen_subtract(L_18, L_19)));
		V_4 = L_20;
		// if (dif < smallestDif)
		float L_21 = V_4;
		float L_22 = V_1;
		if ((!(((float)L_21) < ((float)L_22))))
		{
			goto IL_006c;
		}
	}
	{
		// foundPos = i;
		int32_t L_23 = V_2;
		V_0 = L_23;
		// smallestDif = dif;
		float L_24 = V_4;
		V_1 = L_24;
	}

IL_006c:
	{
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < _buffer[frameIdx].Length; ++i)
		int32_t L_26 = V_2;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_27 = __this->____buffer_0;
		int32_t L_28 = ___frameIdx0;
		NullCheck(L_27);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_29;
		L_29 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_27, L_28, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_29);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// return foundPos;
		int32_t L_30 = V_0;
		return L_30;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::PointUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_PointUpdate_mEB0AA7CFE2371E5637EDA5087A0FA94FDE5C0044 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		V_0 = 0;
		goto IL_005a;
	}

IL_0004:
	{
		// int frameIndex = findClosestFrame(i);
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = Resampler_findClosestFrame_m433D21D02ECD97BB2A5E327B1BFD6EA6B5471A73(__this, L_0, NULL);
		V_1 = L_1;
		// if (frameIndex < 0)
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// _outputTexture[i].DiscardContents();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_3 = __this->____outputTexture_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_6, NULL);
		// Graphics.Blit(_buffer[i][frameIndex].texture, _outputTexture[i]);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_7 = __this->____buffer_0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_9;
		L_9 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_7, L_8, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = L_12->___texture_0;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_14 = __this->____outputTexture_2;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_13, L_17, NULL);
		// _currentDisplayedTimestamp = _buffer[i][frameIndex].timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_18 = __this->____buffer_0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_20;
		L_20 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_18, L_19, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int64_t L_24 = L_23->___timestamp_1;
		__this->____currentDisplayedTimestamp_15 = L_24;
	}

IL_0056:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_26 = V_0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_27 = __this->____buffer_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_27, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::SampleFrame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_SampleFrame_mCD2E6705495052E2A17D4186FA52F8CE83D5DD6F (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___frameIdx0, int32_t ___bufferIdx1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outputTexture[bufferIdx].DiscardContents();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->____outputTexture_2;
		int32_t L_1 = ___bufferIdx1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_3, NULL);
		// Graphics.Blit(_buffer[bufferIdx][frameIdx].texture, _outputTexture[bufferIdx]);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_4 = __this->____buffer_0;
		int32_t L_5 = ___bufferIdx1;
		NullCheck(L_4);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_6;
		L_6 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_4, L_5, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_7 = ___frameIdx0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9->___texture_0;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_11 = __this->____outputTexture_2;
		int32_t L_12 = ___bufferIdx1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_10, L_14, NULL);
		// TextureTimeStamp = _buffer[bufferIdx][frameIdx].timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_15 = __this->____buffer_0;
		int32_t L_16 = ___bufferIdx1;
		NullCheck(L_15);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_17;
		L_17 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_15, L_16, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_18 = ___frameIdx0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int64_t L_21 = L_20->___timestamp_1;
		Resampler_set_TextureTimeStamp_m14A47E36DC1F0205B98DBB7E9DB24AD4CD501D2A_inline(__this, L_21, NULL);
		// _currentDisplayedTimestamp = _buffer[bufferIdx][frameIdx].timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_22 = __this->____buffer_0;
		int32_t L_23 = ___bufferIdx1;
		NullCheck(L_22);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_24;
		L_24 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_22, L_23, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_25 = ___frameIdx0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int64_t L_28 = L_27->___timestamp_1;
		__this->____currentDisplayedTimestamp_15 = L_28;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::SampleFrames(System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_SampleFrames_mB0F55B16B31158A3F44F1D59B287DCA531499E6E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int32_t ___bufferIdx0, int32_t ___frameIdx11, int32_t ___frameIdx22, float ___t3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _blendMat.SetFloat(_propT, t);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____blendMat_8;
		int32_t L_1 = __this->____propT_21;
		float L_2 = ___t3;
		NullCheck(L_0);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_0, L_1, L_2, NULL);
		// _blendMat.SetTexture(_propAfterTex, _buffer[bufferIdx][frameIdx2].texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____blendMat_8;
		int32_t L_4 = __this->____propAfterTex_20;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_5 = __this->____buffer_0;
		int32_t L_6 = ___bufferIdx0;
		NullCheck(L_5);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_7;
		L_7 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_5, L_6, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_8 = ___frameIdx22;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = L_10->___texture_0;
		NullCheck(L_3);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_3, L_4, L_11, NULL);
		// _outputTexture[bufferIdx].DiscardContents();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_12 = __this->____outputTexture_2;
		int32_t L_13 = ___bufferIdx0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_15, NULL);
		// Graphics.Blit(_buffer[bufferIdx][frameIdx1].texture, _outputTexture[bufferIdx], _blendMat);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_16 = __this->____buffer_0;
		int32_t L_17 = ___bufferIdx0;
		NullCheck(L_16);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_18;
		L_18 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_16, L_17, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_19 = ___frameIdx11;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = L_21->___texture_0;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_23 = __this->____outputTexture_2;
		int32_t L_24 = ___bufferIdx0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->____blendMat_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_22, L_26, L_27, NULL);
		// TextureTimeStamp = (long)Mathf.Lerp(_buffer[bufferIdx][frameIdx1].timestamp, _buffer[bufferIdx][frameIdx2].timestamp, t);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_28 = __this->____buffer_0;
		int32_t L_29 = ___bufferIdx0;
		NullCheck(L_28);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_30;
		L_30 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_28, L_29, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_31 = ___frameIdx11;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		int64_t L_34 = L_33->___timestamp_1;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_35 = __this->____buffer_0;
		int32_t L_36 = ___bufferIdx0;
		NullCheck(L_35);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_37;
		L_37 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_35, L_36, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_38 = ___frameIdx22;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		int64_t L_41 = L_40->___timestamp_1;
		float L_42 = ___t3;
		float L_43;
		L_43 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(((float)L_34), ((float)L_41), L_42, NULL);
		Resampler_set_TextureTimeStamp_m14A47E36DC1F0205B98DBB7E9DB24AD4CD501D2A_inline(__this, il2cpp_codegen_cast_double_to_int<int64_t>(L_43), NULL);
		// _currentDisplayedTimestamp = _buffer[bufferIdx][frameIdx1].timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_44 = __this->____buffer_0;
		int32_t L_45 = ___bufferIdx0;
		NullCheck(L_44);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_46;
		L_46 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_44, L_45, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_47 = ___frameIdx11;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		int64_t L_50 = L_49->___timestamp_1;
		__this->____currentDisplayedTimestamp_15 = L_50;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::LinearUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_LinearUpdate_m1521602F314775644E937A29B811249F535E7586 (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		V_0 = 0;
		goto IL_00d0;
	}

IL_0007:
	{
		// int frameIndex = FindBeforeFrameIndex(i);
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = Resampler_FindBeforeFrameIndex_m6DD5D7F2C5519776CB3D051144E978B97066032C(__this, L_0, NULL);
		V_1 = L_1;
		// if (frameIndex < 0)
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		// float frameElapsed = (_buffer[i][frameIndex].timestamp - _baseTimestamp) / 10000000f;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_3 = __this->____buffer_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_5;
		L_5 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_3, L_4, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int64_t L_9 = L_8->___timestamp_1;
		int64_t L_10 = __this->____baseTimestamp_6;
		V_2 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_9, L_10)))/(10000000.0f)));
		// if (frameElapsed > _elapsedTimeSinceBase)
		float L_11 = V_2;
		float L_12 = __this->____elapsedTimeSinceBase_7;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0056;
		}
	}
	{
		// SampleFrame(frameIndex, i);
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		Resampler_SampleFrame_mCD2E6705495052E2A17D4186FA52F8CE83D5DD6F(__this, L_13, L_14, NULL);
		// LastT = -1f;
		Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2_inline(__this, (-1.0f), NULL);
		goto IL_00cc;
	}

IL_0056:
	{
		// int next = (frameIndex + 1) % _buffer[i].Length;
		int32_t L_15 = V_1;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_16 = __this->____buffer_0;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_18;
		L_18 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_16, L_17, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_18);
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 1))%((int32_t)(((RuntimeArray*)L_18)->max_length))));
		// float nextElapsed = (_buffer[i][next].timestamp - _baseTimestamp) / 10000000f;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_19 = __this->____buffer_0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_21;
		L_21 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_19, L_20, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		int64_t L_25 = L_24->___timestamp_1;
		int64_t L_26 = __this->____baseTimestamp_6;
		V_4 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_25, L_26)))/(10000000.0f)));
		// if (nextElapsed < frameElapsed)
		float L_27 = V_4;
		float L_28 = V_2;
		if ((!(((float)L_27) < ((float)L_28))))
		{
			goto IL_00a6;
		}
	}
	{
		// SampleFrame(frameIndex, i);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		Resampler_SampleFrame_mCD2E6705495052E2A17D4186FA52F8CE83D5DD6F(__this, L_29, L_30, NULL);
		// LastT = 2f;
		Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2_inline(__this, (2.0f), NULL);
		goto IL_00cc;
	}

IL_00a6:
	{
		// float range = nextElapsed - frameElapsed;
		float L_31 = V_4;
		float L_32 = V_2;
		V_5 = ((float)il2cpp_codegen_subtract(L_31, L_32));
		// float t = (_elapsedTimeSinceBase - frameElapsed) / range;
		float L_33 = __this->____elapsedTimeSinceBase_7;
		float L_34 = V_2;
		float L_35 = V_5;
		V_6 = ((float)(((float)il2cpp_codegen_subtract(L_33, L_34))/L_35));
		// SampleFrames(i, frameIndex, next, t);
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_3;
		float L_39 = V_6;
		Resampler_SampleFrames_mB0F55B16B31158A3F44F1D59B287DCA531499E6E(__this, L_36, L_37, L_38, L_39, NULL);
		// LastT = t;
		float L_40 = V_6;
		Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2_inline(__this, L_40, NULL);
	}

IL_00cc:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d0:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_42 = V_0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_43 = __this->____buffer_0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_43, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::InvalidateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_InvalidateBuffer_m92C6B5CF16C157B955C8AA54DF3F129382DE624E (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// _elapsedTimeSinceBase = (_bufferSize / 2) / _mediaPlayer.Info.GetVideoFrameRate();
		int32_t L_0 = __this->____bufferSize_5;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_1 = __this->____mediaPlayer_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_1, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_2);
		__this->____elapsedTimeSinceBase_7 = ((float)(((float)((int32_t)(L_0/2)))/L_3));
		// for (int i = 0; i < _buffer.Count; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0024:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		// _buffer[i][j].used = false;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_4 = __this->____buffer_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_6;
		L_6 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_4, L_5, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		L_9->___used_2 = (bool)0;
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		// for (int j = 0; j < _buffer[i].Length; ++j)
		int32_t L_11 = V_1;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_12 = __this->____buffer_0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_14;
		L_14 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_12, L_13, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_14);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_16 = V_0;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_17 = __this->____buffer_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_17, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0024;
		}
	}
	{
		// _start = _end = 0;
		int32_t L_19 = 0;
		V_2 = L_19;
		__this->____end_4 = L_19;
		int32_t L_20 = V_2;
		__this->____start_3 = L_20;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_Update_mE05A066503CAEA917155E555729FBB1EB07E4C2D (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	double V_10 = 0.0;
	int32_t G_B30_0 = 0;
	{
		// if (_mediaPlayer.TextureProducer == null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (_mediaPlayer.TextureProducer == null || _mediaPlayer.TextureProducer.GetTexture() == null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____mediaPlayer_1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = __this->____mediaPlayer_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_4);
		NullCheck(L_5);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = InterfaceFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(1 /* UnityEngine.Texture RenderHeads.Media.AVProVideo.IMediaProducer::GetTexture(System.Int32) */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_5, 0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}

IL_0034:
	{
		// return;
		return;
	}

IL_0035:
	{
		// if (!CheckRenderTexturesValid())
		bool L_8;
		L_8 = Resampler_CheckRenderTexturesValid_mC35E7A36A62170C9BD611E626723FF2C1D9436E4(__this, NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// ConstructRenderTextures();
		Resampler_ConstructRenderTextures_m22B88859BF1B4E005CB3750FEAF60E7E83FEB934(__this, NULL);
	}

IL_0043:
	{
		// long currentTimestamp = _mediaPlayer.TextureProducer.GetTextureTimeStamp();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = __this->____mediaPlayer_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_9);
		NullCheck(L_10);
		int64_t L_11;
		L_11 = InterfaceFuncInvoker0< int64_t >::Invoke(4 /* System.Int64 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureTimeStamp() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_10);
		V_0 = L_11;
		// if (currentTimestamp != _lastTimeStamp)
		int64_t L_12 = V_0;
		int64_t L_13 = __this->____lastTimeStamp_11;
		if ((((int64_t)L_12) == ((int64_t)L_13)))
		{
			goto IL_00cb;
		}
	}
	{
		// float dif = Mathf.Abs(currentTimestamp - _lastTimeStamp);
		int64_t L_14 = V_0;
		int64_t L_15 = __this->____lastTimeStamp_11;
		float L_16;
		L_16 = fabsf(((float)((int64_t)il2cpp_codegen_subtract(L_14, L_15))));
		V_4 = L_16;
		// float frameLength = 10000000f * (1 / _mediaPlayer.Info.GetVideoFrameRate());
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_17 = __this->____mediaPlayer_1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_17, NULL);
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_18);
		V_5 = ((float)il2cpp_codegen_multiply((10000000.0f), ((float)((1.0f)/L_19))));
		// if (dif > frameLength * 1.1f && dif < frameLength * 3.1f)
		float L_20 = V_4;
		float L_21 = V_5;
		if ((!(((float)L_20) > ((float)((float)il2cpp_codegen_multiply(L_21, (1.10000002f)))))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_22 = V_4;
		float L_23 = V_5;
		if ((!(((float)L_22) < ((float)((float)il2cpp_codegen_multiply(L_23, (3.0999999f)))))))
		{
			goto IL_00c4;
		}
	}
	{
		// _droppedFrames += (int)((dif - frameLength) / frameLength + 0.5);
		int32_t L_24 = __this->____droppedFrames_12;
		float L_25 = V_4;
		float L_26 = V_5;
		float L_27 = V_5;
		__this->____droppedFrames_12 = ((int32_t)il2cpp_codegen_add(L_24, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(((double)((float)(((float)il2cpp_codegen_subtract(L_25, L_26))/L_27))), (0.5))))));
	}

IL_00c4:
	{
		// _lastTimeStamp = currentTimestamp;
		int64_t L_28 = V_0;
		__this->____lastTimeStamp_11 = L_28;
	}

IL_00cb:
	{
		// long timestamp = _mediaPlayer.TextureProducer.GetTextureTimeStamp();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_29 = __this->____mediaPlayer_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_29);
		NullCheck(L_30);
		int64_t L_31;
		L_31 = InterfaceFuncInvoker0< int64_t >::Invoke(4 /* System.Int64 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureTimeStamp() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_30);
		V_1 = L_31;
		// bool insertNewFrame = !_mediaPlayer.Control.IsSeeking();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_32 = __this->____mediaPlayer_1;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsSeeking() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_33);
		V_2 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		// if (_start != _end || _buffer[0][_end].used)
		int32_t L_35 = __this->____start_3;
		int32_t L_36 = __this->____end_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_0118;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_37 = __this->____buffer_0;
		NullCheck(L_37);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_38;
		L_38 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_37, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_39 = __this->____end_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		bool L_42 = L_41->___used_2;
		if (!L_42)
		{
			goto IL_0159;
		}
	}

IL_0118:
	{
		// int lastFrame = (_end + _buffer[0].Length - 1) % _buffer[0].Length;
		int32_t L_43 = __this->____end_4;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_44 = __this->____buffer_0;
		NullCheck(L_44);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_45;
		L_45 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_44, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_45);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_46 = __this->____buffer_0;
		NullCheck(L_46);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_47;
		L_47 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_46, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_47);
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, ((int32_t)(((RuntimeArray*)L_45)->max_length)))), 1))%((int32_t)(((RuntimeArray*)L_47)->max_length))));
		// if (timestamp == _buffer[0][lastFrame].timestamp)
		int64_t L_48 = V_1;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_49 = __this->____buffer_0;
		NullCheck(L_49);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_50;
		L_50 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_49, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_51 = V_6;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		int64_t L_54 = L_53->___timestamp_1;
		if ((!(((uint64_t)L_48) == ((uint64_t)L_54))))
		{
			goto IL_0159;
		}
	}
	{
		// insertNewFrame = false;
		V_2 = (bool)0;
	}

IL_0159:
	{
		// if (insertNewFrame)
		bool L_55 = V_2;
		if (!L_55)
		{
			goto IL_0297;
		}
	}
	{
		// if (_start == _end && !_buffer[0][_end].used)
		int32_t L_56 = __this->____start_3;
		int32_t L_57 = __this->____end_4;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_018e;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_58 = __this->____buffer_0;
		NullCheck(L_58);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_59;
		L_59 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_58, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_60 = __this->____end_4;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		bool L_63 = L_62->___used_2;
		if (L_63)
		{
			goto IL_018e;
		}
	}
	{
		// _baseTimestamp = timestamp;
		int64_t L_64 = V_1;
		__this->____baseTimestamp_6 = L_64;
	}

IL_018e:
	{
		// if (_end == _start && _buffer[0][_end].used)
		int32_t L_65 = __this->____end_4;
		int32_t L_66 = __this->____start_3;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_01d3;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_67 = __this->____buffer_0;
		NullCheck(L_67);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_68;
		L_68 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_67, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_69 = __this->____end_4;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		bool L_72 = L_71->___used_2;
		if (!L_72)
		{
			goto IL_01d3;
		}
	}
	{
		// _start = (_start + 1) % _buffer[0].Length;
		int32_t L_73 = __this->____start_3;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_74 = __this->____buffer_0;
		NullCheck(L_74);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_75;
		L_75 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_74, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_75);
		__this->____start_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_73, 1))%((int32_t)(((RuntimeArray*)L_75)->max_length))));
	}

IL_01d3:
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		V_7 = 0;
		goto IL_0263;
	}

IL_01db:
	{
		// Texture currentTexture = _mediaPlayer.TextureProducer.GetTexture(i);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_76 = __this->____mediaPlayer_1;
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_76);
		int32_t L_78 = V_7;
		NullCheck(L_77);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_79;
		L_79 = InterfaceFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(1 /* UnityEngine.Texture RenderHeads.Media.AVProVideo.IMediaProducer::GetTexture(System.Int32) */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_77, L_78);
		// _buffer[i][_end].texture.DiscardContents();
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_80 = __this->____buffer_0;
		int32_t L_81 = V_7;
		NullCheck(L_80);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_82;
		L_82 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_80, L_81, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_83 = __this->____end_4;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = L_85->___texture_0;
		NullCheck(L_86);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_86, NULL);
		// Graphics.Blit(currentTexture, _buffer[i][_end].texture);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_87 = __this->____buffer_0;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_89;
		L_89 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_87, L_88, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_90 = __this->____end_4;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_93 = L_92->___texture_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_79, L_93, NULL);
		// _buffer[i][_end].timestamp = timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_94 = __this->____buffer_0;
		int32_t L_95 = V_7;
		NullCheck(L_94);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_96;
		L_96 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_94, L_95, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_97 = __this->____end_4;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		int64_t L_100 = V_1;
		NullCheck(L_99);
		L_99->___timestamp_1 = L_100;
		// _buffer[i][_end].used = true;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_101 = __this->____buffer_0;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_103;
		L_103 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_101, L_102, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_104 = __this->____end_4;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		L_106->___used_2 = (bool)1;
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_107 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0263:
	{
		// for (int i = 0; i < _mediaPlayer.TextureProducer.GetTextureCount(); ++i)
		int32_t L_108 = V_7;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_109 = __this->____mediaPlayer_1;
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_109);
		NullCheck(L_110);
		int32_t L_111;
		L_111 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_110);
		if ((((int32_t)L_108) < ((int32_t)L_111)))
		{
			goto IL_01db;
		}
	}
	{
		// _end = (_end + 1) % _buffer[0].Length;
		int32_t L_112 = __this->____end_4;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_113 = __this->____buffer_0;
		NullCheck(L_113);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_114;
		L_114 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_113, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_114);
		__this->____end_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_112, 1))%((int32_t)(((RuntimeArray*)L_114)->max_length))));
	}

IL_0297:
	{
		// bool bufferNotFull = _start != _end || !_buffer[0][_end].used;
		int32_t L_115 = __this->____start_3;
		int32_t L_116 = __this->____end_4;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_116))))
		{
			goto IL_02c2;
		}
	}
	{
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_117 = __this->____buffer_0;
		NullCheck(L_117);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_118;
		L_118 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_117, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_119 = __this->____end_4;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		bool L_122 = L_121->___used_2;
		G_B30_0 = ((((int32_t)L_122) == ((int32_t)0))? 1 : 0);
		goto IL_02c3;
	}

IL_02c2:
	{
		G_B30_0 = 1;
	}

IL_02c3:
	{
		V_3 = (bool)G_B30_0;
		// if (bufferNotFull)
		bool L_123 = V_3;
		if (!L_123)
		{
			goto IL_0335;
		}
	}
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		V_8 = 0;
		goto IL_0326;
	}

IL_02cc:
	{
		// _outputTexture[i].DiscardContents();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_124 = __this->____outputTexture_2;
		int32_t L_125 = V_8;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_127, NULL);
		// Graphics.Blit(_buffer[i][_start].texture, _outputTexture[i]);
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_128 = __this->____buffer_0;
		int32_t L_129 = V_8;
		NullCheck(L_128);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_130;
		L_130 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_128, L_129, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_131 = __this->____start_3;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_134 = L_133->___texture_0;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_135 = __this->____outputTexture_2;
		int32_t L_136 = V_8;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_134, L_138, NULL);
		// _currentDisplayedTimestamp = _buffer[i][_start].timestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_139 = __this->____buffer_0;
		int32_t L_140 = V_8;
		NullCheck(L_139);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_141;
		L_141 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_139, L_140, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_142 = __this->____start_3;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		int64_t L_145 = L_144->___timestamp_1;
		__this->____currentDisplayedTimestamp_15 = L_145;
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_146 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0326:
	{
		// for (int i = 0; i < _buffer.Count; ++i)
		int32_t L_147 = V_8;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_148 = __this->____buffer_0;
		NullCheck(L_148);
		int32_t L_149;
		L_149 = List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_inline(L_148, List_1_get_Count_m286DA761705F860E80042A893225251BA93A33F7_RuntimeMethod_var);
		if ((((int32_t)L_147) < ((int32_t)L_149)))
		{
			goto IL_02cc;
		}
	}

IL_0335:
	{
		// if (_mediaPlayer.Control.IsPaused())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_150 = __this->____mediaPlayer_1;
		NullCheck(L_150);
		RuntimeObject* L_151;
		L_151 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_150, NULL);
		NullCheck(L_151);
		bool L_152;
		L_152 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPaused() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_151);
		if (!L_152)
		{
			goto IL_034d;
		}
	}
	{
		// InvalidateBuffer();
		Resampler_InvalidateBuffer_m92C6B5CF16C157B955C8AA54DF3F129382DE624E(__this, NULL);
	}

IL_034d:
	{
		// if (bufferNotFull)
		bool L_153 = V_3;
		if (!L_153)
		{
			goto IL_0351;
		}
	}
	{
		// return;
		return;
	}

IL_0351:
	{
		// if (_mediaPlayer.Control.IsPlaying() && !_mediaPlayer.Control.IsFinished())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_154 = __this->____mediaPlayer_1;
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_154, NULL);
		NullCheck(L_155);
		bool L_156;
		L_156 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_155);
		if (!L_156)
		{
			goto IL_0437;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_157 = __this->____mediaPlayer_1;
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_157, NULL);
		NullCheck(L_158);
		bool L_159;
		L_159 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsFinished() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_158);
		if (L_159)
		{
			goto IL_0437;
		}
	}
	{
		// long ts = _buffer[0][(_start + _bufferSize / 2) % _bufferSize].timestamp - _baseTimestamp;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_160 = __this->____buffer_0;
		NullCheck(L_160);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_161;
		L_161 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_160, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		int32_t L_162 = __this->____start_3;
		int32_t L_163 = __this->____bufferSize_5;
		int32_t L_164 = __this->____bufferSize_5;
		NullCheck(L_161);
		int32_t L_165 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_162, ((int32_t)(L_163/2))))%L_164));
		TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* L_166 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		int64_t L_167 = L_166->___timestamp_1;
		int64_t L_168 = __this->____baseTimestamp_6;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_167, L_168));
		// double dif = Mathf.Abs(((float)((double)_elapsedTimeSinceBase * 10000000) - ts));
		float L_169 = __this->____elapsedTimeSinceBase_7;
		int64_t L_170 = V_9;
		float L_171;
		L_171 = fabsf(((float)il2cpp_codegen_subtract(((float)((double)il2cpp_codegen_multiply(((double)L_169), (10000000.0)))), ((float)L_170))));
		// double threshold = (_buffer[0].Length / 2) / _mediaPlayer.Info.GetVideoFrameRate() * 10000000;
		List_1_t1048B9F21524C27C8E2A9A8CFFA2CB7D2025D85C* L_172 = __this->____buffer_0;
		NullCheck(L_172);
		TimestampedRenderTextureU5BU5D_tD6F79E77BDCD5269F935F52BBAF601739B17A86A* L_173;
		L_173 = List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234(L_172, 0, List_1_get_Item_m60DA0F07365163B0EAD600AB1DA7B88B2DC3E234_RuntimeMethod_var);
		NullCheck(L_173);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_174 = __this->____mediaPlayer_1;
		NullCheck(L_174);
		RuntimeObject* L_175;
		L_175 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_174, NULL);
		NullCheck(L_175);
		float L_176;
		L_176 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_175);
		V_10 = ((double)((float)il2cpp_codegen_multiply(((float)(((float)((int32_t)(((int32_t)(((RuntimeArray*)L_173)->max_length))/2)))/L_176)), (10000000.0f))));
		// if (dif > threshold)
		double L_177 = V_10;
		if ((!(((double)((double)L_171)) > ((double)L_177))))
		{
			goto IL_0406;
		}
	}
	{
		// _elapsedTimeSinceBase = ts / 10000000f;
		int64_t L_178 = V_9;
		__this->____elapsedTimeSinceBase_7 = ((float)(((float)L_178)/(10000000.0f)));
	}

IL_0406:
	{
		// if (_resampleMode == ResampleMode.POINT)
		int32_t L_179 = __this->____resampleMode_9;
		if (L_179)
		{
			goto IL_0416;
		}
	}
	{
		// PointUpdate();
		Resampler_PointUpdate_mEB0AA7CFE2371E5637EDA5087A0FA94FDE5C0044(__this, NULL);
		goto IL_0425;
	}

IL_0416:
	{
		// else if (_resampleMode == ResampleMode.LINEAR)
		int32_t L_180 = __this->____resampleMode_9;
		if ((!(((uint32_t)L_180) == ((uint32_t)1))))
		{
			goto IL_0425;
		}
	}
	{
		// LinearUpdate();
		Resampler_LinearUpdate_m1521602F314775644E937A29B811249F535E7586(__this, NULL);
	}

IL_0425:
	{
		// _elapsedTimeSinceBase += Time.unscaledDeltaTime;
		float L_181 = __this->____elapsedTimeSinceBase_7;
		float L_182;
		L_182 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->____elapsedTimeSinceBase_7 = ((float)il2cpp_codegen_add(L_181, L_182));
	}

IL_0437:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Resampler::UpdateTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resampler_UpdateTimestamp_mC8800BD9D28B9BFC5B1198F1C047159DCEB21C5F (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, const RuntimeMethod* method) 
{
	{
		// if (_lastDisplayedTimestamp != _currentDisplayedTimestamp)
		int64_t L_0 = __this->____lastDisplayedTimestamp_13;
		int64_t L_1 = __this->____currentDisplayedTimestamp_15;
		if ((((int64_t)L_0) == ((int64_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		// _lastDisplayedTimestamp = _currentDisplayedTimestamp;
		int64_t L_2 = __this->____currentDisplayedTimestamp_15;
		__this->____lastDisplayedTimestamp_13 = L_2;
		// _frameDisplayedTimer = 0;
		__this->____frameDisplayedTimer_14 = 0;
	}

IL_0021:
	{
		// _frameDisplayedTimer++;
		int32_t L_3 = __this->____frameDisplayedTimer_14;
		__this->____frameDisplayedTimer_14 = ((int32_t)il2cpp_codegen_add(L_3, 1));
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
// System.Void RenderHeads.Media.AVProVideo.Resampler/TimestampedRenderTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimestampedRenderTexture__ctor_mE2669A04C003AA001F157709DF20B07BC3036608 (TimestampedRenderTexture_t9349BBFB2607FF19EF9129C4CEF4AC7E5299353C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m1411BB18992F52CFFC4FF0221A11824B3DBB5E79 (Stream_t0D79ED93734C773E02FD83DAFA32519323CDC63B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: RenderHeads.Media.AVProVideo.Stream/Chunk
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_pinvoke(const Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D& unmarshaled, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
}
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_pinvoke_back(const Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_pinvoke& marshaled, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
}
// Conversion method for clean up from marshalling of: RenderHeads.Media.AVProVideo.Stream/Chunk
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_pinvoke_cleanup(Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: RenderHeads.Media.AVProVideo.Stream/Chunk
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_com(const Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D& unmarshaled, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
}
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_com_back(const Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_com& marshaled, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
}
// Conversion method for clean up from marshalling of: RenderHeads.Media.AVProVideo.Stream/Chunk
IL2CPP_EXTERN_C void Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshal_com_cleanup(Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RenderHeads.Media.AVProVideo.Demos.AutoRotate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRotate_Awake_m41AD8CAAADB3A9889F01D5137AD0B52E5A3127F3 (AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973* __this, const RuntimeMethod* method) 
{
	{
		// Randomise();
		AutoRotate_Randomise_m14AB1FFF1B93AF4C9F25775256BCA0EEDC5B74EF(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRotate_Update_m0578EB19AEFF5899BC399C1E919C480ED139AD11 (AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Rotate(x * Time.deltaTime, y * Time.deltaTime, z * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___x_4;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_3 = __this->___y_5;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_5 = __this->___z_6;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_4)), ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		// _timer -= Time.deltaTime;
		float L_7 = __this->____timer_7;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____timer_7 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// if (_timer <= 0f)
		float L_9 = __this->____timer_7;
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// Randomise();
		AutoRotate_Randomise_m14AB1FFF1B93AF4C9F25775256BCA0EEDC5B74EF(__this, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.AutoRotate::Randomise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRotate_Randomise_m14AB1FFF1B93AF4C9F25775256BCA0EEDC5B74EF (AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float s = 32f;
		V_0 = (32.0f);
		// x = Random.Range(-s, s);
		float L_0 = V_0;
		float L_1 = V_0;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_0)), L_1, NULL);
		__this->___x_4 = L_2;
		// y = Random.Range(-s, s);
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_3)), L_4, NULL);
		__this->___y_5 = L_5;
		// z = Random.Range(-s, s);
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_6)), L_7, NULL);
		__this->___z_6 = L_8;
		// _timer = Random.Range(5f, 10f);
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((5.0f), (10.0f), NULL);
		__this->____timer_7 = L_9;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRotate__ctor_m4D45D0CE6F5D793D7EA9B892C3DC7928E19404B1 (AutoRotate_tF0A1BCA91A01D7C32326706CD4043A9C66352973* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::LoadVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeVideoExample_LoadVideo_mE0B78F6635074A43BEC8686680056598E3B00508 (ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	{
		// _mediaPlayer.OpenVideoFromFile(MediaPlayer.FileLocation.RelativeToStreamingAssetsFolder, filePath, true);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_4;
		String_t* L_1 = ___filePath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE(L_0, 2, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeVideoExample_OnGUI_mEE3D131E0D8E6954DE9B357BFF319A7CF1A1455A (ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139D1616D057BD9D2BE92880842BDBEF2EF78030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEC1DB23B3A2ADCD06BE13A8686B7BC8F53DB92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549C86628792ECA1347D190E1C703E69D6236CEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC12A04BC977FC49A2A760A6D510E47F5D36271B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUILayout.Button("video1"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_1;
		L_1 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral4CEC1DB23B3A2ADCD06BE13A8686B7BC8F53DB92, L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// LoadVideo("video1.mp4");
		ChangeVideoExample_LoadVideo_mE0B78F6635074A43BEC8686680056598E3B00508(__this, _stringLiteral549C86628792ECA1347D190E1C703E69D6236CEF, NULL);
	}

IL_001c:
	{
		// if (GUILayout.Button("video2"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_3;
		L_3 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralC12A04BC977FC49A2A760A6D510E47F5D36271B4, L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// LoadVideo("video2.mp4");
		ChangeVideoExample_LoadVideo_mE0B78F6635074A43BEC8686680056598E3B00508(__this, _stringLiteral139D1616D057BD9D2BE92880842BDBEF2EF78030, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeVideoExample__ctor_mFA496DAF5B03D8FE7F0539F17A9E2EAEA4C4320E (ChangeVideoExample_tA8D4F98BD95AB470959464DB9A3E076215116A9D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.DemoInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoInfo__ctor_mC307E9E0BE4CD86B8462E03BA553FE86CDC280F9 (DemoInfo_tA5E5A08015BD9C219876E57B8E1D1134146A317D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_Start_mE8250193E4F38FE7DC54C0E001D0899CD9AF2EEF (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameExtract_OnMediaPlayerEvent_m6449B134A220814CF05367D10E283EA9704168C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mediaPlayer.Events.AddListener(OnMediaPlayerEvent);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_5;
		NullCheck(L_0);
		MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* L_1;
		L_1 = MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998(L_0, NULL);
		UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* L_2 = (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*)il2cpp_codegen_object_new(UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172(L_2, __this, (intptr_t)((void*)FrameExtract_OnMediaPlayerEvent_m6449B134A220814CF05367D10E283EA9704168C0_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA(L_1, L_2, UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		// _displaySheet = RenderTexture.GetTemporary(Screen.width, Screen.height, 0);
		int32_t L_3;
		L_3 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_3, L_4, 0, NULL);
		__this->____displaySheet_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displaySheet_13), (void*)L_5);
		// _displaySheet.useMipMap = false;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->____displaySheet_13;
		NullCheck(L_6);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_6, (bool)0, NULL);
		// _displaySheet.autoGenerateMips = false;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->____displaySheet_13;
		NullCheck(L_7);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_7, (bool)0, NULL);
		// _displaySheet.antiAliasing = 1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->____displaySheet_13;
		NullCheck(L_8);
		RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A(L_8, 1, NULL);
		// _displaySheet.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->____displaySheet_13;
		NullCheck(L_9);
		bool L_10;
		L_10 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_9, NULL);
		// RenderTexture.active = _displaySheet;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->____displaySheet_13;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_11, NULL);
		// GL.Clear(false, true, Color.black, 0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_mD748D5A6771761276FC9D2575A6873E51F90EA98((bool)0, (bool)1, L_12, (0.0f), NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::OnMediaPlayerEvent(RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_OnMediaPlayerEvent_m6449B134A220814CF05367D10E283EA9704168C0 (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___et1, int32_t ___errorCode2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___et1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___et1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// mp.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___mp0;
		NullCheck(L_2);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_2, NULL);
		// mp.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = ___mp0;
		NullCheck(L_3);
		MediaPlayer_Pause_m676939B47ECC2CEC01BC28FDC575BAAF3576F936(L_3, NULL);
		// break;
		return;
	}

IL_0015:
	{
		// OnNewMediaReady();
		FrameExtract_OnNewMediaReady_m8F7875B561D4EEC787676D331576B94D0AFB002A(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::OnNewMediaReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_OnNewMediaReady_m8F7875B561D4EEC787676D331576B94D0AFB002A (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// IMediaInfo info = _mediaPlayer.Info;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_0, NULL);
		// if (_texture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____texture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_1;
			goto IL_002b;
		}
	}
	{
		// Texture2D.Destroy(_texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->____texture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// _texture = null;
		__this->____texture_12 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_12), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		G_B2_0 = G_B1_0;
	}

IL_002b:
	{
		// int textureWidth = info.GetVideoWidth();
		RuntimeObject* L_5 = G_B2_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoWidth() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		// int textureHeight = info.GetVideoHeight();
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoHeight() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_5);
		V_1 = L_7;
		// _texture = new Texture2D(textureWidth, textureHeight, TextureFormat.ARGB32, false);
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_10, L_8, L_9, 5, (bool)0, NULL);
		__this->____texture_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_12), (void*)L_10);
		// _timeStepSeconds = (_mediaPlayer.Info.GetDurationMs() / 1000f) / (float)NumFrames;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11 = __this->____mediaPlayer_5;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_11, NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_12);
		__this->____timeStepSeconds_10 = ((float)(((float)(L_13/(1000.0f)))/(8.0f)));
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_OnDestroy_mD8EEE22571738760BABB5129073D3A873D277D92 (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____texture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Texture2D.Destroy(_texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____texture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// _texture = null;
		__this->____texture_12 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_12), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
	}

IL_0020:
	{
		// if (_displaySheet != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->____displaySheet_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(_displaySheet);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____displaySheet_13;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_5, NULL);
		// _displaySheet = null;
		__this->____displaySheet_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displaySheet_13), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_Update_m874F0C948C253296EBC443DD5922B4395CF26BFD (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null && _frameIndex >=0 && _frameIndex < NumFrames)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____texture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = __this->____frameIndex_11;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->____frameIndex_11;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0034;
		}
	}
	{
		// ExtractNextFrame();
		FrameExtract_ExtractNextFrame_m6F420F64FBCBB19A2A0819969CE0C3AA042ADAFB(__this, NULL);
		// _frameIndex++;
		int32_t L_4 = __this->____frameIndex_11;
		__this->____frameIndex_11 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::ProcessExtractedFrame(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// RenderTexture.active = _displaySheet;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____displaySheet_13;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// GL.LoadPixelMatrix(0f, _displaySheet.width, _displaySheet.height, 0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->____displaySheet_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->____displaySheet_13;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		GL_LoadPixelMatrix_m4E6F7BAFD87A2FE91048B0F602519811690CAA63((0.0f), ((float)L_2), ((float)L_4), (0.0f), NULL);
		// Rect sourceRect = new Rect(0f, 0f, 1f, 1f);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		// float thumbSpace = 8f;
		V_1 = (8.0f);
		// float thumbWidth = ((float)_displaySheet.width / (float)NumFrames) - thumbSpace;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____displaySheet_13;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		float L_7 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(((float)(((float)L_6)/(8.0f))), L_7));
		// float thumbHeight = thumbWidth / ((float)texture.width / (float)texture.height);
		float L_8 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___texture0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___texture0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_3 = ((float)(L_8/((float)(((float)L_10)/((float)L_12)))));
		// float thumbPos = ((thumbWidth + thumbSpace) * (float)_frameIndex);
		float L_13 = V_2;
		float L_14 = V_1;
		int32_t L_15 = __this->____frameIndex_11;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_13, L_14)), ((float)L_15)));
		// Rect destRect = new Rect(thumbPos, (_displaySheet.height / 2f) - (thumbHeight / 2f), thumbWidth, thumbHeight);
		float L_16 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->____displaySheet_13;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		float L_19 = V_3;
		float L_20 = V_2;
		float L_21 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), L_16, ((float)il2cpp_codegen_subtract(((float)(((float)L_18)/(2.0f))), ((float)(L_19/(2.0f))))), L_20, L_21, /*hidden argument*/NULL);
		// Graphics.DrawTexture(destRect, texture, sourceRect, 0, 0, 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = ___texture0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m308AE19DE30E95FE9B0ED7A244021A46AC209775(L_22, L_23, L_24, 0, 0, 0, 0, NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// GL.InvalidateState();
		GL_InvalidateState_mCC1D15C8888292B7F5E0F049F1FAD834728693A1(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::ExtractNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_ExtractNextFrame_m6F420F64FBCBB19A2A0819969CE0C3AA042ADAFB (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float timeSeconds = _frameIndex * _timeStepSeconds;
		int32_t L_0 = __this->____frameIndex_11;
		float L_1 = __this->____timeStepSeconds_10;
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_0), L_1));
		// if (!_asyncExtract)
		bool L_2 = __this->____asyncExtract_9;
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		// _texture = _mediaPlayer.ExtractFrame(_texture, timeSeconds, _accurateSeek, _timeoutMs);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayer_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->____texture_12;
		float L_5 = V_0;
		bool L_6 = __this->____accurateSeek_6;
		int32_t L_7 = __this->____timeoutMs_7;
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8;
		L_8 = MediaPlayer_ExtractFrame_mA70FE78B46CA0DCD74E7A2450052512449651B06(L_3, L_4, L_5, L_6, L_7, NULL);
		__this->____texture_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_12), (void*)L_8);
		// ProcessExtractedFrame(_texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->____texture_12;
		FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA(__this, L_9, NULL);
		return;
	}

IL_0048:
	{
		// _mediaPlayer.ExtractFrameAsync(_texture, ProcessExtractedFrame, timeSeconds, _accurateSeek, _timeoutMs);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10 = __this->____mediaPlayer_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->____texture_12;
		ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0* L_12 = (ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0*)il2cpp_codegen_object_new(ProcessExtractedFrame_t9A72FA3AC65AB364CF1D991D5C1460DD1DAAFFF0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ProcessExtractedFrame__ctor_m62690CC0859B25A7D05A9F64F0A48DFCD8E00F09(L_12, __this, (intptr_t)((void*)FrameExtract_ProcessExtractedFrame_mE3463D901B6016EA765F115949D619362EC79FFA_RuntimeMethod_var), NULL);
		float L_13 = V_0;
		bool L_14 = __this->____accurateSeek_6;
		int32_t L_15 = __this->____timeoutMs_7;
		NullCheck(L_10);
		MediaPlayer_ExtractFrameAsync_m35BAA3F688D1438CB554A398FEEFF21214334CDB(L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract_OnGUI_m65117A368D1C7306FAB13E403E6A3E9372BF04B9 (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128FE5FA0E7C5DBD7591F16EB76AD7CB9EC8D5EA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// GUI.skin = _skin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->____skin_8;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_0, NULL);
		// if (_displaySheet != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->____displaySheet_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// GUI.DrawTexture(new Rect(0f, 0f, Screen.width, Screen.height), _displaySheet, ScaleMode.ScaleToFit, false);
		int32_t L_3;
		L_3 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_5), (0.0f), (0.0f), ((float)L_3), ((float)L_4), /*hidden argument*/NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->____displaySheet_13;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mD37A6215E8A48EF54F88D27698505A09CFADBF0E(L_5, L_6, 2, (bool)0, NULL);
	}

IL_0041:
	{
		// float debugGuiScale = 4f * (Screen.height / 1080f);
		int32_t L_7;
		L_7 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		V_0 = ((float)il2cpp_codegen_multiply((4.0f), ((float)(((float)L_7)/(1080.0f)))));
		// GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(debugGuiScale, debugGuiScale, 1.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_10 = V_0;
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_10, L_11, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_8, L_9, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC(L_13, NULL);
		// GUILayout.Space(16f);
		GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE((16.0f), NULL);
		// GUILayout.BeginHorizontal(GUILayout.ExpandWidth(true), GUILayout.Width(Screen.width / debugGuiScale));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_14 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_15 = L_14;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_16;
		L_16 = GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692((bool)1, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_16);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = L_15;
		int32_t L_18;
		L_18 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_19 = V_0;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_20;
		L_20 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(((float)(((float)L_18)/L_19)), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_20);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_17, NULL);
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE(NULL);
		// if (GUILayout.Button("Start Extracting Frames"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_21;
		L_21 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_22;
		L_22 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral128FE5FA0E7C5DBD7591F16EB76AD7CB9EC8D5EA, L_21, NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		// _frameIndex = 0;
		__this->____frameIndex_11 = 0;
		// RenderTexture.active = _displaySheet;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = __this->____displaySheet_13;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_23, NULL);
		// GL.Clear(false, true, Color.black, 0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_mD748D5A6771761276FC9D2575A6873E51F90EA98((bool)0, (bool)1, L_24, (0.0f), NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
	}

IL_00e1:
	{
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE(NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.FrameExtract::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameExtract__ctor_mE3E62F231A8CC5DF18AF2015F42B4C755AE1F5A9 (FrameExtract_tBD9ABB28D14ED0BD0ABEC204344244D2C2102C1E* __this, const RuntimeMethod* method) 
{
	{
		// public int _timeoutMs = 250;
		__this->____timeoutMs_7 = ((int32_t)250);
		// private int _frameIndex = -1;
		__this->____frameIndex_11 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D_Update_mD3F7F39F8ECD33312B105554D4C86C6633541661 (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timer -= Time.deltaTime;
		float L_0 = __this->____timer_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____timer_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_timer <= 0f)
		float L_2 = __this->____timer_7;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// _timer = SpawnTime;
		__this->____timer_7 = (0.25f);
		// SpawnCube();
		Mapping3D_SpawnCube_m11FFAA027B7AB965320D320E3F8D69581A50E1CE(__this, NULL);
		// if (_cubes.Count > MaxCubes)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____cubes_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		// RemoveCube();
		Mapping3D_RemoveCube_m62708F88D368CBD72CF48B41E49D4A22DCC15D39(__this, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::SpawnCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D_SpawnCube_m11FFAA027B7AB965320D320E3F8D69581A50E1CE (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// Quaternion rotation = Quaternion.Euler(Random.Range(-180f, 180f), Random.Range(-180f, 180f), Random.Range(-180f, 180f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// float scale = Random.Range(0.1f, 0.6f);
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (0.600000024f), NULL);
		V_1 = L_4;
		// GameObject go = (GameObject)GameObject.Instantiate(_cubePrefab, this.transform.position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____cubePrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_9;
		// Transform t = go.GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_10, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		// t.localScale = new Vector3(scale, scale, scale);
		float L_12 = V_1;
		float L_13 = V_1;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_15, NULL);
		// _cubes.Add(go);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->____cubes_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_16);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_16, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::RemoveCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D_RemoveCube_m62708F88D368CBD72CF48B41E49D4A22DCC15D39 (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject go = _cubes[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____cubes_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// _cubes.RemoveAt(0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->____cubes_8;
		NullCheck(L_2);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_2, 0, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// Destroy(go);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.Mapping3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping3D__ctor_m918F9A8CF9DA8F57D7336E4C2FF48ACAE4611FD7 (Mapping3D_t7EA0B442321DA4556AB64A846B54F5F79AD11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _timer = SpawnTime;
		__this->____timer_7 = (0.25f);
		// private List<GameObject> _cubes = new List<GameObject>(32);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C(L_0, ((int32_t)32), List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		__this->____cubes_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cubes_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_Update_m313AEE15F860A4342E85EBEE027596F4A8E3C80E (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE V_0;
	memset((&V_0), 0, sizeof(V_0));
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* V_1 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_000e:
	{
		// foreach( DisplayUGUI gui in m_aAddedVideos )
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_1 = __this->___m_aAddedVideos_6;
		NullCheck(L_1);
		Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE L_2;
		L_2 = List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0(L_1, List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91((&V_0), Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_001c_1:
			{
				// foreach( DisplayUGUI gui in m_aAddedVideos )
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_3;
				L_3 = Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_inline((&V_0), Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_RuntimeMethod_var);
				V_1 = L_3;
				// if( gui.gameObject != null && gui.gameObject.activeSelf == false &&
				//     gui._mediaPlayer != null && gui._mediaPlayer.Control != null && ( gui._mediaPlayer.Control.IsPlaying() ) )
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_4 = V_1;
				NullCheck(L_4);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_6)
				{
					goto IL_0078_1;
				}
			}
			{
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_7 = V_1;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_8, NULL);
				if (L_9)
				{
					goto IL_0078_1;
				}
			}
			{
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_10 = V_1;
				NullCheck(L_10);
				MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11 = L_10->____mediaPlayer_36;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_12)
				{
					goto IL_0078_1;
				}
			}
			{
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_13 = V_1;
				NullCheck(L_13);
				MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_14 = L_13->____mediaPlayer_36;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_14, NULL);
				if (!L_15)
				{
					goto IL_0078_1;
				}
			}
			{
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_16 = V_1;
				NullCheck(L_16);
				MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_17 = L_16->____mediaPlayer_36;
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_17, NULL);
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_18);
				if (!L_19)
				{
					goto IL_0078_1;
				}
			}
			{
				// gui.gameObject.SetActive( true );
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_20 = V_1;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				NullCheck(L_21);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
			}

IL_0078_1:
			{
				// foreach( DisplayUGUI gui in m_aAddedVideos )
				bool L_22;
				L_22 = Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1((&V_0), Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::UpdateVideosLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_UpdateVideosLayout_m1761E98737D50A7A1CE6DAD6D640F853A450A6D6 (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ADAC31F9DB3F58EC16A6B99925F083D8AF04AFE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_0 = NULL;
	{
		// GameObject canvasPanel = GameObject.Find("Canvas/Panel");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9ADAC31F9DB3F58EC16A6B99925F083D8AF04AFE, NULL);
		V_0 = L_0;
		// RectTransform canvasRectTransform = ( canvasPanel ) ? canvasPanel.GetComponent<RectTransform>() : null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)(NULL));
		goto IL_001c;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_3, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		// if( canvasRectTransform )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_00f8;
		}
	}
	{
		// Vector2 canvasSize = canvasRectTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_1;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		V_2 = L_8;
		// Vector2 halfCanvasSize = new Vector2( canvasSize.x * 0.5f, canvasSize.y * 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_2;
		float L_12 = L_11.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_multiply(L_10, (0.5f))), ((float)il2cpp_codegen_multiply(L_12, (0.5f))), NULL);
		// int iNumMovies = m_aAddedVideos.Count;
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_13 = __this->___m_aAddedVideos_6;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_inline(L_13, List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var);
		V_4 = L_14;
		// int iNumColRows = Mathf.CeilToInt (Mathf.Sqrt( iNumMovies ));
		int32_t L_15 = V_4;
		float L_16;
		L_16 = sqrtf(((float)L_15));
		int32_t L_17;
		L_17 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(L_16, NULL);
		V_5 = L_17;
		// float fWidth = (1.0f / iNumColRows) * canvasSize.x;
		int32_t L_18 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_2;
		float L_20 = L_19.___x_0;
		V_6 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_18))), L_20));
		// float fHeight = (1.0f / iNumColRows) * canvasSize.y;
		int32_t L_21 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		float L_23 = L_22.___y_1;
		V_7 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_21))), L_23));
		// for( int i = 0; i < iNumMovies; ++i )
		V_8 = 0;
		goto IL_00f2;
	}

IL_0093:
	{
		// DisplayUGUI gui = m_aAddedVideos[ i ];
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_24 = __this->___m_aAddedVideos_6;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_26;
		L_26 = List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B(L_24, L_25, List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B_RuntimeMethod_var);
		// int x = i % iNumColRows;
		int32_t L_27 = V_8;
		int32_t L_28 = V_5;
		V_9 = ((int32_t)(L_27%L_28));
		// int y = i / iNumColRows;
		int32_t L_29 = V_8;
		int32_t L_30 = V_5;
		V_10 = ((int32_t)(L_29/L_30));
		// gui.rectTransform.anchoredPosition = new Vector2( ((fWidth * x) - halfCanvasSize.x), ((fHeight * -y) + halfCanvasSize.y) );
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_31 = L_26;
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32;
		L_32 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_31, NULL);
		float L_33 = V_6;
		int32_t L_34 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_3;
		float L_36 = L_35.___x_0;
		float L_37 = V_7;
		int32_t L_38 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_3;
		float L_40 = L_39.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_33, ((float)L_34))), L_36)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, ((float)((-L_38))))), L_40)), /*hidden argument*/NULL);
		NullCheck(L_32);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_32, L_41, NULL);
		// gui.rectTransform.sizeDelta = new Vector2( fWidth, fHeight );
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42;
		L_42 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_31, NULL);
		float L_43 = V_6;
		float L_44 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_45), L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_42, L_45, NULL);
		// for( int i = 0; i < iNumMovies; ++i )
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f2:
	{
		// for( int i = 0; i < iNumMovies; ++i )
		int32_t L_47 = V_8;
		int32_t L_48 = V_4;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0093;
		}
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::AddVideoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_AddVideoClicked_mE9A6EDC77F6EE71059B56601739F5175715F38A0 (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_mF42BBC7649D50DB9C00BCFEC7A51B0EE4BB7F349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_mCF68B7476EF38FF551B5EE74372DBBAB18C6CC60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_m2D7D7F7295EAD5822BED637D0BB48740DE4726C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m27378412EDC3ABA52227B1353E193FBB57CE697A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC945DD38D3EBAE45DF9B5FF437DEA7F5705890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68A6CE0E5035D3BA57FC1904D9B94D8DBB4AAC2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ADAC31F9DB3F58EC16A6B99925F083D8AF04AFE);
		s_Il2CppMethodInitialized = true;
	}
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* V_2 = NULL;
	{
		// ++m_NumVideosAdded;
		int32_t L_0 = __this->___m_NumVideosAdded_5;
		__this->___m_NumVideosAdded_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// GameObject newMediaPlayerGameObject = new GameObject( "AVPro MediaPlayer " + m_NumVideosAdded.ToString() );
		int32_t* L_1 = (&__this->___m_NumVideosAdded_5);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5EC945DD38D3EBAE45DF9B5FF437DEA7F5705890, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		// MediaPlayer newMediaPlayer = newMediaPlayerGameObject.AddComponent<MediaPlayer>();
		NullCheck(L_4);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5;
		L_5 = GameObject_AddComponent_TisMediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_m2D7D7F7295EAD5822BED637D0BB48740DE4726C6(L_4, GameObject_AddComponent_TisMediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5_m2D7D7F7295EAD5822BED637D0BB48740DE4726C6_RuntimeMethod_var);
		V_0 = L_5;
		// newMediaPlayer.m_VideoPath = m_videoPath;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = V_0;
		String_t* L_7 = __this->___m_videoPath_4;
		NullCheck(L_6);
		L_6->___m_VideoPath_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_VideoPath_5), (void*)L_7);
		// newMediaPlayer.m_AutoStart = true;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8 = V_0;
		NullCheck(L_8);
		L_8->___m_AutoStart_7 = (bool)1;
		// newMediaPlayer.m_Loop = true;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = V_0;
		NullCheck(L_9);
		L_9->___m_Loop_8 = (bool)1;
		// GameObject canvasPanel = GameObject.Find("Canvas/Panel");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9ADAC31F9DB3F58EC16A6B99925F083D8AF04AFE, NULL);
		V_1 = L_10;
		// if( canvasPanel != null )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00ef;
		}
	}
	{
		// GameObject newGuiGameObject = new GameObject( "AVPro Video uGUI " + m_NumVideosAdded.ToString() );
		int32_t* L_13 = (&__this->___m_NumVideosAdded_5);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral68A6CE0E5035D3BA57FC1904D9B94D8DBB4AAC2A, L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_16, L_15, NULL);
		// newGuiGameObject.transform.parent = canvasPanel.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_18);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_18, L_20, NULL);
		// newGuiGameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_17;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// newGuiGameObject.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_22, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		// newGuiGameObject.AddComponent<CanvasRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_22;
		NullCheck(L_24);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_25;
		L_25 = GameObject_AddComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_mF42BBC7649D50DB9C00BCFEC7A51B0EE4BB7F349(L_24, GameObject_AddComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_mF42BBC7649D50DB9C00BCFEC7A51B0EE4BB7F349_RuntimeMethod_var);
		// DisplayUGUI newGuiObject = newGuiGameObject.AddComponent<DisplayUGUI>();
		NullCheck(L_24);
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_26;
		L_26 = GameObject_AddComponent_TisDisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_mCF68B7476EF38FF551B5EE74372DBBAB18C6CC60(L_24, GameObject_AddComponent_TisDisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444_mCF68B7476EF38FF551B5EE74372DBBAB18C6CC60_RuntimeMethod_var);
		V_2 = L_26;
		// newGuiObject._mediaPlayer = newMediaPlayer;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_27 = V_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_28 = V_0;
		NullCheck(L_27);
		L_27->____mediaPlayer_36 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____mediaPlayer_36), (void*)L_28);
		// newGuiObject._scaleMode = ScaleMode.StretchToFill;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_29 = V_2;
		NullCheck(L_29);
		L_29->____scaleMode_39 = 0;
		// newGuiObject.rectTransform.localScale = Vector3.one;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_30 = V_2;
		NullCheck(L_30);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31;
		L_31 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_32, NULL);
		// newGuiObject.rectTransform.pivot = new Vector2( 0.0f, 1.0f );
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_33 = V_2;
		NullCheck(L_33);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_34, L_35, NULL);
		// m_aAddedVideos.Add( newGuiObject );
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_36 = __this->___m_aAddedVideos_6;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_37 = V_2;
		NullCheck(L_36);
		List_1_Add_m27378412EDC3ABA52227B1353E193FBB57CE697A_inline(L_36, L_37, List_1_Add_m27378412EDC3ABA52227B1353E193FBB57CE697A_RuntimeMethod_var);
		// UpdateVideosLayout();
		SampleApp_Multiple_UpdateVideosLayout_m1761E98737D50A7A1CE6DAD6D640F853A450A6D6(__this, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::RemoveVideoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_RemoveVideoClicked_m61A32C2B4DD78E1DBAD4B044D87E1C4ED9BEB08A (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD00278AB8D6A3F270E78BEC2E246D73EFEE9DEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* V_1 = NULL;
	{
		// if (m_aAddedVideos.Count > 0)
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_0 = __this->___m_aAddedVideos_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_inline(L_0, List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// int index = Random.Range(0, m_aAddedVideos.Count);
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_2 = __this->___m_aAddedVideos_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_inline(L_2, List_1_get_Count_m91A164FEDB01AB1166390FA6931AF8E0F20CC9C4_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_3, NULL);
		V_0 = L_4;
		// DisplayUGUI gui = m_aAddedVideos[index];
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_5 = __this->___m_aAddedVideos_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_7;
		L_7 = List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B(L_5, L_6, List_1_get_Item_m103E35D2BE8CCE6582EF788CFE7C4AC58C50909B_RuntimeMethod_var);
		V_1 = L_7;
		// if (gui._mediaPlayer != null)
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_8 = V_1;
		NullCheck(L_8);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = L_8->____mediaPlayer_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// gui._mediaPlayer.CloseVideo();
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_11 = V_1;
		NullCheck(L_11);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12 = L_11->____mediaPlayer_36;
		NullCheck(L_12);
		MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB(L_12, NULL);
		// GameObject.Destroy(gui._mediaPlayer.gameObject);
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_13 = V_1;
		NullCheck(L_13);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_14 = L_13->____mediaPlayer_36;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_15, NULL);
		// gui._mediaPlayer = null;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_16 = V_1;
		NullCheck(L_16);
		L_16->____mediaPlayer_36 = (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____mediaPlayer_36), (void*)(MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*)NULL);
	}

IL_005d:
	{
		// GameObject.Destroy(gui.gameObject);
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_18, NULL);
		// m_aAddedVideos.RemoveAt(index);
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_19 = __this->___m_aAddedVideos_6;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		List_1_RemoveAt_mD00278AB8D6A3F270E78BEC2E246D73EFEE9DEE9(L_19, L_20, List_1_RemoveAt_mD00278AB8D6A3F270E78BEC2E246D73EFEE9DEE9_RuntimeMethod_var);
		// m_NumVideosAdded--;
		int32_t L_21 = __this->___m_NumVideosAdded_5;
		__this->___m_NumVideosAdded_5 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple_OnDestroy_mA605FFBE3F7BA434455D32A10C7ADE45C7FFC4C8 (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m384C7F087AB5903C434492669A8887231B0D99D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE V_0;
	memset((&V_0), 0, sizeof(V_0));
	DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* V_1 = NULL;
	{
		// foreach( DisplayUGUI gui in m_aAddedVideos )
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_0 = __this->___m_aAddedVideos_6;
		NullCheck(L_0);
		Enumerator_tD362311F0A70088473055714ECF89A481AA2AFCE L_1;
		L_1 = List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0(L_0, List_1_GetEnumerator_m2347EBA0B40E56955F4BA3CF5453483729C439B0_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91((&V_0), Enumerator_Dispose_mB8383C331E0903B56E2FF274D3E15F83CEA5EB91_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_000e_1:
			{
				// foreach( DisplayUGUI gui in m_aAddedVideos )
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_2;
				L_2 = Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_inline((&V_0), Enumerator_get_Current_m760D2232E3F2213E22C0DC63ECC753F2A4070AB8_RuntimeMethod_var);
				V_1 = L_2;
				// if( gui._mediaPlayer )
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_3 = V_1;
				NullCheck(L_3);
				MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = L_3->____mediaPlayer_36;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
				if (!L_5)
				{
					goto IL_002a_1;
				}
			}
			{
				// gui._mediaPlayer = null;
				DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_6 = V_1;
				NullCheck(L_6);
				L_6->____mediaPlayer_36 = (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_6->____mediaPlayer_36), (void*)(MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5*)NULL);
			}

IL_002a_1:
			{
				// foreach( DisplayUGUI gui in m_aAddedVideos )
				bool L_7;
				L_7 = Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1((&V_0), Enumerator_MoveNext_mC318B84531F858E7303EC76B2933D255C91C86E1_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// m_aAddedVideos.Clear();
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_8 = __this->___m_aAddedVideos_6;
		NullCheck(L_8);
		List_1_Clear_m384C7F087AB5903C434492669A8887231B0D99D6_inline(L_8, List_1_Clear_m384C7F087AB5903C434492669A8887231B0D99D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleApp_Multiple__ctor_mA1659614DF8FF231AEC30B1E6CF58F5E582DA09B (SampleApp_Multiple_t29F10C6D0E52B9A7F283B8C35AC96712D0972793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0B64087067DDF9FFD4075354C1749139ECB6B531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC9C7CD694D51D6AAA37E32F457C64063A75EC6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string m_videoPath = "BigBuckBunny_360p30.mp4";
		__this->___m_videoPath_4 = _stringLiteralDC9C7CD694D51D6AAA37E32F457C64063A75EC6B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_videoPath_4), (void*)_stringLiteralDC9C7CD694D51D6AAA37E32F457C64063A75EC6B);
		// private List<DisplayUGUI>    m_aAddedVideos = new List<DisplayUGUI>();
		List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9* L_0 = (List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9*)il2cpp_codegen_object_new(List_1_t36D73796B9509F4BFDF5CEAC14C7B9C58C72A5B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0B64087067DDF9FFD4075354C1749139ECB6B531(L_0, List_1__ctor_m0B64087067DDF9FFD4075354C1749139ECB6B531_RuntimeMethod_var);
		__this->___m_aAddedVideos_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_aAddedVideos_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeAudioTrack_OnEnable_m8BCFAFC7411E84EEA27A9AAF726772FB77BA20AB (ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4* __this, const RuntimeMethod* method) 
{
	{
		// _isQueued = true;
		__this->____isQueued_6 = (bool)1;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeAudioTrack_Update_m7C030032693BC009B57BF9DD4B651A5E17FD1988 (ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4* __this, const RuntimeMethod* method) 
{
	{
		// if (_isQueued && IsVideoLoaded())
		bool L_0 = __this->____isQueued_6;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = ChangeAudioTrack_IsVideoLoaded_mA03B218A22DFB0A01D7244C1184A4F1B8AF38FB7(__this, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// DoChangeAudioTrack(_mediaPlayer, _trackIndex);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____mediaPlayer_4;
		int32_t L_3 = __this->____trackIndex_5;
		bool L_4;
		L_4 = ChangeAudioTrack_DoChangeAudioTrack_m41B17968A3FB5E7992A0E67C40EE0BEB7F258236(L_2, L_3, NULL);
		// _isQueued = false;
		__this->____isQueued_6 = (bool)0;
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::IsVideoLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChangeAudioTrack_IsVideoLoaded_mA03B218A22DFB0A01D7244C1184A4F1B8AF38FB7 (ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (_mediaPlayer != null && _mediaPlayer.Info != null && _mediaPlayer.Control.HasMetaData());
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____mediaPlayer_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = __this->____mediaPlayer_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::HasMetaData() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::DoChangeAudioTrack(RenderHeads.Media.AVProVideo.MediaPlayer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChangeAudioTrack_DoChangeAudioTrack_m41B17968A3FB5E7992A0E67C40EE0BEB7F258236 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A35EB0310C8FC75CC1CA30E30EA3B2165E64A3F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool result = false;
		V_0 = (bool)0;
		// int numAudioTracks = mp.Info.GetAudioTrackCount();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetAudioTrackCount() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		// if (index >= 0 && index < numAudioTracks)
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = ___index1;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		// mp.Control.SetAudioTrack(index);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = ___mp0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_6, NULL);
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(34 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetAudioTrack(System.Int32) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_7, L_8);
		// result = true;
		V_0 = (bool)1;
		goto IL_003c;
	}

IL_0026:
	{
		// Debug.LogWarning("[AVProVideo] Audio track index is out of range: " + index);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index1), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9A35EB0310C8FC75CC1CA30E30EA3B2165E64A3F, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_10, NULL);
	}

IL_003c:
	{
		// return result;
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeAudioTrack__ctor_m543B33743BE8A14660B48AF8993381D626094D78 (ChangeAudioTrack_tDCF728D987512972CB760AD480E994E7A83343A4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromBuffer_Start_m02612B08E26B674175673AE5A6F90ABD2D05F59F (LoadFromBuffer_t5F5D2F99593917CC82792B7CBFFF2A14D5A8E734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (_mp != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mp_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// byte[] buffer = File.ReadAllBytes(_filename);
		String_t* L_2 = __this->____filename_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_2, NULL);
		V_0 = L_3;
		// if (buffer != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// _mp.OpenVideoFromBuffer(buffer);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5 = __this->____mp_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = MediaPlayer_OpenVideoFromBuffer_m7A5FB623BB5001164FAF7509B96473D89C7C8EC4(L_5, L_6, (bool)1, NULL);
	}

IL_002b:
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.LoadFromBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromBuffer__ctor_m73D574FE101951A54E08E1393DF997145EC5A7BA (LoadFromBuffer_t5F5D2F99593917CC82792B7CBFFF2A14D5A8E734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _filename = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____filename_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filename_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromBufferInChunks_Start_m5E4F0C8B40214E1107F6DF2B34AD7640A0CA7365 (LoadFromBufferInChunks_tEA807C6C558003E89B615F9B4C62055E7E2A0703* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	int64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (_mp != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mp_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		// int chunkSize = 512;
		V_0 = ((int32_t)512);
		// byte[] chunk = new byte[chunkSize];
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// FileStream fs = File.OpenRead(_filename);
		String_t* L_4 = __this->____filename_5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5;
		L_5 = File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50(L_4, NULL);
		V_2 = L_5;
		// long fileSize = fs.Length;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_2;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		V_3 = L_7;
		// if (!_mp.StartOpenChunkedVideoFromBuffer((ulong)fileSize))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8 = __this->____mp_4;
		int64_t L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = MediaPlayer_StartOpenChunkedVideoFromBuffer_m9E062798AC5F97189E9BAEA944FB0BE406AA4711(L_8, L_9, (bool)1, NULL);
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		// _mp.CloseVideo();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11 = __this->____mp_4;
		NullCheck(L_11);
		MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB(L_11, NULL);
	}

IL_004b:
	{
		// ulong currOffset = 0;
		V_4 = ((int64_t)0);
	}

IL_004f:
	{
		// int bytesRead = fs.Read(chunk, 0, chunkSize);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		int32_t L_14 = V_0;
		NullCheck(L_12);
		int32_t L_15;
		L_15 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, L_14);
		V_5 = L_15;
		// if (bytesRead > 0)
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		// if (!_mp.AddChunkToVideoBuffer(chunk, currOffset, (ulong)bytesRead))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_17 = __this->____mp_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		uint64_t L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_17);
		bool L_21;
		L_21 = MediaPlayer_AddChunkToVideoBuffer_m456514BE995C43857DB36D30427D4A0652C52037(L_17, L_18, L_19, ((int64_t)L_20), NULL);
		if (L_21)
		{
			goto IL_007d;
		}
	}
	{
		// _mp.CloseVideo();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_22 = __this->____mp_4;
		NullCheck(L_22);
		MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB(L_22, NULL);
	}

IL_007d:
	{
		// currOffset += (ulong)bytesRead;
		uint64_t L_23 = V_4;
		int32_t L_24 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)L_24)));
		// while (true)
		goto IL_004f;
	}

IL_0087:
	{
		// if (!_mp.EndOpenChunkedVideoFromBuffer())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_25 = __this->____mp_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = MediaPlayer_EndOpenChunkedVideoFromBuffer_m6F58A56835E3B42A9A50B6DBB7B969CAFE314DD6(L_25, NULL);
		if (L_26)
		{
			goto IL_009f;
		}
	}
	{
		// _mp.CloseVideo();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_27 = __this->____mp_4;
		NullCheck(L_27);
		MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB(L_27, NULL);
	}

IL_009f:
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.LoadFromBufferInChunks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromBufferInChunks__ctor_m75CC01CABBD5452D6F7D7C1F1B36096226910CBD (LoadFromBufferInChunks_tEA807C6C558003E89B615F9B4C62055E7E2A0703* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _filename = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____filename_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filename_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMediaOpen_Start_m066A13DAEAC22C9FBCDCD9D417A2D003C577D7B2 (NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMediaOpen_Update_mBD207AF68EA6337742ABF4420D3644B54A75EF46 (NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMediaOpen_OnGUI_m8909CF13D451F3D5F805DD220BFE96B531BC9986 (NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7AD5D8388EC82441ADA561D03ADCBDBA8F64F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFA3AB28C4D693C6B21396254C61E1629ED5D319);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9B9D1D0695F7A7084B19AB81472D1889D027F4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUILayout.Button("Pick Video File"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_1;
		L_1 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralC9B9D1D0695F7A7084B19AB81472D1889D027F4F, L_0, NULL);
		// if (GUILayout.Button("Load 'myvideo.mp4' From Camera Roll"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_3;
		L_3 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral2A7AD5D8388EC82441ADA561D03ADCBDBA8F64F5, L_2, NULL);
		// if (_player != null && !string.IsNullOrEmpty(_player.m_VideoPath))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = __this->____player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = __this->____player_4;
		NullCheck(L_6);
		String_t* L_7 = L_6->___m_VideoPath_5;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		// GUILayout.Label("Currently Playing: " + _player.m_VideoPath);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = __this->____player_4;
		NullCheck(L_9);
		String_t* L_10 = L_9->___m_VideoPath_5;
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBFA3AB28C4D693C6B21396254C61E1629ED5D319, L_10, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_11, L_12, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.NativeMediaOpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMediaOpen__ctor_m696DFA2A4EF93BAEF46EE5E0777993DF858C4A94 (NativeMediaOpen_tAB48BE6EA429AA7E9B473E4183621BA5F736BA48* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.PlaybackSync::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackSync_Start_m3FF7FF666D61312E4691A3E3D7ECA08BDFCB8E3A (PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		// _slavePlayers[i].m_Muted = true;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_0 = __this->____slavePlayers_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		L_3->___m_Muted_11 = (bool)1;
		// if (_matchVideo)
		bool L_4 = __this->____matchVideo_7;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// _slavePlayers[i].OpenVideoFromFile(_masterPlayer.m_VideoLocation, _masterPlayer.m_VideoPath, false);
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_5 = __this->____slavePlayers_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9 = __this->____masterPlayer_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___m_VideoLocation_4;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11 = __this->____masterPlayer_4;
		NullCheck(L_11);
		String_t* L_12 = L_11->___m_VideoPath_5;
		NullCheck(L_8);
		bool L_13;
		L_13 = MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE(L_8, L_10, L_12, (bool)0, NULL);
	}

IL_003f:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_15 = V_0;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_16 = __this->____slavePlayers_5;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.PlaybackSync::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackSync_LateUpdate_m676A587A45BB3366EF17BA8DC7B1B409C371DE9B (PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0389D2093F0DF02AF84FC252182068435CCB0E24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// if (_state == State.Loading)
		int32_t L_0 = __this->____state_9;
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		// if (IsAllVideosLoaded())
		bool L_1;
		L_1 = PlaybackSync_IsAllVideosLoaded_mFC07BA6D3900507860FE84EC56EFE40C972E07BB(__this, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// _masterPlayer.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____masterPlayer_4;
		NullCheck(L_2);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_2, NULL);
		// for (int i = 0; i < _slavePlayers.Length; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_001f:
	{
		// _slavePlayers[i].Play();
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_3 = __this->____slavePlayers_5;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_6, NULL);
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_8 = V_0;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_9 = __this->____slavePlayers_5;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// _state = State.Playing;
		__this->____state_9 = 1;
	}

IL_0042:
	{
		// if (_state == State.Finished)
		int32_t L_10 = __this->____state_9;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		// Debug.Log("Do Something");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0389D2093F0DF02AF84FC252182068435CCB0E24, NULL);
		return;
	}

IL_0056:
	{
		// else if (_state == State.Playing)
		int32_t L_11 = __this->____state_9;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0126;
		}
	}
	{
		// if (_masterPlayer.Control.IsPlaying())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12 = __this->____masterPlayer_4;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_12, NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_00ed;
		}
	}
	{
		// float masterTime = _masterPlayer.Control.GetCurrentTimeMs();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_15 = __this->____masterPlayer_4;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_15, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
		// for (int i = 0; i < _slavePlayers.Length; i++)
		V_2 = 0;
		goto IL_00e0;
	}

IL_0089:
	{
		// MediaPlayer slave = _slavePlayers[i];
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_18 = __this->____slavePlayers_5;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_3 = L_21;
		// float slaveTime = slave.Control.GetCurrentTimeMs();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_22 = V_3;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_22, NULL);
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_23);
		V_4 = L_24;
		// float deltaTime = Mathf.Abs(masterTime - slaveTime);
		float L_25 = V_1;
		float L_26 = V_4;
		float L_27;
		L_27 = fabsf(((float)il2cpp_codegen_subtract(L_25, L_26)));
		// if (deltaTime > _toleranceMs)
		float L_28 = __this->____toleranceMs_6;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_00dc;
		}
	}
	{
		// slave.Control.SeekFast(masterTime + (_toleranceMs * 0.5f)); // Add a bit to allow for the delay in playback start
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_29 = V_3;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_29, NULL);
		float L_31 = V_1;
		float L_32 = __this->____toleranceMs_6;
		NullCheck(L_30);
		InterfaceActionInvoker1< float >::Invoke(20 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SeekFast(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_30, ((float)il2cpp_codegen_add(L_31, ((float)il2cpp_codegen_multiply(L_32, (0.5f))))));
		// if (slave.Control.IsPaused())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_33 = V_3;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_33, NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPaused() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_34);
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		// slave.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_36 = V_3;
		NullCheck(L_36);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_36, NULL);
	}

IL_00dc:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e0:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_38 = V_2;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_39 = __this->____slavePlayers_5;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_0112;
	}

IL_00ed:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		V_5 = 0;
		goto IL_0106;
	}

IL_00f2:
	{
		// MediaPlayer slave = _slavePlayers[i];
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_40 = __this->____slavePlayers_5;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// slave.Pause();
		NullCheck(L_43);
		MediaPlayer_Pause_m676939B47ECC2CEC01BC28FDC575BAAF3576F936(L_43, NULL);
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0106:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_45 = V_5;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_46 = __this->____slavePlayers_5;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00f2;
		}
	}

IL_0112:
	{
		// if (IsPlaybackFinished(_masterPlayer))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_47 = __this->____masterPlayer_4;
		bool L_48;
		L_48 = PlaybackSync_IsPlaybackFinished_m0D1EC31BF3A550D1960E398DEB20CCC976D76A07(L_47, NULL);
		if (!L_48)
		{
			goto IL_0126;
		}
	}
	{
		// _state = State.Finished;
		__this->____state_9 = 2;
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsAllVideosLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsAllVideosLoaded_mFC07BA6D3900507860FE84EC56EFE40C972E07BB (PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (IsVideoLoaded(_masterPlayer))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____masterPlayer_4;
		bool L_1;
		L_1 = PlaybackSync_IsVideoLoaded_mEEB4009CC5EC255F8447FEC8603FD7F7CE40E82D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
		// for (int i = 0; i < _slavePlayers.Length; i++)
		V_1 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// if (!IsVideoLoaded(_slavePlayers[i]))
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_2 = __this->____slavePlayers_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = PlaybackSync_IsVideoLoaded_mEEB4009CC5EC255F8447FEC8603FD7F7CE40E82D(L_5, NULL);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		// result = false;
		V_0 = (bool)0;
		// break;
		goto IL_0037;
	}

IL_0028:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < _slavePlayers.Length; i++)
		int32_t L_8 = V_1;
		MediaPlayerU5BU5D_tAD1324B7C74C263CB65FF774DBBE16B3258AE07D* L_9 = __this->____slavePlayers_5;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0015;
		}
	}

IL_0037:
	{
		// return result;
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsVideoLoaded(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsVideoLoaded_mEEB4009CC5EC255F8447FEC8603FD7F7CE40E82D (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (player != null && player.Control != null && player.Control.HasMetaData() && player.Control.CanPlay() && player.TextureProducer.GetTextureFrameCount() > 0);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___player0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___player0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___player0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::HasMetaData() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = ___player0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::CanPlay() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10 = ___player0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_10);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureFrameCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_11);
		return (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::IsPlaybackFinished(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaybackSync_IsPlaybackFinished_m0D1EC31BF3A550D1960E398DEB20CCC976D76A07 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (player != null && player.Control != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___player0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___player0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (player.Control.IsFinished())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___player0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsFinished() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_0022:
	{
		// return result;
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.PlaybackSync::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackSync__ctor_m8BAA8B0E90F779937ACB7649357AD6360D650DFF (PlaybackSync_tDAB998181E80B88A192867CE2AB9612D2BB0092F* __this, const RuntimeMethod* method) 
{
	{
		// public float _toleranceMs = 30f;
		__this->____toleranceMs_6 = (30.0f);
		// public bool _matchVideo = true;
		__this->____matchVideo_7 = (bool)1;
		// public bool _muteSlaves = true;
		__this->____muteSlaves_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_OnEnable_mF489C14F9780B488A88CD75F51EBF17ED5F0BBD6 (StartEndPoint_t55339D8D2D40E6265D27AC4FBB4AFC2429C40BCE* __this, const RuntimeMethod* method) 
{
	{
		// _isStartQueued = true;
		__this->____isStartQueued_9 = (bool)1;
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_Update_mAE313B3443E40C457A24548F457940D2E472249D (StartEndPoint_t55339D8D2D40E6265D27AC4FBB4AFC2429C40BCE* __this, const RuntimeMethod* method) 
{
	{
		// if (IsVideoLoaded(_mediaPlayer))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_4;
		bool L_1;
		L_1 = StartEndPoint_IsVideoLoaded_m6B3B883BB305E338B7592DA9974F07732001A3C2(L_0, NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// if (_isStartQueued)
		bool L_2 = __this->____isStartQueued_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// DoStart(_mediaPlayer, _startPointSeconds);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayer_4;
		float L_4 = __this->____startPointSeconds_5;
		StartEndPoint_DoStart_m1BA79F218795AC6457DB085FEE85BEBA1E130ADC(L_3, L_4, NULL);
		// _isStartQueued = false;
		__this->____isStartQueued_9 = (bool)0;
		return;
	}

IL_002e:
	{
		// if (!_loop)
		bool L_5 = __this->____loop_7;
		if (L_5)
		{
			goto IL_0048;
		}
	}
	{
		// DoCheckEnd(_mediaPlayer, _endPointSeconds);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = __this->____mediaPlayer_4;
		float L_7 = __this->____endPointSeconds_6;
		StartEndPoint_DoCheckEnd_mA74285992DBE365B5071CE72BD9D12C1D1B5EB07(L_6, L_7, NULL);
		return;
	}

IL_0048:
	{
		// DoCheckLoop(_mediaPlayer, _endPointSeconds, _startLoopSeconds);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8 = __this->____mediaPlayer_4;
		float L_9 = __this->____endPointSeconds_6;
		float L_10 = __this->____startLoopSeconds_8;
		StartEndPoint_DoCheckLoop_mE83F8309F8B49FBFC312D600E506C79A60D4CE83(L_8, L_9, L_10, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::IsVideoLoaded(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StartEndPoint_IsVideoLoaded_m6B3B883BB305E338B7592DA9974F07732001A3C2 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mp != null && mp.Control != null && mp.Control.HasMetaData());
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___mp0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___mp0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::HasMetaData() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoStart(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoStart_m1BA79F218795AC6457DB085FEE85BEBA1E130ADC (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mp.Control.Seek(positionSeconds * 1000f);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_0, NULL);
		float L_2 = ___positionSeconds1;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(19 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Seek(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_1, ((float)il2cpp_codegen_multiply(L_2, (1000.0f))));
		// mp.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = ___mp0;
		NullCheck(L_3);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_3, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoCheckEnd(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoCheckEnd_mA74285992DBE365B5071CE72BD9D12C1D1B5EB07 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mp.Control.IsPlaying() && (mp.Control.GetCurrentTimeMs() >= positionSeconds * 1000f))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = ___mp0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_4);
		float L_6 = ___positionSeconds1;
		if ((!(((float)L_5) >= ((float)((float)il2cpp_codegen_multiply(L_6, (1000.0f)))))))
		{
			goto IL_0027;
		}
	}
	{
		// mp.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = ___mp0;
		NullCheck(L_7);
		MediaPlayer_Pause_m676939B47ECC2CEC01BC28FDC575BAAF3576F936(L_7, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::DoCheckLoop(RenderHeads.Media.AVProVideo.MediaPlayer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint_DoCheckLoop_mE83F8309F8B49FBFC312D600E506C79A60D4CE83 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, float ___positionSeconds1, float ___positionLoop2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mp.Control.IsPlaying() && (mp.Control.GetCurrentTimeMs() >= positionSeconds * 1000f))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = ___mp0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_4);
		float L_6 = ___positionSeconds1;
		if ((!(((float)L_5) >= ((float)((float)il2cpp_codegen_multiply(L_6, (1000.0f)))))))
		{
			goto IL_0033;
		}
	}
	{
		// mp.Control.Seek(positionLoop * 1000f);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = ___mp0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		float L_9 = ___positionLoop2;
		NullCheck(L_8);
		InterfaceActionInvoker1< float >::Invoke(19 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Seek(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8, ((float)il2cpp_codegen_multiply(L_9, (1000.0f))));
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.StartEndPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEndPoint__ctor_mC71B848A9DED5E0DDC59A8F741EBEA66481CE31B (StartEndPoint_t55339D8D2D40E6265D27AC4FBB4AFC2429C40BCE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.VideoTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrigger_OnTriggerEnter_m26008CF0A4910E3C4464F590DB514ACD73C42AA3 (VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mediaPlayer != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// _mediaPlayer.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____mediaPlayer_4;
		NullCheck(L_2);
		MediaPlayer_Play_m40B222AD56845228F7A0D4848E94B155CCFF9297(L_2, NULL);
		// _fadeDirection = 1f;
		__this->____fadeDirection_7 = (1.0f);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VideoTrigger::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrigger_OnTriggerExit_m74A38C17AC01550495152635397C5A455CA082BA (VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mediaPlayer != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _fadeDirection = -1f;
		__this->____fadeDirection_7 = (-1.0f);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VideoTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrigger_Update_m89BF504CCA0BF4183BCB852739AC6567329580F9 (VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (_fadeDirection != 0f)
		float L_0 = __this->____fadeDirection_7;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_00b8;
		}
	}
	{
		// float speed = 1000 / _fadeTimeMs;
		float L_1 = __this->____fadeTimeMs_5;
		V_0 = ((float)((1000.0f)/L_1));
		// _fade += Time.deltaTime * _fadeDirection * speed;
		float L_2 = __this->____fade_6;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_4 = __this->____fadeDirection_7;
		float L_5 = V_0;
		__this->____fade_6 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5))));
		// if (_fade <= 0f)
		float L_6 = __this->____fade_6;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// _mediaPlayer.Rewind(true);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = __this->____mediaPlayer_4;
		NullCheck(L_7);
		MediaPlayer_Rewind_m60D4E47A06CBA186BBAEBD15938ECA01A1576CED(L_7, (bool)1, NULL);
		// _fadeDirection = 0f;
		__this->____fadeDirection_7 = (0.0f);
		goto IL_0076;
	}

IL_005e:
	{
		// else if (_fade >= 1f)
		float L_8 = __this->____fade_6;
		if ((!(((float)L_8) >= ((float)(1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// _fadeDirection = 0f;
		__this->____fadeDirection_7 = (0.0f);
	}

IL_0076:
	{
		// _fade = Mathf.Clamp01(_fade);
		float L_9 = __this->____fade_6;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		__this->____fade_6 = L_10;
		// if (_mediaPlayer != null && _mediaPlayer.Control != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00b8;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_13 = __this->____mediaPlayer_4;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_00b8;
		}
	}
	{
		// _mediaPlayer.Control.SetVolume(_fade);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_15 = __this->____mediaPlayer_4;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_15, NULL);
		float L_17 = __this->____fade_6;
		NullCheck(L_16);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_16, L_17);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VideoTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrigger__ctor_mF6F93F4896B2FF29CAF1589D3B6F0C1DDDC15C09 (VideoTrigger_t0F05AA6ECCD52892C8F049464D1D9121A63C7656* __this, const RuntimeMethod* method) 
{
	{
		// private float _fadeTimeMs = 500f;
		__this->____fadeTimeMs_5 = (500.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_Start_m92396719C827F1A43C3E29F0AAD5D08DC5A770D7 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleController_OnMediaPlayerEvent_mBDA41D63D94C80AAE41728A1D6A0154AC836C97E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mediaPlayer.Events.AddListener(OnMediaPlayerEvent);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_7;
		NullCheck(L_0);
		MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* L_1;
		L_1 = MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998(L_0, NULL);
		UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* L_2 = (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*)il2cpp_codegen_object_new(UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172(L_2, __this, (intptr_t)((void*)SimpleController_OnMediaPlayerEvent_mBDA41D63D94C80AAE41728A1D6A0154AC836C97E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA(L_1, L_2, UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::OnMediaPlayerEvent(RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_OnMediaPlayerEvent_mBDA41D63D94C80AAE41728A1D6A0154AC836C97E (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___et1, int32_t ___errorCode2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___et1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_0022;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0022;
	}

IL_001c:
	{
		// GatherProperties();
		SimpleController_GatherProperties_m05C311ADD4AFA46F40CE4A01FD2F17A95202F233(__this, NULL);
	}

IL_0022:
	{
		// AddEvent(et);
		int32_t L_1 = ___et1;
		SimpleController_AddEvent_m5F5F4191A29E5C77E01BCC04B15F219B09044875(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::AddEvent(RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_AddEvent_m5F5F4191A29E5C77E01BCC04B15F219B09044875 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, int32_t ___et0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F762EF9062C3EE0AE1A4846E323DDD26132484E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[SimpleController] Event: " + et.ToString());
		Il2CppFakeBox<int32_t> L_0(EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var, (&___et0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9F762EF9062C3EE0AE1A4846E323DDD26132484E, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// _eventLog.Enqueue(et.ToString());
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_3 = __this->____eventLog_14;
		Il2CppFakeBox<int32_t> L_4(EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var, (&___et0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		NullCheck(L_3);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_3, L_5, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		// if (_eventLog.Count > 5)
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_6 = __this->____eventLog_14;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_6, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)5)))
		{
			goto IL_0059;
		}
	}
	{
		// _eventLog.Dequeue();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_8 = __this->____eventLog_14;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_8, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		// _eventTimer = 1f;
		__this->____eventTimer_15 = (1.0f);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::GatherProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_GatherProperties_m05C311ADD4AFA46F40CE4A01FD2F17A95202F233 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mediaPlayer != null && _mediaPlayer.Info != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = __this->____mediaPlayer_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		// _width = _mediaPlayer.Info.GetVideoWidth();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = __this->____mediaPlayer_7;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoWidth() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_5);
		__this->____width_10 = L_6;
		// _height = _mediaPlayer.Info.GetVideoHeight();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = __this->____mediaPlayer_7;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoHeight() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_8);
		__this->____height_11 = L_9;
		// _durationSeconds = _mediaPlayer.Info.GetDurationMs() / 1000f;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10 = __this->____mediaPlayer_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_10, NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_11);
		__this->____durationSeconds_12 = ((float)(L_12/(1000.0f)));
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_Update_m34E5E3551E6D09272E57238767CAEE09CD6BDDAD (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_useFading)
		bool L_0 = __this->____useFading_13;
		if (L_0)
		{
			goto IL_0065;
		}
	}
	{
		// if (_display != null && _display._mediaPlayer != null && _display._mediaPlayer.Control != null)
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_1 = __this->____display_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_3 = __this->____display_8;
		NullCheck(L_3);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = L_3->____mediaPlayer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_6 = __this->____display_8;
		NullCheck(L_6);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = L_6->____mediaPlayer_5;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		// _display._color = Color.white;
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_9 = __this->____display_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_9);
		L_9->____color_8 = L_10;
		// _display._mediaPlayer.Control.SetVolume(1f);
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_11 = __this->____display_8;
		NullCheck(L_11);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12 = L_11->____mediaPlayer_5;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_12, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_13, (1.0f));
	}

IL_0065:
	{
		// if (_eventLog != null && _eventLog.Count > 0)
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_14 = __this->____eventLog_14;
		if (!L_14)
		{
			goto IL_00b1;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_15 = __this->____eventLog_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_15, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		// _eventTimer -= Time.deltaTime;
		float L_17 = __this->____eventTimer_15;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____eventTimer_15 = ((float)il2cpp_codegen_subtract(L_17, L_18));
		// if (_eventTimer < 0f)
		float L_19 = __this->____eventTimer_15;
		if ((!(((float)L_19) < ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		// _eventLog.Dequeue();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_20 = __this->____eventLog_14;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_20, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		// _eventTimer = 1f;
		__this->____eventTimer_15 = (1.0f);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::LoadVideo(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_LoadVideo_m1E009B3601590EC4D6D4B655DF1D75F049345B38 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, String_t* ___filePath0, bool ___url1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CFEEE4F62A474970E25FE47E07529750C5411E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CBB42A130D76CBE6E01F26C95E6C850224A00A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!url)
		bool L_0 = ___url1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// _nextVideoLocation = MediaPlayer.FileLocation.RelativeToStreamingAssetsFolder;
		__this->____nextVideoLocation_16 = 2;
		goto IL_0013;
	}

IL_000c:
	{
		// _nextVideoLocation = MediaPlayer.FileLocation.AbsolutePathOrURL;
		__this->____nextVideoLocation_16 = 0;
	}

IL_0013:
	{
		// _nextVideoPath = filePath;
		String_t* L_1 = ___filePath0;
		__this->____nextVideoPath_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextVideoPath_17), (void*)L_1);
		// if (!_useFading)
		bool L_2 = __this->____useFading_13;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// if (!_mediaPlayer.OpenVideoFromFile(_nextVideoLocation, _nextVideoPath, _mediaPlayer.m_AutoStart))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayer_7;
		int32_t L_4 = __this->____nextVideoLocation_16;
		String_t* L_5 = __this->____nextVideoPath_17;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = __this->____mediaPlayer_7;
		NullCheck(L_6);
		bool L_7 = L_6->___m_AutoStart_7;
		NullCheck(L_3);
		bool L_8;
		L_8 = MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE(L_3, L_4, L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogError("Failed to open video!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral45CFEEE4F62A474970E25FE47E07529750C5411E, NULL);
		return;
	}

IL_0051:
	{
		// StartCoroutine("LoadVideoWithFading");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral4CBB42A130D76CBE6E01F26C95E6C850224A00A8, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::VideoIsReady(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleController_VideoIsReady_m2BE4F517B9B02C59665F480A2445A9C783D061B3 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mp != null && mp.TextureProducer != null && mp.TextureProducer.GetTextureFrameCount() <= 0);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___mp0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_2);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___mp0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureFrameCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_5);
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::AudioIsReady(RenderHeads.Media.AVProVideo.MediaPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleController_AudioIsReady_m63EBEB7100A10C8C576501108610050FC7BE51F6 (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mp != null && mp.Control != null && mp.Control.CanPlay() && mp.Info.HasAudio() && !mp.Info.HasVideo());
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = ___mp0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2 = ___mp0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = ___mp0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::CanPlay() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7 = ___mp0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaInfo::HasAudio() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10 = ___mp0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaInfo::HasVideo() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_11);
		return (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator RenderHeads.Media.AVProVideo.Demos.SimpleController::LoadVideoWithFading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleController_LoadVideoWithFading_mF2AC292B082DDC8441AAA453AE0D0EC40281B8FA (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* L_0 = (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3*)il2cpp_codegen_object_new(U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadVideoWithFadingU3Ed__22__ctor_m617375071043C6696C2585F4712254101CDD44AB(L_0, 0, NULL);
		U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_OnGUI_m8D073A8BE3E1C480DEC6703EA724174EE6D57E54 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B18E65E7F281FEFF21459A74679DA681676AFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18722C0C95B6FC918E70920BFE25E510986B5EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BD48B302C637F5CA8C4B77E7F04F2CEDF2486D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F96F6F3FEEC653D6B527B7E23B96B4CB9437DE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54ACF3D1AED2D5C05F724C03D527B1849CCFFF08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE25474C84B90CA93A2F5D71179C8C18E922B3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9229404B023B828641F8C179E7652573A8F786C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16B6A6093DD2259584E0FE667404BF1273EEB5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB995351146F35DB459855BD645FE52BC4F2E7F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEED25505439B6D4BC840BE43FEB6D9DA0F4EE058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1A47D564EA587B3DE7303F2562EFEFEEBA09063);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 V_19;
	memset((&V_19), 0, sizeof(V_19));
	String_t* G_B35_0 = NULL;
	String_t* G_B34_0 = NULL;
	{
		// if (_mediaPlayer == null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// GUI.depth = -10;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_depth_m3587BACB56CB2809E28F64EB459A0A5EC9E33BCC(((int32_t)-10), NULL);
		// if (_guiSkin != null)
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = __this->____guiSkin_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// GUI.skin = _guiSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4 = __this->____guiSkin_9;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_4, NULL);
	}

IL_002f:
	{
		// GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(Screen.width / UIWidth, Screen.height / UIHeight, 1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(((float)L_7)/(960.0f))), ((float)(((float)L_8)/(540.0f))), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_5, L_6, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC(L_10, NULL);
		// GUILayout.BeginVertical("box");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = GUIStyle_op_Implicit_m67078950FC601939AC9678CAEDE8E171B812AE89(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginVertical_m08B85FF568BBF4D188D0F10D686C211654246970(L_11, L_12, NULL);
		// if (_mediaPlayer.Control != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_13 = __this->____mediaPlayer_7;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_04a3;
		}
	}
	{
		// GUILayout.Label("Loaded: " + _mediaPlayer.m_VideoPath);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_15 = __this->____mediaPlayer_7;
		NullCheck(L_15);
		String_t* L_16 = L_15->___m_VideoPath_5;
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9229404B023B828641F8C179E7652573A8F786C0, L_16, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_18;
		L_18 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_17, L_18, NULL);
		// GUILayout.Label(string.Format("Size: {0}x{1} FPS: {3} Duration: {2}ms", _width, _height, _mediaPlayer.Info.GetDurationMs(), _mediaPlayer.Info.GetVideoFrameRate().ToString("F2")));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		int32_t L_21 = __this->____width_10;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		int32_t L_25 = __this->____height_11;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_29 = __this->____mediaPlayer_7;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_29, NULL);
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_30);
		float L_32 = L_31;
		RuntimeObject* L_33 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_33);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_28;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_35 = __this->____mediaPlayer_7;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_35, NULL);
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoFrameRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_36);
		V_13 = L_37;
		String_t* L_38;
		L_38 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_13), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_38);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		String_t* L_39;
		L_39 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral4F96F6F3FEEC653D6B527B7E23B96B4CB9437DE9, L_34, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_40;
		L_40 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_39, L_40, NULL);
		// GUILayout.Label("Updates: " + _mediaPlayer.TextureProducer.GetTextureFrameCount() + "    Rate: " + _mediaPlayer.Info.GetVideoDisplayRate().ToString("F1"));
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_41 = __this->____mediaPlayer_7;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::get_TextureProducer() */, L_41);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaProducer::GetTextureFrameCount() */, IMediaProducer_t6EBFC5675AC4CCE442C145AA606A6AE6E45DE62B_il2cpp_TypeInfo_var, L_42);
		V_14 = L_43;
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_14), NULL);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_45 = __this->____mediaPlayer_7;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_45, NULL);
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetVideoDisplayRate() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_46);
		V_13 = L_47;
		String_t* L_48;
		L_48 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_13), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		String_t* L_49;
		L_49 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral25BD48B302C637F5CA8C4B77E7F04F2CEDF2486D, L_44, _stringLiteralB995351146F35DB459855BD645FE52BC4F2E7F39, L_48, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_50;
		L_50 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_49, L_50, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_51;
		L_51 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_51, NULL);
		// _useFading = GUILayout.Toggle(_useFading, "Fade to Black During Loading");
		bool L_52 = __this->____useFading_13;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_53;
		L_53 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_54;
		L_54 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_52, _stringLiteral54ACF3D1AED2D5C05F724C03D527B1849CCFFF08, L_53, NULL);
		__this->____useFading_13 = L_54;
		// _mediaPlayer.m_AutoStart = GUILayout.Toggle(_mediaPlayer.m_AutoStart, "Auto Play After Load");
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_55 = __this->____mediaPlayer_7;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_56 = __this->____mediaPlayer_7;
		NullCheck(L_56);
		bool L_57 = L_56->___m_AutoStart_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_58;
		L_58 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_59;
		L_59 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_57, _stringLiteralF1A47D564EA587B3DE7303F2562EFEFEEBA09063, L_58, NULL);
		NullCheck(L_55);
		L_55->___m_AutoStart_7 = L_59;
		// bool loopStatus = _mediaPlayer.m_Loop;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_60 = __this->____mediaPlayer_7;
		NullCheck(L_60);
		bool L_61 = L_60->___m_Loop_8;
		V_3 = L_61;
		// bool newLoopStatus = GUILayout.Toggle(loopStatus, "Loop");
		bool L_62 = V_3;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_63;
		L_63 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_64;
		L_64 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_62, _stringLiteralEED25505439B6D4BC840BE43FEB6D9DA0F4EE058, L_63, NULL);
		V_4 = L_64;
		// if (newLoopStatus != loopStatus)
		bool L_65 = V_4;
		bool L_66 = V_3;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_01f3;
		}
	}
	{
		// _mediaPlayer.m_Loop = newLoopStatus;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_67 = __this->____mediaPlayer_7;
		bool L_68 = V_4;
		NullCheck(L_67);
		L_67->___m_Loop_8 = L_68;
		// _mediaPlayer.Control.SetLooping(newLoopStatus);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_69 = __this->____mediaPlayer_7;
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_69, NULL);
		bool L_71 = V_4;
		NullCheck(L_70);
		InterfaceActionInvoker1< bool >::Invoke(6 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetLooping(System.Boolean) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_70, L_71);
	}

IL_01f3:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// int currentTime = (int)_mediaPlayer.Control.GetCurrentTimeMs();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_72 = __this->____mediaPlayer_7;
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_72, NULL);
		NullCheck(L_73);
		float L_74;
		L_74 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_73);
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_74);
		// int newTime = (int)GUILayout.HorizontalSlider(currentTime, 0f, _durationSeconds * 1000f);
		int32_t L_75 = V_5;
		float L_76 = __this->____durationSeconds_12;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_77;
		L_77 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		float L_78;
		L_78 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(((float)L_75), (0.0f), ((float)il2cpp_codegen_multiply(L_76, (1000.0f))), L_77, NULL);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_78);
		// Rect timeSliderRect = GUILayoutUtility.GetLastRect();
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_79;
		L_79 = GUILayoutUtility_GetLastRect_mE5112C79F4C3C884FD60400BC65D34D25C6D9CA7(NULL);
		V_7 = L_79;
		// float thumbWidth = GUI.skin.horizontalSliderThumb.CalcSize(GUIContent.none).x;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_80;
		L_80 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_80);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_81;
		L_81 = GUISkin_get_horizontalSliderThumb_m9EE5EF8204397C2946D7F384AB7D8A17693837BD(L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_82 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6;
		NullCheck(L_81);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		L_83 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_81, L_82, NULL);
		float L_84 = L_83.___x_0;
		V_8 = L_84;
		// Rect bufferingRect = timeSliderRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_85 = V_7;
		V_9 = L_85;
		// GUI.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86;
		L_86 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_86, NULL);
		// bufferingRect.xMin += thumbWidth;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_87 = (&V_9);
		float L_88;
		L_88 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_87, NULL);
		float L_89 = V_8;
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19(L_87, ((float)il2cpp_codegen_add(L_88, L_89)), NULL);
		// bufferingRect.y = bufferingRect.yMax - 4;
		float L_90;
		L_90 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_9), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_9), ((float)il2cpp_codegen_subtract(L_90, (4.0f))), NULL);
		// bufferingRect.width -= thumbWidth * 1f;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_91 = (&V_9);
		float L_92;
		L_92 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_91, NULL);
		float L_93 = V_8;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_91, ((float)il2cpp_codegen_subtract(L_92, ((float)il2cpp_codegen_multiply(L_93, (1.0f))))), NULL);
		// bufferingRect.width *= _mediaPlayer.Control.GetBufferingProgress();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_94 = (&V_9);
		float L_95;
		L_95 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_94, NULL);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_96 = __this->____mediaPlayer_7;
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_96, NULL);
		NullCheck(L_97);
		float L_98;
		L_98 = InterfaceFuncInvoker0< float >::Invoke(37 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetBufferingProgress() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_97);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_94, ((float)il2cpp_codegen_multiply(L_95, L_98)), NULL);
		// bufferingRect.height = 4;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_9), (4.0f), NULL);
		// GUI.DrawTexture(bufferingRect, Texture2D.whiteTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_99 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_100;
		L_100 = Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA(NULL);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_99, L_100, 0, NULL);
		// GUI.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_101;
		L_101 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_101, NULL);
		// int timeRangeCount = _mediaPlayer.Control.GetBufferedTimeRangeCount();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_102 = __this->____mediaPlayer_7;
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_102, NULL);
		NullCheck(L_103);
		int32_t L_104;
		L_104 = InterfaceFuncInvoker0< int32_t >::Invoke(38 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaControl::GetBufferedTimeRangeCount() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_103);
		V_10 = L_104;
		// for (int i = 0; i < timeRangeCount; i++)
		V_15 = 0;
		goto IL_038e;
	}

IL_02f1:
	{
		// float startTimeMs = 0f;
		V_16 = (0.0f);
		// float endTimeMs = 0f;
		V_17 = (0.0f);
		// if (_mediaPlayer.Control.GetBufferedTimeRange(i, ref startTimeMs, ref endTimeMs))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_105 = __this->____mediaPlayer_7;
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_105, NULL);
		int32_t L_107 = V_15;
		NullCheck(L_106);
		bool L_108;
		L_108 = InterfaceFuncInvoker3< bool, int32_t, float*, float* >::Invoke(39 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::GetBufferedTimeRange(System.Int32,System.Single&,System.Single&) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_106, L_107, (&V_16), (&V_17));
		if (!L_108)
		{
			goto IL_0388;
		}
	}
	{
		// bufferingRect.xMin = thumbWidth + timeSliderRect.x + (timeSliderRect.width - thumbWidth * 1f) * (startTimeMs / (_durationSeconds * 1000f));
		float L_109 = V_8;
		float L_110;
		L_110 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_7), NULL);
		float L_111;
		L_111 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_7), NULL);
		float L_112 = V_8;
		float L_113 = V_16;
		float L_114 = __this->____durationSeconds_12;
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19((&V_9), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_109, L_110)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_111, ((float)il2cpp_codegen_multiply(L_112, (1.0f))))), ((float)(L_113/((float)il2cpp_codegen_multiply(L_114, (1000.0f))))))))), NULL);
		// bufferingRect.xMax = thumbWidth + timeSliderRect.x + (timeSliderRect.width - thumbWidth * 1f) * (endTimeMs / (_durationSeconds * 1000f));
		float L_115 = V_8;
		float L_116;
		L_116 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_7), NULL);
		float L_117;
		L_117 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_7), NULL);
		float L_118 = V_8;
		float L_119 = V_17;
		float L_120 = __this->____durationSeconds_12;
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D((&V_9), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_115, L_116)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_117, ((float)il2cpp_codegen_multiply(L_118, (1.0f))))), ((float)(L_119/((float)il2cpp_codegen_multiply(L_120, (1000.0f))))))))), NULL);
		// GUI.DrawTexture(bufferingRect, Texture2D.whiteTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_121 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_122;
		L_122 = Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_121, L_122, 0, NULL);
	}

IL_0388:
	{
		// for (int i = 0; i < timeRangeCount; i++)
		int32_t L_123 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_038e:
	{
		// for (int i = 0; i < timeRangeCount; i++)
		int32_t L_124 = V_15;
		int32_t L_125 = V_10;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_02f1;
		}
	}
	{
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_126;
		L_126 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_126, NULL);
		// if (newTime != currentTime)
		int32_t L_127 = V_6;
		int32_t L_128 = V_5;
		if ((((int32_t)L_127) == ((int32_t)L_128)))
		{
			goto IL_03ba;
		}
	}
	{
		// _mediaPlayer.Control.Seek((float)newTime);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_129 = __this->____mediaPlayer_7;
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_129, NULL);
		int32_t L_131 = V_6;
		NullCheck(L_130);
		InterfaceActionInvoker1< float >::Invoke(19 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Seek(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_130, ((float)L_131));
	}

IL_03ba:
	{
		// if (!_mediaPlayer.Control.IsPlaying())
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_132 = __this->____mediaPlayer_7;
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_132, NULL);
		NullCheck(L_133);
		bool L_134;
		L_134 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_133);
		if (L_134)
		{
			goto IL_03ef;
		}
	}
	{
		// if (GUILayout.Button("Play"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_135;
		L_135 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_136;
		L_136 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, L_135, NULL);
		if (!L_136)
		{
			goto IL_0410;
		}
	}
	{
		// _mediaPlayer.Control.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_137 = __this->____mediaPlayer_7;
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_137, NULL);
		NullCheck(L_138);
		InterfaceActionInvoker0::Invoke(15 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Play() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_138);
		goto IL_0410;
	}

IL_03ef:
	{
		// if (GUILayout.Button("Pause"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_139;
		L_139 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_140;
		L_140 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, L_139, NULL);
		if (!L_140)
		{
			goto IL_0410;
		}
	}
	{
		// _mediaPlayer.Control.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_141 = __this->____mediaPlayer_7;
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_141, NULL);
		NullCheck(L_142);
		InterfaceActionInvoker0::Invoke(16 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Pause() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_142);
	}

IL_0410:
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_143;
		L_143 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_143, NULL);
		// int numAudioTracks = _mediaPlayer.Info.GetAudioTrackCount();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_144 = __this->____mediaPlayer_7;
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_144, NULL);
		NullCheck(L_145);
		int32_t L_146;
		L_146 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaInfo::GetAudioTrackCount() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_145);
		V_11 = L_146;
		// int selectedTrackIndex = _mediaPlayer.Control.GetCurrentAudioTrack();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_147 = __this->____mediaPlayer_7;
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_147, NULL);
		NullCheck(L_148);
		int32_t L_149;
		L_149 = InterfaceFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentAudioTrack() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_148);
		V_12 = L_149;
		// for (int i = 0; i < numAudioTracks; i++)
		V_18 = 0;
		goto IL_0498;
	}

IL_0443:
	{
		// if (i == selectedTrackIndex)
		int32_t L_150 = V_18;
		int32_t L_151 = V_12;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0453;
		}
	}
	{
		// GUI.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_152;
		L_152 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_152, NULL);
	}

IL_0453:
	{
		// if (GUILayout.Button("Audio Track #" + (i + 1)))
		int32_t L_153 = V_18;
		V_14 = ((int32_t)il2cpp_codegen_add(L_153, 1));
		String_t* L_154;
		L_154 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_14), NULL);
		String_t* L_155;
		L_155 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral13B18E65E7F281FEFF21459A74679DA681676AFF, L_154, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_156;
		L_156 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_157;
		L_157 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(L_155, L_156, NULL);
		if (!L_157)
		{
			goto IL_0488;
		}
	}
	{
		// _mediaPlayer.Control.SetAudioTrack(i);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_158 = __this->____mediaPlayer_7;
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_158, NULL);
		int32_t L_160 = V_18;
		NullCheck(L_159);
		InterfaceActionInvoker1< int32_t >::Invoke(34 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetAudioTrack(System.Int32) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_159, L_160);
	}

IL_0488:
	{
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		L_161 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_161, NULL);
		// for (int i = 0; i < numAudioTracks; i++)
		int32_t L_162 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_0498:
	{
		// for (int i = 0; i < numAudioTracks; i++)
		int32_t L_163 = V_18;
		int32_t L_164 = V_11;
		if ((((int32_t)L_163) < ((int32_t)L_164)))
		{
			goto IL_0443;
		}
	}
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
	}

IL_04a3:
	{
		// GUILayout.Label("Select a new file to play:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_165;
		L_165 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteral18722C0C95B6FC918E70920BFE25E510986B5EAB, L_165, NULL);
		// int newSelection = GUILayout.SelectionGrid(-1, _filenames, 3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = __this->____filenames_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_167;
		L_167 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		int32_t L_168;
		L_168 = GUILayout_SelectionGrid_m4725267E82317122AE1F5349E22CBDE9E9B9D11E((-1), L_166, 3, L_167, NULL);
		V_0 = L_168;
		// if (newSelection >= 0)
		int32_t L_169 = V_0;
		if ((((int32_t)L_169) < ((int32_t)0)))
		{
			goto IL_04e3;
		}
	}
	{
		// LoadVideo(System.IO.Path.Combine(_folder, _filenames[newSelection]));
		String_t* L_170 = __this->____folder_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_171 = __this->____filenames_5;
		int32_t L_172 = V_0;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		String_t* L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_175;
		L_175 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_170, L_174, NULL);
		SimpleController_LoadVideo_m1E009B3601590EC4D6D4B655DF1D75F049345B38(__this, L_175, (bool)0, NULL);
	}

IL_04e3:
	{
		// GUILayout.Space(8f);
		GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE((8.0f), NULL);
		// GUILayout.Label("Select a new stream to play:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_176;
		L_176 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteral7AE25474C84B90CA93A2F5D71179C8C18E922B3B, L_176, NULL);
		// int newSteam = GUILayout.SelectionGrid(-1, _streams, 1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_177 = __this->____streams_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_178;
		L_178 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		int32_t L_179;
		L_179 = GUILayout_SelectionGrid_m4725267E82317122AE1F5349E22CBDE9E9B9D11E((-1), L_177, 1, L_178, NULL);
		V_1 = L_179;
		// if (newSteam >= 0)
		int32_t L_180 = V_1;
		if ((((int32_t)L_180) < ((int32_t)0)))
		{
			goto IL_0522;
		}
	}
	{
		// LoadVideo(_streams[newSteam], true);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_181 = __this->____streams_6;
		int32_t L_182 = V_1;
		NullCheck(L_181);
		int32_t L_183 = L_182;
		String_t* L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		SimpleController_LoadVideo_m1E009B3601590EC4D6D4B655DF1D75F049345B38(__this, L_184, (bool)1, NULL);
	}

IL_0522:
	{
		// GUILayout.Space(8f);
		GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE((8.0f), NULL);
		// GUILayout.Label("Recent Events: ");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_185;
		L_185 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralB16B6A6093DD2259584E0FE667404BF1273EEB5B, L_185, NULL);
		// GUILayout.BeginVertical("box");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_186;
		L_186 = GUIStyle_op_Implicit_m67078950FC601939AC9678CAEDE8E171B812AE89(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_187;
		L_187 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginVertical_m08B85FF568BBF4D188D0F10D686C211654246970(L_186, L_187, NULL);
		// int eventIndex = 0;
		V_2 = 0;
		// foreach (string eventString in _eventLog)
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_188 = __this->____eventLog_14;
		NullCheck(L_188);
		Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 L_189;
		L_189 = Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5(L_188, Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var);
		V_19 = L_189;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624((&V_19), Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_05a1_1;
			}

IL_0560_1:
			{
				// foreach (string eventString in _eventLog)
				String_t* L_190;
				L_190 = Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8((&V_19), Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var);
				// GUI.color = Color.white;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_191;
				L_191 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
				GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_191, NULL);
				// if (eventIndex == 0)
				int32_t L_192 = V_2;
				G_B34_0 = L_190;
				if (L_192)
				{
					G_B35_0 = L_190;
					goto IL_0593_1;
				}
			}
			{
				// GUI.color = new Color(1f, 1f, 1f, _eventTimer);
				float L_193 = __this->____eventTimer_15;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_194;
				memset((&L_194), 0, sizeof(L_194));
				Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_194), (1.0f), (1.0f), (1.0f), L_193, /*hidden argument*/NULL);
				il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
				GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_194, NULL);
				G_B35_0 = G_B34_0;
			}

IL_0593_1:
			{
				// GUILayout.Label(eventString);
				GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_195;
				L_195 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
				GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(G_B35_0, L_195, NULL);
				// eventIndex++;
				int32_t L_196 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_196, 1));
			}

IL_05a1_1:
			{
				// foreach (string eventString in _eventLog)
				bool L_197;
				L_197 = Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8((&V_19), Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var);
				if (L_197)
				{
					goto IL_0560_1;
				}
			}
			{
				goto IL_05ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05ba:
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_198;
		L_198 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_198, NULL);
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController__ctor_m0D48E8657E4B9391F6098669DA81AAC241FE1EF8 (SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD1274DF5AC3C11E721C8C8775C05FAD8552C4BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E8AB647081DA8EA45FCDD264232662FB58814CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A11CB5D1DFFE940BB0A281ED7B5F709CE83BBAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string _folder = "AVProVideoSamples/";
		__this->____folder_4 = _stringLiteral5A11CB5D1DFFE940BB0A281ED7B5F709CE83BBAA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____folder_4), (void*)_stringLiteral5A11CB5D1DFFE940BB0A281ED7B5F709CE83BBAA);
		// public string[] _filenames = new string[] { "SampleSphere.mp4", "BigBuckBunny_360p30.mp3", "BigBuckBunny_720p30.mp4" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3E8AB647081DA8EA45FCDD264232662FB58814CF);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3E8AB647081DA8EA45FCDD264232662FB58814CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		__this->____filenames_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filenames_5), (void*)L_3);
		// public bool _useFading = true;
		__this->____useFading_13 = (bool)1;
		// private Queue<string> _eventLog = new Queue<string>(8);
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_4 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Queue_1__ctor_mD1274DF5AC3C11E721C8C8775C05FAD8552C4BC6(L_4, 8, Queue_1__ctor_mD1274DF5AC3C11E721C8C8775C05FAD8552C4BC6_RuntimeMethod_var);
		__this->____eventLog_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventLog_14), (void*)L_4);
		// private float _eventTimer = 1f;
		__this->____eventTimer_15 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadVideoWithFadingU3Ed__22__ctor_m617375071043C6696C2585F4712254101CDD44AB (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadVideoWithFadingU3Ed__22_System_IDisposable_Dispose_mCA1FA20FAC492071FA80A98D8C1ACAAF7A143A91 (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadVideoWithFadingU3Ed__22_MoveNext_mC84B2BD1070DFBBFC308E405B05BCB7387C5BC39 (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CFEEE4F62A474970E25FE47E07529750C5411E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_00de;
			}
			case 2:
			{
				goto IL_0110;
			}
			case 3:
			{
				goto IL_012b;
			}
			case 4:
			{
				goto IL_0146;
			}
			case 5:
			{
				goto IL_019a;
			}
			case 6:
			{
				goto IL_01d6;
			}
			case 7:
			{
				goto IL_01f1;
			}
			case 8:
			{
				goto IL_020c;
			}
			case 9:
			{
				goto IL_02a2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float fade = FadeDuration;
		__this->___U3CfadeU3E5__2_3 = (0.25f);
		goto IL_00e5;
	}

IL_0055:
	{
		// fade -= Time.deltaTime;
		float L_3 = __this->___U3CfadeU3E5__2_3;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CfadeU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// fade = Mathf.Clamp(fade, 0f, FadeDuration);
		float L_5 = __this->___U3CfadeU3E5__2_3;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_5, (0.0f), (0.25f), NULL);
		__this->___U3CfadeU3E5__2_3 = L_6;
		// _display._color = new Color(1f, 1f, 1f, fade / FadeDuration);
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_7 = V_1;
		NullCheck(L_7);
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_8 = L_7->____display_8;
		float L_9 = __this->___U3CfadeU3E5__2_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (1.0f), (1.0f), (1.0f), ((float)(L_9/(0.25f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->____color_8 = L_10;
		// _display._mediaPlayer.Control.SetVolume(fade / FadeDuration);
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_11 = V_1;
		NullCheck(L_11);
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_12 = L_11->____display_8;
		NullCheck(L_12);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_13 = L_12->____mediaPlayer_5;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_13, NULL);
		float L_15 = __this->___U3CfadeU3E5__2_3;
		NullCheck(L_14);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_14, ((float)(L_15/(0.25f))));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00de:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00e5:
	{
		// while (fade > 0f && Application.isPlaying)
		float L_16 = __this->___U3CfadeU3E5__2_3;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		bool L_17;
		L_17 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_17)
		{
			goto IL_0055;
		}
	}

IL_00fc:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_18 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_18, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0110:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_19 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_19, NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_012b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_20 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_20, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0146:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Application.isPlaying)
		bool L_21;
		L_21 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_21)
		{
			goto IL_02a9;
		}
	}
	{
		// if (!_mediaPlayer.OpenVideoFromFile(_nextVideoLocation, _nextVideoPath, _mediaPlayer.m_AutoStart))
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_22 = V_1;
		NullCheck(L_22);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_23 = L_22->____mediaPlayer_7;
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->____nextVideoLocation_16;
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = L_26->____nextVideoPath_17;
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_28 = V_1;
		NullCheck(L_28);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_29 = L_28->____mediaPlayer_7;
		NullCheck(L_29);
		bool L_30 = L_29->___m_AutoStart_7;
		NullCheck(L_23);
		bool L_31;
		L_31 = MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE(L_23, L_25, L_27, L_30, NULL);
		if (L_31)
		{
			goto IL_01a1;
		}
	}
	{
		// Debug.LogError("Failed to open video!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral45CFEEE4F62A474970E25FE47E07529750C5411E, NULL);
		goto IL_02a9;
	}

IL_018a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_019a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01a1:
	{
		// while (Application.isPlaying && (VideoIsReady(_mediaPlayer) || AudioIsReady(_mediaPlayer)))
		bool L_32;
		L_32 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_32)
		{
			goto IL_01c2;
		}
	}
	{
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_33 = V_1;
		NullCheck(L_33);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_34 = L_33->____mediaPlayer_7;
		bool L_35;
		L_35 = SimpleController_VideoIsReady_m2BE4F517B9B02C59665F480A2445A9C783D061B3(L_34, NULL);
		if (L_35)
		{
			goto IL_018a;
		}
	}
	{
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_36 = V_1;
		NullCheck(L_36);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_37 = L_36->____mediaPlayer_7;
		bool L_38;
		L_38 = SimpleController_AudioIsReady_m63EBEB7100A10C8C576501108610050FC7BE51F6(L_37, NULL);
		if (L_38)
		{
			goto IL_018a;
		}
	}

IL_01c2:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_39 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_39, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_01d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_40 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_40, NULL);
		__this->___U3CU3E2__current_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_40);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_01f1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_41 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_41, NULL);
		__this->___U3CU3E2__current_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_020c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_02a9;
	}

IL_0218:
	{
		// fade += Time.deltaTime;
		float L_42 = __this->___U3CfadeU3E5__2_3;
		float L_43;
		L_43 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CfadeU3E5__2_3 = ((float)il2cpp_codegen_add(L_42, L_43));
		// fade = Mathf.Clamp(fade, 0f, FadeDuration);
		float L_44 = __this->___U3CfadeU3E5__2_3;
		float L_45;
		L_45 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_44, (0.0f), (0.25f), NULL);
		__this->___U3CfadeU3E5__2_3 = L_45;
		// _display._color = new Color(1f, 1f, 1f, fade / FadeDuration);
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_46 = V_1;
		NullCheck(L_46);
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_47 = L_46->____display_8;
		float L_48 = __this->___U3CfadeU3E5__2_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		memset((&L_49), 0, sizeof(L_49));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_49), (1.0f), (1.0f), (1.0f), ((float)(L_48/(0.25f))), /*hidden argument*/NULL);
		NullCheck(L_47);
		L_47->____color_8 = L_49;
		// _display._mediaPlayer.Control.SetVolume(fade / FadeDuration);
		SimpleController_tBCC608B800F09796E31380283CFD4C6F191B00C4* L_50 = V_1;
		NullCheck(L_50);
		DisplayIMGUI_t8D44FC421F49D68B0929355748ED36995FA3E76E* L_51 = L_50->____display_8;
		NullCheck(L_51);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_52 = L_51->____mediaPlayer_5;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_52, NULL);
		float L_54 = __this->___U3CfadeU3E5__2_3;
		NullCheck(L_53);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_53, ((float)(L_54/(0.25f))));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_02a2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_02a9:
	{
		// while (fade < FadeDuration && Application.isPlaying)
		float L_55 = __this->___U3CfadeU3E5__2_3;
		if ((!(((float)L_55) < ((float)(0.25f)))))
		{
			goto IL_02c0;
		}
	}
	{
		bool L_56;
		L_56 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_56)
		{
			goto IL_0218;
		}
	}

IL_02c0:
	{
		// }
		return (bool)0;
	}
}
// System.Object RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadVideoWithFadingU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2F52C5451393CEE05CD0B3B8D3DB3562BA2E030F (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadVideoWithFadingU3Ed__22_System_Collections_IEnumerator_Reset_mFDC90E55E5CA5A064E02FE16DC04753EA3A7C7C7 (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadVideoWithFadingU3Ed__22_System_Collections_IEnumerator_Reset_mFDC90E55E5CA5A064E02FE16DC04753EA3A7C7C7_RuntimeMethod_var)));
	}
}
// System.Object RenderHeads.Media.AVProVideo.Demos.SimpleController/<LoadVideoWithFading>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadVideoWithFadingU3Ed__22_System_Collections_IEnumerator_get_Current_mC31AE08DD289AEE343193BC9E7EBDA7C6D3AF5BE (U3CLoadVideoWithFadingU3Ed__22_t829732AE8A3ABA72473E9D43F2B91A0F4F8DFAA3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void RenderHeads.Media.AVProVideo.Demos.SphereDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereDemo_Start_mB1FD34BE7624C1D2368F642998BBB8BEF79C2346 (SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D* __this, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SphereDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereDemo_OnDestroy_m5B7B0CC118B271C73F144F92A3E4B6D8AC80CBC3 (SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D* __this, const RuntimeMethod* method) 
{
	{
		// if (SystemInfo.supportsGyroscope)
		bool L_0;
		L_0 = SystemInfo_get_supportsGyroscope_mAB8E020FD5491BBF517D2C60CA1DDB4A5FC396D1(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Input.gyro.enabled = false;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_1;
		L_1 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_1);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_1, (bool)0, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SphereDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereDemo_Update_mE091A12D001FDC7C1D0A422DE3B91F61E315D75E (SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0011:
	{
		// UnityEngine.XR.InputTracking.Recenter();
		InputTracking_Recenter_m08E21C730EF172666DB09B3227016DA631EB6B22(NULL);
	}

IL_0016:
	{
		// if (Input.GetKeyDown(KeyCode.V))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)118), NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// UnityEngine.XR.XRSettings.enabled = !UnityEngine.XR.XRSettings.enabled;
		bool L_3;
		L_3 = XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54(NULL);
		XRSettings_set_enabled_mB93EAB3F282547FD575857B028DDD296C5B21D5F((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.SphereDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereDemo__ctor_m3F5B93B7D84F2642E0F8BECAC916CF756ACBB4CF (SphereDemo_t3EAC7251830261A2733D9FB46FDEC65CB792E03D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::get_PlayingPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LoadingPlayer == _mediaPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_1 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return _mediaPlayerB;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayerB_5;
		return L_3;
	}

IL_001a:
	{
		// return _mediaPlayer;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4 = __this->____mediaPlayer_4;
		return L_4;
	}
}
// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::get_LoadingPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	{
		// return _loadingPlayer;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____loadingPlayer_20;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::SwapPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_SwapPlayers_mBF148951CF5556E628060EAD00C4773B3533757D (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayingPlayer.Control.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_0, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(16 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Pause() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_1);
		// if (LoadingPlayer == _mediaPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3 = __this->____mediaPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// _loadingPlayer = _mediaPlayerB;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5 = __this->____mediaPlayerB_5;
		__this->____loadingPlayer_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingPlayer_20), (void*)L_5);
		goto IL_003d;
	}

IL_0031:
	{
		// _loadingPlayer = _mediaPlayer;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6 = __this->____mediaPlayer_4;
		__this->____loadingPlayer_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingPlayer_20), (void*)L_6);
	}

IL_003d:
	{
		// _mediaDisplay.CurrentMediaPlayer = PlayingPlayer;
		DisplayUGUI_t58FFF4FFB2553C12A1BB0FFD78362525CC384444* L_7 = __this->____mediaDisplay_6;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8;
		L_8 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_7);
		DisplayUGUI_set_CurrentMediaPlayer_m6167F40E60791C8500A691FD0EEEC5D8FB46B969(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnOpenVideoFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnOpenVideoFile_m3EFB5248CAF4B8746173642F9F8A296637D6F3B3 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadingPlayer.m_VideoPath = System.IO.Path.Combine(_folder, _videoFiles[_VideoIndex]);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		String_t* L_1 = __this->____folder_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____videoFiles_17;
		int32_t L_3 = __this->____VideoIndex_18;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, L_5, NULL);
		NullCheck(L_0);
		L_0->___m_VideoPath_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___m_VideoPath_5), (void*)L_6);
		// _VideoIndex = (_VideoIndex + 1) % (_videoFiles.Length);
		int32_t L_7 = __this->____VideoIndex_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->____videoFiles_17;
		NullCheck(L_8);
		__this->____VideoIndex_18 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// if (string.IsNullOrEmpty(LoadingPlayer.m_VideoPath))
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_9;
		L_9 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_9);
		String_t* L_10 = L_9->___m_VideoPath_5;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// LoadingPlayer.CloseVideo();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12;
		L_12 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_12);
		MediaPlayer_CloseVideo_mB17BC77CDE58246FF09886BD7846199089C932AB(L_12, NULL);
		// _VideoIndex = 0;
		__this->____VideoIndex_18 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		// LoadingPlayer.OpenVideoFromFile(_location, LoadingPlayer.m_VideoPath, _AutoStartToggle.isOn);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_13;
		L_13 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		int32_t L_14 = __this->____location_15;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_15;
		L_15 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_15);
		String_t* L_16 = L_15->___m_VideoPath_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_17 = __this->____AutoStartToggle_13;
		NullCheck(L_17);
		bool L_18;
		L_18 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_17, NULL);
		NullCheck(L_13);
		bool L_19;
		L_19 = MediaPlayer_OpenVideoFromFile_m5364925AD27B9E0F23A5ADB1435B88FFB86F1DDE(L_13, L_14, L_16, L_18, NULL);
	}

IL_0088:
	{
		// if (_bufferedSliderRect != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->____bufferedSliderRect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00a7;
		}
	}
	{
		// _bufferedSliderImage = _bufferedSliderRect.GetComponent<Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->____bufferedSliderRect_7;
		NullCheck(L_22);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23;
		L_23 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_22, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->____bufferedSliderImage_19 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bufferedSliderImage_19), (void*)L_23);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnAutoStartChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnAutoStartChange_m01E5294C948AFE98B9EC301C678A2774E4F8BD5B (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer &&
		//     _AutoStartToggle && _AutoStartToggle.enabled &&
		//     PlayingPlayer.m_AutoStart != _AutoStartToggle.isOn )
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->____AutoStartToggle_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->____AutoStartToggle_13;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6;
		L_6 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->___m_AutoStart_7;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->____AutoStartToggle_13;
		NullCheck(L_8);
		bool L_9;
		L_9 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_8, NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0055;
		}
	}
	{
		// PlayingPlayer.m_AutoStart = _AutoStartToggle.isOn;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10;
		L_10 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11 = __this->____AutoStartToggle_13;
		NullCheck(L_11);
		bool L_12;
		L_12 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_11, NULL);
		NullCheck(L_10);
		L_10->___m_AutoStart_7 = L_12;
	}

IL_0055:
	{
		// if (LoadingPlayer &&
		//     _AutoStartToggle && _AutoStartToggle.enabled &&
		//     LoadingPlayer.m_AutoStart != _AutoStartToggle.isOn)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_13;
		L_13 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_00aa;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->____AutoStartToggle_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_00aa;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_17 = __this->____AutoStartToggle_13;
		NullCheck(L_17);
		bool L_18;
		L_18 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_17, NULL);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_19;
		L_19 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_19);
		bool L_20 = L_19->___m_AutoStart_7;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = __this->____AutoStartToggle_13;
		NullCheck(L_21);
		bool L_22;
		L_22 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_21, NULL);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_00aa;
		}
	}
	{
		// LoadingPlayer.m_AutoStart = _AutoStartToggle.isOn;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_23;
		L_23 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_24 = __this->____AutoStartToggle_13;
		NullCheck(L_24);
		bool L_25;
		L_25 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_24, NULL);
		NullCheck(L_23);
		L_23->___m_AutoStart_7 = L_25;
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnMuteChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnMuteChange_mA8D50164EBBBE765DD24E97BC031EE94E7D41A38 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// PlayingPlayer.Control.MuteAudio(_MuteToggle.isOn);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->____MuteToggle_14;
		NullCheck(L_4);
		bool L_5;
		L_5 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_4, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(27 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::MuteAudio(System.Boolean) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_3, L_5);
	}

IL_0028:
	{
		// if (LoadingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6;
		L_6 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// LoadingPlayer.Control.MuteAudio(_MuteToggle.isOn);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_8;
		L_8 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_8, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->____MuteToggle_14;
		NullCheck(L_10);
		bool L_11;
		L_11 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_10, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(27 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::MuteAudio(System.Boolean) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_9, L_11);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnPlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnPlayButton_m56A330485D6C2E8B15F7CEEA20E4C599B1F644E2 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// PlayingPlayer.Control.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(15 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Play() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnPauseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnPauseButton_m666D8AC95C0DDB2DE9F7BD928FEB52144BA2F023 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// PlayingPlayer.Control.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Pause() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnVideoSeekSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnVideoSeekSlider_m0BDAB8F6FF8D0BD738C89CEE1431ADEE2EEFF782 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayingPlayer && _videoSeekSlider && _videoSeekSlider.value != _setVideoSeekSliderValue)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____videoSeekSlider_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____videoSeekSlider_8;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		float L_6 = __this->____setVideoSeekSliderValue_9;
		if ((((float)L_5) == ((float)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		// PlayingPlayer.Control.Seek(_videoSeekSlider.value * PlayingPlayer.Info.GetDurationMs());
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7;
		L_7 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____videoSeekSlider_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11;
		L_11 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_11, NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_8);
		InterfaceActionInvoker1< float >::Invoke(19 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Seek(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8, ((float)il2cpp_codegen_multiply(L_10, L_13)));
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnVideoSliderDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnVideoSliderDown_m767C623D5B65338461ED191638EBF8395C93F9BB (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// _wasPlayingOnScrub = PlayingPlayer.Control.IsPlaying();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::IsPlaying() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_3);
		__this->____wasPlayingOnScrub_10 = L_4;
		// if( _wasPlayingOnScrub )
		bool L_5 = __this->____wasPlayingOnScrub_10;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// PlayingPlayer.Control.Pause();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_6;
		L_6 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_6, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(16 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Pause() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_7);
	}

IL_003b:
	{
		// OnVideoSeekSlider();
		VCR_OnVideoSeekSlider_m0BDAB8F6FF8D0BD738C89CEE1431ADEE2EEFF782(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnVideoSliderUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnVideoSliderUp_m6607864F592AEE6C201F7BEACA7A4EB71F13178A (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer && _wasPlayingOnScrub )
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		bool L_2 = __this->____wasPlayingOnScrub_10;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// PlayingPlayer.Control.Play();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_3;
		L_3 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_3, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(15 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Play() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_4);
		// _wasPlayingOnScrub = false;
		__this->____wasPlayingOnScrub_10 = (bool)0;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnAudioVolumeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnAudioVolumeSlider_mD7E5A3DCB6850559A10B4FB84EC312B0EC60ECEB (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayingPlayer && _audioVolumeSlider && _audioVolumeSlider.value != _setAudioVolumeSliderValue)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____audioVolumeSlider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____audioVolumeSlider_11;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		float L_6 = __this->____setAudioVolumeSliderValue_12;
		if ((((float)L_5) == ((float)L_6)))
		{
			goto IL_0048;
		}
	}
	{
		// PlayingPlayer.Control.SetVolume(_audioVolumeSlider.value);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7;
		L_7 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____audioVolumeSlider_11;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		NullCheck(L_8);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8, L_10);
	}

IL_0048:
	{
		// if (LoadingPlayer && _audioVolumeSlider && _audioVolumeSlider.value != _setAudioVolumeSliderValue)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_11;
		L_11 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->____audioVolumeSlider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->____audioVolumeSlider_11;
		NullCheck(L_15);
		float L_16;
		L_16 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_15);
		float L_17 = __this->____setAudioVolumeSliderValue_12;
		if ((((float)L_16) == ((float)L_17)))
		{
			goto IL_0090;
		}
	}
	{
		// LoadingPlayer.Control.SetVolume(_audioVolumeSlider.value);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_18;
		L_18 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_18, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_20 = __this->____audioVolumeSlider_11;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_20);
		NullCheck(L_19);
		InterfaceActionInvoker1< float >::Invoke(29 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::SetVolume(System.Single) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_19, L_21);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnRewindButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnRewindButton_m0C56250680CB10D62D66C2D827EB5E49762D6242 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// PlayingPlayer.Control.Rewind();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_2, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(18 /* System.Void RenderHeads.Media.AVProVideo.IMediaControl::Rewind() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_Awake_m950B778DFA60DC0D511266EC6AC0BF2735943F52 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	{
		// _loadingPlayer = _mediaPlayerB;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____mediaPlayerB_5;
		__this->____loadingPlayer_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingPlayer_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_Start_m53E788663C355ABE68F9094AB293A2A86305B167 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VCR_OnVideoEvent_m706B9D3526405100C25433BA3F0797CA6EDFEB27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(PlayingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_00bb;
		}
	}
	{
		// PlayingPlayer.Events.AddListener(OnVideoEvent);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* L_3;
		L_3 = MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998(L_2, NULL);
		UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* L_4 = (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*)il2cpp_codegen_object_new(UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172(L_4, __this, (intptr_t)((void*)VCR_OnVideoEvent_m706B9D3526405100C25433BA3F0797CA6EDFEB27_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA(L_3, L_4, UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
		// if (LoadingPlayer)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_5;
		L_5 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// LoadingPlayer.Events.AddListener(OnVideoEvent);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7;
		L_7 = VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline(__this, NULL);
		NullCheck(L_7);
		MediaPlayerEvent_tC286962AE3F94FEBFE46A3540AAB227EF3A292ED* L_8;
		L_8 = MediaPlayer_get_Events_m5F6E56E82ED84DE76B7985296D50A4450525B998(L_7, NULL);
		UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA* L_9 = (UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA*)il2cpp_codegen_object_new(UnityAction_3_tCEF6982C69D8878E152D14073E451982AE07EBCA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_3__ctor_m983506683AE991EA9535A87C8956B1AA644B7172(L_9, __this, (intptr_t)((void*)VCR_OnVideoEvent_m706B9D3526405100C25433BA3F0797CA6EDFEB27_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA(L_8, L_9, UnityEvent_3_AddListener_mDAF116170858163271F3860ACB837F0BB254ACCA_RuntimeMethod_var);
	}

IL_0055:
	{
		// if ( _audioVolumeSlider )
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->____audioVolumeSlider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		// if (PlayingPlayer.Control != null)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_12;
		L_12 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0093;
		}
	}
	{
		// float volume = PlayingPlayer.Control.GetVolume();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_14;
		L_14 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_14, NULL);
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker0< float >::Invoke(31 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetVolume() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_15);
		V_0 = L_16;
		// _setAudioVolumeSliderValue = volume;
		float L_17 = V_0;
		__this->____setAudioVolumeSliderValue_12 = L_17;
		// _audioVolumeSlider.value = volume;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->____audioVolumeSlider_11;
		float L_19 = V_0;
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
	}

IL_0093:
	{
		// _AutoStartToggle.isOn = PlayingPlayer.m_AutoStart;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_20 = __this->____AutoStartToggle_13;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_21;
		L_21 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_21);
		bool L_22 = L_21->___m_AutoStart_7;
		NullCheck(L_20);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_20, L_22, NULL);
		// if(PlayingPlayer.m_AutoOpen )
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_23;
		L_23 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_23);
		bool L_24 = L_23->___m_AutoOpen_6;
		// OnOpenVideoFile();
		VCR_OnOpenVideoFile_m3EFB5248CAF4B8746173642F9F8A296637D6F3B3(__this, NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_Update_mAA730AF197C7C8577052E2D32092107E9F29DA2D (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (PlayingPlayer && PlayingPlayer.Info != null && PlayingPlayer.Info.GetDurationMs() > 0f)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0;
		L_0 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0163;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_2;
		L_2 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0163;
		}
	}
	{
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_4;
		L_4 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_4, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_5);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0163;
		}
	}
	{
		// float time = PlayingPlayer.Control.GetCurrentTimeMs();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_7;
		L_7 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_7, NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker0< float >::Invoke(22 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetCurrentTimeMs() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_8);
		// float duration = PlayingPlayer.Info.GetDurationMs();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_10;
		L_10 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_10, NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
		// float d = Mathf.Clamp(time / duration, 0.0f, 1.0f);
		float L_13 = V_0;
		float L_14;
		L_14 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_9/L_13)), (0.0f), (1.0f), NULL);
		V_1 = L_14;
		// _setVideoSeekSliderValue = d;
		float L_15 = V_1;
		__this->____setVideoSeekSliderValue_9 = L_15;
		// _videoSeekSlider.value = d;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->____videoSeekSlider_8;
		float L_17 = V_1;
		NullCheck(L_16);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_16, L_17);
		// if (_bufferedSliderRect != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->____bufferedSliderRect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0163;
		}
	}
	{
		// float t1 = 0f;
		V_2 = (0.0f);
		// float t2 = PlayingPlayer.Control.GetBufferingProgress();
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_20;
		L_20 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_20, NULL);
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker0< float >::Invoke(37 /* System.Single RenderHeads.Media.AVProVideo.IMediaControl::GetBufferingProgress() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_21);
		V_3 = L_22;
		// if (t2 <= 0f)
		float L_23 = V_3;
		if ((!(((float)L_23) <= ((float)(0.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		// if (PlayingPlayer.Control.GetBufferedTimeRangeCount() > 0)
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_24;
		L_24 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(38 /* System.Int32 RenderHeads.Media.AVProVideo.IMediaControl::GetBufferedTimeRangeCount() */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_25);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00ff;
		}
	}
	{
		// PlayingPlayer.Control.GetBufferedTimeRange(0, ref t1, ref t2);
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_27;
		L_27 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline(L_27, NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = InterfaceFuncInvoker3< bool, int32_t, float*, float* >::Invoke(39 /* System.Boolean RenderHeads.Media.AVProVideo.IMediaControl::GetBufferedTimeRange(System.Int32,System.Single&,System.Single&) */, IMediaControl_t49081C9053E21C3D27EE1E3FDE38DD520B4E5DA9_il2cpp_TypeInfo_var, L_28, 0, (&V_2), (&V_3));
		// t1 /= PlayingPlayer.Info.GetDurationMs();
		float L_30 = V_2;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_31;
		L_31 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_31, NULL);
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_32);
		V_2 = ((float)(L_30/L_33));
		// t2 /= PlayingPlayer.Info.GetDurationMs();
		float L_34 = V_3;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_35;
		L_35 = VCR_get_PlayingPlayer_mC1649251A959F0F10600B45BC4A99D7DDBF637B5(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline(L_35, NULL);
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single RenderHeads.Media.AVProVideo.IMediaInfo::GetDurationMs() */, IMediaInfo_t86FA4CC0A62E8D934CD707032FE6EBE55FAEE73E_il2cpp_TypeInfo_var, L_36);
		V_3 = ((float)(L_34/L_37));
	}

IL_00ff:
	{
		// Vector2 anchorMin = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_4 = L_38;
		// Vector2 anchorMax = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		V_5 = L_39;
		// if (_bufferedSliderImage != null &&
		//     _bufferedSliderImage.type == Image.Type.Filled)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->____bufferedSliderImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0137;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->____bufferedSliderImage_19;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline(L_42, NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)3))))
		{
			goto IL_0137;
		}
	}
	{
		// _bufferedSliderImage.fillAmount = d;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->____bufferedSliderImage_19;
		float L_45 = V_1;
		NullCheck(L_44);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_44, L_45, NULL);
		goto IL_0149;
	}

IL_0137:
	{
		// anchorMin[0] = t1;
		float L_46 = V_2;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline((&V_4), 0, L_46, NULL);
		// anchorMax[0] = t2;
		float L_47 = V_3;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline((&V_5), 0, L_47, NULL);
	}

IL_0149:
	{
		// _bufferedSliderRect.anchorMin = anchorMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->____bufferedSliderRect_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_4;
		NullCheck(L_48);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_48, L_49, NULL);
		// _bufferedSliderRect.anchorMax = anchorMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->____bufferedSliderRect_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_5;
		NullCheck(L_50);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_50, L_51, NULL);
	}

IL_0163:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::OnVideoEvent(RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR_OnVideoEvent_m706B9D3526405100C25433BA3F0797CA6EDFEB27 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* ___mp0, int32_t ___et1, int32_t ___errorCode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5B87595462B1299CC2AA421A01B45CED796A03);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___et1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_001a;
			}
			case 3:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_0020;
	}

IL_001a:
	{
		// SwapPlayers();
		VCR_SwapPlayers_mBF148951CF5556E628060EAD00C4773B3533757D(__this, NULL);
	}

IL_0020:
	{
		// Debug.Log("Event: " + et.ToString());
		Il2CppFakeBox<int32_t> L_1(EventType_tBC5B25C3556CECBDC6B73F9305DD2C4E858A7C60_il2cpp_TypeInfo_var, (&___et1));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDD5B87595462B1299CC2AA421A01B45CED796A03, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProVideo.Demos.VCR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCR__ctor_mE919BFD5EC6572714968F081BD1BB018CC6F1571 (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0B5DB70B9C29345DC81C49180051DEA69FD220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MediaPlayer.FileLocation _location = MediaPlayer.FileLocation.RelativeToStreamingAssetsFolder;
		__this->____location_15 = 2;
		// public string _folder = "AVProVideoDemos/";
		__this->____folder_16 = _stringLiteral7B0B5DB70B9C29345DC81C49180051DEA69FD220;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____folder_16), (void*)_stringLiteral7B0B5DB70B9C29345DC81C49180051DEA69FD220);
		// public string[] _videoFiles = { "BigBuckBunny_720p30.mp4", "SampleSphere.mp4" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9D18CF402525208DCFA5170DAD3E8365F470E5B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral56D100FEAEB307072836D3B1C3A6CC0B9BCAE433);
		__this->____videoFiles_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____videoFiles_17), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MediaPlayer_get_Control_m663603A8A327A575C0DDBA8DCCF53D6D2AD18CBE_inline (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Control; }
		RuntimeObject* L_0 = __this->___m_Control_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509ChainPolicy_set_UrlRetrievalTimeout_m6144C7BF504DA6E1B7FEE128DC78BBE29B03E373_inline (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		__this->___timeout_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MediaPlayer_get_Info_m9F04BDBE4FBE389F12DA64DFB8C3C110A6249AB8_inline (MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Info; }
		RuntimeObject* L_0 = __this->___m_Info_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resampler_set_TextureTimeStamp_m14A47E36DC1F0205B98DBB7E9DB24AD4CD501D2A_inline (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		int64_t L_0 = ___value0;
		__this->___U3CTextureTimeStampU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resampler_set_LastT_mF04FFA229522A4093F96DA94183435F5A0AF26B2_inline (Resampler_tCB46C987813685864F159413B3DF35620F4B8C0F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		float L_0 = ___value0;
		__this->___U3CLastTU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* VCR_get_LoadingPlayer_m49E17E3827880680124E80254CF011BBE80E9D62_inline (VCR_t8E0BB3DADFB6CF8BC5E7145628B86215FC95CF35* __this, const RuntimeMethod* method) 
{
	{
		// return _loadingPlayer;
		MediaPlayer_t07DB2C39023E0F8F4A3A08CD8D738BECB2CB0CE5* L_0 = __this->____loadingPlayer_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public Type type { get { return m_Type; } set { if (SetPropertyUtility.SetStruct(ref m_Type, value)) SetVerticesDirty(); } }
		int32_t L_0 = __this->___m_Type_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = ___value1;
		__this->___x_0 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = ___value1;
		__this->___y_1 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF4939C5478ABE7A44FB5EBEDEB0F6A8D252E9EF4_gshared_inline (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F* __this, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D ___item0, const RuntimeMethod* method) 
{
	ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* L_1 = (ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ChunkU5BU5D_t28161E0A2B56A0D26BEA41A871F2B472DA3B7B38* L_6 = V_0;
		int32_t L_7 = V_1;
		Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D)L_8);
		return;
	}

IL_0034:
	{
		Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D L_9 = ___item0;
		((  void (*) (List_1_t00F5D3D47D07BA87AA2C35AE52D76A4F652C8D1F*, Chunk_t81057F86E4573B85C33573B88905BABBB9B62B1D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
