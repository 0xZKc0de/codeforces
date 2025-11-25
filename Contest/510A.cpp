#include<iostream>

using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int vasya_points = max((int)(3* a / 10), a - (int)(a/250) * c);
    int tie_points = max((int)(3* b / 10), b - (int)(b/250) * d);

    if(vasya_points > tie_points){
        cout << "Misha" << endl;
    }
    else{
        if(vasya_points < tie_points){
            cout << "Vasya" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
}