#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QWidget>

class Test : public QWidget
{
    Q_OBJECT
public:
    explicit Test(QWidget *parent = 0);

signals:

public slots:
};

#endif // TEST_H