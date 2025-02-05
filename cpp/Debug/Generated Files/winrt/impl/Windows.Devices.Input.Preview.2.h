// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Devices_Input_Preview_2_H
#define WINRT_Windows_Devices_Input_Preview_2_H
#include "winrt/impl/Windows.Devices.Input.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Input::Preview
{
    struct __declspec(empty_bases) GazeDevicePreview : Windows::Devices::Input::Preview::IGazeDevicePreview
    {
        GazeDevicePreview(std::nullptr_t) noexcept {}
        GazeDevicePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeDevicePreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeDeviceWatcherAddedPreviewEventArgs : Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs
    {
        GazeDeviceWatcherAddedPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeDeviceWatcherAddedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeDeviceWatcherPreview : Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview
    {
        GazeDeviceWatcherPreview(std::nullptr_t) noexcept {}
        GazeDeviceWatcherPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeDeviceWatcherRemovedPreviewEventArgs : Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs
    {
        GazeDeviceWatcherRemovedPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeDeviceWatcherRemovedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeDeviceWatcherUpdatedPreviewEventArgs : Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs
    {
        GazeDeviceWatcherUpdatedPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeDeviceWatcherUpdatedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeEnteredPreviewEventArgs : Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs
    {
        GazeEnteredPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeEnteredPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeExitedPreviewEventArgs : Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs
    {
        GazeExitedPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeExitedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazeInputSourcePreview : Windows::Devices::Input::Preview::IGazeInputSourcePreview
    {
        GazeInputSourcePreview(std::nullptr_t) noexcept {}
        GazeInputSourcePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeInputSourcePreview(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto CreateWatcher();
    };
    struct __declspec(empty_bases) GazeMovedPreviewEventArgs : Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs
    {
        GazeMovedPreviewEventArgs(std::nullptr_t) noexcept {}
        GazeMovedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GazePointPreview : Windows::Devices::Input::Preview::IGazePointPreview
    {
        GazePointPreview(std::nullptr_t) noexcept {}
        GazePointPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::Preview::IGazePointPreview(ptr, take_ownership_from_abi) {}
    };
}
#endif
