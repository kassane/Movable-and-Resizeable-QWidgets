#include "mainwindow.h"
#include <QApplication>

#ifdef Q_OS_WIN
#include <windows.h>
#endif
int main(int argc, char *argv[])
{
    //
#ifdef Q_OS_WIN
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	FreeConsole();
#endif


    QApplication a(argc, argv);
    MainWindow w;
    //a.setStyle("fusion");
    //w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint );
    w.setMinimumSize(QSize(800,600));
    //w.setStyleSheet("QWidget{background-color:#1d1d1d;color: #ffffff;}");
    w.show();

    return a.exec();
}
