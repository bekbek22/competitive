#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Map of letters to numbers
string num_map[] = {"ij", "abc", "def", "gh", "kl", "mn", "prs", "tuv", "wxy", "oqz"};

// Recursive function to generate words
void generateWords(vector<string>& res, string digits, string word, int index) {
    // If we have processed all digits, add the word to the results
    if (index == digits.length()) {
        res.push_back(word);
        return;
    }

    // Get the letters corresponding to the current digit
    string letters = num_map[digits[index] - '0'];

    // Loop through all possible letters for the current digit
    for (char c : letters) {
        // Add the current letter to the current word
        string new_word = word + c;
        // Recurse with the remaining digits and the new word
        generateWords(res, digits, new_word, index + 1);
    }
}

int main() {
    // Read input
    string digits;
    int n;
    cin >> digits >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Generate all possible words from the digits
    vector<string> possible_words;
    generateWords(possible_words, digits, "", 0);

    // Sort the possible words and the given words
    sort(possible_words.begin(), possible_words.end());
    sort(words.begin(), words.end());

    // Find the intersection of the possible words and the given words
    vector<string> result;
    set_intersection(possible_words.begin(), possible_words.end(), words.begin(), words.end(), back_inserter(result));

    // Output the result
    if (result.size() == 0) {
        cout << "No solution." << endl;
    } else {
        for (string word : result) {
            cout << word << endl;
        }
    }

    return 0;
}
