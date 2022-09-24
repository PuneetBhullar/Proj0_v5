#include "playlist.h"
#include <iostream>

using namespace ::std;

playlist::playlist() {}

void playlist::setArray(int N) {
  if (array_size == 0) {
    array_size = N;
    Playlist = new Song[array_size];
    cout << "success";
  }
}

void playlist::addSong(string s, string a) {
  if (((s == "Muskrat Love") && a == "Captain and Tennille") ||
      (s == "My Heart Will Go On")) {
    cout << "can not insert " << s << ";" << a;
  } else if (counter >= (array_size)) {
    cout << "can not insert " << s << ";" << a;
  } else if (Playlist[counter].getSong() == s &&
             Playlist[counter].getArtist() == a) {
    cout << "can not insert " << s << ";" << a;
  } else {
    Playlist[counter].setSong(s);
    Playlist[counter].setArtist(a);
    cout << "success";
    // cout<< Playlist[counter].getSong();
    // cout<< Playlist[counter].getArtist();
    // cout<<"before"<<counter;
    counter = counter + 1;
    // cout<<counter;
  }
}

void playlist::playSong(int n) {
  if (0 <= n && n < counter) {
    cout << "played " << n << " " << Playlist[n].getSong() << ";"
         << Playlist[n].getArtist();
  } else {
    cout << "can not play " << n;
  }
}

void playlist::deleteSong(int n) {
  if (0 <= n && n < counter) {
    for (int i = n; i <= (array_size - 3); i++) {
      Playlist[i] = Playlist[i + 1];
    }
    Playlist[array_size - 1] = {};
    cout << "success";
    cout << Playlist[0].getSong();
    cout << Playlist[1].getSong();
    cout << Playlist[2].getSong();
  } else {
    cout << "can not erase " << n;
  }
}

playlist::~playlist() { delete[] Playlist; }