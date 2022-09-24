#include <iostream>
#include "song.h"

using namespace std;

class playlist{

  private: 
    int no_songs;
    int song_index;
    int array_size=0;
    int counter;
    Song *Playlist; 
  public:
    playlist();
    void setArray(int N);
    void addSong(string s, string a);
    void playSong(int n);
    void deleteSong(int n);
    ~playlist();
};