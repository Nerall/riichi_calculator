#pragma once

namespace rc
{

template <typename T>
void Unused(T &&) {}

template <typename T>
char EnumToChar(const T& e)
{
    return static_cast<char>(e);
}
} // namespace rc
