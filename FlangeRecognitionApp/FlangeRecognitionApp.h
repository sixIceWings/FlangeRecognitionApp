#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FlangeRecognitionApp.h"

class FlangeRecognitionApp : public QMainWindow
{
    Q_OBJECT

public:
    FlangeRecognitionApp(QWidget *parent = nullptr);
    ~FlangeRecognitionApp();

private:
    Ui::FlangeRecognitionAppClass ui;
};
