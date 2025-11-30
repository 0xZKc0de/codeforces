#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<char, int> count_characters(const string& s) {
    
    unordered_map<char, int> char_counts;
    for (char c : s) {
        char_counts[c]++;
    }
    
    return char_counts;
}


int main() {

    int n_test;
    cin >>n_test;
    int n;
    string s;
    for (int i = 0; i < n_test; i++) {
        cin >> n >> s;

        unordered_map<char, int> counts = count_characters(s); 
        int max_count = 0;
        char character = '\0';
        for (const auto& pair : counts) {
            if (pair.second > max_count) {
                max_count = pair.second;
                character = pair.first;
            }
        }

        if (character != s.back()){
            cout << n - counts[s.back()] << endl;
        } else {
            cout << n - max_count << endl;
        }
    }
    
    return 0; 
}