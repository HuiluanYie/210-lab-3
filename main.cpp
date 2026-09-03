// COMSC-210 | Lab 3 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

struct Restaurant
{
    string name;
    int seating_capacity;
    double rating;
    bool offers_takeout;
    double avg_price;
};

//Function prototype
Restaurant create();

int main() {
    create();

    return 0;
}

//Function definitions
// create() creates a temporary Restaurant, receive user input via the console to populate the struct's data
// arguments: null
// returns: the temporary Restaurant
Restaurant create()
{
    Restaurant temp;

    int sc;
    double r;
    bool ot;
    double ap;

    cout << "Enter the name of the Restaurant: ";
    cin >> temp.name;
    
    cout << "Enter the seating capacity of the Restaurant: ";
    cin >> sc;
    while (condition)
    {
        /* code */
    }
    
    temp.seating_capacity;
    cout << "Enter the rating of the Restaurant: ";
    cin >> temp.rating;
    cout << "Does the Restaurant offer takeout? Enter 'true' or 'false': ";
    cin >> temp.offers_takeout;
    cout << "Enter the average price of the Restaurant: ";
    cin >> temp.avg_price;

    return temp;
}