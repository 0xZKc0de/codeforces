#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int cur = 1;
    ll ans = 0;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
        if (target >= cur) {
            ans += target - cur;
        } else {
            ans += (ll)n - cur + target;
        }
        cur = target;
    }

    cout << ans << "\n";

    return 0;
}