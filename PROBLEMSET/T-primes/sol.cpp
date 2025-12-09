#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 1000001;
bool is_prime[MAX];

void sieve() {
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false; 

    for (int p = 2; p * p < MAX; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX; i += p)
                is_prime[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(); 
    int t;
    cin >> t;
    
    while(t--) {
        long long x;
        cin >> x;
        
        long long root = sqrt(x);
        
        if (root * root == x && is_prime[root]) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}