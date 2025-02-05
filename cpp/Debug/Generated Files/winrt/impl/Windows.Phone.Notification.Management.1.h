// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Phone_Notification_Management_1_H
#define WINRT_Windows_Phone_Notification_Management_1_H
#include "winrt/impl/Windows.Phone.Notification.Management.0.h"
WINRT_EXPORT namespace winrt::Windows::Phone::Notification::Management
{
    struct __declspec(empty_bases) IAccessoryManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccessoryManager>
    {
        IAccessoryManager(std::nullptr_t = nullptr) noexcept {}
        IAccessoryManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccessoryManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccessoryManager2>
    {
        IAccessoryManager2(std::nullptr_t = nullptr) noexcept {}
        IAccessoryManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccessoryManager3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccessoryManager3>
    {
        IAccessoryManager3(std::nullptr_t = nullptr) noexcept {}
        IAccessoryManager3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccessoryNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccessoryNotificationTriggerDetails>
    {
        IAccessoryNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IAccessoryNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAlarmNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAlarmNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IAlarmNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IAlarmNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAlarmNotificationTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAlarmNotificationTriggerDetails2>
    {
        IAlarmNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IAlarmNotificationTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppNotificationInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppNotificationInfo>
    {
        IAppNotificationInfo(std::nullptr_t = nullptr) noexcept {}
        IAppNotificationInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBinaryId :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBinaryId>
    {
        IBinaryId(std::nullptr_t = nullptr) noexcept {}
        IBinaryId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICalendarChangedNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICalendarChangedNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        ICalendarChangedNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        ICalendarChangedNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICortanaTileNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICortanaTileNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        ICortanaTileNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        ICortanaTileNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailAccountInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailAccountInfo>
    {
        IEmailAccountInfo(std::nullptr_t = nullptr) noexcept {}
        IEmailAccountInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailFolderInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailFolderInfo>
    {
        IEmailFolderInfo(std::nullptr_t = nullptr) noexcept {}
        IEmailFolderInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IEmailNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IEmailNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailNotificationTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailNotificationTriggerDetails2>,
        impl::require<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IEmailNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IEmailNotificationTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailReadNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailReadNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IEmailReadNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IEmailReadNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaControlsTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaControlsTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IMediaControlsTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IMediaControlsTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaMetadata :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMetadata>
    {
        IMediaMetadata(std::nullptr_t = nullptr) noexcept {}
        IMediaMetadata(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneCallDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallDetails>
    {
        IPhoneCallDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneLineDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneLineDetails>
    {
        IPhoneLineDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneLineDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneLineDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneLineDetails2>
    {
        IPhoneLineDetails2(std::nullptr_t = nullptr) noexcept {}
        IPhoneLineDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IPhoneNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IReminderNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IReminderNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IReminderNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IReminderNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IReminderNotificationTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IReminderNotificationTriggerDetails2>
    {
        IReminderNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IReminderNotificationTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeedDialEntry :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeedDialEntry>
    {
        ISpeedDialEntry(std::nullptr_t = nullptr) noexcept {}
        ISpeedDialEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextResponse :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextResponse>
    {
        ITextResponse(std::nullptr_t = nullptr) noexcept {}
        ITextResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationTriggerDetails>,
        impl::require<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
    {
        IToastNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationTriggerDetails2>
    {
        IToastNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVolumeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVolumeInfo>
    {
        IVolumeInfo(std::nullptr_t = nullptr) noexcept {}
        IVolumeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
