#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){

    string message;
    cin >> message;
    vector<char> hello = {'h', 'e', 'l', 'l', 'o'};
    for(int i = 0; i < message.size(); i++){

        if(message[i] == hello[0]){
            hello.erase(hello.begin());
        }
        if(!hello.size()){
            break;
        }
    }

    if(!hello.size()){
        cout << "YES" << endl;
    }
    else    
        cout << "NO" << endl;
    return 0;
}