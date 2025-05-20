#include "pch.h"

#include "RNCConfig.h"

namespace winrt::RNCConfig61
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void RncConfig::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double RncConfig::multiply(double a, double b) noexcept {
  return a * b;
}

} // namespace winrt::RNCConfig61