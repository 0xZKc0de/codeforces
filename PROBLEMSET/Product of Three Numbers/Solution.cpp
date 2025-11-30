#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                arr.push_back(i);
                n = n / i; 
                if(arr.size() == 2){
                    break; 
                }
            }
        }

        
        if(arr.size() == 2 && n > 1 && n != arr[0] && n != arr[1]){
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[1] << " " << n << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}