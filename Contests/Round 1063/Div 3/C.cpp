#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    
    int cnt_k = 0;
    vector<char> exists(k, 0);
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == k) {
            cnt_k++;
        } else if (x < k) {
            exists[x] = 1;
        }
    }
    
    int missing = 0;
    for (int i = 0; i < k; ++i) {
        if (!exists[i]) {
            missing++;
        }
    }
    
    cout << max(missing, cnt_k) << "\n";
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