//program to count how many times each word appears in a sentence using map
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    map<string, int> freq;
    string word = "";

    for (int i = 0; i <= sentence.length(); i++) {
        // If current character is a space or end of string
        if (i == sentence.length() || sentence[i] == ' ') {
            if (word != "") {
                freq[word]++;
                word = "";
            }
        }
        else {
            word += sentence[i];
        }
    }

    cout << "\nWord Frequencies:\n";
    for (auto x : freq) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}