// SPDX-License-Identifier: GPL-3.0+
// Copyright (C) 2021 AISIN CORPORATION

#ifndef EXEC_HPP
#define EXEC_HPP

#include <QProcess>
#include <QVariant>

class AppExec : public QProcess {
    Q_OBJECT

public:
    AppExec(QObject *parent = 0) : QProcess(parent) { }

    Q_INVOKABLE void start(const QString &program, const QVariantList &arguments) {
        QStringList args;

        // convert QVariantList from QML to QStringList for QProcess 

        for (int i = 0; i < arguments.length(); i++)
            args << arguments[i].toString();

        QProcess::start(program, args);
    }

    Q_INVOKABLE void runMominavi() {
        QString program("systemctl");
        QStringList mominavi = {"start","mominavi"};
        QStringList momiplay = {"stop","momiplay"};
        QStringList momiradio = {"stop","momiradio"};
        QStringList momisetting = {"stop","momisetting"};

        QProcess::start(program, mominavi);
        QProcess::waitForFinished();
        QProcess::start(program, momiplay);
        QProcess::waitForFinished();
        QProcess::start(program, momiradio);
        QProcess::waitForFinished();
        QProcess::start(program, momisetting);
        QProcess::waitForFinished();
    }

    Q_INVOKABLE void runMomiplay() {
        QString program("systemctl");
        QStringList mominavi = {"stop","mominavi"};
        QStringList momiplay = {"start","momiplay"};
        QStringList momiradio = {"stop","momiradio"};
        QStringList momisetting = {"stop","momisetting"};

        QProcess::start(program, mominavi);
        QProcess::waitForFinished();
        QProcess::start(program, momiplay);
        QProcess::waitForFinished();
        QProcess::start(program, momiradio);
        QProcess::waitForFinished();
        QProcess::start(program, momisetting);
        QProcess::waitForFinished();
    }
    
    Q_INVOKABLE void runMomiradio() {
        QString program("systemctl");
        QStringList mominavi = {"stop","mominavi"};
        QStringList momiplay = {"stop","momiplay"};
        QStringList momiradio = {"start","momiradio"};
        QStringList momisetting = {"stop","momisetting"};

        QProcess::start(program, mominavi);
        QProcess::waitForFinished();
        QProcess::start(program, momiplay);
        QProcess::waitForFinished();
        QProcess::start(program, momiradio);
        QProcess::waitForFinished();
        QProcess::start(program, momisetting);
        QProcess::waitForFinished();
    }
    
    Q_INVOKABLE void runMomisetting() {
        QString program("systemctl");
        QStringList mominavi = {"stop","mominavi"};
        QStringList momiplay = {"stop","momiplay"};
        QStringList momiradio = {"stop","momiradio"};
        QStringList momisetting = {"start","momisetting"};

        QProcess::start(program, mominavi);
        QProcess::waitForFinished();
        QProcess::start(program, momiplay);
        QProcess::waitForFinished();
        QProcess::start(program, momiradio);
        QProcess::waitForFinished();
        QProcess::start(program, momisetting);
        QProcess::waitForFinished();
    }


    Q_INVOKABLE QByteArray readAll() {
        return QProcess::readAll();
    }
};
#endif // EXEC_HPP
