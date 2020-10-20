// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Phone_UI_Input_2_H
#define WINRT_Windows_Phone_UI_Input_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Phone.UI.Input.1.h"
WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input
{
    struct __declspec(empty_bases) BackPressedEventArgs : Windows::Phone::UI::Input::IBackPressedEventArgs
    {
        BackPressedEventArgs(std::nullptr_t) noexcept {}
        BackPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::UI::Input::IBackPressedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CameraEventArgs : Windows::Phone::UI::Input::ICameraEventArgs
    {
        CameraEventArgs(std::nullptr_t) noexcept {}
        CameraEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::UI::Input::ICameraEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct HardwareButtons
    {
        HardwareButtons() = delete;
        static auto BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler);
        using BackPressed_revoker = impl::factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics>::remove_BackPressed>;
        [[nodiscard]] static BackPressed_revoker BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler);
        static auto BackPressed(winrt::event_token const& token);
        static auto CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        using CameraHalfPressed_revoker = impl::factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraHalfPressed>;
        [[nodiscard]] static CameraHalfPressed_revoker CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        static auto CameraHalfPressed(winrt::event_token const& token);
        static auto CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        using CameraPressed_revoker = impl::factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraPressed>;
        [[nodiscard]] static CameraPressed_revoker CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        static auto CameraPressed(winrt::event_token const& token);
        static auto CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        using CameraReleased_revoker = impl::factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2, &impl::abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraReleased>;
        [[nodiscard]] static CameraReleased_revoker CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
        static auto CameraReleased(winrt::event_token const& token);
    };
}
#endif
