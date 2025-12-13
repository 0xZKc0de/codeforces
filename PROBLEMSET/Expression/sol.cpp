#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;
int main(){
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int result;
    vector<int> v;
    result = a * b * c;
    v.push_back(result);
    result = a * b + c;
    v.push_back(result);
    result = a + b * c;
    v.push_back(result);
    result = a + b + c;
    v.push_back(result);
    result = (a + b) * c;
    v.push_back(result);
    result = a * (b + c);
    v.push_back(result);
    auto it = max_element(v.begin(), v.end()); 
        
    cout << *it << endl;
    
    return 0;
}