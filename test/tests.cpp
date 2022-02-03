#include <catch2/catch_all.hpp>


////////////////////////////////////////////////////////////////
TEST_CASE("Test1", "[test][tags]")
{
  int x = 1;
  int y = 1;
  REQUIRE(x + y == 2);
}
