#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void click_handler();
private:
    Ui::MainWindow *ui;
    QLabel * label;
    QPushButton * button;
    QVBoxLayout * layout;
    QWidget *window;
    QWidget *centralWidget;
};
#endif // MAINWINDOW_H
