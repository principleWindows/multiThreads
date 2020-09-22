// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200917.4

#ifndef WINRT_Microsoft_UI_Xaml_XamlTypeInfo_H
#define WINRT_Microsoft_UI_Xaml_XamlTypeInfo_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200917.4"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.200917.4"
#include "winrt/impl/Windows.UI.Xaml.Markup.2.h"
#include "winrt/impl/Microsoft.UI.Xaml.XamlTypeInfo.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Xaml_XamlTypeInfo_IXamlControlsXamlMetaDataProviderStatics<D>::Initialize() const
    {
        check_hresult(WINRT_IMPL_SHIM(Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics)->Initialize());
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider> : produce_base<D, Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics> : produce_base<D, Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics>
    {
        int32_t __stdcall Initialize() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Initialize();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::XamlTypeInfo
{
    inline XamlControlsXamlMetaDataProvider::XamlControlsXamlMetaDataProvider() :
        XamlControlsXamlMetaDataProvider(impl::call_factory_cast<XamlControlsXamlMetaDataProvider(*)(Windows::Foundation::IActivationFactory const&), XamlControlsXamlMetaDataProvider>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<XamlControlsXamlMetaDataProvider>(); }))
    {
    }
    inline auto XamlControlsXamlMetaDataProvider::Initialize()
    {
        impl::call_factory_cast<void(*)(IXamlControlsXamlMetaDataProviderStatics const&), XamlControlsXamlMetaDataProvider, IXamlControlsXamlMetaDataProviderStatics>([](IXamlControlsXamlMetaDataProviderStatics const& f) { return f.Initialize(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider> : winrt::impl::hash_base {};
#endif
}
#endif
