#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Depthkit.PlayerType>
struct Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Depthkit.PlayerType>
struct KeyCollection_tFE51EC018492A4D31E029A8A751DFE46BF566C66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Depthkit.PlayerType>
struct ValueCollection_t6485DEE12E4EC0A689343D37973FCABC57D060AC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Depthkit.PlayerType>[]
struct EntryU5BU5D_tAC51A0F96FA59DA8B681CE70201E126184C6FA44;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Depthkit.Depthkit_ClipPlayer[]
struct Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F;
// Depthkit.Depthkit_ClipRenderer[]
struct Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Depthkit.Depthkit_Metadata/Perspective[]
struct PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Depthkit.DepthkitClipEventHandler
struct DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3;
// Depthkit_APIExample
struct Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035;
// Depthkit.Depthkit_AVProVideoPlayer
struct Depthkit_AVProVideoPlayer_t3E312D24168C2C3A0296451EB49E0FB9F7194E69;
// Depthkit.Depthkit_Clip
struct Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4;
// Depthkit.Depthkit_ClipPlayer
struct Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C;
// Depthkit.Depthkit_ClipRenderer
struct Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B;
// Depthkit.Depthkit_Info
struct Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC;
// Depthkit.Depthkit_Metadata
struct Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB;
// Depthkit.Depthkit_PhotoLook
struct Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7;
// Depthkit.Depthkit_PlayerEvents
struct Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0;
// Depthkit.Depthkit_UnityVideoPlayer
struct Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Depthkit.Depthkit_Metadata/MetadataSinglePerspective
struct MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C;
// Depthkit.Depthkit_Metadata/MetadataVersion
struct MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36;
// Depthkit.Depthkit_Metadata/Perspective
struct Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D;
// Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8
struct U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE;
// Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10
struct U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderType_tA8C3EB808E822DC2044A1ECD94A737235FAA27F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B5340D6E8F82910E413FCECF7E6D03C265C596;
IL2CPP_EXTERN_C String_t* _stringLiteral073641946CDF19328F5BD9055E94F65BFC5AECB2;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral13AB2540E6024EA47994FC326E322E69B5556724;
IL2CPP_EXTERN_C String_t* _stringLiteral1A12B2AC972521F83D511839364C1C21E6213477;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0F61D771072D05E9B44C6B662E8A13903C16C8;
IL2CPP_EXTERN_C String_t* _stringLiteral200BB06076B2BC0A6ED1E7F7ADFAE6A4F038E27D;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22CBE07414C94E64F9F0E7C6DE0C01EE13900E6A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F71E9D45DB88E375AA9587C08F3D519FB241BB8;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B821D567CBAB99C21F9D9435DE58209FC8D6C72;
IL2CPP_EXTERN_C String_t* _stringLiteral40E3E74AEC8D693075D5EBF8F4E637342C949F88;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4E82636E24775022BDFD8934E96DC23E60409A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51311F107A22ACB2B9982782F66881085ABC044E;
IL2CPP_EXTERN_C String_t* _stringLiteral7239E17679562CEBA5A69EB86D4EC1698430E744;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4175BF8041F07F6708F72C27EB5F2A495F397F;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BA7350B526060513B48E341B68F40FB75E28110;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE3F403F4A6E9A8DB3493E0F9E9AA0662984B5F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F987FA48C36FB2C5782749159430EBA056CF093;
IL2CPP_EXTERN_C String_t* _stringLiteral90F54F4AE2F2AC16D15E006F7F99C29C3F1B441C;
IL2CPP_EXTERN_C String_t* _stringLiteral98F2BE3235CD2B4D9A46CBD6132F4FEBD2B9E8AD;
IL2CPP_EXTERN_C String_t* _stringLiteral98F6DE8DFFE1B9D049C52216D284AE1DCBFF7258;
IL2CPP_EXTERN_C String_t* _stringLiteral9E7FB8A0321F5D2E71DAF5A89942B5000CF7186F;
IL2CPP_EXTERN_C String_t* _stringLiteralA636ADACF6491535204C3530E88662CDDAE84364;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B338E35F0E8D0E20743E64140170C142E3ED52;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EC02E779424D024A6DD83910846B63E262975F;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7FEEEFE54BBAA10ADA315F00E10721108867A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC18DF2C08D3DFE93F8091C507663CA9C038B823B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C3CEA8BB8372C1F44143B72A1B3CF8208F9422;
IL2CPP_EXTERN_C String_t* _stringLiteralCB2EC6F4FB9DB7DF41F944C120D367D6B782F9F1;
IL2CPP_EXTERN_C String_t* _stringLiteralCF92A3CD67D221B8B65CBA9CD0D7CCEE3E51DDF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD1EFA66327C25120EDA59E2E821D512A7ECAEB79;
IL2CPP_EXTERN_C String_t* _stringLiteralD73BBDC775FC929A25E6749813644C34D4321884;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE378BC26257A3CBD07A3DC5704745AF3DE706809;
IL2CPP_EXTERN_C String_t* _stringLiteralEF834D0572FEB3A85EA9B56EBE5DA82A136510F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E045A2E75C66C2B40B4240A1AEE25CBFA4D7F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9BFBA305F5D6A2435193C66054336F696D869F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_m4EC6F17ED0322E686E21D2B2A11D54DCE67CF9AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_APIExample_OnClipLoadingFinished_m3F37B6B27FACB0BDC821B7188A2F14A4AA4DE7DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_APIExample_OnClipLoadingStart_m8620CC9D1F4D329240E2B4CE4164F73D7DACAD50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_APIExample_OnClipPlaybackPaused_m02D229FA062F98F16E4D2A3552F95E9D866F3DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_APIExample_OnClipPlaybackStarted_m41FDF41014BFAF5A302EF9D414452BF87DE65A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_APIExample_OnClipPlaybackStopped_m93A7CE632DFB2A379B6F1A6674015B71250B8943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Depthkit_UnityVideoPlayer_OnVideoLoadingComplete_mEAF06A436A6AFC3561113FF4247C23346889636C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF48278FC9ADBA18D665DCF673757FB3B0D33F2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m743DC870284B0B23D029801DF166AE425AC08155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDepthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA_mCEE1393E7E62F872675E5449AAE2B138E7C6B13A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9FA14FC5CF70A5C1C779D1C083B9ADA2512A0DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_mD7B771AB541E448646640861D6F37F2B55390B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDepthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_mDFE286EB0A39410030525E1E94FE45616F6AB1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisMetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C_m2C3C3F4A5641073E7F356C885553CD936AC00E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisMetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36_m71A4CFE48A5F8907C089B82E24891B7C6C713662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAndPlayU3Ed__10_System_Collections_IEnumerator_Reset_m8BF70430ACA4985F54C43A0389759227CBFCFE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ed__8_System_Collections_IEnumerator_Reset_m7869530F823E8CA025254B8C82F705F7BB62A103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F;
struct Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2;
struct DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Depthkit.PlayerType>
struct Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAC51A0F96FA59DA8B681CE70201E126184C6FA44* ____entries_1;
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
	KeyCollection_tFE51EC018492A4D31E029A8A751DFE46BF566C66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6485DEE12E4EC0A689343D37973FCABC57D060AC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Depthkit.Depthkit_AVProVideoPlayer
struct Depthkit_AVProVideoPlayer_t3E312D24168C2C3A0296451EB49E0FB9F7194E69  : public RuntimeObject
{
};

// Depthkit.Depthkit_PlayerEvents
struct Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0  : public RuntimeObject
{
	// Depthkit.DepthkitClipEventHandler Depthkit.Depthkit_PlayerEvents::PlaybackStarted
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___PlaybackStarted_0;
	// Depthkit.DepthkitClipEventHandler Depthkit.Depthkit_PlayerEvents::PlaybackPaused
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___PlaybackPaused_1;
	// Depthkit.DepthkitClipEventHandler Depthkit.Depthkit_PlayerEvents::PlaybackStopped
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___PlaybackStopped_2;
	// Depthkit.DepthkitClipEventHandler Depthkit.Depthkit_PlayerEvents::LoadingStarted
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___LoadingStarted_3;
	// Depthkit.DepthkitClipEventHandler Depthkit.Depthkit_PlayerEvents::LoadingFinished
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___LoadingFinished_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Depthkit.RenderTypeExt
struct RenderTypeExt_t17964D84AE2A8DA05C0C0DD8689230A690B769EC  : public RuntimeObject
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

// Depthkit.Depthkit_Metadata/MetadataVersion
struct MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36  : public RuntimeObject
{
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataVersion::_versionMajor
	int32_t ____versionMajor_0;
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataVersion::_versionMinor
	int32_t ____versionMinor_1;
	// System.String Depthkit.Depthkit_Metadata/MetadataVersion::format
	String_t* ___format_2;
};

// Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8
struct U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE  : public RuntimeObject
{
	// System.Int32 Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Depthkit.Depthkit_UnityVideoPlayer Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::<>4__this
	Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* ___U3CU3E4__this_2;
};

// Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10
struct U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60  : public RuntimeObject
{
	// System.Int32 Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Depthkit.Depthkit_UnityVideoPlayer Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::<>4__this
	Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* ___U3CU3E4__this_2;
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

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Depthkit.Version
struct Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD 
{
	// System.Byte Depthkit.Version::<major>k__BackingField
	uint8_t ___U3CmajorU3Ek__BackingField_0;
	// System.Byte Depthkit.Version::<minor>k__BackingField
	uint8_t ___U3CminorU3Ek__BackingField_1;
	// System.Byte Depthkit.Version::<patch>k__BackingField
	uint8_t ___U3CpatchU3Ek__BackingField_2;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// Depthkit.Depthkit_Info
struct Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC  : public RuntimeObject
{
};

struct Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields
{
	// Depthkit.Version Depthkit.Depthkit_Info::Version
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___Version_0;
	// System.Collections.Generic.Dictionary`2<System.String,Depthkit.PlayerType> Depthkit.Depthkit_Info::DirectiveDict
	Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572* ___DirectiveDict_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Depthkit.Depthkit_Info::AssetSearchDict
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___AssetSearchDict_4;
};

// Depthkit.Depthkit_Metadata
struct Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB  : public RuntimeObject
{
	// System.Int32 Depthkit.Depthkit_Metadata::_versionMajor
	int32_t ____versionMajor_1;
	// System.Int32 Depthkit.Depthkit_Metadata::_versionMinor
	int32_t ____versionMinor_2;
	// System.String Depthkit.Depthkit_Metadata::format
	String_t* ___format_3;
	// System.Int32 Depthkit.Depthkit_Metadata::textureWidth
	int32_t ___textureWidth_4;
	// System.Int32 Depthkit.Depthkit_Metadata::textureHeight
	int32_t ___textureHeight_5;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata::boundsCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boundsCenter_6;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata::boundsSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boundsSize_7;
	// Depthkit.Depthkit_Metadata/Perspective[] Depthkit.Depthkit_Metadata::perspectives
	PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* ___perspectives_8;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Depthkit.Depthkit_Metadata/MetadataSinglePerspective
struct MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C  : public RuntimeObject
{
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::_versionMajor
	int32_t ____versionMajor_0;
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::_versionMinor
	int32_t ____versionMinor_1;
	// System.String Depthkit.Depthkit_Metadata/MetadataSinglePerspective::format
	String_t* ___format_2;
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::numAngles
	int32_t ___numAngles_3;
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::depthImageSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthImageSize_4;
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::depthPrincipalPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthPrincipalPoint_5;
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::depthFocalLength
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthFocalLength_6;
	// System.Single Depthkit.Depthkit_Metadata/MetadataSinglePerspective::farClip
	float ___farClip_7;
	// System.Single Depthkit.Depthkit_Metadata/MetadataSinglePerspective::nearClip
	float ___nearClip_8;
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::textureWidth
	int32_t ___textureWidth_9;
	// System.Int32 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::textureHeight
	int32_t ___textureHeight_10;
	// UnityEngine.Matrix4x4 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::extrinsics
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___extrinsics_11;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::boundsCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boundsCenter_12;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::boundsSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boundsSize_13;
	// UnityEngine.Vector4 Depthkit.Depthkit_Metadata/MetadataSinglePerspective::crop
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___crop_14;
	// System.Single Depthkit.Depthkit_Metadata/MetadataSinglePerspective::clipEpsilon
	float ___clipEpsilon_15;
};

// Depthkit.Depthkit_Metadata/Perspective
struct Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D  : public RuntimeObject
{
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/Perspective::depthImageSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthImageSize_0;
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/Perspective::depthPrincipalPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthPrincipalPoint_1;
	// UnityEngine.Vector2 Depthkit.Depthkit_Metadata/Perspective::depthFocalLength
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___depthFocalLength_2;
	// System.Single Depthkit.Depthkit_Metadata/Perspective::farClip
	float ___farClip_3;
	// System.Single Depthkit.Depthkit_Metadata/Perspective::nearClip
	float ___nearClip_4;
	// UnityEngine.Matrix4x4 Depthkit.Depthkit_Metadata/Perspective::extrinsics
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___extrinsics_5;
	// UnityEngine.Matrix4x4 Depthkit.Depthkit_Metadata/Perspective::extrinsicsInv
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___extrinsicsInv_6;
	// UnityEngine.Vector4 Depthkit.Depthkit_Metadata/Perspective::crop
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___crop_7;
	// System.Single Depthkit.Depthkit_Metadata/Perspective::clipEpsilon
	float ___clipEpsilon_8;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata/Perspective::cameraNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraNormal_9;
	// UnityEngine.Vector3 Depthkit.Depthkit_Metadata/Perspective::cameraCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraCenter_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Depthkit.DepthkitClipEventHandler
struct DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Depthkit_APIExample
struct Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Depthkit.Depthkit_Clip Depthkit_APIExample::clip
	Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* ___clip_4;
};

// Depthkit.Depthkit_Clip
struct Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Depthkit.Depthkit_ClipPlayer Depthkit.Depthkit_Clip::_player
	Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* ____player_4;
	// Depthkit.Depthkit_ClipRenderer Depthkit.Depthkit_Clip::_renderer
	Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* ____renderer_5;
	// System.Single Depthkit.Depthkit_Clip::_depthLuminanceFilter
	float ____depthLuminanceFilter_6;
	// System.Single Depthkit.Depthkit_Clip::_internalEdgeCutoffAngle
	float ____internalEdgeCutoffAngle_7;
	// UnityEngine.BoxCollider Depthkit.Depthkit_Clip::_collider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____collider_8;
	// Depthkit.AvailablePlayerType Depthkit.Depthkit_Clip::_playerType
	int32_t ____playerType_10;
	// Depthkit.RenderType Depthkit.Depthkit_Clip::_renderType
	int32_t ____renderType_11;
	// System.String Depthkit.Depthkit_Clip::_metaDataFilePath
	String_t* ____metaDataFilePath_12;
	// UnityEngine.TextAsset Depthkit.Depthkit_Clip::_metaDataFile
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ____metaDataFile_13;
	// Depthkit.Depthkit_Clip/MetadataSourceType Depthkit.Depthkit_Clip::_metaDataSourceType
	int32_t ____metaDataSourceType_14;
	// UnityEngine.Texture2D Depthkit.Depthkit_Clip::_poster
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____poster_15;
	// Depthkit.Depthkit_Metadata Depthkit.Depthkit_Clip::_metaData
	Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* ____metaData_16;
	// System.Boolean Depthkit.Depthkit_Clip::_needToResetPlayerType
	bool ____needToResetPlayerType_17;
	// System.Boolean Depthkit.Depthkit_Clip::_needToRefreshPlayerValues
	bool ____needToRefreshPlayerValues_18;
	// System.Boolean Depthkit.Depthkit_Clip::_needToResetRenderType
	bool ____needToResetRenderType_19;
	// System.Boolean Depthkit.Depthkit_Clip::_needToRefreshMetadata
	bool ____needToRefreshMetadata_20;
	// System.Boolean Depthkit.Depthkit_Clip::_playerSetup
	bool ____playerSetup_21;
	// System.Boolean Depthkit.Depthkit_Clip::_metaSetup
	bool ____metaSetup_22;
	// System.Boolean Depthkit.Depthkit_Clip::_rendererSetup
	bool ____rendererSetup_23;
	// System.Int32 Depthkit.Depthkit_Clip::_lastFrame
	int32_t ____lastFrame_24;
};

struct Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_StaticFields
{
	// Depthkit.AvailablePlayerType Depthkit.Depthkit_Clip::_defaultPlayerType
	int32_t ____defaultPlayerType_9;
};

// Depthkit.Depthkit_ClipPlayer
struct Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Depthkit.Depthkit_ClipPlayer::<VideoLoaded>k__BackingField
	bool ___U3CVideoLoadedU3Ek__BackingField_4;
	// Depthkit.Depthkit_PlayerEvents Depthkit.Depthkit_ClipPlayer::events
	Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* ___events_5;
};

// Depthkit.Depthkit_ClipRenderer
struct Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Depthkit.Depthkit_ClipRenderer::_geometryDirty
	bool ____geometryDirty_4;
	// System.Boolean Depthkit.Depthkit_ClipRenderer::_materialDirty
	bool ____materialDirty_5;
	// System.Boolean Depthkit.Depthkit_ClipRenderer::_textureUpdated
	bool ____textureUpdated_6;
	// System.Boolean Depthkit.Depthkit_ClipRenderer::_metadataChanged
	bool ____metadataChanged_7;
	// UnityEngine.Texture Depthkit.Depthkit_ClipRenderer::_texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____texture_8;
	// Depthkit.Depthkit_ClipRenderer/MeshDensity Depthkit.Depthkit_ClipRenderer::_meshDensity
	int32_t ____meshDensity_9;
	// UnityEngine.Bounds Depthkit.Depthkit_ClipRenderer::_bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ____bounds_10;
	// System.Boolean Depthkit.Depthkit_ClipRenderer::_textureIsFlipped
	bool ____textureIsFlipped_11;
	// Depthkit.GammaCorrection Depthkit.Depthkit_ClipRenderer::_gammaCorrectDepth
	int32_t ____gammaCorrectDepth_12;
	// Depthkit.GammaCorrection Depthkit.Depthkit_ClipRenderer::_gammaCorrectColor
	int32_t ____gammaCorrectColor_13;
	// Depthkit.Depthkit_Metadata Depthkit.Depthkit_ClipRenderer::_metadata
	Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* ____metadata_14;
	// System.Single Depthkit.Depthkit_ClipRenderer::_depthBrightnessThreshold
	float ____depthBrightnessThreshold_15;
	// System.Single Depthkit.Depthkit_ClipRenderer::_internalEdgeCutoffAngle
	float ____internalEdgeCutoffAngle_16;
};

// Depthkit.Depthkit_PhotoLook
struct Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7  : public Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B
{
	// UnityEngine.Shader Depthkit.Depthkit_PhotoLook::_shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shader_17;
	// UnityEngine.Material Depthkit.Depthkit_PhotoLook::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_18;
	// UnityEngine.Mesh Depthkit.Depthkit_PhotoLook::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_19;
};

// Depthkit.Depthkit_UnityVideoPlayer
struct Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA  : public Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C
{
	// UnityEngine.Video.VideoPlayer Depthkit.Depthkit_UnityVideoPlayer::_mediaPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ____mediaPlayer_6;
	// UnityEngine.AudioSource Depthkit.Depthkit_UnityVideoPlayer::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.ComponentModel.DescriptionAttribute[]
struct DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57  : public RuntimeArray
{
	ALIGN_FIELD (8) DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* m_Items[1];

