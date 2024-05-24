// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    int amount_in_cents {0};

    cout << "Enter the amount in cents: " << endl;
    cin >> amount_in_cents;
    
    //dollars 100 cents
    int dollars {0};
    dollars = (amount_in_cents / 100);
    amount_in_cents -= (dollars * 100);
    cout << "dolars : " << dollars << endl;

	//quarters 25 cents
    int quarters {0};
    quarters = (amount_in_cents / 25);
    amount_in_cents -= (quarters * 25);
    cout << "quarters: " << quarters << endl;

	// dimes 10 cents
    int dimes {0};
    dimes = (amount_in_cents / 10);
    amount_in_cents -= (dimes * 10);
    cout << "dimes: " << dimes << endl;

	// nickels 5 cents
    int nickels {0};
    nickels = (amount_in_cents / 5);
    amount_in_cents -= (nickels * 5);
    cout << "nickels: " << nickels << endl;

	// pennies 1 cents
    cout << "pennies: " << amount_in_cents << endl;
    return 0;
}