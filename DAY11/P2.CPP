//program to count how many times character occurs in a string using map   
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    cout << "\nCharacter Frequencies:\n";
    for (auto x : freq) {
        cout << "'" << x.first << "' : " << x.second << endl;
    }

    return 0;
}