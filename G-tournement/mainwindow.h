#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include "databasehandler.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Generation des UIs
    void UISelectFormat(void);
    void UISelectGame(void);

private:
    // Global
    QWidget         *m_centralWidget;
    QGridLayout     *m_MainLayout;
    DataBaseHandler *m_dbhandler;

    QPushButton *m_previous;
    QPushButton *m_next;

    // Select format
    QComboBox *m_modeList;

    // Select Game
    QComboBox *m_gameList;

};
#endif // MAINWINDOW_H
