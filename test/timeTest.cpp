#include "gtest/gtest.h"

#include "../Time.h"

TEST (Time, NonExistingTime) {
    Time s1(10, 60);
    ASSERT_FALSE(s1.isExistingHour());
    Time s2(24, 30);
    ASSERT_FALSE(s2.isExistingHour());
}

TEST (Time, ExistingTime) {
    Time s1(10, 11);
    ASSERT_TRUE(s1.isExistingHour());
    Time s2(23, 59);
    ASSERT_TRUE(s2.isExistingHour());
    Time s3(0, 0);
    ASSERT_TRUE(s3.isExistingHour());
}

TEST (Time, CheckEqualAndMinorOperator){
    Time s(10,34);
    Time s1(10,34);
    ASSERT_TRUE(s==s1);
    Time s2(10,33);
    Time s3(10,35);
    ASSERT_FALSE(s1<s);
    ASSERT_TRUE(s2<s);
    ASSERT_FALSE(s3<s);
}