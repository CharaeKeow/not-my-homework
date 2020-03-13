#include <iostream>
using namespace std;

int main() {

	int day; //initialize day - how many day is the car being rented
	//remember, day is initialize outside the do-while loop because otherwise it is local in the do-while scope only
	//and the stopping condition won't detect it. Try cut and paste it in the do-while

	//Why do-while? Why not while() or for() loop?
	//We can't use for() because we don't know how many time we want this program to run
	//Meanwhile, while is cool but as we want our program to run at least once, it is the most suitable.
	//You can still try using while() if you want.

	do {
		cout << "How many days: "; //prompt user
		cin >> day; //user enter day

		int rent = 0; //initialize rent. This is the total rent in RM

		if (day == 1) { //if day is 1
			rent += 100; //rent = 100
		}
		else if (day >= 2 && day <= 4) { //else if day is > 1, but it's more and equal to 2 and less than and equal to 4 (i.e. the next 3 day)
			day -= 1;  //day - 1. Why? Because the first day rate is 100. We need the remaining day to calculate the rental price 
					   // for the next 3 days
			rent += 100 + (70 * day); //then simply add the first day (100) with 70 * the remaining days
			//e.g. 3 days, so day = 3. 
			//total rent = first day + 2 days 
			//           = 100 + 70 * 2
		}
		else if (day >= 5) { //if rental is more than 5 days
			day -= 4; //day - 4. Why? Because we already know the rate of the first 4 day (100 + 70 * 3). So we need to find the price of the
					  //remaining days 
			rent += 310 + (50 * day); //Then, simply add the first four day (310) + the remaining days
			//e.g 25 days, so day = 25
			//first day = 100, next 3 days = 70 * 3
			//remaining days are 25 - 4 = 21
			//so total = first day + next 3 days + remaining 21 days
			//         = 100 + 70 * 3 + 21 * 50
			//         = ? //test it yourself lol
		}

		if (day == 0) { //if day == 0 the program will stop
			cout << "Program exited. Bye" << endl; //print bye-bye message
		}
		cout << "The rent is RM " << rent << endl; //otherwise show the total rent
	} while (day != 0); //stopping condition. It will check whether day is 0. If it is 0, then the loop will stop

	return 0;
}
