#include <spdlog/spdlog.h>

#include "foo.hpp"

int main()
{
  spdlog::info("Hello! {}", foo::bar());

  return EXIT_SUCCESS;
}
