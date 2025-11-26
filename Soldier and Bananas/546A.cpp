#include<iostream>

using namespace std;
int main(){
	int k, n, w;
	cin >> k >> n >> w;
	int result = k * (w * (w + 1)/2);
	if ( result <= n){
		cout << 0 << endl;
	}
	else{
		cout << result - n << endl;
	}
}
