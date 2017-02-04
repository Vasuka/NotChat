#include <QApplication>
#include "chatter.h"

int main(int argc,char* argv[])
{
    QApplication app(argc, argv);
    Chatter chat;
    chat.show();
    return app.exec();
}
