// fibonacci series
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 10;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      v.push_back(0);
    }
    else if (i == 1) {
      v.push_back(1);
    } else {
      v.push_back(v[i-1] + v[i-2]);
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}
