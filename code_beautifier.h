#ifndef CODE_BEAUTIFIER_H
#define CODE_BEAUTIFIER_H

#include <QWidget>

namespace Ui {
class code_beautifier;
}

class code_beautifier : public QWidget
{
    Q_OBJECT

public:
    explicit code_beautifier(QWidget *parent = 0);
    ~code_beautifier();

private:
    Ui::code_beautifier *ui;
};

#endif // CODE_BEAUTIFIER_H
