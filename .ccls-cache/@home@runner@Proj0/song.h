#include <iostream>

using namespace std;

class Song
{
private:
  string music;
  string artist;  

 public:
  void setSong(string s) {
      music = s;
    }
  void setArtist(string a) {
      artist = a;
    }
  string getSong() {
      return music;
    }
  string getArtist() {
      return artist;
    }
};