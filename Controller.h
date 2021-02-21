#ifndef QTHELLOWORLD_REGISTER_H
#define QTHELLOWORLD_REGISTER_H

#include <QObject>
#include <memory>
#include "Date.h"
#include "Activity.h"
#include "MainDialog.h"
#include "AddNewActivityDialog.h"
#include "SavedOrNotDialog.h"
#include "Register.h"

class Controller: public QObject {
    Q_OBJECT
public:
    Controller(MainDialog* m, AddNewActivityDialog* s, SavedOrNotDialog* dialog, Register* r):
    mainDialog(m), secondDialog(s), savedOrNotDialog(dialog), aRegister(r){};

public slots:
    void writeActivityInRegister() {
        Date d = mainDialog->getDateInserted();
        Time start = secondDialog->getStartTime();
        Time end = secondDialog->getEndTime();
        if (!d.isExistingDate()) {
            savedOrNotDialog->setMessageToBeShown(2);
            secondDialog->close();
        }
        else if (!start.isExistingHour() || !end.isExistingHour()){
            savedOrNotDialog->setMessageToBeShown(3);
            savedOrNotDialog->setModal(true);
        }
        else {
            aRegister->addActivity(Activity(start,end,secondDialog->getDescription(),d));
            savedOrNotDialog->setMessageToBeShown(0);
            secondDialog->clearSlots();
            secondDialog->close();
        }
        savedOrNotDialog->showMessage();
    }//saved = 0, wrongDate = 2, wrongTime = 3

private:
    MainDialog *mainDialog;
    AddNewActivityDialog *secondDialog;
    SavedOrNotDialog *savedOrNotDialog;
    Register *aRegister;
};


#endif //QTHELLOWORLD_REGISTER_H
