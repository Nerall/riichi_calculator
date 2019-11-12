#pragma once

#include <cassert>

#include "definitions.hpp"

namespace rc
{

enum class GroupType : char
{
    TOITSU,
    JUNTSU,
    KOUTSU,
    KANTSU,
    NONE,
}

enum class Group : char
{
    TOITSU,
    ANJUN = 10,
    MINJUN_LEFT,
    MINJUN_MIDDLE,
    MINJUN_RIGHT,
    ANKOU = 20,
    MINKOU_SHIMOCHA,
    MINKOU_TOIMEN,
    MINKOU_KAMICHA,
    ANKAN = 30,
    SHOUMINKAN_SHIMOCHA,
    SHOUMINKAN_TOIMEN,
    SHOUMINKAN_KAMICHA,
    DAIMINKAN_SHIMOCHA,
    DAIMINKAN_TOIMEN,
    DAIMINKAN_KAMICHA,
    NONE = 40
};

inline GroupType group_to_type(Group group)
{
    return GroupType(enum_to_char(group) / 10);
}
} // namespace rc
