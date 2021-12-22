#include "aboutpage.h"
#include "ui_aboutpage.h"
#include "mainwindow.h"
#include "startpage.h"

AboutPage::AboutPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutPage)
{
    ui->setupUi(this);

    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(true);
    ui->label_2->setText("<a href=\"https://www.epa.nsw.gov.au\">NSW EPA</a>");

    ui->label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_3->setOpenExternalLinks(true);
    ui->label_3->setText("<a href=\"https://archive.epa.gov/epawaste/conserve/smm/wastewise/web/html/factoid.html\">EPA Web Archive</a>");

    ui->label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_4->setOpenExternalLinks(true);
    ui->label_4->setText("<a href=\"https://www.explainthatstuff.com/recycling.html\">Explain That Stuff!!</a>");

    ui->label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_5->setOpenExternalLinks(true);
    ui->label_5->setText("<a href=\"https://sites.google.com/view/impactulator/about\"> Impactulator website.</a>");
}

AboutPage::~AboutPage()
{
    delete ui;
}




void AboutPage::on_pushButton_clicked()
{
    hide();
    StartPage start;
    start.setModal(true);
    start.exec();
}

