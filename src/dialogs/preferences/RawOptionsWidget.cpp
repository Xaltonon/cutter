#include "RawOptionsWidget.h"
#include "ui_RawOptionsWidget.h"

#include "PreferencesDialog.h"

RawOptionsWidget::RawOptionsWidget(PreferencesDialog */*dialog*/, QWidget *parent)
    : QDialog(parent),
      ui(new Ui::RawOptionsWidget)
{
    ui->setupUi(this);

    connect(ui->listConfigButton,
            SIGNAL(clicked()),
            this, SLOT(listConfig()));
}

RawOptionsWidget::~RawOptionsWidget() {}

void RawOptionsWidget::listConfig()
{
    QString opts = Core()->listConfig();
    QTextDocument *doc = ui->plainTextEdit->document();
    doc->setPlainText(opts);
}
