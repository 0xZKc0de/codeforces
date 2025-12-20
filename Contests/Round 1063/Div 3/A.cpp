#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> array;
    int element;
    int count = 0;
    int count_neg = 0;
    for(int i = 0; i < n; i++){
        cin >> element;
        if(element == 0){
            count++;
        }
        else if(element == -1){
            count_neg += 1;
        }
    }
    if(count_neg % 2 == 0)
        cout << count << endl;
    else
        cout << count+2 << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}