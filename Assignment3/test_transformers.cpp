#include <gtest/gtest.h>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"

TEST(TransformerTest, MoveTest) {
    Transformer transformer;
    EXPECT_TRUE(transformer.move());
}

TEST(TransformerTest, FireTest) {
    Transformer transformer;
    EXPECT_TRUE(transformer.fire());
}

TEST(AutobotTest, AssistTest) {
    Autobot autobot;
    EXPECT_TRUE(autobot.assist());
}

TEST(DecepticonTest, SabotageTest) {
    Decepticon decepticon;
    EXPECT_TRUE(decepticon.sabotage());
}

TEST(MaximalTest, ShieldTest) {
    Maximal maximal;
    EXPECT_TRUE(maximal.shield());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}