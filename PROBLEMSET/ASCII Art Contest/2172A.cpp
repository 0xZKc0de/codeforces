#include<iostream>


using namespace std;
int main(){
	int g, c, l;
	cin >> g >> c >> l;
	int max_n = max(g, max(c, l));
	int min_n = min(g, min(c, l));
	if (max_n - min_n >= 10) {
		cout << "check again" << endl;
	}
	else{
		int middle;
		if ( g >= min(c,l) && g <= max(c,l))
			middle = g;
		else if (c >= min(g,l) && c <= max(g,l))
			middle = c;
		else
			middle = l;
		cout << "final " << middle << endl;

	}
}
