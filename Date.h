#ifndef QTHELLOWORLD_DATE_H
#define QTHELLOWORLD_DATE_H


class Date {
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) { };
    bool isExistingDate () const;
    int getMonthLenght () const;
    int isLeapYear() const ;

private:
    int day;
    int month;
    int year;
};


#endif //QTHELLOWORLD_DATE_H
