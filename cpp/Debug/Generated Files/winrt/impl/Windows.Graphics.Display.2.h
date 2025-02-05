// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Graphics_Display_2_H
#define WINRT_Windows_Graphics_Display_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Display.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Display
{
    struct DisplayPropertiesEventHandler : Windows::Foundation::IUnknown
    {
        DisplayPropertiesEventHandler(std::nullptr_t = nullptr) noexcept {}
        DisplayPropertiesEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DisplayPropertiesEventHandler(L lambda);
        template <typename F> DisplayPropertiesEventHandler(F* function);
        template <typename O, typename M> DisplayPropertiesEventHandler(O* object, M method);
        template <typename O, typename M> DisplayPropertiesEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DisplayPropertiesEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender) const;
    };
    struct NitRange
    {
        float MinNits;
        float MaxNits;
        float StepSizeNits;
    };
    inline bool operator==(NitRange const& left, NitRange const& right) noexcept
    {
        return left.MinNits == right.MinNits && left.MaxNits == right.MaxNits && left.StepSizeNits == right.StepSizeNits;
    }
    inline bool operator!=(NitRange const& left, NitRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AdvancedColorInfo : Windows::Graphics::Display::IAdvancedColorInfo
    {
        AdvancedColorInfo(std::nullptr_t) noexcept {}
        AdvancedColorInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IAdvancedColorInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BrightnessOverride : Windows::Graphics::Display::IBrightnessOverride
    {
        BrightnessOverride(std::nullptr_t) noexcept {}
        BrightnessOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IBrightnessOverride(ptr, take_ownership_from_abi) {}
        static auto GetDefaultForSystem();
        static auto GetForCurrentView();
        static auto SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value);
    };
    struct __declspec(empty_bases) BrightnessOverrideSettings : Windows::Graphics::Display::IBrightnessOverrideSettings
    {
        BrightnessOverrideSettings(std::nullptr_t) noexcept {}
        BrightnessOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IBrightnessOverrideSettings(ptr, take_ownership_from_abi) {}
        static auto CreateFromLevel(double level);
        static auto CreateFromNits(float nits);
        static auto CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario const& overrideScenario);
    };
    struct __declspec(empty_bases) ColorOverrideSettings : Windows::Graphics::Display::IColorOverrideSettings
    {
        ColorOverrideSettings(std::nullptr_t) noexcept {}
        ColorOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IColorOverrideSettings(ptr, take_ownership_from_abi) {}
        static auto CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario const& overrideScenario);
    };
    struct __declspec(empty_bases) DisplayEnhancementOverride : Windows::Graphics::Display::IDisplayEnhancementOverride
    {
        DisplayEnhancementOverride(std::nullptr_t) noexcept {}
        DisplayEnhancementOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IDisplayEnhancementOverride(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) DisplayEnhancementOverrideCapabilities : Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities
    {
        DisplayEnhancementOverrideCapabilities(std::nullptr_t) noexcept {}
        DisplayEnhancementOverrideCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayEnhancementOverrideCapabilitiesChangedEventArgs : Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs
    {
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs(std::nullptr_t) noexcept {}
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayInformation : Windows::Graphics::Display::IDisplayInformation,
        impl::require<DisplayInformation, Windows::Graphics::Display::IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation3, Windows::Graphics::Display::IDisplayInformation4, Windows::Graphics::Display::IDisplayInformation5>
    {
        DisplayInformation(std::nullptr_t) noexcept {}
        DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Display::IDisplayInformation(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        [[nodiscard]] static auto AutoRotationPreferences();
        static auto AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value);
        static auto DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler);
        using DisplayContentsInvalidated_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayInformationStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated>;
        [[nodiscard]] static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler);
        static auto DisplayContentsInvalidated(winrt::event_token const& token);
    };
    struct DisplayProperties
    {
        DisplayProperties() = delete;
        [[nodiscard]] static auto CurrentOrientation();
        [[nodiscard]] static auto NativeOrientation();
        [[nodiscard]] static auto AutoRotationPreferences();
        static auto AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value);
        static auto OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        using OrientationChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged>;
        [[nodiscard]] static OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        static auto OrientationChanged(winrt::event_token const& token);
        [[nodiscard]] static auto ResolutionScale();
        [[nodiscard]] static auto LogicalDpi();
        static auto LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        using LogicalDpiChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged>;
        [[nodiscard]] static LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        static auto LogicalDpiChanged(winrt::event_token const& token);
        [[nodiscard]] static auto StereoEnabled();
        static auto StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        using StereoEnabledChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged>;
        [[nodiscard]] static StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        static auto StereoEnabledChanged(winrt::event_token const& token);
        static auto GetColorProfileAsync();
        static auto ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        using ColorProfileChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged>;
        [[nodiscard]] static ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        static auto ColorProfileChanged(winrt::event_token const& token);
        static auto DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        using DisplayContentsInvalidated_revoker = impl::factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated>;
        [[nodiscard]] static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
        static auto DisplayContentsInvalidated(winrt::event_token const& token);
    };
}
#endif
