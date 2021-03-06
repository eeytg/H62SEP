#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mTasks()
{
    ui->setupUi(this);

    connect(ui->addTaskButton, &QPushButton::clicked,
        this, &MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
    bool ok;
    QString name = QInputDialog::getText(this,
        tr("Add task"),      // dialog name
        tr("Task Name"),     // prompt
        QLineEdit::Normal,   // input widget stylr
        tr("Untitled task"), // default text
        &ok);                // error flag
    if(ok && !name.isEmpty()) {
        qDebug() << "Adding new task";
        Task *task = new Task(name);
        mTasks.append(task);
        ui->tasksLayout->addWidget(task);
    }
}