	inline DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Depthkit.Depthkit_ClipPlayer[]
struct Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F  : public RuntimeArray
{
	ALIGN_FIELD (8) Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* m_Items[1];

	inline Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Depthkit.Depthkit_ClipRenderer[]
struct Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2  : public RuntimeArray
{
	ALIGN_FIELD (8) Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* m_Items[1];

	inline Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Depthkit.Depthkit_Metadata/Perspective[]
struct PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043  : public RuntimeArray
{
	ALIGN_FIELD (8) Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* m_Items[1];

	inline Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// Depthkit.Depthkit_PlayerEvents Depthkit.Depthkit_Clip::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.DepthkitClipEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789 (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::add_LoadingStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_LoadingStarted_m353A1580F3DA47D234531565D564601FA4964B16 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::add_LoadingFinished(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_LoadingFinished_mBCE5F28B6317EC2FCAF74D0F220B1ACEBA0BA545 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackStarted_m39C5026A0AEA29EFBDCC1801A7A7467C2DA3A0B7 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackPaused(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackPaused_m1E9EDD3A3583CBC07E43A2D5FA5DC5288E5580A8 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackStopped(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackStopped_m2AF1B10E94B4A071F598F56A744889182A40ED10 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) ;
// Depthkit.Depthkit_ClipPlayer Depthkit.Depthkit_Clip::get_Player()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Depthkit.Version::.ctor(System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___major0, uint8_t ___minor1, uint8_t ___patch2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Depthkit.Depthkit_PlayerEvents Depthkit.Depthkit_ClipPlayer::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Depthkit.Depthkit_Clip::Setup(Depthkit.AvailablePlayerType,Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Setup_mD64ACCE84153914C2A8C1F3AC0DADB999736725F (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, int32_t ___playerType0, int32_t ___renderType1, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::RefreshMetaData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshMetaData_mDE88BC1BC3CE6C83BE1A947F1EC63552F81C3542 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::ResetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ResetPlayer_m4E1446DFA345D60C00212128F3A8F9EE4E85C3B6 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::ResetRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ResetRenderer_m1B87C58E16A1C41FEE939518500EFDFD26E4C537 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::RefreshPlayerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshPlayerValues_m011F5A06D95C4DEB19CF4E7CB46B5202FFFF0F4C (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::RefreshRendererValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshRendererValues_m15E7C4C7F3094A982FB239D856B3A67BCDFBA87F (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Clip::ValidateRendererVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ValidateRendererVersion_mA8F3FAE4677791EE714C6DAE6F51E59B571AD502 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Depthkit.Depthkit_ClipPlayer>()
inline Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* GameObject_GetComponent_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9FA14FC5CF70A5C1C779D1C083B9ADA2512A0DE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Depthkit.Depthkit_Clip::set_Player(Depthkit.Depthkit_ClipPlayer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F_inline (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Depthkit.Depthkit_ClipPlayer>()
inline Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* Component_GetComponents_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9BFBA305F5D6A2435193C66054336F696D869F0E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Depthkit.Depthkit_UnityVideoPlayer>()
inline Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* GameObject_AddComponent_TisDepthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA_mCEE1393E7E62F872675E5449AAE2B138E7C6B13A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Depthkit.Version Depthkit.RenderTypeExt::CompatibleVersion(Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD RenderTypeExt_CompatibleVersion_m2DB473898EA6C60F80533D6E440E4F3191A29968 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Version::op_LessThan(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThan_m50D1E66E54072D9BA83AF10D07F8C2EB93BFC193 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) ;
// System.String Depthkit.RenderTypeExt::Name(Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTypeExt_Name_mA8227E48157429214719FA55B8478656D044D7EB (int32_t ___value0, const RuntimeMethod* method) ;
// System.String Depthkit.Version::op_Implicit(Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_op_Implicit_mBDC331A52131B9A3756B4BE4F9EA918BCFC116F3 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___v0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Depthkit.Depthkit_ClipRenderer>()
inline Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* GameObject_GetComponent_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_mD7B771AB541E448646640861D6F37F2B55390B53 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_Metadata(Depthkit.Depthkit_Metadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Metadata_m182B874DE99F66E4C5A523491A803F3B33AC913E (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Depthkit.Depthkit_ClipRenderer>()
inline Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* Component_GetComponents_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_m4EC6F17ED0322E686E21D2B2A11D54DCE67CF9AB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Depthkit.Depthkit_PhotoLook>()
inline Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean Depthkit.Depthkit_Clip::get_IsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_Clip_get_IsSetup_mB1D8185A4801170BD31A18D7CF554B43E948650A (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Texture_mF072009E14435F0A6A4ECF9CB546A07B475C4817 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::set_TextureIsFlipped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_TextureIsFlipped_m50A209BAE7054C319431743FBA594FAC689616FB (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::set_GammaCorrectDepth(Depthkit.GammaCorrection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_GammaCorrectDepth_mE42E200326F8AB36320F3E10B899847BF7387AD3 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::set_GammaCorrectColor(Depthkit.GammaCorrection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_GammaCorrectColor_m9E0174957171D1682961CA60BE2C5F7CF89431B2 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Texture Depthkit.Depthkit_ClipRenderer::get_Texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Depthkit_ClipRenderer_get_Texture_m9588E8073A5453C0A93116001AE453596145C7DF_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Depthkit.Depthkit_Metadata Depthkit.Depthkit_Metadata::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* Depthkit_Metadata_CreateFromJSON_m0B4162764501250EA559E4DC71CCCA72D1C9B285 (String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipPlayer::set_Events(Depthkit.Depthkit_PlayerEvents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_Events_mAF09D18036FE0E8BE1034EB066DEBDE75C8F18A6_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PlayerEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents__ctor_mCD44AE0EECE263171668DB589AA59E58F3AC6DA4 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::set_Bounds(UnityEngine.Bounds)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Bounds_m5E174F9F0DCC7D08EAF633A4863DD49B6CBDD0A4_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 Depthkit.Depthkit_ClipRenderer::get_MeshScalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Byte Depthkit.Version::get_major()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Version::set_major(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Byte Depthkit.Version::get_minor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Version::set_minor(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Byte Depthkit.Version::get_patch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Version::set_patch(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String Depthkit.Version::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_ToString_m495D7CD31F687F4FE5AAE6C84199E54A091357EC (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Version::Equals(Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___other0, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Version::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_mD6D649A817D006544C0CF0D89346CBE642066815 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Depthkit.Version::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_mBF326EA3542A8A2B63AF77E2E9D6F4C161C3D3DC (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Version::op_Equality(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mDCBBC578AB95E33ACA1DFB34CB724E1992EC98CE (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Version::op_GreaterThan(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThan_mECA3EF67B723D220192D3F5C06C162D70DBCA740 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Depthkit.PlayerType>::.ctor()
inline void Dictionary_2__ctor_m743DC870284B0B23D029801DF166AE425AC08155 (Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572*, const RuntimeMethod*))Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Depthkit.PlayerType>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF48278FC9ADBA18D665DCF673757FB3B0D33F2AD (Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Depthkit.Depthkit_Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Metadata__ctor_m73B75499D05E25994D772D9A12BD2655CB7EE2F2 (Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_Metadata/Perspective::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perspective__ctor_m8A99BC7EF830737EE2554870969ACF08900EB54E (Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Depthkit.Depthkit_Metadata/MetadataVersion>(System.String)
inline MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* JsonUtility_FromJson_TisMetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36_m71A4CFE48A5F8907C089B82E24891B7C6C713662 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// T UnityEngine.JsonUtility::FromJson<Depthkit.Depthkit_Metadata/MetadataSinglePerspective>(System.String)
inline MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* JsonUtility_FromJson_TisMetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C_m2C3C3F4A5641073E7F356C885553CD936AC00E06 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// Depthkit.Depthkit_Metadata Depthkit.Depthkit_Metadata::FromSinglePerspective(Depthkit.Depthkit_Metadata/MetadataSinglePerspective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* Depthkit_Metadata_FromSinglePerspective_mBD813D93D966303294448CAFAB8278B567981F5E (MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* ___md0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Inverse_m4ED4E9DA31C914B4CFAFCB370A34C1AFE3C3AA2E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Depthkit.Depthkit_Metadata>(System.String)
inline Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* JsonUtility_FromJson_TisDepthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_mDFE286EB0A39410030525E1E94FE45616F6AB1FB (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Depthkit.DepthkitClipEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PhotoLook::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_BuildMesh_m5EC9C4D9BBD30F31A39397BC0E35277610150FA6 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_PhotoLook::BuildMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_BuildMaterial_m04068576219BE5B6247EA2A529A740E9814CC117 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds Depthkit.Depthkit_ClipRenderer::get_Bounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Depthkit_ClipRenderer_get_Bounds_mC746406A17898CBE62B9FF5C891E539DC4ACD7F1_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_mBEF82829E35961F7AB78112607A21F780051498A (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___layer3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::GetMeshLattice(UnityEngine.Mesh&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_GetMeshLattice_m8DC485D6CD47037A0545F761421915E56EEE1EE2 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** ___mesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6AAC658EE0D1AE43E4F185137E870941FBA542FD (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___allowDestroyingAssets1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer__ctor_m717D21984B536092974887C9C691C1A084A8B00C (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___trackIndex0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___trackIndex0, bool ___enabled1, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Video.VideoPlayer::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Video.VideoClip::get_originalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__8__ctor_mBECDECCCEF6703CD96F19763AE81110CBAD8158F (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipPlayer::set_VideoLoaded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_VideoLoaded_m0A1D4B7193CEE711BFDE701EC437E1F0AF993A26_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAndPlayU3Ed__10__ctor_m10D6056757D3ED553784F314E278B74DC86CAE6A (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void Depthkit.Depthkit_ClipPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer__ctor_m82017CE6D0FD77C8506A792E6B7067F0DF5AF534 (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean Depthkit.Depthkit_ClipPlayer::get_VideoLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Depthkit_ClipPlayer_get_VideoLoaded_m247D2E21959B8D7D27A15F984CC769F1DBF85A8B_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
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
// System.Void Depthkit_APIExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_Start_m6CB14023366209F5CEE5EBA58318D96F16BDBAB4 (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_APIExample_OnClipLoadingFinished_m3F37B6B27FACB0BDC821B7188A2F14A4AA4DE7DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_APIExample_OnClipLoadingStart_m8620CC9D1F4D329240E2B4CE4164F73D7DACAD50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_APIExample_OnClipPlaybackPaused_m02D229FA062F98F16E4D2A3552F95E9D866F3DBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_APIExample_OnClipPlaybackStarted_m41FDF41014BFAF5A302EF9D414452BF87DE65A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_APIExample_OnClipPlaybackStopped_m93A7CE632DFB2A379B6F1A6674015B71250B8943_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clip.Events.LoadingStarted += OnClipLoadingStart;
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_0 = __this->___clip_4;
		NullCheck(L_0);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_1;
		L_1 = Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC(L_0, NULL);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)il2cpp_codegen_object_new(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789(L_2, __this, (intptr_t)((void*)Depthkit_APIExample_OnClipLoadingStart_m8620CC9D1F4D329240E2B4CE4164F73D7DACAD50_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Depthkit_PlayerEvents_add_LoadingStarted_m353A1580F3DA47D234531565D564601FA4964B16(L_1, L_2, NULL);
		// clip.Events.LoadingFinished += OnClipLoadingFinished;
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_3 = __this->___clip_4;
		NullCheck(L_3);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_4;
		L_4 = Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC(L_3, NULL);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_5 = (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)il2cpp_codegen_object_new(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789(L_5, __this, (intptr_t)((void*)Depthkit_APIExample_OnClipLoadingFinished_m3F37B6B27FACB0BDC821B7188A2F14A4AA4DE7DB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Depthkit_PlayerEvents_add_LoadingFinished_mBCE5F28B6317EC2FCAF74D0F220B1ACEBA0BA545(L_4, L_5, NULL);
		// clip.Events.PlaybackStarted += OnClipPlaybackStarted; // called when playback has started
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_6 = __this->___clip_4;
		NullCheck(L_6);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_7;
		L_7 = Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC(L_6, NULL);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8 = (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)il2cpp_codegen_object_new(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789(L_8, __this, (intptr_t)((void*)Depthkit_APIExample_OnClipPlaybackStarted_m41FDF41014BFAF5A302EF9D414452BF87DE65A96_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Depthkit_PlayerEvents_add_PlaybackStarted_m39C5026A0AEA29EFBDCC1801A7A7467C2DA3A0B7(L_7, L_8, NULL);
		// clip.Events.PlaybackPaused += OnClipPlaybackPaused; //called when playback has paused
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_9 = __this->___clip_4;
		NullCheck(L_9);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_10;
		L_10 = Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC(L_9, NULL);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_11 = (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)il2cpp_codegen_object_new(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789(L_11, __this, (intptr_t)((void*)Depthkit_APIExample_OnClipPlaybackPaused_m02D229FA062F98F16E4D2A3552F95E9D866F3DBB_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Depthkit_PlayerEvents_add_PlaybackPaused_m1E9EDD3A3583CBC07E43A2D5FA5DC5288E5580A8(L_10, L_11, NULL);
		// clip.Events.PlaybackStopped += OnClipPlaybackStopped; // called when playback has stopped
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_12 = __this->___clip_4;
		NullCheck(L_12);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_13;
		L_13 = Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC(L_12, NULL);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_14 = (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)il2cpp_codegen_object_new(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789(L_14, __this, (intptr_t)((void*)Depthkit_APIExample_OnClipPlaybackStopped_m93A7CE632DFB2A379B6F1A6674015B71250B8943_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Depthkit_PlayerEvents_add_PlaybackStopped_m2AF1B10E94B4A071F598F56A744889182A40ED10(L_13, L_14, NULL);
		// clip.Player.StartVideoLoad();
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_15 = __this->___clip_4;
		NullCheck(L_15);
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_16;
		L_16 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(L_15, NULL);
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(8 /* System.Void Depthkit.Depthkit_ClipPlayer::StartVideoLoad() */, L_16);
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::OnClipLoadingStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_OnClipLoadingStart_m8620CC9D1F4D329240E2B4CE4164F73D7DACAD50 (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4175BF8041F07F6708F72C27EB5F2A495F397F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("APIExample: Loading Started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7A4175BF8041F07F6708F72C27EB5F2A495F397F, NULL);
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::OnClipLoadingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_OnClipLoadingFinished_m3F37B6B27FACB0BDC821B7188A2F14A4AA4DE7DB (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB2EC6F4FB9DB7DF41F944C120D367D6B782F9F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("APIExample: Loading Finished");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralCB2EC6F4FB9DB7DF41F944C120D367D6B782F9F1, NULL);
		// clip.Player.Play();
		Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* L_0 = __this->___clip_4;
		NullCheck(L_0);
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_1;
		L_1 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(L_0, NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(12 /* System.Void Depthkit.Depthkit_ClipPlayer::Play() */, L_1);
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::OnClipPlaybackPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_OnClipPlaybackPaused_m02D229FA062F98F16E4D2A3552F95E9D866F3DBB (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::OnClipPlaybackStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_OnClipPlaybackStarted_m41FDF41014BFAF5A302EF9D414452BF87DE65A96 (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::OnClipPlaybackStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample_OnClipPlaybackStopped_m93A7CE632DFB2A379B6F1A6674015B71250B8943 (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Depthkit_APIExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_APIExample__ctor_mE7FE6A35AFB1B2647224D730D35E87365BD6C5DD (Depthkit_APIExample_t8F4408CF5C3A0A54E17641ABE1056DFA19DB1035* __this, const RuntimeMethod* method) 
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
// System.String Depthkit.RenderTypeExt::Name(Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTypeExt_Name_mA8227E48157429214719FA55B8478656D044D7EB (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderType_tA8C3EB808E822DC2044A1ECD94A737235FAA27F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57* V_0 = NULL;
	{
		// DescriptionAttribute[] da = (DescriptionAttribute[])(value.GetType().GetField(value.ToString())).GetCustomAttributes(typeof(DescriptionAttribute), false);
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(RenderType_tA8C3EB808E822DC2044A1ECD94A737235FAA27F0_il2cpp_TypeInfo_var, &L_1);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Il2CppFakeBox<int32_t> L_4(RenderType_tA8C3EB808E822DC2044A1ECD94A737235FAA27F0_il2cpp_TypeInfo_var, (&___value0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		NullCheck(L_3);
		FieldInfo_t* L_6;
		L_6 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_3, L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_6, L_8, (bool)0);
		V_0 = ((DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57*)Castclass((RuntimeObject*)L_9, DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57_il2cpp_TypeInfo_var));
		// return da.Length > 0 ? da[0].Description : value.ToString();
		DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57* L_10 = V_0;
		NullCheck(L_10);
		if ((((RuntimeArray*)L_10)->max_length))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFakeBox<int32_t> L_11(RenderType_tA8C3EB808E822DC2044A1ECD94A737235FAA27F0_il2cpp_TypeInfo_var, (&___value0));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		return L_12;
	}

IL_0045:
	{
		DescriptionAttributeU5BU5D_tE046B6B60AFAD1A95367E214CA49560F4C1E0C57* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, L_15);
		return L_16;
	}
}
// Depthkit.Version Depthkit.RenderTypeExt::CompatibleVersion(Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD RenderTypeExt_CompatibleVersion_m2DB473898EA6C60F80533D6E440E4F3191A29968 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// return new Version(0, 1, 0);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_1;
		memset((&L_1), 0, sizeof(L_1));
		Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7((&L_1), (uint8_t)0, (uint8_t)1, (uint8_t)0, /*hidden argument*/NULL);
		return L_1;
	}

IL_000c:
	{
		// default: return new Version(0, 0, 0);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_2;
		memset((&L_2), 0, sizeof(L_2));
		Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7((&L_2), (uint8_t)0, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		return L_2;
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
// Depthkit.Depthkit_ClipPlayer Depthkit.Depthkit_Clip::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _player;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0 = __this->____player_4;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_Clip::set_Player(Depthkit.Depthkit_ClipPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* ___value0, const RuntimeMethod* method) 
{
	{
		// _player = value;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0 = ___value0;
		__this->____player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_4), (void*)L_0);
		// }
		return;
	}
}
// Depthkit.Depthkit_PlayerEvents Depthkit.Depthkit_Clip::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* Depthkit_Clip_get_Events_mD97D6106668DE4D16C91C5335466A59B4EE444EC (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F71E9D45DB88E375AA9587C08F3D519FB241BB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player != null)
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0;
		L_0 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return Player.Events;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_2;
		L_2 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_2);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_3;
		L_3 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// Debug.LogError("Unable to access events as player is currently null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral2F71E9D45DB88E375AA9587C08F3D519FB241BB8, NULL);
		// return null;
		return (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0*)NULL;
	}
}
// Depthkit.Depthkit_ClipRenderer Depthkit.Depthkit_Clip::get_ClipRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* Depthkit_Clip_get_ClipRenderer_mA7ABAA345A87BE1FD5AF442ED0751AC9E11E809A (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _renderer;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_0 = __this->____renderer_5;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_Clip::set_ClipRenderer(Depthkit.Depthkit_ClipRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_set_ClipRenderer_m0BFBD05E09E1B62832301239D5BC116200E52B11 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* ___value0, const RuntimeMethod* method) 
{
	{
		// _renderer = value;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_0 = ___value0;
		__this->____renderer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_5), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Depthkit.Depthkit_Clip::get_PlayerSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_Clip_get_PlayerSetup_m00A6E3EF7F9D79B48812B32D5ABC60CF8A2D27A5 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _playerSetup;
		bool L_0 = __this->____playerSetup_21;
		return L_0;
	}
}
// System.Boolean Depthkit.Depthkit_Clip::get_MetaSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_Clip_get_MetaSetup_m95E58C06D97A788AC654B99190123B578CC363B9 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _metaSetup;
		bool L_0 = __this->____metaSetup_22;
		return L_0;
	}
}
// System.Boolean Depthkit.Depthkit_Clip::get_RendererSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_Clip_get_RendererSetup_mB6D59C2A642D4F79AC698BD586451002A2B6B260 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _rendererSetup;
		bool L_0 = __this->____rendererSetup_23;
		return L_0;
	}
}
// System.Boolean Depthkit.Depthkit_Clip::get_IsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_Clip_get_IsSetup_mB1D8185A4801170BD31A18D7CF554B43E948650A (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _playerSetup && _rendererSetup && _metaSetup;
		bool L_0 = __this->____playerSetup_21;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->____rendererSetup_23;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->____metaSetup_22;
		return L_2;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void Depthkit.Depthkit_Clip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Start_mFBA9A3C6D94F2809362A4DFA94D0B3F15529C706 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _needToResetPlayerType = false;
		__this->____needToResetPlayerType_17 = (bool)0;
		// _needToRefreshPlayerValues = false;
		__this->____needToRefreshPlayerValues_18 = (bool)0;
		// _needToRefreshMetadata = false;
		__this->____needToRefreshMetadata_20 = (bool)0;
		// _needToResetRenderType = false;
		__this->____needToResetRenderType_19 = (bool)0;
		// _collider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0;
		L_0 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->____collider_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Reset_m1FBE2B92CBCE66177A01990F881473195BE00F5B (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerType = _defaultPlayerType;
		il2cpp_codegen_runtime_class_init_inline(Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var))->____defaultPlayerType_9;
		__this->____playerType_10 = L_0;
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::Setup(Depthkit.AvailablePlayerType,Depthkit.RenderType,UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Setup_m94E29AD38D97DE6F5D5A86933F4DC74D1AC28028 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, int32_t ___playerType0, int32_t ___renderType1, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___metadata2, const RuntimeMethod* method) 
{
	{
		// Setup(playerType, renderType);
		int32_t L_0 = ___playerType0;
		int32_t L_1 = ___renderType1;
		Depthkit_Clip_Setup_mD64ACCE84153914C2A8C1F3AC0DADB999736725F(__this, L_0, L_1, NULL);
		// _metaDataSourceType = MetadataSourceType.TextAsset;
		__this->____metaDataSourceType_14 = 0;
		// _metaDataFile = metadata;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_2 = ___metadata2;
		__this->____metaDataFile_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metaDataFile_13), (void*)L_2);
		// RefreshMetaData();
		Depthkit_Clip_RefreshMetaData_mDE88BC1BC3CE6C83BE1A947F1EC63552F81C3542(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::Setup(Depthkit.AvailablePlayerType,Depthkit.RenderType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Setup_m52EA8F081286337CD8595C3F8D897718BC21F614 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, int32_t ___playerType0, int32_t ___renderType1, String_t* ___metadataPath2, const RuntimeMethod* method) 
{
	{
		// Setup(playerType, renderType);
		int32_t L_0 = ___playerType0;
		int32_t L_1 = ___renderType1;
		Depthkit_Clip_Setup_mD64ACCE84153914C2A8C1F3AC0DADB999736725F(__this, L_0, L_1, NULL);
		// _metaDataSourceType = MetadataSourceType.FilePath;
		__this->____metaDataSourceType_14 = 1;
		// _metaDataFilePath = metadataPath;
		String_t* L_2 = ___metadataPath2;
		__this->____metaDataFilePath_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metaDataFilePath_12), (void*)L_2);
		// RefreshMetaData();
		Depthkit_Clip_RefreshMetaData_mDE88BC1BC3CE6C83BE1A947F1EC63552F81C3542(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::Setup(Depthkit.AvailablePlayerType,Depthkit.RenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Setup_mD64ACCE84153914C2A8C1F3AC0DADB999736725F (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, int32_t ___playerType0, int32_t ___renderType1, const RuntimeMethod* method) 
{
	{
		// _playerType = playerType;
		int32_t L_0 = ___playerType0;
		__this->____playerType_10 = L_0;
		// _renderType = renderType;
		int32_t L_1 = ___renderType1;
		__this->____renderType_11 = L_1;
		// ResetPlayer();
		Depthkit_Clip_ResetPlayer_m4E1446DFA345D60C00212128F3A8F9EE4E85C3B6(__this, NULL);
		// ResetRenderer();
		Depthkit_Clip_ResetRenderer_m1B87C58E16A1C41FEE939518500EFDFD26E4C537(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_Update_m5B83D41D47C6CC842A75EA4C2C93EC57F1137568 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_renderer == null || !_rendererSetup)
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_0 = __this->____renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->____rendererSetup_23;
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		// ResetRenderer();
		Depthkit_Clip_ResetRenderer_m1B87C58E16A1C41FEE939518500EFDFD26E4C537(__this, NULL);
	}

IL_001c:
	{
		// if (_player == null)
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_3 = __this->____player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// ResetPlayer();
		Depthkit_Clip_ResetPlayer_m4E1446DFA345D60C00212128F3A8F9EE4E85C3B6(__this, NULL);
	}

IL_0030:
	{
		// if (!_playerSetup)
		bool L_5 = __this->____playerSetup_21;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		// _needToRefreshPlayerValues = true;
		__this->____needToRefreshPlayerValues_18 = (bool)1;
	}

IL_003f:
	{
		// if(!_metaSetup)
		bool L_6 = __this->____metaSetup_22;
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		// _needToRefreshMetadata = true;
		__this->____needToRefreshMetadata_20 = (bool)1;
	}

IL_004e:
	{
		// if (_needToResetRenderType)
		bool L_7 = __this->____needToResetRenderType_19;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// ResetRenderer();
		Depthkit_Clip_ResetRenderer_m1B87C58E16A1C41FEE939518500EFDFD26E4C537(__this, NULL);
		// _needToResetRenderType = false;
		__this->____needToResetRenderType_19 = (bool)0;
	}

IL_0063:
	{
		// if (_needToResetPlayerType)
		bool L_8 = __this->____needToResetPlayerType_17;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// ResetPlayer();
		Depthkit_Clip_ResetPlayer_m4E1446DFA345D60C00212128F3A8F9EE4E85C3B6(__this, NULL);
		// _needToResetPlayerType = false;
		__this->____needToResetPlayerType_17 = (bool)0;
	}

IL_0078:
	{
		// if (_needToRefreshPlayerValues || !_player.IsPlayerCreated())
		bool L_9 = __this->____needToRefreshPlayerValues_18;
		if (L_9)
		{
			goto IL_008d;
		}
	}
	{
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_10 = __this->____player_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsPlayerCreated() */, L_10);
		if (L_11)
		{
			goto IL_009a;
		}
	}

IL_008d:
	{
		// RefreshPlayerValues();
		Depthkit_Clip_RefreshPlayerValues_m011F5A06D95C4DEB19CF4E7CB46B5202FFFF0F4C(__this, NULL);
		// _needToRefreshPlayerValues = false;
		__this->____needToRefreshPlayerValues_18 = (bool)0;
	}

IL_009a:
	{
		// if (_needToRefreshMetadata)
		bool L_12 = __this->____needToRefreshMetadata_20;
		if (!L_12)
		{
			goto IL_00af;
		}
	}
	{
		// RefreshMetaData();
		Depthkit_Clip_RefreshMetaData_mDE88BC1BC3CE6C83BE1A947F1EC63552F81C3542(__this, NULL);
		// _needToRefreshMetadata = false;
		__this->____needToRefreshMetadata_20 = (bool)0;
	}

IL_00af:
	{
		// RefreshRendererValues();
		Depthkit_Clip_RefreshRendererValues_m15E7C4C7F3094A982FB239D856B3A67BCDFBA87F(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_OnValidate_m2E5AA173E66A78CD5160E25460A3DD95916A44DC (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// ValidateRendererVersion();
		Depthkit_Clip_ValidateRendererVersion_mA8F3FAE4677791EE714C6DAE6F51E59B571AD502(__this, NULL);
		// RefreshRendererValues();
		Depthkit_Clip_RefreshRendererValues_m15E7C4C7F3094A982FB239D856B3A67BCDFBA87F(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::ResetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ResetPlayer_m4E1446DFA345D60C00212128F3A8F9EE4E85C3B6 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9BFBA305F5D6A2435193C66054336F696D869F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDepthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA_mCEE1393E7E62F872675E5449AAE2B138E7C6B13A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9FA14FC5CF70A5C1C779D1C083B9ADA2512A0DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Player = gameObject.GetComponent<Depthkit_ClipPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_1;
		L_1 = GameObject_GetComponent_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9FA14FC5CF70A5C1C779D1C083B9ADA2512A0DE0(L_0, GameObject_GetComponent_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9FA14FC5CF70A5C1C779D1C083B9ADA2512A0DE0_RuntimeMethod_var);
		Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F_inline(__this, L_1, NULL);
		// if (Player != null && Player.GetPlayerType() == _playerType)
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_2;
		L_2 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_4;
		L_4 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* Depthkit.AvailablePlayerType Depthkit.Depthkit_ClipPlayer::GetPlayerType() */, L_4);
		int32_t L_6 = __this->____playerType_10;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		// return;
		return;
	}

IL_0033:
	{
		// Depthkit_ClipPlayer[] attachedPlayers = GetComponents<Depthkit_ClipPlayer>();
		Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* L_7;
		L_7 = Component_GetComponents_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9BFBA305F5D6A2435193C66054336F696D869F0E(__this, Component_GetComponents_TisDepthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C_m9BFBA305F5D6A2435193C66054336F696D869F0E_RuntimeMethod_var);
		V_0 = L_7;
		// for (int i = 0; i < attachedPlayers.Length; i++)
		V_1 = 0;
		goto IL_004a;
	}

IL_003e:
	{
		// attachedPlayers[i].RemoveComponents();
		Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(15 /* System.Void Depthkit.Depthkit_ClipPlayer::RemoveComponents() */, L_11);
		// for (int i = 0; i < attachedPlayers.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < attachedPlayers.Length; i++)
		int32_t L_13 = V_1;
		Depthkit_ClipPlayerU5BU5D_t0E068443A7DD3D44A42570AEB3854ABB2CC2019F* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// Player = null;
		Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F_inline(__this, (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C*)NULL, NULL);
		// switch (_playerType)
		int32_t L_15 = __this->____playerType_10;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_0071;
		}
	}
	{
		// Player = gameObject.AddComponent<Depthkit_UnityVideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_17;
		L_17 = GameObject_AddComponent_TisDepthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA_mCEE1393E7E62F872675E5449AAE2B138E7C6B13A(L_16, GameObject_AddComponent_TisDepthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA_mCEE1393E7E62F872675E5449AAE2B138E7C6B13A_RuntimeMethod_var);
		Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F_inline(__this, L_17, NULL);
	}

IL_0071:
	{
		// Player.CreatePlayer();
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_18;
		L_18 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_18);
		VirtualActionInvoker0::Invoke(4 /* System.Void Depthkit.Depthkit_ClipPlayer::CreatePlayer() */, L_18);
		// RefreshPlayerValues();
		Depthkit_Clip_RefreshPlayerValues_m011F5A06D95C4DEB19CF4E7CB46B5202FFFF0F4C(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::ValidateRendererVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ValidateRendererVersion_mA8F3FAE4677791EE714C6DAE6F51E59B571AD502 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE3F403F4A6E9A8DB3493E0F9E9AA0662984B5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B338E35F0E8D0E20743E64140170C142E3ED52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E045A2E75C66C2B40B4240A1AEE25CBFA4D7F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_renderer != null && _renderer.GetVersion() < _renderType.CompatibleVersion())
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_0 = __this->____renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ba;
		}
	}
	{
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_2 = __this->____renderer_5;
		NullCheck(L_2);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_3;
		L_3 = VirtualFuncInvoker0< Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD >::Invoke(7 /* Depthkit.Version Depthkit.Depthkit_ClipRenderer::GetVersion() */, L_2);
		int32_t L_4 = __this->____renderType_11;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_5;
		L_5 = RenderTypeExt_CompatibleVersion_m2DB473898EA6C60F80533D6E440E4F3191A29968(L_4, NULL);
		bool L_6;
		L_6 = Version_op_LessThan_m50D1E66E54072D9BA83AF10D07F8C2EB93BFC193(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_00ba;
		}
	}
	{
		// Debug.LogError(_renderType.Name() + "-" + _renderer.GetVersion() +
		//     " is not compatible with current SDK version (DepthkitSDK-" + Depthkit_Info.Version +
		//     "). Please upgrade your Look to at least version: " +
		//     _renderType.Name() + "-" + _renderType.CompatibleVersion() + ". Latest looks can be found at https://www.depthkit.tv/downloads ");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t L_9 = __this->____renderType_11;
		String_t* L_10;
		L_10 = RenderTypeExt_Name_mA8227E48157429214719FA55B8478656D044D7EB(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_13 = __this->____renderer_5;
		NullCheck(L_13);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_14;
		L_14 = VirtualFuncInvoker0< Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD >::Invoke(7 /* Depthkit.Version Depthkit.Depthkit_ClipRenderer::GetVersion() */, L_13);
		String_t* L_15;
		L_15 = Version_op_Implicit_mBDC331A52131B9A3756B4BE4F9EA918BCFC116F3(L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB1B338E35F0E8D0E20743E64140170C142E3ED52);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB1B338E35F0E8D0E20743E64140170C142E3ED52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_18 = ((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___Version_0;
		String_t* L_19;
		L_19 = Version_op_Implicit_mBDC331A52131B9A3756B4BE4F9EA918BCFC116F3(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral8EE3F403F4A6E9A8DB3493E0F9E9AA0662984B5F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral8EE3F403F4A6E9A8DB3493E0F9E9AA0662984B5F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		int32_t L_22 = __this->____renderType_11;
		String_t* L_23;
		L_23 = RenderTypeExt_Name_mA8227E48157429214719FA55B8478656D044D7EB(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		int32_t L_26 = __this->____renderType_11;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_27;
		L_27 = RenderTypeExt_CompatibleVersion_m2DB473898EA6C60F80533D6E440E4F3191A29968(L_26, NULL);
		String_t* L_28;
		L_28 = Version_op_Implicit_mBDC331A52131B9A3756B4BE4F9EA918BCFC116F3(L_27, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralF3E045A2E75C66C2B40B4240A1AEE25CBFA4D7F5);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralF3E045A2E75C66C2B40B4240A1AEE25CBFA4D7F5);
		String_t* L_30;
		L_30 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_30, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::RefreshPlayerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshPlayerValues_m011F5A06D95C4DEB19CF4E7CB46B5202FFFF0F4C (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// _playerSetup = Player.IsPlayerSetup();
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0;
		L_0 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsPlayerSetup() */, L_0);
		__this->____playerSetup_21 = L_1;
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::ResetRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_ResetRenderer_m1B87C58E16A1C41FEE939518500EFDFD26E4C537 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_m4EC6F17ED0322E686E21D2B2A11D54DCE67CF9AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_mD7B771AB541E448646640861D6F37F2B55390B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral200BB06076B2BC0A6ED1E7F7ADFAE6A4F038E27D);
		s_Il2CppMethodInitialized = true;
	}
	Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// _renderer = gameObject.GetComponent<Depthkit_ClipRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_1;
		L_1 = GameObject_GetComponent_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_mD7B771AB541E448646640861D6F37F2B55390B53(L_0, GameObject_GetComponent_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_mD7B771AB541E448646640861D6F37F2B55390B53_RuntimeMethod_var);
		__this->____renderer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_5), (void*)L_1);
		// if (_renderer != null)
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_2 = __this->____renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// if (_renderType == _renderer.GetRenderType())
		int32_t L_4 = __this->____renderType_11;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_5 = __this->____renderer_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* Depthkit.RenderType Depthkit.Depthkit_ClipRenderer::GetRenderType() */, L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_004b;
		}
	}
	{
		// _renderer.Metadata = _metaData;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_7 = __this->____renderer_5;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_8 = __this->____metaData_16;
		NullCheck(L_7);
		Depthkit_ClipRenderer_set_Metadata_m182B874DE99F66E4C5A523491A803F3B33AC913E(L_7, L_8, NULL);
		// _rendererSetup = true;
		__this->____rendererSetup_23 = (bool)1;
		// return;
		return;
	}

IL_004b:
	{
		// Depthkit_ClipRenderer[] attachedRenderers = GetComponents<Depthkit_ClipRenderer>();
		Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* L_9;
		L_9 = Component_GetComponents_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_m4EC6F17ED0322E686E21D2B2A11D54DCE67CF9AB(__this, Component_GetComponents_TisDepthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B_m4EC6F17ED0322E686E21D2B2A11D54DCE67CF9AB_RuntimeMethod_var);
		V_0 = L_9;
		// for (int i = 0; i < attachedRenderers.Length; i++)
		V_1 = 0;
		goto IL_0062;
	}

IL_0056:
	{
		// attachedRenderers[i].RemoveComponents();
		Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(9 /* System.Void Depthkit.Depthkit_ClipRenderer::RemoveComponents() */, L_13);
		// for (int i = 0; i < attachedRenderers.Length; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < attachedRenderers.Length; i++)
		int32_t L_15 = V_1;
		Depthkit_ClipRendererU5BU5D_t32D1C49EA3FBEBCA94BD43CF9B48B1FE99360FB2* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0056;
		}
	}

IL_0068:
	{
		// _renderer = null;
		__this->____renderer_5 = (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_5), (void*)(Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)NULL);
		// switch (_renderType)
		int32_t L_17 = __this->____renderType_11;
		if (L_17)
		{
			goto IL_008a;
		}
	}
	{
		// _renderer = gameObject.AddComponent<Depthkit_PhotoLook>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* L_19;
		L_19 = GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034(L_18, GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034_RuntimeMethod_var);
		__this->____renderer_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_5), (void*)L_19);
		// break;
		goto IL_00a5;
	}

IL_008a:
	{
		// Debug.LogError("Renderer Not Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral200BB06076B2BC0A6ED1E7F7ADFAE6A4F038E27D, NULL);
		// _renderer = gameObject.AddComponent<Depthkit_PhotoLook>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* L_21;
		L_21 = GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034(L_20, GameObject_AddComponent_TisDepthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7_mE8A95B2ED4C65FA0BB984FCFE7E71272E7C15034_RuntimeMethod_var);
		__this->____renderer_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_5), (void*)L_21);
	}

IL_00a5:
	{
		// ValidateRendererVersion();
		Depthkit_Clip_ValidateRendererVersion_mA8F3FAE4677791EE714C6DAE6F51E59B571AD502(__this, NULL);
		// _renderer.Metadata = _metaData;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_22 = __this->____renderer_5;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_23 = __this->____metaData_16;
		NullCheck(L_22);
		Depthkit_ClipRenderer_set_Metadata_m182B874DE99F66E4C5A523491A803F3B33AC913E(L_22, L_23, NULL);
		// _rendererSetup = true;
		__this->____rendererSetup_23 = (bool)1;
		// RefreshRendererValues();
		Depthkit_Clip_RefreshRendererValues_m15E7C4C7F3094A982FB239D856B3A67BCDFBA87F(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::RefreshRendererValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshRendererValues_m15E7C4C7F3094A982FB239D856B3A67BCDFBA87F (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* G_B11_0 = NULL;
	Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* G_B12_1 = NULL;
	{
		// if(_renderer == null)
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_0 = __this->____renderer_5;
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
		// if (Application.isPlaying && IsSetup)
		bool L_2;
		L_2 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_2)
		{
			goto IL_009e;
		}
	}
	{
		bool L_3;
		L_3 = Depthkit_Clip_get_IsSetup_mB1D8185A4801170BD31A18D7CF554B43E948650A(__this, NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		// int frame = Player.GetCurrentFrame();
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_4;
		L_4 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Depthkit.Depthkit_ClipPlayer::GetCurrentFrame() */, L_4);
		V_0 = L_5;
		// if (frame == -1 || _lastFrame != frame)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = __this->____lastFrame_24;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_00f6;
		}
	}

IL_003d:
	{
		// _renderer.Texture = Player.GetTexture();
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_9 = __this->____renderer_5;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_10;
		L_10 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_10);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11;
		L_11 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(16 /* UnityEngine.Texture Depthkit.Depthkit_ClipPlayer::GetTexture() */, L_10);
		NullCheck(L_9);
		Depthkit_ClipRenderer_set_Texture_mF072009E14435F0A6A4ECF9CB546A07B475C4817(L_9, L_11, NULL);
		// _renderer.TextureIsFlipped = Player.IsTextureFlipped();
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_12 = __this->____renderer_5;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_13;
		L_13 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsTextureFlipped() */, L_13);
		NullCheck(L_12);
		Depthkit_ClipRenderer_set_TextureIsFlipped_m50A209BAE7054C319431743FBA594FAC689616FB(L_12, L_14, NULL);
		// _renderer.GammaCorrectDepth = Player.GammaCorrectDepth();
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_15 = __this->____renderer_5;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_16;
		L_16 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* Depthkit.GammaCorrection Depthkit.Depthkit_ClipPlayer::GammaCorrectDepth() */, L_16);
		NullCheck(L_15);
		Depthkit_ClipRenderer_set_GammaCorrectDepth_mE42E200326F8AB36320F3E10B899847BF7387AD3(L_15, L_17, NULL);
		// _renderer.GammaCorrectColor = Player.GammaCorrectColor();
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_18 = __this->____renderer_5;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_19;
		L_19 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(19 /* Depthkit.GammaCorrection Depthkit.Depthkit_ClipPlayer::GammaCorrectColor() */, L_19);
		NullCheck(L_18);
		Depthkit_ClipRenderer_set_GammaCorrectColor_m9E0174957171D1682961CA60BE2C5F7CF89431B2(L_18, L_20, NULL);
		// _lastFrame = frame;
		int32_t L_21 = V_0;
		__this->____lastFrame_24 = L_21;
		goto IL_00f6;
	}

IL_009e:
	{
		// if (_renderer.Texture != _poster) //protect from triggering updates
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_22 = __this->____renderer_5;
		NullCheck(L_22);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23;
		L_23 = Depthkit_ClipRenderer_get_Texture_m9588E8073A5453C0A93116001AE453596145C7DF_inline(L_22, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->____poster_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_00c7;
		}
	}
	{
		// _renderer.Texture = _poster; //may be null
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_26 = __this->____renderer_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = __this->____poster_15;
		NullCheck(L_26);
		Depthkit_ClipRenderer_set_Texture_mF072009E14435F0A6A4ECF9CB546A07B475C4817(L_26, L_27, NULL);
	}

IL_00c7:
	{
		// _renderer.TextureIsFlipped = false;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_28 = __this->____renderer_5;
		NullCheck(L_28);
		Depthkit_ClipRenderer_set_TextureIsFlipped_m50A209BAE7054C319431743FBA594FAC689616FB(L_28, (bool)0, NULL);
		// _renderer.GammaCorrectDepth = QualitySettings.activeColorSpace == ColorSpace.Linear ? GammaCorrection.LinearToGammaSpace : GammaCorrection.None;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_29 = __this->____renderer_5;
		int32_t L_30;
		L_30 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		G_B10_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			G_B11_0 = L_29;
			goto IL_00e4;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_00e5:
	{
		NullCheck(G_B12_1);
		Depthkit_ClipRenderer_set_GammaCorrectDepth_mE42E200326F8AB36320F3E10B899847BF7387AD3(G_B12_1, G_B12_0, NULL);
		// _renderer.GammaCorrectColor = GammaCorrection.None;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_31 = __this->____renderer_5;
		NullCheck(L_31);
		Depthkit_ClipRenderer_set_GammaCorrectColor_m9E0174957171D1682961CA60BE2C5F7CF89431B2(L_31, 0, NULL);
	}

IL_00f6:
	{
		// _renderer._depthBrightnessThreshold = _depthLuminanceFilter;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_32 = __this->____renderer_5;
		float L_33 = __this->____depthLuminanceFilter_6;
		NullCheck(L_32);
		L_32->____depthBrightnessThreshold_15 = L_33;
		// _renderer._internalEdgeCutoffAngle = _internalEdgeCutoffAngle;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_34 = __this->____renderer_5;
		float L_35 = __this->____internalEdgeCutoffAngle_7;
		NullCheck(L_34);
		L_34->____internalEdgeCutoffAngle_16 = L_35;
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::RefreshMetaData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_RefreshMetaData_mDE88BC1BC3CE6C83BE1A947F1EC63552F81C3542 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string metaDataJson = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// _metaSetup = false;
		__this->____metaSetup_22 = (bool)0;
		// switch (_metaDataSourceType)
		int32_t L_0 = __this->____metaDataSourceType_14;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}
	{
		// if(!string.IsNullOrEmpty(_metaDataFilePath))
		String_t* L_3 = __this->____metaDataFilePath_12;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_005a;
		}
	}
	{
		// metaDataJson = System.IO.File.ReadAllText(Path.Combine(Application.streamingAssetsPath, _metaDataFilePath));
		String_t* L_5;
		L_5 = Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD(NULL);
		String_t* L_6 = __this->____metaDataFilePath_12;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_5, L_6, NULL);
		String_t* L_8;
		L_8 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_7, NULL);
		V_0 = L_8;
		// break;
		goto IL_005a;
	}

IL_0040:
	{
		// if(_metaDataFile != null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_9 = __this->____metaDataFile_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// metaDataJson = _metaDataFile.text;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_11 = __this->____metaDataFile_13;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_11, NULL);
		V_0 = L_12;
	}

IL_005a:
	{
		// if (metaDataJson == "")
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// return;
		return;
	}

IL_0068:
	{
	}
	try
	{// begin try (depth: 1)
		// _metaData = Depthkit_Metadata.CreateFromJSON(metaDataJson);
		String_t* L_15 = V_0;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_16;
		L_16 = Depthkit_Metadata_CreateFromJSON_m0B4162764501250EA559E4DC71CCCA72D1C9B285(L_15, NULL);
		__this->____metaData_16 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metaData_16), (void*)L_16);
		// }
		goto IL_0084;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// Debug.LogError("Invaid Depthkit Metadata Format. Make sure you are using the proper metadata export from Depthkit Visualize.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral073641946CDF19328F5BD9055E94F65BFC5AECB2)), NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	}// end catch (depth: 1)

IL_0084:
	{
		// if (_collider == null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_17 = __this->____collider_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		// _collider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_19;
		L_19 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->____collider_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_8), (void*)L_19);
	}

IL_009e:
	{
		// _collider.center = _metaData.boundsCenter;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_20 = __this->____collider_8;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_21 = __this->____metaData_16;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->___boundsCenter_6;
		NullCheck(L_20);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_20, L_22, NULL);
		// _collider.size = _metaData.boundsSize;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_23 = __this->____collider_8;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_24 = __this->____metaData_16;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___boundsSize_7;
		NullCheck(L_23);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_23, L_25, NULL);
		// if (_renderer != null)
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_26 = __this->____renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00e9;
		}
	}
	{
		// _renderer.Metadata = _metaData;
		Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* L_28 = __this->____renderer_5;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_29 = __this->____metaData_16;
		NullCheck(L_28);
		Depthkit_ClipRenderer_set_Metadata_m182B874DE99F66E4C5A523491A803F3B33AC913E(L_28, L_29, NULL);
	}

IL_00e9:
	{
		// _metaSetup = true;
		__this->____metaSetup_22 = (bool)1;
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_OnDrawGizmos_m413466AA7F6DA89DBD7C0B25A92F5DBF00337FAA (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying && _metaData != null)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_1 = __this->____metaData_16;
		if (!L_1)
		{
			goto IL_00ae;
		}
	}
	{
		// Gizmos.color = new Color(.5f, 1.0f, 0, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.5f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_2, NULL);
		// Gizmos.DrawWireSphere(
		//     transform.localToWorldMatrix * new Vector4(_metaData.boundsCenter.x, _metaData.boundsCenter.y, _metaData.boundsCenter.z, 1.0f),
		//     transform.localScale.x * _metaData.boundsSize.x * .5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_5 = __this->____metaData_16;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&L_5->___boundsCenter_6);
		float L_7 = L_6->___x_2;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_8 = __this->____metaData_16;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___boundsCenter_6);
		float L_10 = L_9->___y_3;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_11 = __this->____metaData_16;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___boundsCenter_6);
		float L_13 = L_12->___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_14), L_7, L_10, L_13, (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_4, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		float L_19 = L_18.___x_2;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_20 = __this->____metaData_16;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&L_20->___boundsSize_7);
		float L_22 = L_21->___x_2;
		Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_22)), (0.5f))), NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip_OnApplicationQuit_mC647D785F8619CC91F5054FA1C182DCEB74AF865 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player != null)
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0;
		L_0 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Player.Stop();
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_2;
		L_2 = Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline(__this, NULL);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(14 /* System.Void Depthkit.Depthkit_ClipPlayer::Stop() */, L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip__ctor_m78063C2434BF0119443DACAD38A88A36A01627F5 (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// public float _depthLuminanceFilter = 0.5f;
		__this->____depthLuminanceFilter_6 = (0.5f);
		// public float _internalEdgeCutoffAngle = 0.5f;
		__this->____internalEdgeCutoffAngle_7 = (0.5f);
		// private int _lastFrame = -1;
		__this->____lastFrame_24 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Depthkit.Depthkit_Clip::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Clip__cctor_m5D9D0243F80D549287F8A17208659AC56FF6288C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AvailablePlayerType _defaultPlayerType = AvailablePlayerType.UnityVideoPlayer;
		((Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4_il2cpp_TypeInfo_var))->____defaultPlayerType_9 = 4;
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
// System.Boolean Depthkit.Depthkit_ClipPlayer::get_VideoLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_ClipPlayer_get_VideoLoaded_m247D2E21959B8D7D27A15F984CC769F1DBF85A8B (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) 
{
	{
		// public bool VideoLoaded { get; protected set; }
		bool L_0 = __this->___U3CVideoLoadedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipPlayer::set_VideoLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_VideoLoaded_m0A1D4B7193CEE711BFDE701EC437E1F0AF993A26 (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool VideoLoaded { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CVideoLoadedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Depthkit.Depthkit_PlayerEvents Depthkit.Depthkit_ClipPlayer::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) 
{
	{
		// get { return events; }
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = __this->___events_5;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipPlayer::set_Events(Depthkit.Depthkit_PlayerEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_Events_mAF09D18036FE0E8BE1034EB066DEBDE75C8F18A6 (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { events = value; }
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = ___value0;
		__this->___events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_5), (void*)L_0);
		// private set { events = value; }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipPlayer::AssignEvents(Depthkit.Depthkit_PlayerEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_AssignEvents_mBAD38F70A06E0A157B335B5B0047F9CD411EF11B (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* ___events0, const RuntimeMethod* method) 
{
	{
		// Events = events;
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = ___events0;
		Depthkit_ClipPlayer_set_Events_mAF09D18036FE0E8BE1034EB066DEBDE75C8F18A6_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer__ctor_m82017CE6D0FD77C8506A792E6B7067F0DF5AF534 (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Depthkit_PlayerEvents events = new Depthkit_PlayerEvents();
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0*)il2cpp_codegen_object_new(Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Depthkit_PlayerEvents__ctor_mCD44AE0EECE263171668DB589AA59E58F3AC6DA4(L_0, NULL);
		__this->___events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_5), (void*)L_0);
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
// UnityEngine.Texture Depthkit.Depthkit_ClipRenderer::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Depthkit_ClipRenderer_get_Texture_m9588E8073A5453C0A93116001AE453596145C7DF (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _texture; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____texture_8;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Texture_mF072009E14435F0A6A4ECF9CB546A07B475C4817 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textureUpdated = true; // use this flag to refresh other values in the renderer
		__this->____textureUpdated_6 = (bool)1;
		// if (_texture == null && value != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____texture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// _geometryDirty = true;
		__this->____geometryDirty_4 = (bool)1;
	}

IL_0025:
	{
		// if(_texture != null && value != null && (value.width != _texture.width || value.height != _texture.height))
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->____texture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___value0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = __this->____texture_8;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0062;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = __this->____texture_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		if ((((int32_t)L_13) == ((int32_t)L_15)))
		{
			goto IL_0069;
		}
	}

IL_0062:
	{
		// _geometryDirty = true;
		__this->____geometryDirty_4 = (bool)1;
	}

IL_0069:
	{
		// _texture = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = ___value0;
		__this->____texture_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_8), (void*)L_16);
		// }
		return;
	}
}
// Depthkit.Depthkit_ClipRenderer/MeshDensity Depthkit.Depthkit_ClipRenderer::get_Density()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_ClipRenderer_get_Density_mA401E236A49FBAB6B312004CD6B3454DCBDBFC24 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _meshDensity; }
		int32_t L_0 = __this->____meshDensity_9;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_Density(Depthkit.Depthkit_ClipRenderer/MeshDensity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Density_m22A1E1C67DF998174BB6AE2D63F827A1F586AEC8 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _geometryDirty = true;
		__this->____geometryDirty_4 = (bool)1;
		// _meshDensity = value;
		int32_t L_0 = ___value0;
		__this->____meshDensity_9 = L_0;
		// }
		return;
	}
}
// System.Int32 Depthkit.Depthkit_ClipRenderer::get_MeshScalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// if (_meshDensity == MeshDensity.Highest)
		int32_t L_0 = __this->____meshDensity_9;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_000a:
	{
		// else if (_meshDensity == MeshDensity.High)
		int32_t L_1 = __this->____meshDensity_9;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return 2;
		return 2;
	}

IL_0015:
	{
		// else if (_meshDensity == MeshDensity.Medium)
		int32_t L_2 = __this->____meshDensity_9;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		// return 4;
		return 4;
	}

IL_0020:
	{
		// else if (_meshDensity == MeshDensity.Low)
		int32_t L_3 = __this->____meshDensity_9;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_002b;
		}
	}
	{
		// return 8;
		return 8;
	}

IL_002b:
	{
		// return 1;
		return 1;
	}
}
// UnityEngine.Bounds Depthkit.Depthkit_ClipRenderer::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Depthkit_ClipRenderer_get_Bounds_mC746406A17898CBE62B9FF5C891E539DC4ACD7F1 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _bounds; }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->____bounds_10;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_Bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Bounds_m5E174F9F0DCC7D08EAF633A4863DD49B6CBDD0A4 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		// _bounds = value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = ___value0;
		__this->____bounds_10 = L_0;
		// }
		return;
	}
}
// System.Boolean Depthkit.Depthkit_ClipRenderer::get_TextureIsFlipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_ClipRenderer_get_TextureIsFlipped_m349B251BD58C186A0FAA9C1A40C6A5A33F1A87B9 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _textureIsFlipped; }
		bool L_0 = __this->____textureIsFlipped_11;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_TextureIsFlipped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_TextureIsFlipped_m50A209BAE7054C319431743FBA594FAC689616FB (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _materialDirty = (_textureIsFlipped != value);
		bool L_0 = __this->____textureIsFlipped_11;
		bool L_1 = ___value0;
		__this->____materialDirty_5 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _textureIsFlipped = value;
		bool L_2 = ___value0;
		__this->____textureIsFlipped_11 = L_2;
		// }
		return;
	}
}
// Depthkit.GammaCorrection Depthkit.Depthkit_ClipRenderer::get_GammaCorrectDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_ClipRenderer_get_GammaCorrectDepth_m6E2B03594447D0A95955F38FF4C8CBECC52CD748 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _gammaCorrectDepth; }
		int32_t L_0 = __this->____gammaCorrectDepth_12;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_GammaCorrectDepth(Depthkit.GammaCorrection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_GammaCorrectDepth_mE42E200326F8AB36320F3E10B899847BF7387AD3 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _materialDirty = (_gammaCorrectDepth != value);
		int32_t L_0 = __this->____gammaCorrectDepth_12;
		int32_t L_1 = ___value0;
		__this->____materialDirty_5 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _gammaCorrectDepth = value;
		int32_t L_2 = ___value0;
		__this->____gammaCorrectDepth_12 = L_2;
		// }
		return;
	}
}
// Depthkit.GammaCorrection Depthkit.Depthkit_ClipRenderer::get_GammaCorrectColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_ClipRenderer_get_GammaCorrectColor_m55CFF35D6C2A901DDEF32036FEDBC9EA5D1ECB21 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _gammaCorrectColor; }
		int32_t L_0 = __this->____gammaCorrectColor_13;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_GammaCorrectColor(Depthkit.GammaCorrection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_GammaCorrectColor_m9E0174957171D1682961CA60BE2C5F7CF89431B2 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _materialDirty = (_gammaCorrectColor != value);
		int32_t L_0 = __this->____gammaCorrectColor_13;
		int32_t L_1 = ___value0;
		__this->____materialDirty_5 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _gammaCorrectColor = value;
		int32_t L_2 = ___value0;
		__this->____gammaCorrectColor_13 = L_2;
		// }
		return;
	}
}
// Depthkit.Depthkit_Metadata Depthkit.Depthkit_ClipRenderer::get_Metadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* Depthkit_ClipRenderer_get_Metadata_m612E74E3051B6083146BEB324B493BE0DA1850A1 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _metadata; }
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_0 = __this->____metadata_14;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::set_Metadata(Depthkit.Depthkit_Metadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Metadata_m182B874DE99F66E4C5A523491A803F3B33AC913E (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* ___value0, const RuntimeMethod* method) 
{
	{
		// _geometryDirty = true;
		__this->____geometryDirty_4 = (bool)1;
		// _metadataChanged = true;
		__this->____metadataChanged_7 = (bool)1;
		// _metadata = value;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_0 = ___value0;
		__this->____metadata_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metadata_14), (void*)L_0);
		// if (_metadata != null)
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_1 = __this->____metadata_14;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// Bounds = new Bounds (_metadata.boundsCenter, _metadata.boundsSize);
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_2 = __this->____metadata_14;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___boundsCenter_6;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_4 = __this->____metadata_14;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___boundsSize_7;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_6), L_3, L_5, /*hidden argument*/NULL);
		Depthkit_ClipRenderer_set_Bounds_m5E174F9F0DCC7D08EAF633A4863DD49B6CBDD0A4_inline(__this, L_6, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::SetGeometryDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_SetGeometryDirty_m20C73BF054EBE35A56E3478029F5E86D513134ED (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// _geometryDirty = true;
		__this->____geometryDirty_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::SetMaterialDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_SetMaterialDirty_mEAF53149960BFB6A64EBCE4CC88F74343BF05213 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// _materialDirty = true;
		__this->____materialDirty_5 = (bool)1;
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::SetMaterialProperties(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_SetMaterialProperties_m5B4D6F26105410253DB864937D557A9B82B0E8AB (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13AB2540E6024EA47994FC326E322E69B5556724);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A12B2AC972521F83D511839364C1C21E6213477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C0F61D771072D05E9B44C6B662E8A13903C16C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CBE07414C94E64F9F0E7C6DE0C01EE13900E6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B821D567CBAB99C21F9D9435DE58209FC8D6C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E3E74AEC8D693075D5EBF8F4E637342C949F88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E82636E24775022BDFD8934E96DC23E60409A1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BA7350B526060513B48E341B68F40FB75E28110);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F54F4AE2F2AC16D15E006F7F99C29C3F1B441C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F2BE3235CD2B4D9A46CBD6132F4FEBD2B9E8AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F6DE8DFFE1B9D049C52216D284AE1DCBFF7258);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA636ADACF6491535204C3530E88662CDDAE84364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EC02E779424D024A6DD83910846B63E262975F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC7FEEEFE54BBAA10ADA315F00E10721108867A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18DF2C08D3DFE93F8091C507663CA9C038B823B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C3CEA8BB8372C1F44143B72A1B3CF8208F9422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD73BBDC775FC929A25E6749813644C34D4321884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF834D0572FEB3A85EA9B56EBE5DA82A136510F6);
		s_Il2CppMethodInitialized = true;
	}
	Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_2 = NULL;
	{
		// if (material == null || _metadata == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_2 = __this->____metadata_14;
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// Debug.LogWarning("Couldn't set material props");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3B821D567CBAB99C21F9D9435DE58209FC8D6C72, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// material.SetTexture("_MainTex", _texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->____texture_8;
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_4, NULL);
		// material.SetTexture("_MainTex2", _texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->____texture_8;
		NullCheck(L_5);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_5, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_6, NULL);
		// material.SetInt("_TextureFlipped", _textureIsFlipped ? 1 : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___material0;
		bool L_8 = __this->____textureIsFlipped_11;
		G_B4_0 = _stringLiteralC8C3CEA8BB8372C1F44143B72A1B3CF8208F9422;
		G_B4_1 = L_7;
		if (L_8)
		{
			G_B5_0 = _stringLiteralC8C3CEA8BB8372C1F44143B72A1B3CF8208F9422;
			G_B5_1 = L_7;
			goto IL_004f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0050:
	{
		NullCheck(G_B6_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B6_2, G_B6_1, G_B6_0, NULL);
		// material.SetInt("_ColorSpaceCorrectionDepth", (int)_gammaCorrectDepth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___material0;
		int32_t L_10 = __this->____gammaCorrectDepth_12;
		NullCheck(L_9);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_9, _stringLiteral1A12B2AC972521F83D511839364C1C21E6213477, L_10, NULL);
		// material.SetInt("_ColorSpaceCorrectionColor", (int)_gammaCorrectColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___material0;
		int32_t L_12 = __this->____gammaCorrectColor_13;
		NullCheck(L_11);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_11, _stringLiteral1C0F61D771072D05E9B44C6B662E8A13903C16C8, L_12, NULL);
		// material.SetVector("_TextureDimensions", new Vector4(_metadata.textureWidth, _metadata.textureHeight, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___material0;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_14 = __this->____metadata_14;
		NullCheck(L_14);
		int32_t L_15 = L_14->___textureWidth_4;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_16 = __this->____metadata_14;
		NullCheck(L_16);
		int32_t L_17 = L_16->___textureHeight_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_18), ((float)L_15), ((float)L_17), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_13, _stringLiteral22CBE07414C94E64F9F0E7C6DE0C01EE13900E6A, L_18, NULL);
		// material.SetFloat("_DepthBrightnessThreshold", _depthBrightnessThreshold);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___material0;
		float L_20 = __this->____depthBrightnessThreshold_15;
		NullCheck(L_19);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_19, _stringLiteral98F6DE8DFFE1B9D049C52216D284AE1DCBFF7258, L_20, NULL);
		// material.SetFloat("_SheerAngleThreshold", Mathf.Pow(_internalEdgeCutoffAngle, 6.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___material0;
		float L_22 = __this->____internalEdgeCutoffAngle_16;
		float L_23;
		L_23 = powf(L_22, (6.0f));
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteral8BA7350B526060513B48E341B68F40FB75E28110, L_23, NULL);
		// material.SetVector("_MeshScalar", new Vector4( (float)MeshScalar, (float)MeshScalar, 0, 0) );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = ___material0;
		int32_t L_25;
		L_25 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		int32_t L_26;
		L_26 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_27), ((float)L_25), ((float)L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_24, _stringLiteral98F2BE3235CD2B4D9A46CBD6132F4FEBD2B9E8AD, L_27, NULL);
		// if (_metadata.perspectives != null && _metadata.perspectives.Length >= 1)
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_28 = __this->____metadata_14;
		NullCheck(L_28);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_29 = L_28->___perspectives_8;
		if (!L_29)
		{
			goto IL_0201;
		}
	}
	{
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_30 = __this->____metadata_14;
		NullCheck(L_30);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_31 = L_30->___perspectives_8;
		NullCheck(L_31);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))) < ((int32_t)1)))
		{
			goto IL_0201;
		}
	}
	{
		// var perspective = _metadata.perspectives[0];
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_32 = __this->____metadata_14;
		NullCheck(L_32);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_33 = L_32->___perspectives_8;
		NullCheck(L_33);
		int32_t L_34 = 0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = L_35;
		// material.SetVector("_Crop", perspective.crop);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_37 = V_0;
		NullCheck(L_37);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = L_37->___crop_7;
		NullCheck(L_36);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_36, _stringLiteralB1EC02E779424D024A6DD83910846B63E262975F, L_38, NULL);
		// material.SetFloat("_ClipEpsilon", perspective.clipEpsilon);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_40 = V_0;
		NullCheck(L_40);
		float L_41 = L_40->___clipEpsilon_8;
		NullCheck(L_39);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_39, _stringLiteral4E82636E24775022BDFD8934E96DC23E60409A1D, L_41, NULL);
		// material.SetVector("_ImageDimensions", perspective.depthImageSize);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_43 = V_0;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = L_43->___depthImageSize_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_44, NULL);
		NullCheck(L_42);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_42, _stringLiteralD73BBDC775FC929A25E6749813644C34D4321884, L_45, NULL);
		// material.SetVector("_FocalLength", perspective.depthFocalLength);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_47 = V_0;
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = L_47->___depthFocalLength_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
		L_49 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_48, NULL);
		NullCheck(L_46);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_46, _stringLiteralA636ADACF6491535204C3530E88662CDDAE84364, L_49, NULL);
		// material.SetVector("_PrincipalPoint", perspective.depthPrincipalPoint);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_51 = V_0;
		NullCheck(L_51);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = L_51->___depthPrincipalPoint_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_53;
		L_53 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_52, NULL);
		NullCheck(L_50);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_50, _stringLiteral90F54F4AE2F2AC16D15E006F7F99C29C3F1B441C, L_53, NULL);
		// material.SetFloat("_NearClip", perspective.nearClip);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_55 = V_0;
		NullCheck(L_55);
		float L_56 = L_55->___nearClip_4;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralEF834D0572FEB3A85EA9B56EBE5DA82A136510F6, L_56, NULL);
		// material.SetFloat("_FarClip", perspective.farClip);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_58 = V_0;
		NullCheck(L_58);
		float L_59 = L_58->___farClip_3;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral40E3E74AEC8D693075D5EBF8F4E637342C949F88, L_59, NULL);
		// material.SetMatrix("_Extrinsics", perspective.extrinsics);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_61 = V_0;
		NullCheck(L_61);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_62 = L_61->___extrinsics_5;
		NullCheck(L_60);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_60, _stringLiteral13AB2540E6024EA47994FC326E322E69B5556724, L_62, NULL);
		// material.SetMatrix("_InverseExtrinsics", perspective.extrinsics.inverse);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_64 = V_0;
		NullCheck(L_64);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_65 = (&L_64->___extrinsics_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_66;
		L_66 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD(L_65, NULL);
		NullCheck(L_63);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_63, _stringLiteralBC7FEEEFE54BBAA10ADA315F00E10721108867A2, L_66, NULL);
		// material.SetMatrix("_ExtrinsicsToObject", perspective.extrinsics.inverse * transform.worldToLocalMatrix );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = ___material0;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_68 = V_0;
		NullCheck(L_68);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_69 = (&L_68->___extrinsics_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_70;
		L_70 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD(L_69, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_71);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_72;
		L_72 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_71, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_73;
		L_73 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_70, L_72, NULL);
		NullCheck(L_67);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_67, _stringLiteralC18DF2C08D3DFE93F8091C507663CA9C038B823B, L_73, NULL);
	}

