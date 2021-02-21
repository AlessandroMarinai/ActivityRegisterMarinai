#ifndef QTHELLOWORLD_DATE_H
#define QTHELLOWORLD_DATE_H

#include "Time.h"

class Date {
public:
    Date(int da, int m, int y);
    bool isExistingDate () const;
    int isLeapYear() const;
    int getMonthLenght (int month) const;

    bool operator<(const Date& right) const;
    bool operator==(const Date& right) const;

    int getDay() const;

    int getMonth() const;

    int getYear() const;

private:
    int day;
    int month;
    int year;

    bool legalInputsForDate(int d, int m);
};


#endif //QTHELLOWORLD_DATE_H
