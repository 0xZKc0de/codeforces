#include<iostream>

using namespace std;
int main(){
    int number;
    cin >> number;
    int count = 0;
    while(number > 5){
        count += 1;
        number -= 5;
    }


    if(number != 0){
        count += 1;
        cout << count << endl;
    }
    else{
        cout << count << endl;
    }
}