IL_0201:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::GetMeshLattice(UnityEngine.Mesh&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_GetMeshLattice_m8DC485D6CD47037A0545F761421915E56EEE1EE2 (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E7FB8A0321F5D2E71DAF5A89942B5000CF7186F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1EFA66327C25120EDA59E2E821D512A7ECAEB79);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// if (_texture == null) {
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____texture_8;
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
		// if (_texture.width == 0 || _texture.height < 2) {
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->____texture_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->____texture_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_0035;
		}
	}

IL_002a:
	{
		// Debug.Log ("texture too small");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD1EFA66327C25120EDA59E2E821D512A7ECAEB79, NULL);
		// return;
		return;
	}

IL_0035:
	{
		// int textureWidth = _texture.width;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->____texture_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_0 = L_7;
		// int textureHeight = _texture.height / 2;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = __this->____texture_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		V_1 = ((int32_t)(L_9/2));
		goto IL_005c;
	}

IL_0051:
	{
		// Debug.LogError("texture too small for Mesh Density. Increase Mesh Density to show textures this size.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral9E7FB8A0321F5D2E71DAF5A89942B5000CF7186F, NULL);
		// return;
		return;
	}

IL_005c:
	{
		// while (MeshScalar > textureWidth || MeshScalar > textureHeight)
		int32_t L_10;
		L_10 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_12;
		L_12 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0051;
		}
	}
	{
		// int vertsWide = (textureWidth / MeshScalar) + 1;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_14/L_15)), 1));
		// int    vertsTall = (textureHeight / MeshScalar) + 1;
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_16/L_17)), 1));
		// mesh.Clear ();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_18 = ___mesh0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19 = *((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**)L_18);
		NullCheck(L_19);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_19, NULL);
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_20 = ___mesh0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = *((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**)L_20);
		NullCheck(L_21);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_21, 1, NULL);
		// Vector3[] verts = new Vector3[vertsWide * vertsTall];
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_22, L_23)));
		V_4 = L_24;
		// int[] indices = new int[(vertsWide - 1) * (vertsTall - 1) * 2 * 3];
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_25, 1)), ((int32_t)il2cpp_codegen_subtract(L_26, 1)))), 2)), 3)));
		V_5 = L_27;
		// int curIndex = 0;
		V_6 = 0;
		// for (int y = 0; y < vertsTall - 1; y++) {
		V_8 = 0;
		goto IL_0144;
	}

