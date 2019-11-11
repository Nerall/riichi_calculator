#pragma once

namespace rc
{

template <typename T>
void unused(T &&) {}

template <typename T>
char enum_to_char(const T& e)
{
    return static_cast<char>(e);
}
}
