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

    //Display entries back
    cout << "\n--- Here are the movies you entered ---\n";
    showMovie(first);
    showMovie(second);
    showMovie(third);
    showMovie(fourth);

    return 0;
}

//function to collect movie details
Movie askMovieInfo() {
    Movie temp;
    char oscarInput;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover newline

    cout << "\nWhat is the title of the movie? ";
    getline(cin, temp.title);