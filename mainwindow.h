#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mission.h"
#include "journaliste.h"


#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    //void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    journaliste tmpjournaliste;
    mission tmpmission;
};

#endif // MAINWINDOW_H
