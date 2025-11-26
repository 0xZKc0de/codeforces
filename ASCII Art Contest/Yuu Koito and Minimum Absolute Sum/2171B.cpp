#include<iostream>
#include<cmath> 
#include<vector> 

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
		
        vector<int> a(n); 
        for(int i = 0; i < n ; i++)
            cin >> a[i];
        
        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        }
        else if (a[0] == -1) {
            a[0] = a[n-1]; 
        }
        else if (a[n-1] == -1) {
            a[n-1] = a[0]; 
        }
        
        for(int j = 1; j < n-1; j++){
            if(a[j] == -1)
                a[j] = 0;
        }
        cout << abs(a[n-1] - a[0]) << endl;
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << "\n";
    }
    return 0;
}