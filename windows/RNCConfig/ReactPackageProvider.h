#pragma once

#include "ReactPackageProvider.g.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::RNCConfig61::implementation
{

struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider>
{
  ReactPackageProvider() = default;

  void CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept;
};

} // namespace winrt::RNCConfig61::implementation

namespace winrt::RNCConfig61::factory_implementation
{

struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider> {};

} // namespace winrt::RNCConfig61::factory_implementation
