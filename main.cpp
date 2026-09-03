// COMSC-210 | Lab 3 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name;
    int seating_capacity;
    double rating;
    bool offers_takeout;
    double avg_price;
};

//Function prototype
Restaurant create();

int main() {
    //Variable declaration
    Restaurant restaurant;

    //Function calls
    restaurant = create();

    return 0;
}

//Function definitions
// create() creates a temporary Restaurant, receive user input via the console to populate the struct's data
// arguments: null
// returns: the temporary Restaurant
Restaurant create() {
    Restaurant temp;

    int sc;
    double r;
    int ot;
    double ap;

    cout << "Enter the name of the Restaurant: ";
    getline(cin, temp.name);

    cout << "Enter the seating capacity of the Restaurant: ";
    cin >> sc;
    while (sc < 0) {
        cout << "Please enter a positive seating capacity for the Restaurant: ";
        cin >> sc;
    }
    temp.seating_capacity = sc;

    cout << "Enter the rating(0~5) of the Restaurant: ";
    cin >> r;
    while (r < 0 || r > 5) {
        cout << "Please enter a rating of 0~5 for the Restaurant: ";
        cin >> r;
    }
    temp.rating = r;

    cout << "Does the Restaurant offer takeout? Enter 1(true) or 0(false): ";
    cin >> ot;
    while (ot != 1 && ot != 0) {
        cout << "Please enter 1(true) or 0(false): ";
        cin >> ot;
    }
    temp.offers_takeout = static_cast<bool>(ot);

    cout << "Enter the average price in $ of the Restaurant: ";
    cin >> ap;
    while (ap < 0) {
        cout << "Please enter a valid average price of the Restaurant: ";
        cin >> ap;
    }
    temp.avg_price = ap;

    return temp;
}