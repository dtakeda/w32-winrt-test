// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Web_Http_Diagnostics_1_H
#define WINRT_Windows_Web_Http_Diagnostics_1_H
#include "winrt/impl/Windows.Web.Http.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics
{
    struct __declspec(empty_bases) IHttpDiagnosticProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProvider>
    {
        IHttpDiagnosticProvider(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticProviderRequestResponseCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        IHttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProviderRequestResponseCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticProviderRequestResponseTimestamps :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        IHttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProviderRequestResponseTimestamps(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticProviderRequestSentEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProviderRequestSentEventArgs>
    {
        IHttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProviderRequestSentEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticProviderResponseReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        IHttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProviderResponseReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticProviderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticProviderStatics>
    {
        IHttpDiagnosticProviderStatics(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticProviderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpDiagnosticSourceLocation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpDiagnosticSourceLocation>
    {
        IHttpDiagnosticSourceLocation(std::nullptr_t = nullptr) noexcept {}
        IHttpDiagnosticSourceLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
