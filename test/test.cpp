//
// Created by Vladislav on 12.05.2021.
//

#define CATCH_CONFIG_MAIN

#include "../catch.hpp"
#include "../random/Random.h"
#include "../random/LinearCongruentRandom.h"

TEST_CASE(){
    Random* random1 = new LinearCongruentRandom();
    int current = random1->nextInt();
    int next = random1->nextInt();
    REQUIRE_FALSE(current == next);
}

TEST_CASE(){
    REQUIRE_THROWS(new LinearCongruentRandom(-100, 0, 0));
}
