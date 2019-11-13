#include "group.hpp"

namespace rc {

GroupType GroupToType(Group group)
{
    assert(group != Group::kNone);

    return GroupType(EnumToChar(group) / 10);
}
} // namespace rc
