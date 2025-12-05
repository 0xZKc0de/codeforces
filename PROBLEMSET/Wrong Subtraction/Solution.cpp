#include <iostream>

using namespace std;

void solve() {
    long long n; 
    int k;       
    cin >> n >> k;
    while(k--){
        if(n % 10 == 0){
            n = n / 10;
        }
        else{
            n = n - 1;
        }
    }
    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}