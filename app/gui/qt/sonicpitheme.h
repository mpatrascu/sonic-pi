#ifndef SONICPITHEME_H
#define SONICPITHEME_H

#include <QtCore>
#include <QObject>
#include <QColor>

class SonicPiTheme : public QObject
{
    Q_OBJECT
public:
    explicit SonicPiTheme(QObject *parent = 0, QSettings *settings = 0);
    ~SonicPiTheme();
    QColor color(QString);

private:
    QMap<QString, QString> theme;

signals:

public slots:
};

#endif // SONICPITHEME_H
