#include "../include/odtwarzacz.h"

int main()
{
    Playlist playlist("Playlista Bartka");
    playlist.addSong("Kacperczyk", "Cyrk", 3.57);
    playlist.addSong("Gawryle","Harnas ice tea",  2.56);
    playlist.addSong("Post Malone","One Right Now",  3.14);
    playlist.addSong( "Oki","SIRI", 3.04);

    playlist.printPlaylist();
    cout << "--------------------------------------------------" << endl;
    playlist.Play();
    playlist.printPlaylist();
    cout << "--------------------------------------------------" << endl;
    playlist.Next();
    playlist.printPlaylist();
    cout << "--------------------------------------------------" << endl;
    playlist.Loop();
    playlist.printPlaylist();
    cout << "--------------------------------------------------" << endl;
    playlist.Previous();
    playlist.Loop();
    playlist.Previous();
    playlist.printPlaylist();
    cout << "--------------------------------------------------" << endl;
    playlist.deleteSong("Harnas ice tea");
    playlist.printPlaylist();
    return 0;
}