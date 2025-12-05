#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int diff_count = 0;
    int last_diff_index = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            diff_count++;
            last_diff_index = i;
        }
    }

    if (diff_count % 2 == 0) {
        cout << "Tie" << endl;
    } else {
        if (last_diff_index % 2 == 0) {
            cout << "Ajisai" << endl;
        } else {
            cout << "Mai" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}