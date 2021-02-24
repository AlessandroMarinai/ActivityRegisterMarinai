#include "gtest/gtest.h"

#include "../Date.h"

TEST (Date, YearMultipleOf4) { //
    Date d(10,10,2020);
    ASSERT_EQ(1, d.isLeapYear());
}

TEST (Date, YearMultipleOf100) { //
    Date d(1,1,1900);
    ASSERT_EQ(0, d.isLeapYear());
}

TEST (Date, YearMultipleOf400) { //
    Date d(1,1,2400);
    ASSERT_EQ(1, d.isLeapYear());
}

TEST (Date, MonthLenght30) {
    Date d(1,11,0);
    ASSERT_EQ(30, d.getMonthLenght(d.getMonth(), d.getYear()));
}

TEST (Date, MonthLenght31) {
    Date d(1,1,0);
    ASSERT_EQ(31, d.getMonthLenght(d.getMonth(), d.getYear()));
}

TEST (Date, MonthLenght29) {
    Date d(1,2,2000);
    ASSERT_EQ(29, d.getMonthLenght(d.getMonth(), d.getYear()));
}

TEST (Date, MonthLenght28) {
    Date d(1,2,2001);
    ASSERT_EQ(28, d.getMonthLenght(d.getMonth(), d.getYear()));
}

TEST (Date, NonExistingMonth){
    Date d1(1, 13, 0);
    ASSERT_FALSE(d1.isExistingDate());
    Date d2(1, 0, 0);
    ASSERT_FALSE(d2.isExistingDate());
}

TEST (Date, NonExistingDay) {
    Date d1(0, 1, 0);
    ASSERT_FALSE(d1.isExistingDate());
    Date d2(32, 1, 0);
    ASSERT_FALSE(d2.isExistingDate());
}

TEST (Date, NonExistingDayInLeapYear) {
    Date d1(30, 2, 2000);
    ASSERT_FALSE(d1.isExistingDate());
    Date d2(29, 2, 2001);
    ASSERT_FALSE(d2.isExistingDate());
}

TEST (Date, ExistingDate) {
    Date d1(29, 2, 2004);
    ASSERT_TRUE(d1.isExistingDate());
    Date d2(31, 1, 2020);
    ASSERT_TRUE(d2.isExistingDate());
}

