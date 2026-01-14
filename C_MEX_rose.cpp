#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n , k ; 
        cin >> n >> k ; 
        vector<int> a(n) ; 
        vector<bool> h(n+1,false) ; 
        for(int i= 0 ; i < n ; i++){
            cin>> a[i] ; 
            h[a[i]] = true ; 
        }
        int ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(h[i] == false ) ans++ ; 
       }
       cout << ans << endl ; 
    }
    return 0 ; 
}