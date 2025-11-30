#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int i = 0;
	while(a <= b){
		a *= 3;
		b *= 2;
		i += 1;
	}

	cout << i;
}
	
