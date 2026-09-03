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
Restaurant create(*istream input, *ostream output);

int main() {

    return 0;
}

//Function definitions
Restaurant create(*istream input, *ostream output)
{
    Restaurant temp;
    cout >> "Enter the name of the Restaurant: ";
    cin << temp.name;
}