/*
 * Here the comment section
 * Happy debugging, suckers!
 */
#include <iostream>

using namespace std;

int main()
{
	int a, b, sum = 0;


	cout << "Enter beginning and end of the range." << endl;
	cin >> a >> b;

	while (a <= b)
	{
		if (a%2 == 1)
		{
			sum += a;
		}

		a++;

	}
	cout << "Result is " << sum << endl;


	return 0;
}
