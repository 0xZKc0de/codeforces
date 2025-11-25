#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<string, int> count_gram(const string& s, int n) {
    
    unordered_map<string, int> gram_counts;
    for(int i = 0; i < n - 1; i++){
        string g = s.substr(i, 2);
        gram_counts[g]++;
    }    
    return gram_counts;
}


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int max_count = 0;
    unordered_map<string, int> counts = count_gram(s, n);

    string gram = "";
    for (const auto& pair : counts) {
        if (pair.second > max_count) {
            max_count = pair.second;
            gram = pair.first;
        }
    }
    cout << gram << "\n";
}