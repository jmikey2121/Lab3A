// COMSC-210 | Lab 3A | Justin Mikesell
// IDE used: Visual Studio Code 

#include <iostream>
#include <string>
using namespace std;

//Movie struct
struct Movie {
    string title;
    string director;
    int releaseYear;
    double imdbRating;
    bool wonOscar;
};

//function prototypes
Movie askMovieInfo();
void showMovie(const Movie &m);

int main() {
    cout << "Press Enter, then create a list of 4 movies\n";

    //Create 4 Movie objects
    Movie first = askMovieInfo();
    Movie second = askMovieInfo();
    Movie third = askMovieInfo();
    Movie fourth = askMovieInfo();