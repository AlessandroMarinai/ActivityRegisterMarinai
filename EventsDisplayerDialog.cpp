#include "EventsDisplayerDialog.h"


void EventsDisplayerDialog::showEventsOnData() {
    Date date = mainDialog->getDateInserted();
    resetLayout(mainLayout);
    if(date.isExistingDate()) {
        auto activities = aRegister->getActivities();
        int numOfActivitiesShown = 1;

        QString title = "Activities for " + QString::number(date.getDay()) + "/" +
                        QString::number(date.getMonth()) + "/" + QString::number(date.getYear());
        setWindowTitle(title);
        bool found = false;
        for (auto &it : *activities) {
            if (it.first == date) {
                addNewActivityToShow(it.second, numOfActivitiesShown);
                found = true;
                numOfActivitiesShown++;
            }
        }
        if (!found) {
            auto label = new QLabel(tr("No activities in this date, you can add activities from the previous dialog"));
            mainLayout->addWidget(label);
        }
    }else{
        QString title = "Non existing date";
        setWindowTitle(title);
        auto label = new QLabel(tr("The date inserted does not exist, please insert an existing date"));
        mainLayout->addWidget(label);
    }
    setLayout(mainLayout);
    this->show();
}

void EventsDisplayerDialog::addNewActivityToShow(const Activity& a, int num) {
    auto box = new QGroupBox;
    auto boxLayout = new QVBoxLayout;
    QString text = "The activity number " + QString::number(num) + " takes place from " + QString::number(a.getStart().getHour()) +
            ":" + QString::number(a.getStart().getMinutes()) + " to " + QString::number(a.getAnEnd().getHour()) + ":" + QString::number(a.getAnEnd().getMinutes());
    auto label1 = new QLabel;
    label1->setText(text);
    QString descriptionText = "Description of the activity: " + a.getDescription();
    auto label2 = new QLabel(descriptionText);
    boxLayout->addWidget(label1);
    boxLayout->addWidget(label2);
    box->setLayout(boxLayout);
    mainLayout->addWidget(box);
}
