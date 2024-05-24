/*S EXCERSICE
uppose the user enters 24.
display the following in the console:

Enter your favorite number between 1 and 100: 
24
Amazing!!! That is my favorite number too!
No, really!!!: 24is my favorite number
*/

#include <iostream>

using namespace std;

int main(){
    int fav_number ;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> fav_number;
    cout << "Amazing!!! That is my favorite number too!" << endl;
    cout << "No, really!!! " << fav_number << " is my favorite number" << endl;
    return 0;
}