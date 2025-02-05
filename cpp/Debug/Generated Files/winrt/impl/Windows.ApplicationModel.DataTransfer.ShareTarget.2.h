// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_2_H
#define WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_2_H
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget
{
    struct __declspec(empty_bases) QuickLink : Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink
    {
        QuickLink(std::nullptr_t) noexcept {}
        QuickLink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink(ptr, take_ownership_from_abi) {}
        QuickLink();
    };
    struct __declspec(empty_bases) ShareOperation : Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation,
        impl::require<ShareOperation, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        ShareOperation(std::nullptr_t) noexcept {}
        ShareOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation(ptr, take_ownership_from_abi) {}
    };
}
#endif
