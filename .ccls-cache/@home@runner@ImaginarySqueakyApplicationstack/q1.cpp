// Write a program that takes an input of age
// and prints if you are adult or not

#include <bits/stdc++.h>
using namespace std;

int main() {
  int age;
  cout << "enter age: ", cin >> age;
  if (age >= 18) {
    cout << "adult";
  } else {
    cout << "not adult";
  }
}