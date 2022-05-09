#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.XR.ARKit.NSError
struct NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSError::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCameraBackground_BeforeBackgroundRenderHandler_m50F0B7017DEEF627A0B128B2A9828CBEC377AF3C(int32_t ___eventId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionDelegate_CoachingOverlayViewDidDeactivate_m7960EAC963C47BFBF4099FB86C9240D595272348(intptr_t ___subsystemHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionDelegate_CoachingOverlayViewWillActivate_m61743D80F8E268F88E4FD25C037ACF0E8C13D1B1(intptr_t ___subsystemHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionDelegate_ConfigurationChanged_m3759A0F7819E218785CB98C5C9B061E312097457(intptr_t ___subsystemHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionDelegate_SessionDidFailWithError_m70F9CD57C529E29C6ECD274793249117DD6DB444(intptr_t ___subsystemHandle0, NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___error1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_m6B1C9EB105ECFADA9224059002056EB8FFB9E0F0(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0(Il2CppChar* ___language0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_XRCpuImage_OnAsyncConversionComplete_m7E311C07BC1C6138581C60F22191796CF029C65F(int32_t ___status0, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[9] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCameraBackground_BeforeBackgroundRenderHandler_m50F0B7017DEEF627A0B128B2A9828CBEC377AF3C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionDelegate_CoachingOverlayViewDidDeactivate_m7960EAC963C47BFBF4099FB86C9240D595272348),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionDelegate_CoachingOverlayViewWillActivate_m61743D80F8E268F88E4FD25C037ACF0E8C13D1B1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionDelegate_ConfigurationChanged_m3759A0F7819E218785CB98C5C9B061E312097457),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionDelegate_SessionDidFailWithError_m70F9CD57C529E29C6ECD274793249117DD6DB444),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_m6B1C9EB105ECFADA9224059002056EB8FFB9E0F0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_XRCpuImage_OnAsyncConversionComplete_m7E311C07BC1C6138581C60F22191796CF029C65F),
};
