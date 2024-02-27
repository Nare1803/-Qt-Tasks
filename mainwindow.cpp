#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(300,350);
    this->setWindowTitle("Clicked Counter");
    this->setStyleSheet("background : white");
    label = new QLabel("0",this);
    label->setStyleSheet("color : purple");
    label -> setGeometry(70,30,160,30);
    label->show();

    button = new QPushButton("Click",this);
    button -> setGeometry(100,130,70,50);
    button -> setStyleSheet("color : white;background : purple");
    connect(button,&QPushButton::clicked,this,&MainWindow::click_handler);

    layout = new QVBoxLayout;//(this);
    layout->addWidget(label);
    layout->addWidget(button);

    centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::click_handler()
{
    label->setText(QString::number(label->text().toInt() + 1));
}
