// Section 6
// Challenge
/*
Help
Frank's Carpet Cleaning Service
Charges:
$25 per small room $35 per large room
Sales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of small and large rooms they would like cleaned and provide an estimate such as:
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main (){
    const float small_room {25.0};
    const float large_room {35.0};
    const float tax {0.06};
    const short valid_days {30};

    short Number_of_small_rooms {0};
    short Number_of_large_rooms {0};
    int total {0};


    cout << "Estimate for carpet cleaning service";
    cout << "Number of small rooms: ";
    cin >> Number_of_small_rooms;
    cout << "Number of large rooms: ";
    cin >> Number_of_large_rooms;
    cout << "Price per small room: $" << small_room;
    cout << "\nPrice per large room: $" << large_room;
    
    cout << "\nCost: $" 
         << (Number_of_large_rooms * large_room) + 
            (Number_of_small_rooms*small_room);


    cout << "\nTax: $" 
         << ((Number_of_large_rooms * large_room) + 
            (Number_of_small_rooms*small_room)) * tax;
            
    cout << "\n============================";

    cout << "\nTotal estimate: $"
         << ((Number_of_large_rooms * large_room) + (Number_of_small_rooms*small_room)) +
         ((Number_of_large_rooms * large_room) + (Number_of_small_rooms*small_room)) * tax;

    cout << "\nThis estimate is valid for " << valid_days << " days" << endl;
    return 0;
}