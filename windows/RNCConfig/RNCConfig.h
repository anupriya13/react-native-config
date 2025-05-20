#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRncConfigDataTypes.g.h")
  #include "codegen/NativeRncConfigDataTypes.g.h"
#endif
#include "codegen/NativeRncConfigSpec.g.h"

#include "NativeModules.h"

namespace winrt::RNCConfig61
{

REACT_MODULE(RncConfig)
struct RncConfig
{
  using ModuleSpec = RNCConfig61Codegen::RncConfigSpec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::RNCConfig61