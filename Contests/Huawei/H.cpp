#include <iostream>

using namespace std;

int main() {
    long long w, h, d, n;
    cin >> w >> h >> d >> n;

    long long numW = 1;
    long long numH = 1;
    long long numD = 1;

    long long remainingN = n;


    for (long long i = 2; i * i <= remainingN; i++) {
        while (remainingN % i == 0) {
            if (w % (numW * i) == 0) {
                numW = numW * i;
            } 
            else if (h % (numH * i) == 0) {
                numH = numH * i;
            } 
            else if (d % (numD * i) == 0) {
                numD = numD * i;
            } 
            else {

                cout << -1 << endl;
                return 0;
            }
            remainingN = remainingN / i;
        }
    }

    if (remainingN > 1) {
        if (w % (numW * remainingN) == 0) {
            numW = numW * remainingN;
        } 
        else if (h % (numH * remainingN) == 0) {
            numH = numH * remainingN;
        } 
        else if (d % (numD * remainingN) == 0) {
            numD = numD * remainingN;
        } 
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << numW - 1 << " " << numH - 1 << " " << numD - 1 << endl;

    return 0;
}