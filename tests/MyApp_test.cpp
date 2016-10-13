#include <gtest/gtest.h>

#include "MyApp.hpp"

TEST(MyApp, run) {

  MyApp theApp;

  EXPECT_TRUE(theApp.run());
}

TEST(MyApp, stop) {

  MyApp theApp;

  EXPECT_TRUE(theApp.stop());
}
