// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Phone_UI_Input_0_H
#define WINRT_Windows_Phone_UI_Input_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input
{
    struct IBackPressedEventArgs;
    struct ICameraEventArgs;
    struct IHardwareButtonsStatics;
    struct IHardwareButtonsStatics2;
    struct BackPressedEventArgs;
    struct CameraEventArgs;
    struct HardwareButtons;
}
namespace winrt::impl
{
    template <> struct category<Windows::Phone::UI::Input::IBackPressedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Phone::UI::Input::ICameraEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Phone::UI::Input::BackPressedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Phone::UI::Input::CameraEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Phone::UI::Input::HardwareButtons>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::BackPressedEventArgs> = L"Windows.Phone.UI.Input.BackPressedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::CameraEventArgs> = L"Windows.Phone.UI.Input.CameraEventArgs";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::HardwareButtons> = L"Windows.Phone.UI.Input.HardwareButtons";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::IBackPressedEventArgs> = L"Windows.Phone.UI.Input.IBackPressedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::ICameraEventArgs> = L"Windows.Phone.UI.Input.ICameraEventArgs";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::IHardwareButtonsStatics> = L"Windows.Phone.UI.Input.IHardwareButtonsStatics";
    template <> inline constexpr auto& name_v<Windows::Phone::UI::Input::IHardwareButtonsStatics2> = L"Windows.Phone.UI.Input.IHardwareButtonsStatics2";
    template <> inline constexpr guid guid_v<Windows::Phone::UI::Input::IBackPressedEventArgs>{ 0xF6F555FF,0x64EC,0x42A2,{ 0xB9,0x3B,0x2F,0xBC,0x0C,0x36,0xA1,0x21 } }; // F6F555FF-64EC-42A2-B93B-2FBC0C36A121
    template <> inline constexpr guid guid_v<Windows::Phone::UI::Input::ICameraEventArgs>{ 0xB4063BDA,0x201F,0x473D,{ 0xBC,0x69,0xE9,0xE4,0xAC,0x57,0xC9,0xD0 } }; // B4063BDA-201F-473D-BC69-E9E4AC57C9D0
    template <> inline constexpr guid guid_v<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ 0x594B8780,0xDA66,0x4FD8,{ 0xA7,0x76,0x75,0x06,0xBD,0x0C,0xBF,0xA7 } }; // 594B8780-DA66-4FD8-A776-7506BD0CBFA7
    template <> inline constexpr guid guid_v<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ 0x39C6C274,0x993F,0x40DD,{ 0x85,0x4C,0x83,0x1A,0x89,0x34,0xB9,0x2E } }; // 39C6C274-993F-40DD-854C-831A8934B92E
    template <> struct default_interface<Windows::Phone::UI::Input::BackPressedEventArgs>{ using type = Windows::Phone::UI::Input::IBackPressedEventArgs; };
    template <> struct default_interface<Windows::Phone::UI::Input::CameraEventArgs>{ using type = Windows::Phone::UI::Input::ICameraEventArgs; };
    template <> struct abi<Windows::Phone::UI::Input::IBackPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Phone::UI::Input::ICameraEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Phone::UI::Input::IHardwareButtonsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BackPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackPressed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Phone::UI::Input::IHardwareButtonsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CameraHalfPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraHalfPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraReleased(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_UI_Input_IBackPressedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::Phone::UI::Input::IBackPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_UI_Input_ICameraEventArgs
    {
    };
    template <> struct consume<Windows::Phone::UI::Input::ICameraEventArgs>
    {
        template <typename D> using type = consume_Windows_Phone_UI_Input_ICameraEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_UI_Input_IHardwareButtonsStatics
    {
        WINRT_IMPL_AUTO(winrt::event_token) BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const;
        using BackPressed_revoker = impl::event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics>::remove_BackPressed>;
        [[nodiscard]] BackPressed_revoker BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BackPressed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Phone::UI::Input::IHardwareButtonsStatics>
    {
        template <typename D> using type = consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2
    {
        WINRT_IMPL_AUTO(winrt::event_token) CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        using CameraHalfPressed_revoker = impl::event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraHalfPressed>;
        [[nodiscard]] CameraHalfPressed_revoker CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraHalfPressed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        using CameraPressed_revoker = impl::event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraPressed>;
        [[nodiscard]] CameraPressed_revoker CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraPressed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        using CameraReleased_revoker = impl::event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraReleased>;
        [[nodiscard]] CameraReleased_revoker CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraReleased(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Phone::UI::Input::IHardwareButtonsStatics2>
    {
        template <typename D> using type = consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>;
    };
}
#endif
