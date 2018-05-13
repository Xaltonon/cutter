#ifndef RAWOPTIONSWIDGET_H
#define RAWOPTIONSWIDGET_H

#include <QPushButton>
#include <memory>

#include "Cutter.h"

class PreferencesDialog;

namespace Ui {
class RawOptionsWidget;
}

class RawOptionsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit RawOptionsWidget(PreferencesDialog *dialog, QWidget *parent = nullptr);
    ~RawOptionsWidget();

private:
    std::unique_ptr<Ui::RawOptionsWidget> ui;

private slots:
    void listConfig();
};

#endif //RAWOPTIONSWIDGET_H