IL_00ba:
	{
		// for (int x = 0; x < vertsWide - 1; x++) {
		V_9 = 0;
		goto IL_0137;
	}

IL_00bf:
	{
		// indices [curIndex++] = x + y * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_5;
		int32_t L_29 = V_6;
		int32_t L_30 = L_29;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_9;
		int32_t L_32 = V_8;
		int32_t L_33 = V_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)il2cpp_codegen_add(L_31, ((int32_t)il2cpp_codegen_multiply(L_32, L_33)))));
		// indices [curIndex++] = x + (y + 1) * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		int32_t L_35 = V_6;
		int32_t L_36 = L_35;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		int32_t L_39 = V_2;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_38, 1)), L_39)))));
		// indices [curIndex++] = (x + 1) + y * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_5;
		int32_t L_41 = V_6;
		int32_t L_42 = L_41;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_9;
		int32_t L_44 = V_8;
		int32_t L_45 = V_2;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_43, 1)), ((int32_t)il2cpp_codegen_multiply(L_44, L_45)))));
		// indices [curIndex++] = (x + 1) + (y) * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_5;
		int32_t L_47 = V_6;
		int32_t L_48 = L_47;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_9;
		int32_t L_50 = V_8;
		int32_t L_51 = V_2;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, 1)), ((int32_t)il2cpp_codegen_multiply(L_50, L_51)))));
		// indices [curIndex++] = x + (y + 1) * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_5;
		int32_t L_53 = V_6;
		int32_t L_54 = L_53;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_9;
		int32_t L_56 = V_8;
		int32_t L_57 = V_2;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_56, 1)), L_57)))));
		// indices [curIndex++] = (x + 1) + (y + 1) * vertsWide;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_5;
		int32_t L_59 = V_6;
		int32_t L_60 = L_59;
		V_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_9;
		int32_t L_62 = V_8;
		int32_t L_63 = V_2;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, 1)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_62, 1)), L_63)))));
		// for (int x = 0; x < vertsWide - 1; x++) {
		int32_t L_64 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0137:
	{
		// for (int x = 0; x < vertsWide - 1; x++) {
		int32_t L_65 = V_9;
		int32_t L_66 = V_2;
		if ((((int32_t)L_65) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_66, 1)))))
		{
			goto IL_00bf;
		}
	}
	{
		// for (int y = 0; y < vertsTall - 1; y++) {
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0144:
	{
		// for (int y = 0; y < vertsTall - 1; y++) {
		int32_t L_68 = V_8;
		int32_t L_69 = V_3;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_69, 1)))))
		{
			goto IL_00ba;
		}
	}
	{
		// Vector4 vertexStep = new Vector4 ((float)MeshScalar / (float)(textureWidth), (float)MeshScalar / (float)(textureHeight), 0.0f, 0.0f);
		int32_t L_70;
		L_70 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		int32_t L_71 = V_0;
		int32_t L_72;
		L_72 = Depthkit_ClipRenderer_get_MeshScalar_m5A78D200124D8DCDEA708971D09D6E4F3A955A7E(__this, NULL);
		int32_t L_73 = V_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_7), ((float)(((float)L_70)/((float)L_71))), ((float)(((float)L_72)/((float)L_73))), (0.0f), (0.0f), NULL);
		// curIndex = 0;
		V_6 = 0;
		// for (int y = 0; y < vertsTall; y++) {
		V_10 = 0;
		goto IL_01dc;
	}

