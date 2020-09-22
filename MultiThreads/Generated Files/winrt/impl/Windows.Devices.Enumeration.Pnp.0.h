// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200917.4

#ifndef WINRT_Windows_Devices_Enumeration_Pnp_0_H
#define WINRT_Windows_Devices_Enumeration_Pnp_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    enum class DeviceWatcherStatus : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration::Pnp
{
    enum class PnpObjectType : int32_t
    {
        Unknown = 0,
        DeviceInterface = 1,
        DeviceContainer = 2,
        Device = 3,
        DeviceInterfaceClass = 4,
        AssociationEndpoint = 5,
        AssociationEndpointContainer = 6,
        AssociationEndpointService = 7,
        DevicePanel = 8,
    };
    struct IPnpObject;
    struct IPnpObjectStatics;
    struct IPnpObjectUpdate;
    struct IPnpObjectWatcher;
    struct PnpObject;
    struct PnpObjectCollection;
    struct PnpObjectUpdate;
    struct PnpObjectWatcher;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObject>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObject>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::PnpObject> = L"Windows.Devices.Enumeration.Pnp.PnpObject";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> = L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> = L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> = L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::PnpObjectType> = L"Windows.Devices.Enumeration.Pnp.PnpObjectType";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::IPnpObject> = L"Windows.Devices.Enumeration.Pnp.IPnpObject";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> = L"Windows.Devices.Enumeration.Pnp.IPnpObjectStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> = L"Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> = L"Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher";
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::Pnp::IPnpObject>{ 0x95C66258,0x733B,0x4A8F,{ 0x93,0xA3,0xDB,0x07,0x8A,0xC8,0x70,0xC1 } }; // 95C66258-733B-4A8F-93A3-DB078AC870C1
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ 0xB3C32A3D,0xD168,0x4660,{ 0xBB,0xF3,0xA7,0x33,0xB1,0x4B,0x6E,0x01 } }; // B3C32A3D-D168-4660-BBF3-A733B14B6E01
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ 0x6F59E812,0x001E,0x4844,{ 0xBC,0xC6,0x43,0x28,0x86,0x85,0x6A,0x17 } }; // 6F59E812-001E-4844-BCC6-432886856A17
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ 0x83C95CA8,0x4772,0x4A7A,{ 0xAC,0xA8,0xE4,0x8C,0x42,0xA8,0x9C,0x44 } }; // 83C95CA8-4772-4A7A-ACA8-E48C42A89C44
    template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObject>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObject; };
    template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::Pnp::PnpObject>; };
    template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate; };
    template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher; };
    template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall Update(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromIdAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncAqsFilter(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcher(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherAqsFilter(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_Pnp_IPnpObject
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Pnp::PnpObjectType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        WINRT_IMPL_AUTO(void) Update(Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const& updateInfo) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObject>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject>) CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>) FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>) FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Pnp::PnpObjectWatcher) CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Pnp::PnpObjectWatcher) CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Pnp::PnpObjectType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher, &impl::abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher, &impl::abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher, &impl::abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher, &impl::abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher, &impl::abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>;
    };
}
#endif
