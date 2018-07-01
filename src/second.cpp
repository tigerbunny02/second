#include <iostream>

using namespace std;

int main() {

	const unsigned short MINUTE = 60;
	const unsigned short HOUR = 60;
	const unsigned short DAY = 24;
	unsigned long long days;

	cout << "Please, enter number of days to calculate seconds (followed by 'enter'):" << endl;

	cin >> days;

	cout << "result is: " << days * MINUTE * HOUR * DAY << "!\n";

	return 0;
}
