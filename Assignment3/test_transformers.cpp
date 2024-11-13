//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"
#include <gtest/gtest.h>

// Тесты для класса Autobot
TEST(TransformerTest, AutobotTransform) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Prime is transforming!\n");
}

TEST(TransformerTest, AutobotUseWeapon) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Using weapon: Sword\n");
}

TEST(TransformerTest, AutobotAssist) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.assist();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Prime is assisting!\n");
}

// Тесты для класса Decepticon
TEST(TransformerTest, DecepticonTransform) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Megatron is transforming!\n");
}

TEST(TransformerTest, DecepticonUseWeapon) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Using weapon: Cannon\n");
}

TEST(TransformerTest, DecepticonSabotage) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.sabotage();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Megatron is sabotaging!\n");
}

// Тесты для класса Maximal
TEST(TransformerTest, MaximalTransform) {
    Maximal maximal("Optimus Primal");
    testing::internal::CaptureStdout();
    maximal.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Primal is transforming!\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}