#ifndef STATISTIQUES_H
#define STATISTIQUES_H
#include "batteries.h"
#include <QDialog>

namespace Ui {
class statistiques;
}

class statistiques : public QDialog
{
    Q_OBJECT
protected:
   void paintEvent(QPaintEvent *);
public:
    explicit statistiques(QWidget *parent = nullptr);
    ~statistiques();

private slots:

   void on_pushButton11_clicked();

private:
    Ui::statistiques *ui;
    batteries V;

};

#endif // STATISTIQUES_H
