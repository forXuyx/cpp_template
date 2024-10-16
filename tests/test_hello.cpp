#include "hello/hello.h"
#include "gtest/gtest.h"

TEST(hello, hello0) {
    EXPECT_EQ(0, hello());
}