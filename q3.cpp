/*
Take the day no and print the corresponding day name.
for 1 print monday
for 2 print tuesday and so on
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the day no: ", cin >> x;
    switch (x)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
        break;
    }
}