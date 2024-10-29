#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            swap(arr[mini], arr[i]);
        }
    }
}

int main() {
    vector<int> arr = {12, 10, -67, 12, 4, 12};
    selection_sort(arr);
    
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
