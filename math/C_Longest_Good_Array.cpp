#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int l ,r ; 
        cin >> l >> r ; 
        int ans = 1 ; 
        int i = 1 ; 
        while(l<r){
            l += i ; 
            i++ ; 
            if(l<=r)ans++ ; 
        }
        cout << ans << endl ; 
    }

return 0 ; 
}