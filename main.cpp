#include <iostream>
#include <string>

using namespace std;

struct Restaurant
{
    string name; 
    string address;
    string phoneNr;  //phone number
    double rating;
    int seatingCapacity;
};

//function prototype
Restaurant inputRestaurant();

int main()
{
    Restaurant userRest = inputRestaurant();

    

    return 0;
}

// inputRestaurant definition
Restaurant inputRestaurant()
{
    Restaurant temp;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter restaurant address: ";
    getline(cin, temp.address);

    cout << "Enter restaurant phone number: ";
    getline(cin, temp.phoneNr);

    cout << "Enter restaurant rating out of 5: ";
    cin >> temp.rating;

    cout << "Enter seating capacity: ";
    cin >> temp.seatingCapacity;

    return temp;
}