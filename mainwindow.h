#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "draw/drawable.h"
#include "production/process.h"
#include "production/vehicle.h"
#include "draw/drawer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void makeWidgets();

    Drawer *drawer = Drawer::getInstance();

private:
    Ui::MainWindow *ui;

    QList<QWidget *> widgetList;
};

#endif // MAINWINDOW_H
