#include "spotify.h"
#include <QFile>
#include <QTextStream>
Spotify::Spotify(const QString& path) {
    QFile file(path);
    file.open(QFile::ReadOnly|QFile::Text);
    QTextStream stream(&file);
    QString line = stream.readLine();
    while (!stream.atEnd()) {
        line = stream.readLine();
        QList<QString> list = line.split(";");
        data.append(list);
    }
    file.close();
}
QList<QString> Spotify::operator [] (int i) {
    return data[i];
}
QStringList Spotify::getTrackNames() const {
    QStringList list;
    for (int i=0; i<data.size(); i++) {
        list << data[i][static_cast<int>(COLUMNS::track_name)];
    }
    return list;
}