IL_017b:
	{
		// for (int x = 0; x < vertsWide; x++) {
		V_11 = 0;
		goto IL_01d1;
	}

IL_0180:
	{
		// verts [curIndex].x = x * vertexStep.x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = V_4;
		int32_t L_75 = V_6;
		NullCheck(L_74);
		int32_t L_76 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77 = V_7;
		float L_78 = L_77.___x_1;
		((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___x_2 = ((float)il2cpp_codegen_multiply(((float)L_76), L_78));
		// verts [curIndex].y = y * vertexStep.y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = V_4;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		int32_t L_81 = V_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82 = V_7;
		float L_83 = L_82.___y_2;
		((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_81), L_83));
		// verts [curIndex].z = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = V_4;
		int32_t L_85 = V_6;
		NullCheck(L_84);
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___z_4 = (0.0f);
		// curIndex++;
		int32_t L_86 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		// for (int x = 0; x < vertsWide; x++) {
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01d1:
	{
		// for (int x = 0; x < vertsWide; x++) {
		int32_t L_88 = V_11;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_0180;
		}
	}
	{
		// for (int y = 0; y < vertsTall; y++) {
		int32_t L_90 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01dc:
	{
		// for (int y = 0; y < vertsTall; y++) {
		int32_t L_91 = V_10;
		int32_t L_92 = V_3;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_017b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_93 = ___mesh0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_94 = *((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**)L_93);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = V_4;
		NullCheck(L_94);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_94, L_95, NULL);
		// mesh.SetIndices (indices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_96 = ___mesh0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_97 = *((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**)L_96);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_5;
		NullCheck(L_97);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_97, L_98, 0, 0, NULL);
		// mesh.bounds = _bounds;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_99 = ___mesh0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_100 = *((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**)L_99);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_101 = __this->____bounds_10;
		NullCheck(L_100);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_100, L_101, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_ClipRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer__ctor_m717D21984B536092974887C9C691C1A084A8B00C (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// protected MeshDensity _meshDensity = MeshDensity.Medium;
		__this->____meshDensity_9 = 2;
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
// System.Byte Depthkit.Version::get_major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte major { get; private set; }
		uint8_t L_0 = __this->___U3CmajorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Depthkit.Version::set_major(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte major { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CmajorU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030_inline(_thisAdjusted, ___value0, method);
}
// System.Byte Depthkit.Version::get_minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte minor { get; private set; }
		uint8_t L_0 = __this->___U3CminorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Depthkit.Version::set_minor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte minor { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CminorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52_inline(_thisAdjusted, ___value0, method);
}
// System.Byte Depthkit.Version::get_patch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte patch { get; private set; }
		uint8_t L_0 = __this->___U3CpatchU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Depthkit.Version::set_patch(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte patch { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CpatchU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D_inline(_thisAdjusted, ___value0, method);
}
// System.Void Depthkit.Version::.ctor(System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___major0, uint8_t ___minor1, uint8_t ___patch2, const RuntimeMethod* method) 
{
	{
		// : this()
		il2cpp_codegen_initobj(__this, sizeof(Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD));
		// this.major = major;
		uint8_t L_0 = ___major0;
		Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030_inline(__this, L_0, NULL);
		// this.minor = minor;
		uint8_t L_1 = ___minor1;
		Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52_inline(__this, L_1, NULL);
		// this.patch = patch;
		uint8_t L_2 = ___patch2;
		Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7_AdjustorThunk (RuntimeObject* __this, uint8_t ___major0, uint8_t ___minor1, uint8_t ___patch2, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7(_thisAdjusted, ___major0, ___minor1, ___patch2, method);
}
// System.String Depthkit.Version::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_ToString_m495D7CD31F687F4FE5AAE6C84199E54A091357EC (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// return major.ToString() + "." + minor.ToString() + "." + patch.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		uint8_t L_2;
		L_2 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline(__this, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		uint8_t L_6;
		L_6 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline(__this, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		uint8_t L_10;
		L_10 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline(__this, NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* Version_ToString_m495D7CD31F687F4FE5AAE6C84199E54A091357EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Version_ToString_m495D7CD31F687F4FE5AAE6C84199E54A091357EC(_thisAdjusted, method);
	return _returnValue;
}
// System.String Depthkit.Version::op_Implicit(Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_op_Implicit_mBDC331A52131B9A3756B4BE4F9EA918BCFC116F3 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___v0, const RuntimeMethod* method) 
{
	{
		// return v.ToString();
		String_t* L_0;
		L_0 = Version_ToString_m495D7CD31F687F4FE5AAE6C84199E54A091357EC((&___v0), NULL);
		return L_0;
	}
}
// System.Boolean Depthkit.Version::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_mD6D649A817D006544C0CF0D89346CBE642066815 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj is Version)
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return this.Equals((Version)obj);
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541(__this, ((*(Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*)((Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*)(Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*)UnBox(L_1, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Version_Equals_mD6D649A817D006544C0CF0D89346CBE642066815_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	bool _returnValue;
	_returnValue = Version_Equals_mD6D649A817D006544C0CF0D89346CBE642066815(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Depthkit.Version::Equals(Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___other0, const RuntimeMethod* method) 
{
	{
		// return (major == other.major) && (minor == other.minor) && (patch == other.patch);
		uint8_t L_0;
		L_0 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline(__this, NULL);
		uint8_t L_1;
		L_1 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2;
		L_2 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline(__this, NULL);
		uint8_t L_3;
		L_3 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline((&___other0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_4;
		L_4 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline(__this, NULL);
		uint8_t L_5;
		L_5 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline((&___other0), NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541_AdjustorThunk (RuntimeObject* __this, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___other0, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	bool _returnValue;
	_returnValue = Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 Depthkit.Version::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_mBF326EA3542A8A2B63AF77E2E9D6F4C161C3D3DC (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// return (int)(major ^ minor ^ patch);
		uint8_t L_0;
		L_0 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline(__this, NULL);
		uint8_t L_1;
		L_1 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline(__this, NULL);
		uint8_t L_2;
		L_2 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline(__this, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t Version_GetHashCode_mBF326EA3542A8A2B63AF77E2E9D6F4C161C3D3DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Version_GetHashCode_mBF326EA3542A8A2B63AF77E2E9D6F4C161C3D3DC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Depthkit.Version::op_Equality(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mDCBBC578AB95E33ACA1DFB34CB724E1992EC98CE (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Equals(rhs);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0 = ___rhs1;
		bool L_1;
		L_1 = Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541((&___lhs0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Depthkit.Version::op_Inequality(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Inequality_m4D6D37F60D3A10A238ED55FF982B95640E176123 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// return !(lhs.Equals(rhs));
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0 = ___rhs1;
		bool L_1;
		L_1 = Version_Equals_m5EEA2BE76FDCB1997D1F4BEC19E53B3F04769541((&___lhs0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Depthkit.Version::op_LessThan(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThan_m50D1E66E54072D9BA83AF10D07F8C2EB93BFC193 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// if (lhs.major < rhs.major) { return true; }
		uint8_t L_0;
		L_0 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline((&___lhs0), NULL);
		uint8_t L_1;
		L_1 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline((&___rhs1), NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// if (lhs.major < rhs.major) { return true; }
		return (bool)1;
	}

IL_0012:
	{
		// else if(lhs.major == rhs.major)
		uint8_t L_2;
		L_2 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline((&___lhs0), NULL);
		uint8_t L_3;
		L_3 = Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0056;
		}
	}
	{
		// if (lhs.minor < rhs.minor) { return true; }
		uint8_t L_4;
		L_4 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline((&___lhs0), NULL);
		uint8_t L_5;
		L_5 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline((&___rhs1), NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// if (lhs.minor < rhs.minor) { return true; }
		return (bool)1;
	}

IL_0034:
	{
		// else if(lhs.minor == rhs.minor)
		uint8_t L_6;
		L_6 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline((&___lhs0), NULL);
		uint8_t L_7;
		L_7 = Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		// if (lhs.patch < rhs.patch) { return true; }
		uint8_t L_8;
		L_8 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline((&___lhs0), NULL);
		uint8_t L_9;
		L_9 = Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline((&___rhs1), NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0056;
		}
	}
	{
		// if (lhs.patch < rhs.patch) { return true; }
		return (bool)1;
	}

IL_0056:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Depthkit.Version::op_GreaterThan(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThan_mECA3EF67B723D220192D3F5C06C162D70DBCA740 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// return !(lhs < rhs);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0 = ___lhs0;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_1 = ___rhs1;
		bool L_2;
		L_2 = Version_op_LessThan_m50D1E66E54072D9BA83AF10D07F8C2EB93BFC193(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Depthkit.Version::op_LessThanOrEqual(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThanOrEqual_mA53B2F166FB5DF50CA2784A4FE7FCCBE9D26F128 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// if (lhs == rhs) return true;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0 = ___lhs0;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_1 = ___rhs1;
		bool L_2;
		L_2 = Version_op_Equality_mDCBBC578AB95E33ACA1DFB34CB724E1992EC98CE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (lhs == rhs) return true;
		return (bool)1;
	}

IL_000b:
	{
		// return lhs < rhs;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_3 = ___lhs0;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_4 = ___rhs1;
		bool L_5;
		L_5 = Version_op_LessThan_m50D1E66E54072D9BA83AF10D07F8C2EB93BFC193(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean Depthkit.Version::op_GreaterThanOrEqual(Depthkit.Version,Depthkit.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m0836F2E56BB661E7FAC2F00833DA59D343CC22D8 (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___lhs0, Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD ___rhs1, const RuntimeMethod* method) 
{
	{
		// if (lhs == rhs) return true;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0 = ___lhs0;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_1 = ___rhs1;
		bool L_2;
		L_2 = Version_op_Equality_mDCBBC578AB95E33ACA1DFB34CB724E1992EC98CE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (lhs == rhs) return true;
		return (bool)1;
	}

IL_000b:
	{
		// return lhs > rhs;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_3 = ___lhs0;
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_4 = ___rhs1;
		bool L_5;
		L_5 = Version_op_GreaterThan_mECA3EF67B723D220192D3F5C06C162D70DBCA740(L_3, L_4, NULL);
		return L_5;
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
// System.Void Depthkit.Depthkit_Info::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Info__ctor_m5D3BDD0136E75E1A19FD1E8B67A778F8CF9EB0B9 (Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Depthkit.Depthkit_Info::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Info__cctor_mB087A665FE580FDD65167061DDF742DB2FBAE90B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF48278FC9ADBA18D665DCF673757FB3B0D33F2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m743DC870284B0B23D029801DF166AE425AC08155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7239E17679562CEBA5A69EB86D4EC1698430E744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F987FA48C36FB2C5782749159430EBA056CF093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF92A3CD67D221B8B65CBA9CD0D7CCEE3E51DDF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE378BC26257A3CBD07A3DC5704745AF3DE706809);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Version Version = new Version(0, 2, 7);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7((&L_0), (uint8_t)0, (uint8_t)2, (uint8_t)7, /*hidden argument*/NULL);
		((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___Version_0 = L_0;
		// public static Dictionary<string, PlayerType> DirectiveDict = new Dictionary<string, PlayerType>(){
		//     {AVPRO_DEFINE, PlayerType.AVProVideo},
		// };
		Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572* L_1 = (Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572*)il2cpp_codegen_object_new(Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m743DC870284B0B23D029801DF166AE425AC08155(L_1, Dictionary_2__ctor_m743DC870284B0B23D029801DF166AE425AC08155_RuntimeMethod_var);
		Dictionary_2_t8D089FE4A34AB1883E375FA77811FE58C93BA572* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mF48278FC9ADBA18D665DCF673757FB3B0D33F2AD(L_2, _stringLiteral8F987FA48C36FB2C5782749159430EBA056CF093, 3, Dictionary_2_Add_mF48278FC9ADBA18D665DCF673757FB3B0D33F2AD_RuntimeMethod_var);
		((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___DirectiveDict_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___DirectiveDict_3), (void*)L_2);
		// public static Dictionary<string, string> AssetSearchDict = new Dictionary<string, string>() {
		//     {"MediaPlayer", Depthkit_Info.AVPRO_DEFINE},
		//     {"Depthkit_ZeroDaysLook", Depthkit_Info.ZERODAYSLOOK_DEFINE}
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_3, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteralE378BC26257A3CBD07A3DC5704745AF3DE706809, _stringLiteral8F987FA48C36FB2C5782749159430EBA056CF093, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_5, _stringLiteral7239E17679562CEBA5A69EB86D4EC1698430E744, _stringLiteralCF92A3CD67D221B8B65CBA9CD0D7CCEE3E51DDF5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___AssetSearchDict_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_StaticFields*)il2cpp_codegen_static_fields_for(Depthkit_Info_t72F2B3B08AB2ED2859919DE6693D2EDA41A58FEC_il2cpp_TypeInfo_var))->___AssetSearchDict_4), (void*)L_5);
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
// Depthkit.Depthkit_Metadata Depthkit.Depthkit_Metadata::FromSinglePerspective(Depthkit.Depthkit_Metadata/MetadataSinglePerspective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* Depthkit_Metadata_FromSinglePerspective_mBD813D93D966303294448CAFAB8278B567981F5E (MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* ___md0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* V_0 = NULL;
	{
		// return new Depthkit_Metadata
		// {
		//     _versionMajor = 0,
		//     _versionMinor = 3,
		//     format = md.format,
		//     boundsCenter = md.boundsCenter,
		//     boundsSize = md.boundsSize,
		//     textureWidth = md.textureWidth,
		//     textureHeight = md.textureHeight,
		//     perspectives = new Perspective[] {
		//         new Perspective {
		//             depthImageSize = md.depthImageSize,
		//             depthPrincipalPoint = md.depthPrincipalPoint,
		//             depthFocalLength = md.depthFocalLength,
		//             farClip = md.farClip,
		//             nearClip = md.nearClip,
		//             extrinsics = md.extrinsics,
		//             crop = md.crop,
		//             clipEpsilon = md.clipEpsilon
		//         }
		//     }
		// };
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_0 = (Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB*)il2cpp_codegen_object_new(Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Depthkit_Metadata__ctor_m73B75499D05E25994D772D9A12BD2655CB7EE2F2(L_0, NULL);
		V_0 = L_0;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_1 = V_0;
		NullCheck(L_1);
		L_1->____versionMajor_1 = 0;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_2 = V_0;
		NullCheck(L_2);
		L_2->____versionMinor_2 = 3;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_3 = V_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_4 = ___md0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___format_2;
		NullCheck(L_3);
		L_3->___format_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___format_3), (void*)L_5);
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_6 = V_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_7 = ___md0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___boundsCenter_12;
		NullCheck(L_6);
		L_6->___boundsCenter_6 = L_8;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_9 = V_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_10 = ___md0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___boundsSize_13;
		NullCheck(L_9);
		L_9->___boundsSize_7 = L_11;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_12 = V_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_13 = ___md0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___textureWidth_9;
		NullCheck(L_12);
		L_12->___textureWidth_4 = L_14;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_15 = V_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_16 = ___md0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___textureHeight_10;
		NullCheck(L_15);
		L_15->___textureHeight_5 = L_17;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_18 = V_0;
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_19 = (PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043*)(PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043*)SZArrayNew(PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043_il2cpp_TypeInfo_var, (uint32_t)1);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_20 = L_19;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_21 = (Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D*)il2cpp_codegen_object_new(Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Perspective__ctor_m8A99BC7EF830737EE2554870969ACF08900EB54E(L_21, NULL);
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_22 = L_21;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_23 = ___md0;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = L_23->___depthImageSize_4;
		NullCheck(L_22);
		L_22->___depthImageSize_0 = L_24;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_25 = L_22;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_26 = ___md0;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = L_26->___depthPrincipalPoint_5;
		NullCheck(L_25);
		L_25->___depthPrincipalPoint_1 = L_27;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_28 = L_25;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_29 = ___md0;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = L_29->___depthFocalLength_6;
		NullCheck(L_28);
		L_28->___depthFocalLength_2 = L_30;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_31 = L_28;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_32 = ___md0;
		NullCheck(L_32);
		float L_33 = L_32->___farClip_7;
		NullCheck(L_31);
		L_31->___farClip_3 = L_33;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_34 = L_31;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_35 = ___md0;
		NullCheck(L_35);
		float L_36 = L_35->___nearClip_8;
		NullCheck(L_34);
		L_34->___nearClip_4 = L_36;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_37 = L_34;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_38 = ___md0;
		NullCheck(L_38);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = L_38->___extrinsics_11;
		NullCheck(L_37);
		L_37->___extrinsics_5 = L_39;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_40 = L_37;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_41 = ___md0;
		NullCheck(L_41);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = L_41->___crop_14;
		NullCheck(L_40);
		L_40->___crop_7 = L_42;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_43 = L_40;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_44 = ___md0;
		NullCheck(L_44);
		float L_45 = L_44->___clipEpsilon_15;
		NullCheck(L_43);
		L_43->___clipEpsilon_8 = L_45;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_43);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D*)L_43);
		NullCheck(L_18);
		L_18->___perspectives_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___perspectives_8), (void*)L_20);
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_46 = V_0;
		return L_46;
	}
}
// Depthkit.Depthkit_Metadata Depthkit.Depthkit_Metadata::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* Depthkit_Metadata_CreateFromJSON_m0B4162764501250EA559E4DC71CCCA72D1C9B285 (String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDepthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_mDFE286EB0A39410030525E1E94FE45616F6AB1FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisMetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C_m2C3C3F4A5641073E7F356C885553CD936AC00E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisMetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36_m71A4CFE48A5F8907C089B82E24891B7C6C713662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B5340D6E8F82910E413FCECF7E6D03C265C596);
		s_Il2CppMethodInitialized = true;
	}
	Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* V_0 = NULL;
	MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* V_1 = NULL;
	MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// MetadataVersion mdVersion = JsonUtility.FromJson<MetadataVersion>(jsonString);
		String_t* L_0 = ___jsonString0;
		MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* L_1;
		L_1 = JsonUtility_FromJson_TisMetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36_m71A4CFE48A5F8907C089B82E24891B7C6C713662(L_0, JsonUtility_FromJson_TisMetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36_m71A4CFE48A5F8907C089B82E24891B7C6C713662_RuntimeMethod_var);
		V_1 = L_1;
		// if (mdVersion._versionMajor == 0 && mdVersion._versionMinor < 3)
		MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____versionMajor_0;
		if (L_3)
		{
			goto IL_01be;
		}
	}
	{
		MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->____versionMinor_1;
		if ((((int32_t)L_5) >= ((int32_t)3)))
		{
			goto IL_01be;
		}
	}
	{
		// MetadataSinglePerspective md = JsonUtility.FromJson<MetadataSinglePerspective>(jsonString);
		String_t* L_6 = ___jsonString0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_7;
		L_7 = JsonUtility_FromJson_TisMetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C_m2C3C3F4A5641073E7F356C885553CD936AC00E06(L_6, JsonUtility_FromJson_TisMetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C_m2C3C3F4A5641073E7F356C885553CD936AC00E06_RuntimeMethod_var);
		V_2 = L_7;
		// if (mdVersion.format == "perpixel" && mdVersion._versionMinor == 1)
		MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___format_2;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral02B5340D6E8F82910E413FCECF7E6D03C265C596, NULL);
		if (!L_10)
		{
			goto IL_0168;
		}
	}
	{
		MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->____versionMinor_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0168;
		}
	}
	{
		// md.textureWidth = (int)(md.depthImageSize.x);
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_13 = V_2;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_14 = V_2;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&L_14->___depthImageSize_4);
		float L_16 = L_15->___x_0;
		NullCheck(L_13);
		L_13->___textureWidth_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_16);
		// md.textureHeight = (int)(md.depthImageSize.y) * 2;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_17 = V_2;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_18 = V_2;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___depthImageSize_4);
		float L_20 = L_19->___y_1;
		NullCheck(L_17);
		L_17->___textureHeight_10 = ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_20), 2));
		// md.boundsCenter = new Vector3(0f, 0f, (md.farClip - md.nearClip) / 2.0f + md.nearClip);
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_21 = V_2;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_22 = V_2;
		NullCheck(L_22);
		float L_23 = L_22->___farClip_7;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_24 = V_2;
		NullCheck(L_24);
		float L_25 = L_24->___nearClip_8;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_26 = V_2;
		NullCheck(L_26);
		float L_27 = L_26->___nearClip_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.0f), (0.0f), ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_23, L_25))/(2.0f))), L_27)), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___boundsCenter_12 = L_28;
		// md.boundsSize = new Vector3(md.depthImageSize.x * md.farClip / md.depthFocalLength.x,
		//                             md.depthImageSize.y * md.farClip / md.depthFocalLength.y,
		//                             md.farClip - md.nearClip);
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_29 = V_2;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_30 = V_2;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&L_30->___depthImageSize_4);
		float L_32 = L_31->___x_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_33 = V_2;
		NullCheck(L_33);
		float L_34 = L_33->___farClip_7;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_35 = V_2;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&L_35->___depthFocalLength_6);
		float L_37 = L_36->___x_0;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_38 = V_2;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&L_38->___depthImageSize_4);
		float L_40 = L_39->___y_1;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_41 = V_2;
		NullCheck(L_41);
		float L_42 = L_41->___farClip_7;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_43 = V_2;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&L_43->___depthFocalLength_6);
		float L_45 = L_44->___y_1;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_46 = V_2;
		NullCheck(L_46);
		float L_47 = L_46->___farClip_7;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_48 = V_2;
		NullCheck(L_48);
		float L_49 = L_48->___nearClip_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)(((float)il2cpp_codegen_multiply(L_32, L_34))/L_37)), ((float)(((float)il2cpp_codegen_multiply(L_40, L_42))/L_45)), ((float)il2cpp_codegen_subtract(L_47, L_49)), /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->___boundsSize_13 = L_50;
		// md.numAngles = 1;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_51 = V_2;
		NullCheck(L_51);
		L_51->___numAngles_3 = 1;
		// if (md.crop.x <= eps && md.crop.y <= eps && md.crop.z <= eps && md.crop.w <= eps)
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_52 = V_2;
		NullCheck(L_52);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_53 = (&L_52->___crop_14);
		float L_54 = L_53->___x_1;
		if ((!(((float)L_54) <= ((float)(9.99999994E-09f)))))
		{
			goto IL_015d;
		}
	}
	{
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_55 = V_2;
		NullCheck(L_55);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_56 = (&L_55->___crop_14);
		float L_57 = L_56->___y_2;
		if ((!(((float)L_57) <= ((float)(9.99999994E-09f)))))
		{
			goto IL_015d;
		}
	}
	{
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_58 = V_2;
		NullCheck(L_58);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_59 = (&L_58->___crop_14);
		float L_60 = L_59->___z_3;
		if ((!(((float)L_60) <= ((float)(9.99999994E-09f)))))
		{
			goto IL_015d;
		}
	}
	{
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_61 = V_2;
		NullCheck(L_61);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_62 = (&L_61->___crop_14);
		float L_63 = L_62->___w_4;
		if ((!(((float)L_63) <= ((float)(9.99999994E-09f)))))
		{
			goto IL_015d;
		}
	}
	{
		// md.crop = new Vector4(0.0f, 0.0f, 1.0f, 1.0f);
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_64 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_65), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		L_64->___crop_14 = L_65;
	}

IL_015d:
	{
		// md.extrinsics = Matrix4x4.identity;
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_66 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_67;
		L_67 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		NullCheck(L_66);
		L_66->___extrinsics_11 = L_67;
	}

IL_0168:
	{
		// if (md.clipEpsilon < eps)
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_68 = V_2;
		NullCheck(L_68);
		float L_69 = L_68->___clipEpsilon_15;
		if ((!(((float)L_69) < ((float)(9.99999994E-09f)))))
		{
			goto IL_0180;
		}
	}
	{
		// md.clipEpsilon = 0.005f; // default depth clipping epsilon, set for older versions of metadata
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_70 = V_2;
		NullCheck(L_70);
		L_70->___clipEpsilon_15 = (0.00499999989f);
	}

IL_0180:
	{
		// metadata = Depthkit_Metadata.FromSinglePerspective(md);
		MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* L_71 = V_2;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_72;
		L_72 = Depthkit_Metadata_FromSinglePerspective_mBD813D93D966303294448CAFAB8278B567981F5E(L_71, NULL);
		V_0 = L_72;
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		V_3 = 0;
		goto IL_01ae;
	}

IL_018b:
	{
		// metadata.perspectives[i].extrinsics = Matrix4x4.Inverse(metadata.perspectives[i].extrinsics);
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_73 = V_0;
		NullCheck(L_73);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_74 = L_73->___perspectives_8;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_78 = V_0;
		NullCheck(L_78);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_79 = L_78->___perspectives_8;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_83 = L_82->___extrinsics_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_84;
		L_84 = Matrix4x4_Inverse_m4ED4E9DA31C914B4CFAFCB370A34C1AFE3C3AA2E(L_83, NULL);
		NullCheck(L_77);
		L_77->___extrinsics_5 = L_84;
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01ae:
	{
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		int32_t L_86 = V_3;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_87 = V_0;
		NullCheck(L_87);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_88 = L_87->___perspectives_8;
		NullCheck(L_88);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length)))))
		{
			goto IL_018b;
		}
	}
	{
		goto IL_02e6;
	}

IL_01be:
	{
		// metadata = JsonUtility.FromJson<Depthkit_Metadata>(jsonString);
		String_t* L_89 = ___jsonString0;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_90;
		L_90 = JsonUtility_FromJson_TisDepthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_mDFE286EB0A39410030525E1E94FE45616F6AB1FB(L_89, JsonUtility_FromJson_TisDepthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB_mDFE286EB0A39410030525E1E94FE45616F6AB1FB_RuntimeMethod_var);
		V_0 = L_90;
		// metadata.boundsCenter.z *= -1;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_91 = V_0;
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = (&L_91->___boundsCenter_6);
		float* L_93 = (&L_92->___z_4);
		float* L_94 = L_93;
		float L_95 = *((float*)L_94);
		*((float*)L_94) = (float)((float)il2cpp_codegen_multiply(L_95, (-1.0f)));
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		V_4 = 0;
		goto IL_02d7;
	}

IL_01e1:
	{
		// Matrix4x4 mirror = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(1.0f, 1.0f, -1.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97;
		L_97 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_99;
		L_99 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_96, L_97, L_98, NULL);
		V_5 = L_99;
		// metadata.perspectives[i].extrinsics     = mirror * metadata.perspectives[i].extrinsics;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_100 = V_0;
		NullCheck(L_100);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_101 = L_100->___perspectives_8;
		int32_t L_102 = V_4;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_105 = V_5;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_106 = V_0;
		NullCheck(L_106);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_107 = L_106->___perspectives_8;
		int32_t L_108 = V_4;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_111 = L_110->___extrinsics_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_112;
		L_112 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_105, L_111, NULL);
		NullCheck(L_104);
		L_104->___extrinsics_5 = L_112;
		// metadata.perspectives[i].extrinsicsInv  = metadata.perspectives[i].extrinsics.inverse;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_113 = V_0;
		NullCheck(L_113);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_114 = L_113->___perspectives_8;
		int32_t L_115 = V_4;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_118 = V_0;
		NullCheck(L_118);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_119 = L_118->___perspectives_8;
		int32_t L_120 = V_4;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_123 = (&L_122->___extrinsics_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_124;
		L_124 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD(L_123, NULL);
		NullCheck(L_117);
		L_117->___extrinsicsInv_6 = L_124;
		// metadata.perspectives[i].cameraCenter = (metadata.perspectives[i].extrinsics * new Vector4(0.0f, 0.0f, 0.0f, 1.0f));
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_125 = V_0;
		NullCheck(L_125);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_126 = L_125->___perspectives_8;
		int32_t L_127 = V_4;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_130 = V_0;
		NullCheck(L_130);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_131 = L_130->___perspectives_8;
		int32_t L_132 = V_4;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_134);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_135 = L_134->___extrinsics_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_136;
		memset((&L_136), 0, sizeof(L_136));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_136), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_137;
		L_137 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_135, L_136, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_137, NULL);
		NullCheck(L_129);
		L_129->___cameraCenter_10 = L_138;
		// metadata.perspectives[i].cameraNormal = (metadata.perspectives[i].extrinsics * new Vector4(0.0f, 0.0f, 1.0f, 0.0f)).normalized;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_139 = V_0;
		NullCheck(L_139);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_140 = L_139->___perspectives_8;
		int32_t L_141 = V_4;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_144 = V_0;
		NullCheck(L_144);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_145 = L_144->___perspectives_8;
		int32_t L_146 = V_4;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_149 = L_148->___extrinsics_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_150;
		memset((&L_150), 0, sizeof(L_150));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_150), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_151;
		L_151 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_149, L_150, NULL);
		V_6 = L_151;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_152;
		L_152 = Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_152, NULL);
		NullCheck(L_143);
		L_143->___cameraNormal_9 = L_153;
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		int32_t L_154 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_154, 1));
	}

