#include <iostream>

using namespace std;

void solve() {

    int x1, x2, x3, x4;
    
    cin >> x1 >> x2 >> x3 >> x4;
    
    if(x1 == x2 && x3 == x4 && x1 == x3 && x2 == x3 && x1 == x4 && x2 == x4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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