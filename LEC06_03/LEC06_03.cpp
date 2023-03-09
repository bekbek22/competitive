#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // define input string
    string input = "";
    string line = "";

    // read in lines of text until EOF is reached
    // while (getline(cin, line)) {
    //     input += line + "\n";
    // }
    getline(cin, input);

    // convert input string to lowercase
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    // define vector to store words
    vector<string> words;

    // split input string into words
    string word = "";
    for (char c : input) {
        if (c == ' ' || c == '.' || c == '"' || c == ':' || c == '\n') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    // handle last word
    if (word != "") {
        words.push_back(word);
    }

    // sort and remove duplicates from words vector
    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());

    // print sorted and unique words
    for (string w : words) {
        cout << w << endl;
    }

    return 0;
}
