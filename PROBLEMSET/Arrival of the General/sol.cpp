#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n ; i++){
        cin >> array[i];
    }
    
    int max = 0;
    int min = array[0];
    int index_max = 0, index_min = 0;

    for(int i = n - 1; i >= 0 ; i--){
        if(array[i] >= max){
            max = array[i];
            index_max = i;
        }
    }

    int i_max = index_max;

    while (i_max > 0) {
        swap(array[i_max], array[i_max - 1]);
        i_max--;
    }
    
    for(int i = 0; i < n ; i++){
        if(array[i] <= min){
            min = array[i];
            index_min = i;
        }
    }
    
    int result = (n - 1 - index_min) + (index_max);
    
    cout << result << endl;
    return 0;
}