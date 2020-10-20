// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Devices_Lights_Effects_0_H
#define WINRT_Windows_Devices_Lights_Effects_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Lights
{
    struct LampArray;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Lights::Effects
{
    enum class LampArrayEffectCompletionBehavior : int32_t
    {
        ClearState = 0,
        KeepState = 1,
    };
    enum class LampArrayEffectStartMode : int32_t
    {
        Sequential = 0,
        Simultaneous = 1,
    };
    enum class LampArrayRepetitionMode : int32_t
    {
        Occurrences = 0,
        Forever = 1,
    };
    struct ILampArrayBitmapEffect;
    struct ILampArrayBitmapEffectFactory;
    struct ILampArrayBitmapRequestedEventArgs;
    struct ILampArrayBlinkEffect;
    struct ILampArrayBlinkEffectFactory;
    struct ILampArrayColorRampEffect;
    struct ILampArrayColorRampEffectFactory;
    struct ILampArrayCustomEffect;
    struct ILampArrayCustomEffectFactory;
    struct ILampArrayEffect;
    struct ILampArrayEffectPlaylist;
    struct ILampArrayEffectPlaylistStatics;
    struct ILampArraySolidEffect;
    struct ILampArraySolidEffectFactory;
    struct ILampArrayUpdateRequestedEventArgs;
    struct LampArrayBitmapEffect;
    struct LampArrayBitmapRequestedEventArgs;
    struct LampArrayBlinkEffect;
    struct LampArrayColorRampEffect;
    struct LampArrayCustomEffect;
    struct LampArrayEffectPlaylist;
    struct LampArraySolidEffect;
    struct LampArrayUpdateRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayCustomEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArraySolidEffect>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayBitmapEffect>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayBlinkEffect>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayColorRampEffect>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayCustomEffect>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArraySolidEffect>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayEffectStartMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Lights::Effects::LampArrayRepetitionMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayBitmapEffect> = L"Windows.Devices.Lights.Effects.LampArrayBitmapEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> = L"Windows.Devices.Lights.Effects.LampArrayBitmapRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayBlinkEffect> = L"Windows.Devices.Lights.Effects.LampArrayBlinkEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayColorRampEffect> = L"Windows.Devices.Lights.Effects.LampArrayColorRampEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayCustomEffect> = L"Windows.Devices.Lights.Effects.LampArrayCustomEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> = L"Windows.Devices.Lights.Effects.LampArrayEffectPlaylist";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArraySolidEffect> = L"Windows.Devices.Lights.Effects.LampArraySolidEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> = L"Windows.Devices.Lights.Effects.LampArrayUpdateRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior> = L"Windows.Devices.Lights.Effects.LampArrayEffectCompletionBehavior";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayEffectStartMode> = L"Windows.Devices.Lights.Effects.LampArrayEffectStartMode";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::LampArrayRepetitionMode> = L"Windows.Devices.Lights.Effects.LampArrayRepetitionMode";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> = L"Windows.Devices.Lights.Effects.ILampArrayBitmapEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> = L"Windows.Devices.Lights.Effects.ILampArrayBitmapEffectFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> = L"Windows.Devices.Lights.Effects.ILampArrayBitmapRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> = L"Windows.Devices.Lights.Effects.ILampArrayBlinkEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> = L"Windows.Devices.Lights.Effects.ILampArrayBlinkEffectFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> = L"Windows.Devices.Lights.Effects.ILampArrayColorRampEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> = L"Windows.Devices.Lights.Effects.ILampArrayColorRampEffectFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayCustomEffect> = L"Windows.Devices.Lights.Effects.ILampArrayCustomEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> = L"Windows.Devices.Lights.Effects.ILampArrayCustomEffectFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayEffect> = L"Windows.Devices.Lights.Effects.ILampArrayEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> = L"Windows.Devices.Lights.Effects.ILampArrayEffectPlaylist";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> = L"Windows.Devices.Lights.Effects.ILampArrayEffectPlaylistStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArraySolidEffect> = L"Windows.Devices.Lights.Effects.ILampArraySolidEffect";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> = L"Windows.Devices.Lights.Effects.ILampArraySolidEffectFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> = L"Windows.Devices.Lights.Effects.ILampArrayUpdateRequestedEventArgs";
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>{ 0x3238E065,0xD877,0x4627,{ 0x89,0xE5,0x2A,0x88,0xF7,0x05,0x2F,0xA6 } }; // 3238E065-D877-4627-89E5-2A88F7052FA6
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>{ 0x13608090,0xE336,0x4C8F,{ 0x90,0x53,0xA9,0x24,0x07,0xCA,0x7B,0x1D } }; // 13608090-E336-4C8F-9053-A92407CA7B1D
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>{ 0xC8B4AF9E,0xFE63,0x4D51,{ 0xBA,0xBD,0x61,0x9D,0xEF,0xB4,0x54,0xBA } }; // C8B4AF9E-FE63-4D51-BABD-619DEFB454BA
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>{ 0xEBBF35F6,0x2FC5,0x4BB3,{ 0xB3,0xC3,0x62,0x21,0xA7,0x68,0x0D,0x13 } }; // EBBF35F6-2FC5-4BB3-B3C3-6221A7680D13
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>{ 0x879F1D97,0x9F50,0x49B2,{ 0xA5,0x6F,0x01,0x3A,0xA0,0x8D,0x55,0xE0 } }; // 879F1D97-9F50-49B2-A56F-013AA08D55E0
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>{ 0x2B004437,0x40A7,0x432E,{ 0xA0,0xB9,0x0D,0x57,0x0C,0x21,0x53,0xFF } }; // 2B004437-40A7-432E-A0B9-0D570C2153FF
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>{ 0x520BD133,0x0C74,0x4DF5,{ 0xBE,0xA7,0x48,0x99,0xE0,0x26,0x6B,0x0F } }; // 520BD133-0C74-4DF5-BEA7-4899E0266B0F
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayCustomEffect>{ 0xEC579170,0x3C34,0x4876,{ 0x81,0x8B,0x57,0x65,0xF7,0x8B,0x0E,0xE4 } }; // EC579170-3C34-4876-818B-5765F78B0EE4
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>{ 0x68B4774D,0x63E5,0x4AF0,{ 0xA5,0x8B,0x3E,0x53,0x5B,0x94,0xE8,0xC9 } }; // 68B4774D-63E5-4AF0-A58B-3E535B94E8C9
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayEffect>{ 0x11D45590,0x57FB,0x4546,{ 0xB1,0xCE,0x86,0x31,0x07,0xF7,0x40,0xDF } }; // 11D45590-57FB-4546-B1CE-863107F740DF
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>{ 0x7DE58BFE,0x6F61,0x4103,{ 0x98,0xC7,0xD6,0x63,0x2F,0x7B,0x91,0x69 } }; // 7DE58BFE-6F61-4103-98C7-D6632F7B9169
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>{ 0xFB15235C,0xEA35,0x4C7F,{ 0xA0,0x16,0xF3,0xBF,0xC6,0xA6,0xC4,0x7D } }; // FB15235C-EA35-4C7F-A016-F3BFC6A6C47D
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArraySolidEffect>{ 0x441F8213,0x43CC,0x4B33,{ 0x80,0xEB,0xC6,0xDD,0xDE,0x7D,0xC8,0xED } }; // 441F8213-43CC-4B33-80EB-C6DDDE7DC8ED
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>{ 0xF862A32C,0x5576,0x4341,{ 0x96,0x1B,0xAE,0xE1,0xF1,0x3C,0xF9,0xDD } }; // F862A32C-5576-4341-961B-AEE1F13CF9DD
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>{ 0x73560D6A,0x576A,0x48AF,{ 0x85,0x39,0x67,0xFF,0xA0,0xAB,0x35,0x16 } }; // 73560D6A-576A-48AF-8539-67FFA0AB3516
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayBitmapEffect>{ using type = Windows::Devices::Lights::Effects::ILampArrayBitmapEffect; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs>{ using type = Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayBlinkEffect>{ using type = Windows::Devices::Lights::Effects::ILampArrayBlinkEffect; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayColorRampEffect>{ using type = Windows::Devices::Lights::Effects::ILampArrayColorRampEffect; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayCustomEffect>{ using type = Windows::Devices::Lights::Effects::ILampArrayCustomEffect; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist>{ using type = Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArraySolidEffect>{ using type = Windows::Devices::Lights::Effects::ILampArraySolidEffect; };
    template <> struct default_interface<Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs>{ using type = Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs; };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_UpdateInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_UpdateInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedBitmapSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall add_BitmapRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BitmapRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, int32_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SinceStarted(int64_t*) noexcept = 0;
            virtual int32_t __stdcall UpdateBitmap(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_AttackDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AttackDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_SustainDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SustainDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DecayDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecayDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_RepetitionDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RepetitionDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RepetitionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RepetitionMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, int32_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_RampDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RampDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_CompletionBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletionBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, int32_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayCustomEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_UpdateInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_UpdateInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall add_UpdateRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, int32_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Append(void*) noexcept = 0;
            virtual int32_t __stdcall OverrideZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall get_EffectStartMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_EffectStartMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RepetitionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RepetitionMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAll(void*) noexcept = 0;
            virtual int32_t __stdcall StopAll(void*) noexcept = 0;
            virtual int32_t __stdcall PauseAll(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArraySolidEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_CompletionBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletionBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, int32_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SinceStarted(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetColorForIndex(int32_t, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetSingleColorForIndices(struct struct_Windows_UI_Color, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForIndices(uint32_t, struct struct_Windows_UI_Color*, uint32_t, int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartDelay() const;
        WINRT_IMPL_AUTO(void) StartDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) UpdateInterval() const;
        WINRT_IMPL_AUTO(void) UpdateInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) SuggestedBitmapSize() const;
        WINRT_IMPL_AUTO(winrt::event_token) BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayBitmapEffect, Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const;
        using BitmapRequested_revoker = impl::event_revoker<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect, &impl::abi_t<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>::remove_BitmapRequested>;
        [[nodiscard]] BitmapRequested_revoker BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayBitmapEffect, Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BitmapRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffectFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayBitmapEffect) CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) SinceStarted() const;
        WINRT_IMPL_AUTO(void) UpdateBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) AttackDuration() const;
        WINRT_IMPL_AUTO(void) AttackDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) SustainDuration() const;
        WINRT_IMPL_AUTO(void) SustainDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) DecayDuration() const;
        WINRT_IMPL_AUTO(void) DecayDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RepetitionDelay() const;
        WINRT_IMPL_AUTO(void) RepetitionDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartDelay() const;
        WINRT_IMPL_AUTO(void) StartDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Occurrences() const;
        WINRT_IMPL_AUTO(void) Occurrences(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayRepetitionMode) RepetitionMode() const;
        WINRT_IMPL_AUTO(void) RepetitionMode(Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffectFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayBlinkEffect) CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RampDuration() const;
        WINRT_IMPL_AUTO(void) RampDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartDelay() const;
        WINRT_IMPL_AUTO(void) StartDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior) CompletionBehavior() const;
        WINRT_IMPL_AUTO(void) CompletionBehavior(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffectFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayColorRampEffect) CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) UpdateInterval() const;
        WINRT_IMPL_AUTO(void) UpdateInterval(Windows::Foundation::TimeSpan const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) UpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayCustomEffect, Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const;
        using UpdateRequested_revoker = impl::event_revoker<Windows::Devices::Lights::Effects::ILampArrayCustomEffect, &impl::abi_t<Windows::Devices::Lights::Effects::ILampArrayCustomEffect>::remove_UpdateRequested>;
        [[nodiscard]] UpdateRequested_revoker UpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayCustomEffect, Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UpdateRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayCustomEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffectFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayCustomEffect) CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZIndex() const;
        WINRT_IMPL_AUTO(void) ZIndex(int32_t value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist
    {
        WINRT_IMPL_AUTO(void) Append(Windows::Devices::Lights::Effects::ILampArrayEffect const& effect) const;
        WINRT_IMPL_AUTO(void) OverrideZIndex(int32_t zIndex) const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(void) Pause() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayEffectStartMode) EffectStartMode() const;
        WINRT_IMPL_AUTO(void) EffectStartMode(Windows::Devices::Lights::Effects::LampArrayEffectStartMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Occurrences() const;
        WINRT_IMPL_AUTO(void) Occurrences(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayRepetitionMode) RepetitionMode() const;
        WINRT_IMPL_AUTO(void) RepetitionMode(Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics
    {
        WINRT_IMPL_AUTO(void) StartAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const;
        WINRT_IMPL_AUTO(void) StopAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const;
        WINRT_IMPL_AUTO(void) PauseAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartDelay() const;
        WINRT_IMPL_AUTO(void) StartDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior) CompletionBehavior() const;
        WINRT_IMPL_AUTO(void) CompletionBehavior(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArraySolidEffect>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArraySolidEffectFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Lights::Effects::LampArraySolidEffect) CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArraySolidEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) SinceStarted() const;
        WINRT_IMPL_AUTO(void) SetColor(Windows::UI::Color const& desiredColor) const;
        WINRT_IMPL_AUTO(void) SetColorForIndex(int32_t lampIndex, Windows::UI::Color const& desiredColor) const;
        WINRT_IMPL_AUTO(void) SetSingleColorForIndices(Windows::UI::Color const& desiredColor, array_view<int32_t const> lampIndexes) const;
        WINRT_IMPL_AUTO(void) SetColorsForIndices(array_view<Windows::UI::Color const> desiredColors, array_view<int32_t const> lampIndexes) const;
    };
    template <> struct consume<Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>;
    };
}
#endif
