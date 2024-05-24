// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.
- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!
Good luck!
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool program_running {true};
    char selection {};
    vector <int> num_vec{};
    int input_num {0};

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
    
        cin >> selection;
        switch (selection){
            // P - Print numbers
            case 'p':
            case 'P': {
                if (num_vec.empty()) 
                    cout << "\n[] - the list is empty" << endl;
                else {
                    cout << "[ ";
                    for (auto i: num_vec) {
                        cout << i << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }

            // A - Add a number
            case 'a':
            case 'A': {
                cout << "\nAdd a number: " << endl;
                cin >> input_num;
                num_vec.push_back(input_num);
                break;
            }

            // M - Display mean of the numbers
            case 'm':
            case 'M': {
                if (num_vec.empty()) 
                    cout << "\nUnable to calculate the mean - no data" << endl;
                else {
                    int sum {0};
                    for (auto i: num_vec) {
                        sum += i;
                    }
                    cout << "\nThe mean is: " << (sum / num_vec.size()) << endl;
                }
                break;
            }

            // S - Display the smallest number
            case 's':
            case 'S': {
                if (num_vec.empty()) 
                    cout << "\nUnable to determine the smallest number - list is empty" << endl;
                else {
                    int smallest_num {0};
                    for (auto i: num_vec) {
                        if (smallest_num == 0) smallest_num = i;
                        else if (smallest_num > i) smallest_num = i;
                    }
                    cout << "\nThe smallest number is: " << smallest_num << endl;
                }
                break;
            }

            // L - Display the largest number
            case 'l':
            case 'L': {
                if (num_vec.empty()) 
                    cout << "\nUnable to determine the largest number - list is empty" << endl;
                else {
                    int largest_num {0};
                    for (auto i: num_vec) {
                        if (largest_num == 0) largest_num = i;
                        else if (largest_num < i) largest_num = i;
                    }
                    cout << "\nThe largest number is: " << largest_num << endl;
                }
                break;
            }
            // Q - Quit
            case 'q':
            case 'Q': program_running = false; cout << "\nGoodbye" << endl; break;
            default: cout << "\nUnknown selection, please try again" << endl;
        cout << endl;
        }
    } while (program_running);
}