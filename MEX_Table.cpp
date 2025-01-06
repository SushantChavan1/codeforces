#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n , m ,t;
    cin >> t;
    for(int i = 1; i <= t; ++i){
        
        cin >> n >> m;
        cout << max(n , m)+1 << endl;
    }
    return 0;
}