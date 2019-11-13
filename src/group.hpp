#pragma once

#include <cassert>

#include "definitions.hpp"

namespace rc
{

enum class GroupType : char
{
    kToitsu,
    kJuntsu,
    kKoutsu,
    kKantsu,
};

enum class Group : char
{
    kToitsu,
    kAnjun = 10,
    kMinjunLeft,
    kMinjunMiddle,
    kMinjunRight,
    kAnkou = 20,
    kMinkouShimocha,
    kMinkouToimen,
    kMinkouKamicha,
    kAnkan = 30,
    kShouminkanShimocha,
    kShouminkanToimen,
    kShouminkanKamicha,
    kDaiminkanShimocha,
    kDaiminkanToimen,
    kDaiminkanKamicha,
    kNone
};

GroupType GroupToType(Group group);

} // namespace rc
