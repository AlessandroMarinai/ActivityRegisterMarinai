#ifndef QTHELLOWORLD_ACTIVITY_H
#define QTHELLOWORLD_ACTIVITY_H


#include <QString>
#include <utility>
#include "Time.h"
#include "Date.h"

class Activity {
public:
    Activity(Time st, Time e, QString des, Date d):
    start(st), end(e), description(std::move(des)), date(d){}

    Activity(Time st, Time e, Date d): start(st), end(e), date(d){
        QString noDescription = "";
        description = noDescription;
    };


    const Time &getStart() const {
        return start;
    }

    const Time &getAnEnd() const {
        return end;
    }

    const Date &getDate() const {
        return date;
    }

    const QString &getDescription() const {
        return description;
    }

private:
    Date date;
    Time start;
    Time end;
    QString description;
};


#endif //QTHELLOWORLD_ACTIVITY_H
