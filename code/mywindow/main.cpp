//#include <QGuiApplication>
//#include <QQmlApplicationEngine>

#include <QtWidgets/QApplication>
#include <QtQuick/QQuickView>

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//    if (engine.rootObjects().isEmpty())
//        return -1;

    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication app(argc, argv);

    QQuickView viewer;

    viewer.setBaseSize(QSize(650,400));
    viewer.setSource(QUrl("qrc:/main.qml"));

    viewer.show();

    return app.exec();
}
