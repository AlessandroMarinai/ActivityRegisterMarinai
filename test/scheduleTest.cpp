#include "gtest/gtest.h"

#include "../Schedule.h"

TEST (Schedule, NonExistingSchedule) {
    Schedule s1(10,60);
    ASSERT_FALSE(s1.isExistingHour());
    Schedule s2(24,30);
    ASSERT_FALSE(s2.isExistingHour());
}

TEST (Schedule, ExistingSchedule) {
    Schedule s1(10,11);
    ASSERT_TRUE(s1.isExistingHour());
    Schedule s2(23,59);
    ASSERT_TRUE(s2.isExistingHour());
    Schedule s3(0,0);
    ASSERT_TRUE(s3.isExistingHour());
}