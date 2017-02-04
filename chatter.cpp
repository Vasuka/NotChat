#include "chatter.h"
#include <QVBoxLayout>

Chatter::Chatter(QWidget *parent) : QWidget (parent)
{
    Button = new QPushButton("ENTER");
    Text = new QTextEdit;
    Line = new QLineEdit;
    Text->setReadOnly(true);
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(Text);
    layout->addWidget(Line);
    layout->addWidget(Button);
    setLayout (layout);
    setWindowTitle("NotAChat");
    connect(Button, SIGNAL(clicked(bool)), this, SLOT(setLabelText()));
}

Chatter::~Chatter()
{


}

void Chatter::setLabelText()
{
 Text->append(Line->text());
 Line->clear();
 Line->setFocus();
}
