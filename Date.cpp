#include "Date.h"

Date::Date(int da, int m, int y) {
    if (legalInputsForDate(da, m, y)) {
        day = da;
        month = m;
        year = y;
    } else {
        day = -1;
        month = -1;
        year = -1;
    }
}

int Date::isLeapYear() const { //restituisce 1 se bisestile
    int y = this->year;
    int result = 0;
    if( y%4==0 ) {
        result = 1;
        if( y%100==0 && y%400!=0 ) {
            result = 0;
        }
    }
    return result;
}

int Date::isLeapYear(int y) {
    int result = 0;
    if (y % 4 == 0) {
        result = 1;
        if (y % 100 == 0 && y % 400 != 0) {
            result = 0;
        }
    }
    return result;
}

int Date::getMonthLenght(int m, int y) {
    int result = 31;
    if ( m==4 || m==6 || m==9 || m==11 )
        result = 30;
    if ( m==2 )
        result = 28 + isLeapYear(y);
    return result;
}



bool Date::isExistingDate() const {
    bool result = true;
    int d = this->day;
    int m = this->month;
    int y = this->year;//uso queste variabili per evitare un'eccessiva verbosità
    if( d<1 || d>getMonthLenght(m, y) || m<1 || m>12)
        result = false;
    return result;
}

bool Date::operator<(const Date &right) const {
    bool result = true;
    if (year>right.year || (year==right.year && month>=right.month) ||
    (year==right.year && month==right.month && day>=right.day))
        result = false;
    return result;
}



bool Date::operator==(const Date &right) const {
    return year==right.year && month==right.month && day==right.day;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

bool Date::legalInputsForDate(int d, int m, int y) {
    bool result = true;
    if( d<1 || d>this->getMonthLenght(m,y) || m<1 || m>12)
        result = false;
    return result;
}





