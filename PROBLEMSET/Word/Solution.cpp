#include<iostream>
#include<string>
#include<cctype>


using namespace std;
int main(){
    string s;
    int u, l;
    u = 0, l = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }
    }
    if(u > l){
        for(int i = 0 ; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0 ; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}
    