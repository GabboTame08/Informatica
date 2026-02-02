#ifndef APPLICATIONCONTROLLER_H
#define APPLICATIONCONTROLLER_H

#include "ApplicationModel.h"
#include "ApplicationView.h"
#include "MVC.h"

class ApplicationController {
private:
    // Il controller usa sia il model che la view
    ApplicationModel model;
    ApplicationView view;

public:
    // Metodo principale che gestisce il programma
    void run(); //Ho usato run() solo per racchiudere il ciclo principale del programma nel controller.
};

#endif
