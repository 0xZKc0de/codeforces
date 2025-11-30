#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long count = 0;
    
    long long current_sum = 0;
    
    vector<int> remainder_count(n, 0);
    
    remainder_count[0] = 1;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];

        int remainder = current_sum % n;

        remainder = (remainder + n) % n;

        count += remainder_count[remainder];

        remainder_count[remainder]++;
    }

    cout << count << endl;

    return 0;
}