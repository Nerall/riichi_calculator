#include <catch2/catch.hpp>

#include "group.hpp"

SCENARIO("Groups have correct type") {
    GIVEN("A pair") {
        rc::Group toitsu = rc::Group::kToitsu;
        REQUIRE(GroupToType(toitsu) == rc::GroupType::kToitsu);
    }
    GIVEN("A closed sequence") {
        rc::Group anjun = rc::Group::kAnjun;
        REQUIRE(GroupToType(anjun) == rc::GroupType::kJuntsu);
    }
    GIVEN("A melded sequence (123 called on 3)") {
        rc::Group minjun = rc::Group::kMinjunRight;
        REQUIRE(GroupToType(minjun) == rc::GroupType::kJuntsu);
    }
    GIVEN("A closed triplet") {
        rc::Group ankou = rc::Group::kAnkou;
        REQUIRE(GroupToType(ankou) == rc::GroupType::kKoutsu);
    }
    GIVEN("A melded triplet (called from right)") {
        rc::Group minkou = rc::Group::kMinkouShimocha;
        REQUIRE(GroupToType(minkou) == rc::GroupType::kKoutsu);
    }
    GIVEN("A closed kan") {
        rc::Group ankan = rc::Group::kAnkan;
        REQUIRE(GroupToType(ankan) == rc::GroupType::kKantsu);
    }
    GIVEN("A promoted kan (called from front)") {
        rc::Group shouminkan = rc::Group::kShouminkanToimen;
        REQUIRE(GroupToType(shouminkan) == rc::GroupType::kKantsu);
    }
    GIVEN("A melded kan (called from left)") {
        rc::Group daiminkan = rc::Group::kDaiminkanKamicha;
        REQUIRE(GroupToType(daiminkan) == rc::GroupType::kKantsu);
    }
}
