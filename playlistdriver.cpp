#include "playlist.h"
#include <iostream>  
#include <string>  
#include <sstream>  
using namespace std;

void arrayLength(playlist &play_list) {
  int N;
  //cout << "Enter list length: ";
  cin >> N;
  play_list.setArray(N);
}

void insertData(playlist &play_list) {
  string b;
  string j;
  string s;
  string a;
  cout << "Enter song: ";
  getline(cin >> ws,b);
  stringstream X(b);
  (getline(X, j, ';')) ;
  s=j;
  cout<<s;
  (getline(X, j, ';')) ;
  a=j;
  cout<<a;
  play_list.addSong(s, a);
}

void playData(playlist &play_list) {
  int n;
  //cout << "Enter index to play: ";
  cin >> n;
  play_list.playSong(n);
}

void deleteData(playlist &play_list) {
  int n;
  //cout << "Enter index to delete: ";
  cin >> n;
  play_list.deleteSong(n);
}

int main() {
  bool condition = true;
  playlist play_list;

  while (condition) {
    string value;
    cin >> value;
    if (value == "m") {
      arrayLength(play_list);
    } else if (value == "i") {
      insertData(play_list);
    } else if (value == "p") {
      playData(play_list);
    } else if (value == "e") {
      deleteData(play_list);
    } else if (value.empty()) {
      condition = false;
    }
  }
  return 0;
}