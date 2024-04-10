#ifndef SPOTIFY_H
#define SPOTIFY_H
#include <QString>
#include <QList>
#include <QStringList>
enum class COLUMNS {
    playlist_url,year,track_id,track_name,track_popularity,album,artist_id,artist_name,artist_genres,artist_popularity,danceability,energy,key,loudness,mode,speechiness,acousticness,instrumentalness,liveness,valence,tempo,duration_ms,time_signature
};

class Spotify
{
public:
    Spotify(const QString& = "/Users/artur/Downloads/Spotify_Youtube.csv");
        QList<QString> operator [] (int i);
        QStringList getTrackNames() const;
private:
                  QList<QList<QString>> data;
};

#endif // SPOTIFY_H
