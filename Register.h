#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H

#include <map>
#include "Activity.h"

class Register{
public:
    Register(): activities(std::multimap<Date,Activity>()){};
    void addActivity(const Activity& a){
        activities.insert(std::pair<Date,Activity>(a.getDate(),a));
    };

    std::multimap<Date, Activity> getActivities() const {
        return activities;
    }

private:
    std::multimap<Date,Activity> activities;
};

#endif //ACTIVITYREGISTER_REGISTER_H
