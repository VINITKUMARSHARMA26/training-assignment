//program to count how many times a number occurs in an array using map   
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
        freq[arr[i]]++;   // Increase the count of the element
    }

    int num;
    cout << "Enter the number to find its occurrences: ";
    cin >> num;

    cout << num << " occurs " << freq[num] << " time(s) in the array." << endl;

    return 0;
}