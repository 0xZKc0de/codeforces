#include<iostream>
#include<cctype>


using namespace std;

int main(){
	string input;
	cin >> input;
	input[0] = static_cast<char>(toupper(input[0]));

	cout << input << endl;
}
