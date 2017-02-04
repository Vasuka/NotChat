#ifndef CHATTER_H
#define CHATTER_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>




class Chatter : public QWidget
{ Q_OBJECT
    QPushButton* Button;
    QTextEdit* Text;
    QLineEdit* Line;
public:
    explicit Chatter(QWidget *parent = 0);
    ~Chatter();
public slots:
    void setLabelText();
};

#endif // CHATTER_H
