// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Devices_Display_1_H
#define WINRT_Windows_Devices_Display_1_H
#include "winrt/impl/Windows.Devices.Display.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display
{
    struct __declspec(empty_bases) IDisplayMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayMonitor>
    {
        IDisplayMonitor(std::nullptr_t = nullptr) noexcept {}
        IDisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayMonitorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayMonitorStatics>
    {
        IDisplayMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
