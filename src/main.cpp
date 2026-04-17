#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char **argv) {
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engine;
  engine.loadFromModule("MainWindow", "MainWindow");

  if (engine.rootObjects().isEmpty()) {
    exit(-1);
  }

  return app.exec();
}
