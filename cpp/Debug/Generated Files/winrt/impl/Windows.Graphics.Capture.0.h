// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201008.2

#ifndef WINRT_Windows_Graphics_Capture_0_H
#define WINRT_Windows_Graphics_Capture_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
    struct SizeInt32;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct Visual;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Capture
{
    struct IDirect3D11CaptureFrame;
    struct IDirect3D11CaptureFramePool;
    struct IDirect3D11CaptureFramePoolStatics;
    struct IDirect3D11CaptureFramePoolStatics2;
    struct IGraphicsCaptureItem;
    struct IGraphicsCaptureItemStatics;
    struct IGraphicsCapturePicker;
    struct IGraphicsCaptureSession;
    struct IGraphicsCaptureSessionStatics;
    struct Direct3D11CaptureFrame;
    struct Direct3D11CaptureFramePool;
    struct GraphicsCaptureItem;
    struct GraphicsCapturePicker;
    struct GraphicsCaptureSession;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Capture::IDirect3D11CaptureFrame>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IGraphicsCaptureItem>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IGraphicsCaptureItemStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IGraphicsCapturePicker>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IGraphicsCaptureSession>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Capture::Direct3D11CaptureFrame>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Capture::Direct3D11CaptureFramePool>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Capture::GraphicsCaptureItem>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Capture::GraphicsCapturePicker>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Capture::GraphicsCaptureSession>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::Direct3D11CaptureFrame> = L"Windows.Graphics.Capture.Direct3D11CaptureFrame";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::Direct3D11CaptureFramePool> = L"Windows.Graphics.Capture.Direct3D11CaptureFramePool";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::GraphicsCaptureItem> = L"Windows.Graphics.Capture.GraphicsCaptureItem";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::GraphicsCapturePicker> = L"Windows.Graphics.Capture.GraphicsCapturePicker";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::GraphicsCaptureSession> = L"Windows.Graphics.Capture.GraphicsCaptureSession";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IDirect3D11CaptureFrame> = L"Windows.Graphics.Capture.IDirect3D11CaptureFrame";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePool> = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePool";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePoolStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2> = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePoolStatics2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IGraphicsCaptureItem> = L"Windows.Graphics.Capture.IGraphicsCaptureItem";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IGraphicsCaptureItemStatics> = L"Windows.Graphics.Capture.IGraphicsCaptureItemStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IGraphicsCapturePicker> = L"Windows.Graphics.Capture.IGraphicsCapturePicker";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IGraphicsCaptureSession> = L"Windows.Graphics.Capture.IGraphicsCaptureSession";
    template <> inline constexpr auto& name_v<Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> = L"Windows.Graphics.Capture.IGraphicsCaptureSessionStatics";
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IDirect3D11CaptureFrame>{ 0xFA50C623,0x38DA,0x4B32,{ 0xAC,0xF3,0xFA,0x97,0x34,0xAD,0x80,0x0E } }; // FA50C623-38DA-4B32-ACF3-FA9734AD800E
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>{ 0x24EB6D22,0x1975,0x422E,{ 0x82,0xE7,0x78,0x0D,0xBD,0x8D,0xDF,0x24 } }; // 24EB6D22-1975-422E-82E7-780DBD8DDF24
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>{ 0x7784056A,0x67AA,0x4D53,{ 0xAE,0x54,0x10,0x88,0xD5,0xA8,0xCA,0x21 } }; // 7784056A-67AA-4D53-AE54-1088D5A8CA21
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2>{ 0x589B103F,0x6BBC,0x5DF5,{ 0xA9,0x91,0x02,0xE2,0x8B,0x3B,0x66,0xD5 } }; // 589B103F-6BBC-5DF5-A991-02E28B3B66D5
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IGraphicsCaptureItem>{ 0x79C3F95B,0x31F7,0x4EC2,{ 0xA4,0x64,0x63,0x2E,0xF5,0xD3,0x07,0x60 } }; // 79C3F95B-31F7-4EC2-A464-632EF5D30760
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IGraphicsCaptureItemStatics>{ 0xA87EBEA5,0x457C,0x5788,{ 0xAB,0x47,0x0C,0xF1,0xD3,0x63,0x7E,0x74 } }; // A87EBEA5-457C-5788-AB47-0CF1D3637E74
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IGraphicsCapturePicker>{ 0x5A1711B3,0xAD79,0x4B4A,{ 0x93,0x36,0x13,0x18,0xFD,0xDE,0x35,0x39 } }; // 5A1711B3-AD79-4B4A-9336-1318FDDE3539
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IGraphicsCaptureSession>{ 0x814E42A9,0xF70F,0x4AD7,{ 0x93,0x9B,0xFD,0xDC,0xC6,0xEB,0x88,0x0D } }; // 814E42A9-F70F-4AD7-939B-FDDCC6EB880D
    template <> inline constexpr guid guid_v<Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>{ 0x2224A540,0x5974,0x49AA,{ 0xB2,0x32,0x08,0x82,0x53,0x6F,0x4C,0xB5 } }; // 2224A540-5974-49AA-B232-0882536F4CB5
    template <> struct default_interface<Windows::Graphics::Capture::Direct3D11CaptureFrame>{ using type = Windows::Graphics::Capture::IDirect3D11CaptureFrame; };
    template <> struct default_interface<Windows::Graphics::Capture::Direct3D11CaptureFramePool>{ using type = Windows::Graphics::Capture::IDirect3D11CaptureFramePool; };
    template <> struct default_interface<Windows::Graphics::Capture::GraphicsCaptureItem>{ using type = Windows::Graphics::Capture::IGraphicsCaptureItem; };
    template <> struct default_interface<Windows::Graphics::Capture::GraphicsCapturePicker>{ using type = Windows::Graphics::Capture::IGraphicsCapturePicker; };
    template <> struct default_interface<Windows::Graphics::Capture::GraphicsCaptureSession>{ using type = Windows::Graphics::Capture::IGraphicsCaptureSession; };
    template <> struct abi<Windows::Graphics::Capture::IDirect3D11CaptureFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Surface(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ContentSize(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Recreate(void*, int32_t, int32_t, struct struct_Windows_Graphics_SizeInt32) noexcept = 0;
            virtual int32_t __stdcall TryGetNextFrame(void**) noexcept = 0;
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateCaptureSession(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, int32_t, struct struct_Windows_Graphics_SizeInt32, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFreeThreaded(void*, int32_t, int32_t, struct struct_Windows_Graphics_SizeInt32, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IGraphicsCaptureItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IGraphicsCaptureItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromVisual(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IGraphicsCapturePicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PickSingleItemAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IGraphicsCaptureSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartCapture() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface) Surface() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) SystemRelativeTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::SizeInt32) ContentSize() const;
    };
    template <> struct consume<Windows::Graphics::Capture::IDirect3D11CaptureFrame>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool
    {
        WINRT_IMPL_AUTO(void) Recreate(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFrame) TryGetNextFrame() const;
        WINRT_IMPL_AUTO(winrt::event_token) FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Graphics::Capture::IDirect3D11CaptureFramePool, &impl::abi_t<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) FrameArrived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureSession) CreateCaptureSession(Windows::Graphics::Capture::GraphicsCaptureItem const& item) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) DispatcherQueue() const;
    };
    template <> struct consume<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFramePool) Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const;
    };
    template <> struct consume<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics2
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFramePool) CreateFreeThreaded(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const;
    };
    template <> struct consume<Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IGraphicsCaptureItem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::SizeInt32) Size() const;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Graphics::Capture::IGraphicsCaptureItem, &impl::abi_t<Windows::Graphics::Capture::IGraphicsCaptureItem>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Capture::IGraphicsCaptureItem>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IGraphicsCaptureItemStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureItem) CreateFromVisual(Windows::UI::Composition::Visual const& visual) const;
    };
    template <> struct consume<Windows::Graphics::Capture::IGraphicsCaptureItemStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IGraphicsCaptureItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IGraphicsCapturePicker
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem>) PickSingleItemAsync() const;
    };
    template <> struct consume<Windows::Graphics::Capture::IGraphicsCapturePicker>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IGraphicsCapturePicker<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IGraphicsCaptureSession
    {
        WINRT_IMPL_AUTO(void) StartCapture() const;
    };
    template <> struct consume<Windows::Graphics::Capture::IGraphicsCaptureSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IGraphicsCaptureSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Capture_IGraphicsCaptureSessionStatics
    {
        WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Capture_IGraphicsCaptureSessionStatics<D>;
    };
}
#endif
