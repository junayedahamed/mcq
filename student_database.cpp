#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string name[n];
    int class_n[n];
    int age[n];

    int rowid[n];
    long long int number[n];
    int temp;
    long int roll[n];
    bool checker = false;

    for (int i = 1; i <= n; i++)
    {
        cout << "what is your name?"
             << "\t";
        cin >> name[i];
        cout << "What is your age?"
             << "\t";
        cin >> age[i];
        cout << "What is your class?"
             << "\t";
        cin >> class_n[i];
        cout << "What is your roll?"
             << "\t";
        cin >> roll[i];

    func:
        cout << "What is your unid"
             << "\t";
        cin >> number[i];
        for (int j = 1; j < i; j++)
        {
            if (number[j] == number[i])
            {

                cout << "Your entered ID is already registered" << endl;
                goto func;
            }
        }

        system("clear");
        // cout << roll[i];
    }
    cout << " Name\t\t class\t age\t roll\tuid" << endl
         << endl;
    for (int t = 1; t <= n; t++)
    {
        cout << name[t] << "\t\t" << class_n[t] << "\t" << age[t] << "\t" << roll[t] << "\t" << number[t] << endl;
    }
    cout << endl;
choich:
    cout << "Enter your ID: " << endl;
    cin >> temp;
    for (int y = 1; y <= n; y++)
    {
        if (temp == number[y])
        {
            cout << name[y] << "\t\t" << class_n[y] << "\t" << age[y] << "\t" << roll[y] << "\t" << number[y] << endl;
            break;
        }
    }
    cout << "\nAgain search by ID?\n 1/0\n"
         << endl;
    cin >> temp;
    if (temp == 1)
    {
        goto choich;
    }
    else
    {
        return 0;
    }

    return 0;
}