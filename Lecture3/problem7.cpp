#include <iostream>
using namespace std;

int main()
{
	int max, secondMax, x;
	cout << "Enter test Scores: " << endl;
	cin >> x;
	max = x;
	secondMax = 0;

	while (cin.peek() != '\n')
	{
		cin >> x;
		if (x > max)
		{
			secondMax = max;
			max = x;

		}
		else if (x > secondMax)
		{
			secondMax = x;
		}

	}
	cout << "Max " << max << " and second max is " << secondMax << endl;
	return 0;
}