IL_02d7:
	{
		// for (int i = 0; i < metadata.perspectives.Length; ++i)
		int32_t L_155 = V_4;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_156 = V_0;
		NullCheck(L_156);
		PerspectiveU5BU5D_tDC31A64703CD630806ADC99684FE31BA08311043* L_157 = L_156->___perspectives_8;
		NullCheck(L_157);
		if ((((int32_t)L_155) < ((int32_t)((int32_t)(((RuntimeArray*)L_157)->max_length)))))
		{
			goto IL_01e1;
		}
	}

IL_02e6:
	{
		// return metadata;
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_158 = V_0;
		return L_158;
	}
}
// System.Void Depthkit.Depthkit_Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_Metadata__ctor_m73B75499D05E25994D772D9A12BD2655CB7EE2F2 (Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* __this, const RuntimeMethod* method) 
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
// System.Void Depthkit.Depthkit_Metadata/MetadataVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataVersion__ctor_m410707792BE12F3030AF065C51FCC5485271A738 (MetadataVersion_tAB5E1E0DAF9137463B1ABBC73C0800F2D7261B36* __this, const RuntimeMethod* method) 
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
// System.Void Depthkit.Depthkit_Metadata/MetadataSinglePerspective::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataSinglePerspective__ctor_mE899E1C30A53F69140C43135597627F4607B0A81 (MetadataSinglePerspective_t928C08A9F61ACA9F7FBBD5506D524C4079B45A5C* __this, const RuntimeMethod* method) 
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
// System.Void Depthkit.Depthkit_Metadata/Perspective::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perspective__ctor_m8A99BC7EF830737EE2554870969ACF08900EB54E (Perspective_t387E1BDBCBF3800B9D070C74E8D7D24C6D3ED74D* __this, const RuntimeMethod* method) 
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
void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_Multicast(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* currentDelegate = reinterpret_cast<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_Open(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_OpenStaticInvoker(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_ClosedStaticInvoker(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3 (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Depthkit.DepthkitClipEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthkitClipEventHandler__ctor_mFC7665D9C4AD8C95254A1234860FC0D88F261789 (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_Multicast;
}
// System.Void Depthkit.DepthkitClipEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925 (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Depthkit.DepthkitClipEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DepthkitClipEventHandler_BeginInvoke_m723FBB31D5E6ADDACB0D6CEB7A3FC2A1A83A16D1 (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Depthkit.DepthkitClipEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthkitClipEventHandler_EndInvoke_mC329D4C197921DEF966391F92832B214BB877C3D (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackStarted_m39C5026A0AEA29EFBDCC1801A7A7467C2DA3A0B7 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackStarted_0);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::remove_PlaybackStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_remove_PlaybackStarted_m469347E992511212AC23575D1F441B679305293E (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackStarted_0);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackPaused(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackPaused_m1E9EDD3A3583CBC07E43A2D5FA5DC5288E5580A8 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackPaused_1;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackPaused_1);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::remove_PlaybackPaused(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_remove_PlaybackPaused_mD79559F7AD8775A219A3B166A571164D998B88AB (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackPaused_1;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackPaused_1);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::add_PlaybackStopped(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_PlaybackStopped_m2AF1B10E94B4A071F598F56A744889182A40ED10 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStopped_2;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackStopped_2);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::remove_PlaybackStopped(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_remove_PlaybackStopped_m124EEC2DFA9368DBADC1B68D1603938CD6579F0D (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStopped_2;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___PlaybackStopped_2);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::add_LoadingStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_LoadingStarted_m353A1580F3DA47D234531565D564601FA4964B16 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingStarted_3;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___LoadingStarted_3);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::remove_LoadingStarted(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_remove_LoadingStarted_m8A48C2E5A5D026FC390A1ACFB2222235D315A7E6 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingStarted_3;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___LoadingStarted_3);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::add_LoadingFinished(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_add_LoadingFinished_mBCE5F28B6317EC2FCAF74D0F220B1ACEBA0BA545 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingFinished_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___LoadingFinished_4);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::remove_LoadingFinished(Depthkit.DepthkitClipEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_remove_LoadingFinished_m31D843490BE714AD214573A9B738B7235CC7F3F9 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_0 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_1 = NULL;
	DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* V_2 = NULL;
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingFinished_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = V_0;
		V_1 = L_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_2 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)CastclassSealed((RuntimeObject*)L_4, DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3_il2cpp_TypeInfo_var));
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3** L_5 = (&__this->___LoadingFinished_4);
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_6 = V_2;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_7 = V_1;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_9 = V_0;
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_9) == ((RuntimeObject*)(DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_OnClipPlaybackStarted_m3A0A3C065398DA21D3C9ABF0ADDE289AF3FA9352 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
{
	{
		// if(PlaybackStarted != null) { PlaybackStarted(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStarted_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(PlaybackStarted != null) { PlaybackStarted(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = __this->___PlaybackStarted_0;
		NullCheck(L_1);
		DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_OnClipPlaybackPaused_m58C1BB48812328E0F76919F61A16B32F69E47C57 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
{
	{
		// if(PlaybackPaused != null) { PlaybackPaused(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackPaused_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(PlaybackPaused != null) { PlaybackPaused(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = __this->___PlaybackPaused_1;
		NullCheck(L_1);
		DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_OnClipPlaybackStopped_m74887F9E018E377DEC8F9D33FFF9339C6DB96765 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
{
	{
		// if(PlaybackStopped != null) { PlaybackStopped(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___PlaybackStopped_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(PlaybackStopped != null) { PlaybackStopped(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = __this->___PlaybackStopped_2;
		NullCheck(L_1);
		DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::OnClipLoadingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_OnClipLoadingStarted_m16A8309A63BAF7E52714B516583F4BFFDFD12CB5 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
{
	{
		// if(LoadingStarted != null) { LoadingStarted(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingStarted_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(LoadingStarted != null) { LoadingStarted(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = __this->___LoadingStarted_3;
		NullCheck(L_1);
		DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::OnClipLoadingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents_OnClipLoadingFinished_m06868752115A39EB6FF8C6E8D604DB55A66DE9C9 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
{
	{
		// if(LoadingFinished != null) { LoadingFinished(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_0 = __this->___LoadingFinished_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(LoadingFinished != null) { LoadingFinished(); }
		DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* L_1 = __this->___LoadingFinished_4;
		NullCheck(L_1);
		DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PlayerEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PlayerEvents__ctor_mCD44AE0EECE263171668DB589AA59E58F3AC6DA4 (Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* __this, const RuntimeMethod* method) 
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
// UnityEngine.Shader Depthkit.Depthkit_PhotoLook::get_Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Depthkit_PhotoLook_get_Shader_m0E2EDFF2D2F64D6E90F3E7F156E5B3F515F0DDAD (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// get { return _shader; }
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->____shader_17;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::set_Shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_set_Shader_mDAAF619CBA7EDF6853E24C33F35093FEA15981CA (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) 
{
	{
		// _materialDirty = true;
		((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____materialDirty_5 = (bool)1;
		// _shader = value;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___value0;
		__this->____shader_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shader_17), (void*)L_0);
		// }
		return;
	}
}
// Depthkit.RenderType Depthkit.Depthkit_PhotoLook::GetRenderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_PhotoLook_GetRenderType_mD1CEB490299F00112CCE0453BCC02D0C2E6ACA57 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// return RenderType.Photo;
		return (int32_t)(0);
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_Start_mD7E76EE59821AB15C508EF78AF117649F8317E56 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// BuildMesh();
		Depthkit_PhotoLook_BuildMesh_m5EC9C4D9BBD30F31A39397BC0E35277610150FA6(__this, NULL);
		// BuildMaterial();
		Depthkit_PhotoLook_BuildMaterial_m04068576219BE5B6247EA2A529A740E9814CC117(__this, NULL);
		// Draw();
		VirtualActionInvoker0::Invoke(10 /* System.Void Depthkit.Depthkit_ClipRenderer::Draw() */, __this);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_Update_mC8188F079F8A8AD1DEE5332BB7453971B613B708 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// Draw();
		VirtualActionInvoker0::Invoke(10 /* System.Void Depthkit.Depthkit_ClipRenderer::Draw() */, __this);
		// }
		return;
	}
}
// Depthkit.Version Depthkit.Depthkit_PhotoLook::GetSDKVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD Depthkit_PhotoLook_GetSDKVersion_m3C6558DA4782B9790CD996F01DB7512E25DC8C04 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// return new Version(0, 2, 6);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7((&L_0), (uint8_t)0, (uint8_t)2, (uint8_t)6, /*hidden argument*/NULL);
		return L_0;
	}
}
// Depthkit.Version Depthkit.Depthkit_PhotoLook::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD Depthkit_PhotoLook_GetVersion_mE4E7711A09E1B999697A3FE1D4DD34C2BC686F7D (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		// return new Version(0, 1, 0);
		Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Version__ctor_m07FB3BF9D5FEB664B5E52F89D5872600D49E19E7((&L_0), (uint8_t)0, (uint8_t)1, (uint8_t)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_Draw_mCD67272FB0BC492A83B2092CD6FFE447D6800725 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Texture == null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = Depthkit_ClipRenderer_get_Texture_m9588E8073A5453C0A93116001AE453596145C7DF_inline(__this, NULL);
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
		// if (_geometryDirty)
		bool L_2 = ((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____geometryDirty_4;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// BuildMesh();
		Depthkit_PhotoLook_BuildMesh_m5EC9C4D9BBD30F31A39397BC0E35277610150FA6(__this, NULL);
		// _geometryDirty = false;
		((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____geometryDirty_4 = (bool)0;
	}

IL_0024:
	{
		// if (_metadataChanged && _mesh != null)
		bool L_3 = ((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____metadataChanged_7;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->____mesh_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// _mesh.bounds = Bounds;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->____mesh_19;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = Depthkit_ClipRenderer_get_Bounds_mC746406A17898CBE62B9FF5C891E539DC4ACD7F1_inline(__this, NULL);
		NullCheck(L_6);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_6, L_7, NULL);
		// _metadataChanged = false;
		((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____metadataChanged_7 = (bool)0;
	}

IL_0052:
	{
		// if (_materialDirty)
		bool L_8 = ((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____materialDirty_5;
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		// BuildMaterial();
		Depthkit_PhotoLook_BuildMaterial_m04068576219BE5B6247EA2A529A740E9814CC117(__this, NULL);
		// _materialDirty = false;
		((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____materialDirty_5 = (bool)0;
	}

IL_0067:
	{
		// if (_material != null && _metadata != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->____material_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00c3;
		}
	}
	{
		Depthkit_Metadata_tF07DF434BFBC71EC75A77F5DEA57C4E6D17AFDDB* L_11 = ((Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B*)__this)->____metadata_14;
		if (!L_11)
		{
			goto IL_00c3;
		}
	}
	{
		// SetMaterialProperties(_material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->____material_18;
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(11 /* System.Void Depthkit.Depthkit_ClipRenderer::SetMaterialProperties(UnityEngine.Material) */, __this, L_12);
		// Matrix4x4 transformmat = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_14, L_16, L_18, NULL);
		V_0 = L_19;
		// Graphics.DrawMesh(_mesh, transformmat, _material, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_20 = __this->____mesh_19;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->____material_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawMesh_mBEF82829E35961F7AB78112607A21F780051498A(L_20, L_21, L_22, 0, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_BuildMesh_m5EC9C4D9BBD30F31A39397BC0E35277610150FA6 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->____mesh_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_2, NULL);
		__this->____mesh_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_19), (void*)L_2);
	}

IL_0019:
	{
		// GetMeshLattice(ref _mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** L_3 = (&__this->____mesh_19);
		Depthkit_ClipRenderer_GetMeshLattice_m8DC485D6CD47037A0545F761421915E56EEE1EE2(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::BuildMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_BuildMaterial_m04068576219BE5B6247EA2A529A740E9814CC117 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_shader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->____shader_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// _material = new Material(_shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->____shader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->____material_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_18), (void*)L_3);
		return;
	}

IL_0020:
	{
		// _material = null;
		__this->____material_18 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_18), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::RemoveComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook_RemoveComponents_mDE462F323795D989F50749293AC5A74058615625 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// DestroyImmediate(this, true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6AAC658EE0D1AE43E4F185137E870941FBA542FD(__this, (bool)1, NULL);
		return;
	}

IL_000f:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_PhotoLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_PhotoLook__ctor_mF61AF974613488FB4885B4F1B72FBDE5A446A409 (Depthkit_PhotoLook_t69D0121E940078E48B13FB254BFEA45FC8EF76A7* __this, const RuntimeMethod* method) 
{
	{
		Depthkit_ClipRenderer__ctor_m717D21984B536092974887C9C691C1A084A8B00C(__this, NULL);
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
// System.Void Depthkit.Depthkit_AVProVideoPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_AVProVideoPlayer__ctor_mA1E5B4C1BABA767BA19BE1F0D87AD9C018C1C939 (Depthkit_AVProVideoPlayer_t3E312D24168C2C3A0296451EB49E0FB9F7194E69* __this, const RuntimeMethod* method) 
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
// System.Void Depthkit.Depthkit_UnityVideoPlayer::CreatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_CreatePlayer_m5AF52CF83C2DFF005674F3C3221CF4BE530CB130 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Depthkit_UnityVideoPlayer_OnVideoLoadingComplete_mEAF06A436A6AFC3561113FF4247C23346889636C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mediaPlayer = gameObject.GetComponent<UnityEngine.Video.VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451(L_0, GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		__this->____mediaPlayer_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mediaPlayer_6), (void*)L_1);
		// if (_mediaPlayer == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->____mediaPlayer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// _mediaPlayer = gameObject.AddComponent<UnityEngine.Video.VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5;
		L_5 = GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D(L_4, GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		__this->____mediaPlayer_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mediaPlayer_6), (void*)L_5);
	}

IL_0030:
	{
		// _audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_6, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->____audioSource_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_7), (void*)L_7);
		// if (_audioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____audioSource_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// _audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_10, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->____audioSource_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_7), (void*)L_11);
	}

IL_0060:
	{
		// _mediaPlayer.audioOutputMode = UnityEngine.Video.VideoAudioOutputMode.AudioSource;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = __this->____mediaPlayer_6;
		NullCheck(L_12);
		VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574(L_12, 1, NULL);
		// _mediaPlayer.SetTargetAudioSource(0, _audioSource);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_13 = __this->____mediaPlayer_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->____audioSource_7;
		NullCheck(L_13);
		VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8(L_13, (uint16_t)0, L_14, NULL);
		// _mediaPlayer.renderMode = UnityEngine.Video.VideoRenderMode.APIOnly;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_15 = __this->____mediaPlayer_6;
		NullCheck(L_15);
		VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0(L_15, 4, NULL);
		// _mediaPlayer.prepareCompleted += OnVideoLoadingComplete;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_16 = __this->____mediaPlayer_6;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_17 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)il2cpp_codegen_object_new(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903(L_17, __this, (intptr_t)((void*)Depthkit_UnityVideoPlayer_OnVideoLoadingComplete_mEAF06A436A6AFC3561113FF4247C23346889636C_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B(L_16, L_17, NULL);
		// _mediaPlayer.EnableAudioTrack(0, true);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_18 = __this->____mediaPlayer_6;
		NullCheck(L_18);
		VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB(L_18, (uint16_t)0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer::IsPlayerCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_UnityVideoPlayer_IsPlayerCreated_mDC064ABF7F49512340214FD7716D584CF74749CA (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _mediaPlayer != null;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer::IsPlayerSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_UnityVideoPlayer_IsPlayerSetup_m72F8006B03395B2F5EEBEC76CAA3F7ED52768F33 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!IsPlayerCreated())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsPlayerCreated() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if(_mediaPlayer.source == UnityEngine.Video.VideoSource.VideoClip)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1 = __this->____mediaPlayer_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444(L_1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// return _mediaPlayer.clip != null;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->____mediaPlayer_6;
		NullCheck(L_3);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_4;
		L_4 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_5;
	}

IL_0029:
	{
		// return _mediaPlayer.url != null && _mediaPlayer.url != "";
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->____mediaPlayer_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40(L_6, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = __this->____mediaPlayer_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40(L_8, NULL);
		bool L_10;
		L_10 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_10;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::SetVideoPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_SetVideoPath_mD528CE8A4B2835FEFA710C7608D88F04F6EC70BF (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51311F107A22ACB2B9982782F66881085ABC044E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsPlayerCreated())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsPlayerCreated() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// path = path.Replace("\\", "/");
		String_t* L_1 = ___path0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		___path0 = L_2;
		// if (path.StartsWith(Application.dataPath))
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// path = "Assets" + path.Substring(Application.dataPath.Length);
		String_t* L_6 = ___path0;
		String_t* L_7;
		L_7 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral51311F107A22ACB2B9982782F66881085ABC044E, L_9, NULL);
		___path0 = L_10;
	}

IL_0044:
	{
		// _mediaPlayer.source = UnityEngine.Video.VideoSource.Url;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_11 = __this->____mediaPlayer_6;
		NullCheck(L_11);
		VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052(L_11, 1, NULL);
		// _mediaPlayer.url = path;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = __this->____mediaPlayer_6;
		String_t* L_13 = ___path0;
		NullCheck(L_12);
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.String Depthkit.Depthkit_UnityVideoPlayer::GetVideoPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Depthkit_UnityVideoPlayer_GetVideoPath_mC3227D4ED38F11AA35E2680D10986186DAA22A1F (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsPlayerSetup())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Depthkit.Depthkit_ClipPlayer::IsPlayerSetup() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000e:
	{
		// if (_mediaPlayer.source == UnityEngine.Video.VideoSource.VideoClip)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1 = __this->____mediaPlayer_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444(L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return _mediaPlayer.clip.originalPath;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->____mediaPlayer_6;
		NullCheck(L_3);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_4;
		L_4 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		// return _mediaPlayer.url;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->____mediaPlayer_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40(L_6, NULL);
		return L_7;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::StartVideoLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_StartVideoLoad_mFB3DE1D4C49D8F1A86014834CAC127D0B0A8B01B (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Load());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator Depthkit.Depthkit_ClipPlayer::Load() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Depthkit.Depthkit_UnityVideoPlayer::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Depthkit_UnityVideoPlayer_Load_mE76D9CA291861835377C4AC18AF9646AD1179A59 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* L_0 = (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE*)il2cpp_codegen_object_new(U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadU3Ed__8__ctor_mBECDECCCEF6703CD96F19763AE81110CBAD8158F(L_0, 0, NULL);
		U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::OnVideoLoadingComplete(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_OnVideoLoadingComplete_mEAF06A436A6AFC3561113FF4247C23346889636C (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___player0, const RuntimeMethod* method) 
{
	{
		// VideoLoaded = true;
		Depthkit_ClipPlayer_set_VideoLoaded_m0A1D4B7193CEE711BFDE701EC437E1F0AF993A26_inline(__this, (bool)1, NULL);
		// Events.OnClipLoadingFinished();
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0;
		L_0 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Depthkit.Depthkit_PlayerEvents::OnClipLoadingFinished() */, L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Depthkit.Depthkit_UnityVideoPlayer::LoadAndPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Depthkit_UnityVideoPlayer_LoadAndPlay_m5785338DD1496C198B1199ED951E6386963E2762 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* L_0 = (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60*)il2cpp_codegen_object_new(U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAndPlayU3Ed__10__ctor_m10D6056757D3ED553784F314E278B74DC86CAE6A(L_0, 0, NULL);
		U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_Play_mD93FB2AFB2298C3047DA6EBBFF96BAD4CAE5F182 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// _mediaPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_0, NULL);
		// Events.OnClipPlaybackStarted();
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_1;
		L_1 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(__this, NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackStarted() */, L_1);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_Pause_m498D4927DEF98A5B83FD17549E70F2037AB5CA27 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// _mediaPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_0, NULL);
		// Events.OnClipPlaybackPaused();
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_1;
		L_1 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(__this, NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(5 /* System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackPaused() */, L_1);
		// }
		return;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_Stop_mDCBAE60CCC93E447DE519D636E82360B60C22CED (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// _mediaPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_0, NULL);
		// Events.OnClipPlaybackStopped();
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_1;
		L_1 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(__this, NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(6 /* System.Void Depthkit.Depthkit_PlayerEvents::OnClipPlaybackStopped() */, L_1);
		// }
		return;
	}
}
// System.Int32 Depthkit.Depthkit_UnityVideoPlayer::GetCurrentFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_UnityVideoPlayer_GetCurrentFrame_m3F7583AD3E8D2E4635D91BF4B19BAB9BB451F410 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return (int)_mediaPlayer.frame;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A(L_0, NULL);
		return ((int32_t)L_1);
	}
}
// System.Double Depthkit.Depthkit_UnityVideoPlayer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Depthkit_UnityVideoPlayer_GetCurrentTime_m5BB4D530B1B99E62A5C3582A26630DB42077C29A (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return _mediaPlayer.time;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		double L_1;
		L_1 = VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48(L_0, NULL);
		return L_1;
	}
}
// System.Double Depthkit.Depthkit_UnityVideoPlayer::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Depthkit_UnityVideoPlayer_GetDuration_m1158B0418D12EAF2714A7105EAA370B30C6FF713 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return _mediaPlayer.clip.length;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1;
		L_1 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_0, NULL);
		NullCheck(L_1);
		double L_2;
		L_2 = VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Texture Depthkit.Depthkit_UnityVideoPlayer::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Depthkit_UnityVideoPlayer_GetTexture_m3D4458793BA0B447F0F47F8D161793E599F28374 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return _mediaPlayer.texture;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer::IsTextureFlipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_UnityVideoPlayer_IsTextureFlipped_m69142C6F456C0B54243A9447E131165E3682E55C (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// Depthkit.GammaCorrection Depthkit.Depthkit_UnityVideoPlayer::GammaCorrectDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_UnityVideoPlayer_GammaCorrectDepth_mBD0E52AF68FF96A546293158A66EB3A8AB7A7056 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return GammaCorrection.LinearToGammaSpace;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return GammaCorrection.None;
		return (int32_t)(0);
	}
}
// Depthkit.GammaCorrection Depthkit.Depthkit_UnityVideoPlayer::GammaCorrectColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_UnityVideoPlayer_GammaCorrectColor_m552ED65C91EFEB7DA202077B91E995B33D82FCA1 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		// return GammaCorrection.None;
		return (int32_t)(0);
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Depthkit_UnityVideoPlayer_IsPlaying_m09CC70A0043AFF05C1BFEAC6131A5B5FB3F38D8A (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return _mediaPlayer.isPlaying;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		return L_1;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::RemoveComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer_RemoveComponents_mC23BA80A5181F9B53367AD101DEF915CB67F5E00 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// DestroyImmediate(_mediaPlayer, true);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1 = __this->____mediaPlayer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6AAC658EE0D1AE43E4F185137E870941FBA542FD(L_1, (bool)1, NULL);
		// DestroyImmediate(_audioSource, true);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audioSource_7;
		Object_DestroyImmediate_m6AAC658EE0D1AE43E4F185137E870941FBA542FD(L_2, (bool)1, NULL);
		// DestroyImmediate(this, true);
		Object_DestroyImmediate_m6AAC658EE0D1AE43E4F185137E870941FBA542FD(__this, (bool)1, NULL);
		return;
	}

IL_0027:
	{
		// Destroy(_mediaPlayer);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->____mediaPlayer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// Destroy(_audioSource);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____audioSource_7;
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// Destroy(this);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// }
		return;
	}
}
// Depthkit.AvailablePlayerType Depthkit.Depthkit_UnityVideoPlayer::GetPlayerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depthkit_UnityVideoPlayer_GetPlayerType_mC9576366C18860320478E34F65BE6AA2DAE33975 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return AvailablePlayerType.UnityVideoPlayer;
		return (int32_t)(4);
	}
}
// UnityEngine.Video.VideoPlayer Depthkit.Depthkit_UnityVideoPlayer::GetPlayerBackend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* Depthkit_UnityVideoPlayer_GetPlayerBackend_m636D7E526AD8E8FD4101EC577B2830E475484E76 (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		// return _mediaPlayer;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->____mediaPlayer_6;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depthkit_UnityVideoPlayer__ctor_mDF11BCE66B08A52F1FE624706BCC681AA0FE9FAC (Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* __this, const RuntimeMethod* method) 
{
	{
		Depthkit_ClipPlayer__ctor_m82017CE6D0FD77C8506A792E6B7067F0DF5AF534(__this, NULL);
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
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__8__ctor_mBECDECCCEF6703CD96F19763AE81110CBAD8158F (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__8_System_IDisposable_Dispose_mF7CE1BEDF8EEE79E214E5EEC4439D66FC1163790 (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadU3Ed__8_MoveNext_m6D965AC74AD22B05C041B8549740B28D9E5AE7E5 (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Events.OnClipLoadingStarted();
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_4 = V_1;
		NullCheck(L_4);
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_5;
		L_5 = Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline(L_4, NULL);
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(7 /* System.Void Depthkit.Depthkit_PlayerEvents::OnClipLoadingStarted() */, L_5);
		// _mediaPlayer.Prepare();
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_6 = V_1;
		NullCheck(L_6);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = L_6->____mediaPlayer_6;
		NullCheck(L_7);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_7, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAE5696F3920D055D49B117678F2A8106A81DBDB (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__8_System_Collections_IEnumerator_Reset_m7869530F823E8CA025254B8C82F705F7BB62A103 (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadU3Ed__8_System_Collections_IEnumerator_Reset_m7869530F823E8CA025254B8C82F705F7BB62A103_RuntimeMethod_var)));
	}
}
// System.Object Depthkit.Depthkit_UnityVideoPlayer/<Load>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadU3Ed__8_System_Collections_IEnumerator_get_Current_mDA4C3C331416F15DB3F0AC2CDDD3019BC701404B (U3CLoadU3Ed__8_t02DEB859786D885C8D61C5140AAF33DA563F67EE* __this, const RuntimeMethod* method) 
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
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAndPlayU3Ed__10__ctor_m10D6056757D3ED553784F314E278B74DC86CAE6A (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAndPlayU3Ed__10_System_IDisposable_Dispose_mEF8296EEC7B0B472AF3BFF8C7A2C456E8EFB99E5 (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAndPlayU3Ed__10_MoveNext_m3A69474A4B20E403E8E87FB6426A72BE3AE34882 (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartVideoLoad();
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_3 = V_1;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(8 /* System.Void Depthkit.Depthkit_ClipPlayer::StartVideoLoad() */, L_3);
		goto IL_0048;
	}

IL_0031:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0048:
	{
		// while (!VideoLoaded)
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Depthkit_ClipPlayer_get_VideoLoaded_m247D2E21959B8D7D27A15F984CC769F1DBF85A8B_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// Play();
		Depthkit_UnityVideoPlayer_t936EA27488E4843079437F52A99D32A4D4642DBA* L_6 = V_1;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(12 /* System.Void Depthkit.Depthkit_ClipPlayer::Play() */, L_6);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAndPlayU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFE8EA8AD9B32CDF8351323BB05FCA8501D03C28 (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAndPlayU3Ed__10_System_Collections_IEnumerator_Reset_m8BF70430ACA4985F54C43A0389759227CBFCFE7C (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAndPlayU3Ed__10_System_Collections_IEnumerator_Reset_m8BF70430ACA4985F54C43A0389759227CBFCFE7C_RuntimeMethod_var)));
	}
}
// System.Object Depthkit.Depthkit_UnityVideoPlayer/<LoadAndPlay>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAndPlayU3Ed__10_System_Collections_IEnumerator_get_Current_m211BAA58DDCE8CCE1E49BFD0BC3BDF2A120F36B6 (U3CLoadAndPlayU3Ed__10_tB7713E0CFC4BF396DBB49BFDC14F7BAE291EFB60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* Depthkit_Clip_get_Player_mE23BDDC5971DBC66E152E6AFBBEDA58664C5D702_inline (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, const RuntimeMethod* method) 
{
	{
		// return _player;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0 = __this->____player_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* Depthkit_ClipPlayer_get_Events_mFE2989E7719385C2D193EC46F73DAA99BD1A7B7F_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) 
{
	{
		// get { return events; }
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = __this->___events_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_Clip_set_Player_m8E405FB541FBB7DAFF580BC916AF2F33254C302F_inline (Depthkit_Clip_tAFD80F609DC09BB0F18A19DCB25E9E6575CB59B4* __this, Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* ___value0, const RuntimeMethod* method) 
{
	{
		// _player = value;
		Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* L_0 = ___value0;
		__this->____player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Depthkit_ClipRenderer_get_Texture_m9588E8073A5453C0A93116001AE453596145C7DF_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _texture; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____texture_8;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_Events_mAF09D18036FE0E8BE1034EB066DEBDE75C8F18A6_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { events = value; }
		Depthkit_PlayerEvents_tB8BA5AABDA0BB377D504C7E02D04C46DDB9035F0* L_0 = ___value0;
		__this->___events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_5), (void*)L_0);
		// private set { events = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipRenderer_set_Bounds_m5E174F9F0DCC7D08EAF633A4863DD49B6CBDD0A4_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		// _bounds = value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = ___value0;
		__this->____bounds_10 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_major_m756B516F988273AE2B164C042B636D95EB1109CE_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte major { get; private set; }
		uint8_t L_0 = __this->___U3CmajorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_major_mBE38F8A38E8959DC94D06C704745F0D04CCF8030_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte major { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CmajorU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_minor_mDBF097419DFB01374A4A00E03EB015FC54FBD406_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte minor { get; private set; }
		uint8_t L_0 = __this->___U3CminorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_minor_m52F982A4EB226448A7E078B7D746924A58C38A52_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte minor { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CminorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Version_get_patch_m0E93A4BF469BC3DD2832137183033616CC5B0016_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, const RuntimeMethod* method) 
{
	{
		// public byte patch { get; private set; }
		uint8_t L_0 = __this->___U3CpatchU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Version_set_patch_mEAB41C9453882FA9105E980B529A47FC94C78C7D_inline (Version_t0D7C3AADED08650F1FC1178420AF4907EEDACABD* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte patch { get; private set; }
		uint8_t L_0 = ___value0;
		__this->___U3CpatchU3Ek__BackingField_2 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DepthkitClipEventHandler_Invoke_m45EC41D332E64A98962589E8CD2C011C8E401925_inline (DepthkitClipEventHandler_tADE3C73DE32CE896F852C28A48E2CD61115A00F3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Depthkit_ClipRenderer_get_Bounds_mC746406A17898CBE62B9FF5C891E539DC4ACD7F1_inline (Depthkit_ClipRenderer_t9E2084D13B68E1850F7AA5082215F8421BB5E69B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _bounds; }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->____bounds_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Depthkit_ClipPlayer_set_VideoLoaded_m0A1D4B7193CEE711BFDE701EC437E1F0AF993A26_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool VideoLoaded { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CVideoLoadedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Depthkit_ClipPlayer_get_VideoLoaded_m247D2E21959B8D7D27A15F984CC769F1DBF85A8B_inline (Depthkit_ClipPlayer_tDECE56274CF2D392F0D5BF03C046FEDCE8A11B8C* __this, const RuntimeMethod* method) 
{
	{
		// public bool VideoLoaded { get; protected set; }
		bool L_0 = __this->___U3CVideoLoadedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1;
		L_1 = Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___a0;
		float L_2;
		L_2 = Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
