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

    cout << "Who directed it? ";
    getline(cin, temp.director);

    cout << "What year was it released? ";
    cin >> temp.releaseYear;

    cout << "What is the IMDb rating (0.0 - 10.0)? ";
    cin >> temp.imdbRating;

    cout << "Did it win an Oscar? (y/n): ";
    cin >> oscarInput;
    temp.wonOscar = (oscarInput == 'y' || oscarInput == 'Y');

    return temp;
}

//function to display movie details
void showMovie(const Movie &m) {
    cout << "\n===================================\n";
    cout << "  Movie Details\n";
    cout << "===================================\n";
    cout << " Title:        " << m.title << endl;
    cout << " Director:     " << m.director << endl;
    cout << " Release Year: " << m.releaseYear << endl;
    cout << " IMDb Rating:  " << m.imdbRating << "/10" << endl;
    cout << " Won Oscar:    " << (m.wonOscar ? "Yes" : "No") << endl;
    cout << "===================================\n";
}