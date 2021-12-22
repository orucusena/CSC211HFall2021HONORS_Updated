#include "startpage.h"
#include "ui_startpage.h"
#include "aluminumpage.h"
#include "plasticpage.h"
#include "paperpage.h"
#include "glasspage.h"
#include "calculateimpactpage.h"
#include "aboutpage.h"

StartPage::StartPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartPage)
{
    ui->setupUi(this);
}

StartPage::~StartPage()
{
    delete ui;
}


void StartPage::on_pushButton_aluminum_clicked()
{

    hide();
    AluminumPage aluminum;
    aluminum.setModal(true);
    aluminum.exec();
}

void StartPage::on_pushButton_plastic_clicked()
{

    hide();
    PlasticPage plastic;
    plastic.setModal(true);
    plastic.exec();
}


void StartPage::on_pushButton_paper_clicked()
{

    hide();
    PaperPage paper;
    paper.setModal(true);
    paper.exec();
}


void StartPage::on_pushButton_glass_clicked()
{

    hide();
    GlassPage glass;
    glass.setModal(true);
    glass.exec();
}



void StartPage::on_pushButton_impact_clicked()
{

    hide();
    CalculateImpactPage calIm;
    calIm.setModal(true);
    calIm.exec();
}


void StartPage::on_pushButton_clicked()
{

    hide();
    AboutPage about;
    about.setModal(true);
    about.exec();
}



