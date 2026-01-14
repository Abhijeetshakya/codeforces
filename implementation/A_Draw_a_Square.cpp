#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin >> t ;
    for(int j = 0 ; j < t ; j++){
        int l , r , d , u  ; 
        cin >> l >> r >> d >> u ; 
        if(l == r & r== d & d == u & u == l ){
            cout << "Yes\n" ; 
        }else cout << "No\n" ; 
    }
    return 0 ; 
}