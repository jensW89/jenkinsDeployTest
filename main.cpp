#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello jenkins from the qt c consol programm!";
    qDebug() << "Hello jenkins from the qt c consol programm!";
    qDebug() << "Hello jenkins from the qt c consol programm!";
    qDebug() << "Hello jenkins from the qt c consol programm!";
    return a.exec();
}
