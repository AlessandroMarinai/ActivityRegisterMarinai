#include "gtest/gtest.h"

#include "../Register.h"

TEST (Register, SizeControl) {
    Register aRegister;
    aRegister.addActivity(Activity(Time(1,1),Time(2,2), Date(1,1,2)));
    ASSERT_EQ(1, aRegister.getActivities()->size());
    aRegister.addActivity(Activity(Time(1,1),Time(2,2), Date(1,1,2)));
    ASSERT_EQ(2, aRegister.getActivities()->size());
}

TEST (Register, Initialization) {
    Register aRegister;
    ASSERT_TRUE(aRegister.getActivities()->empty());
}

TEST (Register, CompareDescription) {
    Register aRegister;
    QString text = "Description";
    aRegister.addActivity(Activity(Time(1,1),Time(2,2), text, Date(1,1,2)));
    ASSERT_TRUE(text == aRegister.getActivities()->begin()->second.getDescription());
}

TEST (Register, CompareDates){
    Register aRegister;
    Date date(1,2,1);
    aRegister.addActivity(Activity(Time(1,1),Time(2,2), "", Date(1,2,1)));
    ASSERT_TRUE(date == aRegister.getActivities()->begin()->second.getDate());
}

TEST (Register, CompareTimes){
    Register aRegister;
    Time start(1, 2);
    Time end(2,3);
    aRegister.addActivity(Activity(Time(1,2),Time(2,3), "", Date(1,2,1)));
    ASSERT_TRUE(start == aRegister.getActivities()->begin()->second.getStart());
    ASSERT_TRUE(end == aRegister.getActivities()->begin()->second.getAnEnd());
}