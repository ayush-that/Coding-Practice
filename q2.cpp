/*
A school has the following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cout << "enter marks: ", cin >> x;
  if (x <= 24)
  {
    cout << "F";
  }
  else if (x < 45)
  {
    cout << "E";
  }
  else if (x < 50)
  {
    cout << "D";
  }
  else if (x < 60)
  {
    cout << "C";
  }
  else if (x < 80)
  {
    cout << "B";
  }
  else if (100 < x)
  {
    cout << "A";
  }
}