// CSC 134
// M1LAB1
// Jan 22, 2019
// Khristopher Lane
#include <iostream>

using namespace std;

int main()
{
    //int year;
    //Movie = "Jurassic World: Fallen Kingdom";
    // year = 2018;
    // double rating;
    // rating = 6.2;
    // char firstLetter;
   // firstLetter = 'C';
    //string movie;
    string rating;
    string year;
    string firstLetter;
    string movietwo;
    movietwo = "Wind Talkers";

    cout << "What is your favorite movie? ";
    getline (cin, movietwo);
    //cin >> movietwo;
    cout << "I see your favorite movie is " << movietwo << endl;
    cout << "What year did that movie come out? ";
    cin >> year;
    cout << "It came out in the year of " << year << ", which is not a bad year " << endl;
    cout << "Do you know the rating that IMDB gave it? ";
    cin >> rating;
    cout << "I see that the rating IMDB gave the movie is " << rating << endl;
    cout << "From A to F, how do you rate that movie? ";
    cin >> firstLetter;
    cout << "You gave the movie a " << firstLetter << ". Well, I hope you enjoyed the movie regardless. Have a good day!" << endl;
    cout << "You will find all the information of this movie in : " << movietwo[0] << endl;
    return 0;
}
