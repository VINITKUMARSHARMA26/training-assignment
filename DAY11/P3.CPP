//program to find the element that appears the maximum number of times in an array using map
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    map<int, int> freq;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement;

    // Find the element with the highest frequency
    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            maxElement = x.first;
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}