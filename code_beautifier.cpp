#include "code_beautifier.h"
#include "ui_code_beautifier.h"

code_beautifier::code_beautifier(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::code_beautifier)
{
    ui->setupUi(this);
}

code_beautifier::~code_beautifier()
{
    delete ui;
}
