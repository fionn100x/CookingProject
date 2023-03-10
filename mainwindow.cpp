#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QVBoxLayout>
#include <QAction>
#include <QMenuBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        QLabel *imageLabel = new QLabel();
        QPixmap pixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\MyCookingProjectMark1\\recipe_rendezvous.png");
        imageLabel->setPixmap(pixmap);

        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(imageLabel);

        QWidget *centralWidget = new QWidget(this);
        centralWidget->setLayout(layout);

        setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

