// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include "alg.h"


TEST(CheckPrimeTest, HandlesSmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
}

TEST(CheckPrimeTest, HandlesNonPrimes) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, LargePrime) {
    EXPECT_TRUE(checkPrime(97));
}


TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, SeveralPrimes) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(5), 11);
}


TEST(NextPrimeTest, BasicCases) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(11), 13);
}

TEST(NextPrimeTest, FromPrime) {
    EXPECT_EQ(nextPrime(2), 3);
}


TEST(SumPrimeTest, SmallBound) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, ZeroAndTwo) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, LargerBound) {
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(DummyTest, Smoke) {
    EXPECT_TRUE(true);
}
