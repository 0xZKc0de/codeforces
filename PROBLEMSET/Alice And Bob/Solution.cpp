#include <iostream>
#include <vector>

using namespace std;
void solve() {
    int n;
    long long a;
    if (!(cin >> n >> a)) return;

    int left_count = 0;
    int right_count = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < a) {
            left_count++;
        } else if (x > a) {
            right_count++;
        }
    }

    if (left_count >= right_count) {
        cout << a - 1 << "\n";
    } else {
        cout << a + 1 << "\n";
    }
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