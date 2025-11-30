#include<iostream>

using namespace std;
int main(){
    int N, M, S, P;
    cin >> N >> M >> S >> P;
    
    int totat_seconds = (M * 60 + S) * N + (P * (N - 1));
    int minuts = (int) totat_seconds / 60;
    int seconds = totat_seconds - minuts * 60;

    cout << minuts << endl;
    cout << seconds << endl;

    return 0;
}