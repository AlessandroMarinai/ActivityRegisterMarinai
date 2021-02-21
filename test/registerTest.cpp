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
    ASSERT_TRUE(text==aRegister.getActivities()->begin()->second.getDescription());
}

