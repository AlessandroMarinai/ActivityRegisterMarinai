#ifndef QTHELLOWORLD_EVENTSDISPLAYERDIALOG_H
#define QTHELLOWORLD_EVENTSDISPLAYERDIALOG_H

#include "Register.h"
#include <QString>

class EventsDisplayerDialog : public QDialog {
Q_OBJECT

public:
    EventsDisplayerDialog(MainDialog* dialog, Register *r): mainLayout(nullptr) ,aRegister(r), mainDialog(dialog){};

    void addNewActivityToShow(const Activity& a, int num);

public slots:
    void showEventsOnData();

private:
    QVBoxLayout *mainLayout;
    Register *aRegister;
    MainDialog *mainDialog;
};


#endif //QTHELLOWORLD_EVENTSDISPLAYERDIALOG_H
