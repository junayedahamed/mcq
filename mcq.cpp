#include <iostream>
using namespace std;
int main()
{
	char input1, input4, input2, input3;
	float plus = 0;

	char input;
	int last;
	int cc = 0;
	int mc = 0;

	float minus = 0;

	cout << "Hey Enter The Answer: First How many answer you want to input?" << endl;
	cin >> last;

	// junayed input the answer by listing

	char correct_value[last];

	for (int i = 1; i <= last; i++)
	{
		cout << i << ":";
		cin >> correct_value[i];
		cout << endl;
	}

	// friend asked
	system("clear");

	cout << "Thanks for input" << endl;

	for (int i = 1; i <= last; i++)
	{

		cout  << i << ":" << endl;
		cin >> input;
		if (input == correct_value[i])
		{

			plus++;
			cc++;
		}
		else
		{
			minus = minus - .25;
			mc++;
		}
	}
	cout << " Your correct answer is" << cc << endl;
	cout << " Your wrong answer is" << mc << endl;
	cout << "Your Answer is" << endl;
	cout << plus + minus << endl;

	return 0;
}
}
