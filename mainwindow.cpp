#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //set up the ui and set click counter to zero.
    ui->setupUi(this);
    ui->statusBar->showMessage("Len Chan, 2016");
    click = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionABOUT_THIS_APP_triggered()
{
    //go to about info page and setModal to true to let
    //user cannot click this window before close the
    //dialog box.
    mw2 = new Dialog(this);
    mw2->setModal(true);
    mw2->show();
}


void MainWindow::on_btnResult_clicked()
{
    //create the var and reset the score.
    QString  strResultNum, strResultMsg;
    score = 0;

    //set the click counter
    click++;

    //if case to calculate the score(s).
    if(ui->rdoQ1B->isChecked() == true){
        score++;
    }
    if(ui->rdoQ2A->isChecked() == true){
        score++;
    }
    if(ui->rdoQ3C->isChecked() == true){
        score++;
    }

    if(ui->rdoQ4B->isChecked() == true){
        score++;
    }

    if(ui->rdoQ5D->isChecked() == true){
        score++;
    }

    if(ui->rdoQ6B->isChecked() == true){
        score++;
    }

    if(ui->rdoQ7D->isChecked() == true){
        score++;
    }

    if(ui->rdoQ8A->isChecked() == true){
        score++;
    }

    if(ui->rdoQ9C->isChecked() == true){
        score++;
    }

    //set-up the output msg.

    //convert datatype to QString from int.
     strResultNum = QString::number(score);

    //Create a QString to save the result msg.
    strResultMsg = QString("You got score ") + strResultNum + " out of 9!";
    //output the result msg.
    ui->lblResult->setText(strResultMsg);

    //output the status bar.
    ui->statusBar->showMessage(QString("Len Chan, 2016 : You are clicked the button") +
                               QString::number(click) + QString(" times!") );
    //reset the score.
    score = 0;
}
