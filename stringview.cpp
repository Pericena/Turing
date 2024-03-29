#include "stringview.h"
#include "ui_stringview.h"
#include <QPushButton>
#include <QMessageBox>
StringView::StringView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StringView)
{
    ui->setupUi(this);
}

StringView::StringView(QWidget *parent, Turing::Executer *exec) :
    QDialog(parent),
    ui(new Ui::StringView)
{
    ui->setupUi(this);
    this->exec = exec;
    this->ui->lineEdit->setText(*this->exec->get_settings()->get_input_string());
    this->ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancelar");
}

StringView::~StringView()
{
    delete ui;
}

///
/// \brief Corregir un error con un error en el contrario
///

void StringView::on_buttonBox_accepted() // ОК
{
    if(this->exec->check_input_string(this->ui->lineEdit->text())) {
        this->exec->set_input_string(this->ui->lineEdit->text());
        this->close();
    } else {
        QMessageBox::warning(this, "Turing", "La palabra ingresada no coincide con el alfabeto fuente especificado");
    }
}


void StringView::on_buttonBox_rejected() // Cancelar
{
    this->close();
}

