#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include "iostream"
#include <vector>
using namespace std;

struct song {
    string artistName, songName;
    double time;
    bool play = false, loop = false;
};

class Playlist{
    string PlaylistName;
    vector<song> songs;
public:
    Playlist(string name);

    void addSong(string artist, string song, double time);

    void deleteSong(string name);

    void printPlaylist();

    void Play();

    void Next();

    void Previous();

    void Loop();
};

#endif //JIPP2_NODE_H