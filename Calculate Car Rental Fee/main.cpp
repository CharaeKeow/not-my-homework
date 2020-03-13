#include <iostream>
using namespace std;

int main() {

	int day = 7;
	int rent = 0;

	if (day == 1) {
		rent += 100;
	}
	else if (day == 2) {
		rent += 100 + 70;
	}
	else if (day == 3) {
		rent += 100 + 70 + 70;
	}
	else if (day == 4) {
		rent += 100 + 70 + 70 + 70;
	}
	else if (day >= 5) {
		day -= 4;
		rent += 310 + (50 * day);
	}

	cout << rent << endl;

	return 0;
}