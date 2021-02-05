#ifndef QTHELLOWORLD_SCHEDULE_H
#define QTHELLOWORLD_SCHEDULE_H

class Schedule{
public:
    Schedule(int h, int m) : hour(h), minutes(m)  { };
    bool isExistingHour () const {
        bool result = true;
        int h = this->hour;
        int m = this->minutes;
        if (h<0 || h>23 || m<0 || m>59)
            result = false;
        return result;
    }

private:
    int hour;
    int minutes;
};

#endif //QTHELLOWORLD_SCHEDULE_H
