#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
int main()
{
	char input1, input4, input2, input3;
	float plus = 0, result_s = 0;

	char check;
	char input;
	int last = 0;
	int cc = 0;
	int mc = 0;
	int ag = 0; // ag= Ans given

	float minus = 0;
	vector<float> result; // for  storing all result

	cout << "How many question do you have on Your paper: " << endl;
	cin >> last;

	// junayed input the answer by listing

	char correct_value[last];

	cout << "Please enter correct answers: " << endl;

	for (int i = 1; i <= last; i++)
	{
		cout << i << ":";
		cin >> correct_value[i];
		cout << endl;
	}

	// friend asked
	// system("clear");
	system("cls");

	cout << "Thanks for input" << endl;

	// fun is a goto function

fun:
{

	cout << "Enter the answer that given by Student in paper: " << endl;

	for (int i = 1; i <= last; i++)
	{

		cout << i << ":";
		cin >> input;
		cout << endl;
		if (input > 'd') // this  mens student did not answered that question
		{
			continue;
		}

		if (input == correct_value[i]) // cheak point wheater answer correct or not
		{
			ag++;

			plus++;
			cc++;
		}
		else
		{
			ag++;
			minus = minus - .25;
			mc++;
		}
	}
	cout << "Total answered question: " << ag << endl
		 << endl;
	cout << "Correct answer given by Student " << cc << endl
		 << endl;
	cout << "!!!Wrong  answer given by Student " << mc << endl;
	cout << "Your Result: ";
	cout << plus + minus << endl;
	result_s = plus + minus;
	result.push_back(result_s); // storing result on a storage name result[]

	cout << "Check antother paper Y/N" << endl;
	cout << "Or to check result list press R/r(!!! Recomended to checck result after checking all paper !!!): ";
	cin >> check;

	if (check == 'Y' || check == 'y')

	{
		ag = 0;
		plus = 0;
		cc = 0;
		mc = 0;
		minus = 0;
		result_s = 0;
		system("cls"); // if your machine is windows then it's ok otherwise comment it
		// system("clear"); //if you using mac or linux machine then uncomment it
		goto fun;
	}
	if (check == 'r' || check == 'R')
	{
		system("cls"); // if your machine is windows then it's ok otherwise comment it
		cout << "\t\t\t"
			 << "Your result list: " << endl;
		for (int i = 0; i < result.size(); i++)
		{
			cout << "Paper " << i << " :" << result[i] << endl;
		}
		return 0;
	}
	if (check == 'n' || check == 'N')
	{
		system("cls"); // if your machine is windows then it's ok otherwise comment it
		cout << "\t\t\t"
			 << "Your result list: " << endl;
		for (int i = 0; i < result.size(); i++)
		{
			cout << "Paper " << i + 1 << " :" << result[i] << endl;
		}
		return 0;
	}
}

	return 0;
}
