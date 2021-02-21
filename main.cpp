#include <QApplication>
#include <QMainWindow>
#include <QPlainTextEdit>
#include "Controller.h"
#include "SavedOrNotDialog.h"
#include "EventsDisplayerDialog.h"

int main( int argc, char **argv ) {
    QApplication app( argc, argv );

    AddNewActivityDialog firstDialog;
    MainDialog mainWindow;
    mainWindow.setWindowTitle(QApplication::translate("","Events"));
    mainWindow.show();
    SavedOrNotDialog savedDialog;
    Register aRegister;
    Controller aController(&mainWindow, &firstDialog, &savedDialog, &aRegister);
    EventsDisplayerDialog secondDialog(&mainWindow, &aRegister);


    QObject::connect(mainWindow.getButtons()[0], SIGNAL(clicked() ), &firstDialog, SLOT(onClickedAddActivity()), Qt::AutoConnection);

    QObject::connect(firstDialog.getButton(),SIGNAL(clicked() ), &aController,SLOT(writeActivityInRegister()));

    QObject::connect(mainWindow.getButtons()[1], SIGNAL(clicked() ), &secondDialog, SLOT(showEventsOnData()));

    return app.exec();
}