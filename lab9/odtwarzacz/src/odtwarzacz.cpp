#include "../include/odtwarzacz.h"


Playlist::Playlist(string name) : PlaylistName(name) {}

void Playlist::addSong(string artist, string song, double time) {
    struct song temp;
    temp.artistName = artist;
    temp.songName = song;
    temp.time = time;
    songs.push_back(temp);
}

void Playlist::deleteSong(string name) {
    auto i = songs.begin();
    for (i; i!=songs.end();i++){
        if(i->songName == name){
            i = songs.erase(i);
            break;
        }
    }
}

void Playlist::printPlaylist() {
    for(auto& i:songs){
        if(i.play){
            if(i.loop)
                cout << "now looping:" <<i.artistName << " - " <<i.songName << " " <<i.time << endl;
            else
                cout << "now playing: " <<i.artistName << " - " << i.songName << " " << i.time << endl;
        }
        else
            cout << i.artistName << " - " << i.songName << " " << i.time << endl;
    }
}

void Playlist::Play() {
    songs.begin()->play = true;
}

void Playlist::Next() {
    bool e = false;
    for(auto& i : songs){
        if(i.play && !i.loop){
            i.play = false;
            e = true;
        }
        else if(i.play && i.loop) {
            cout << "Can't do that, the song is looping!" << endl;
            break;
        }
        else if (e) {
            i.play = true;
            break;
        }
    }
}

void Playlist::Previous() {
    auto i = songs.begin();
    for(i;i!=songs.end();i++){
        if(i->play && !i->loop){
            i->play = false;
            i--;
            i->play = true;
            break;
        }
        else if (i->play && i-> loop) {
            cout << "Can't do that, the song is looping!" << endl;
            break;
        }
    }
}

void Playlist::Loop() {
    for(auto& i : songs){
        if(i.play) {
            if(i.loop)
                i.loop = false;
            else
                i.loop = true;
            break;
        }
    }
}