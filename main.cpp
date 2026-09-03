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

//function prototypes
Restaurant inputRestaurant();
void outputRestaurant(const Restaurant &);

int main()
{
    Restaurant userRest = inputRestaurant();
    outputRestaurant(userRest);

    return 0;
}

// inputRestaurant definition
Restaurant inputRestaurant()
{
    // create temporary struct
    Restaurant temp;

    // prompt user for input
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

    // return the struct to the main
    return temp;
}

// function definition for outputRestaurant
void outputRestaurant(const Restaurant &r)
{
    cout << "\t----Restaurant Info----" << endl;
    cout << "\tRestaurant name: " << r.name << endl;
    cout << "\tRestaurant address: " << r.address << endl;
    cout << "\tRestaurant phone number: " << r.phoneNr << endl;
    cout << "\tRestaurant rating: " << r.rating << endl;
    cout << "\tRestaurant seating capacity: " << r.seatingCapacity << " seats" << endl;
}