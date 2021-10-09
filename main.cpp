// SPDX-License-Identifier: GPL-3.0+
// Copyright (C) 2021 AISIN CORPORATION

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "exec.hpp"



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

	qmlRegisterType<AppExec>("AppExec", 1, 0, "AppExec");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/momiscreen.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
