#include <bits/stdc++.h>
using namespace std ; 

int main(){ 
    int t ;
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        for( int i  = 0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        int ans = 0 ; 
        for( int i = 0 ; i < n ; i++){
            for( int k = i+1 ; k < n; k++){
                if( a[i] == a[k] & a[i] != -1 & a[k] != -1 ){
                    ans++ ; 
                    a[i] = -1  ; 
                    a[k] = -1 ; 
                }
            }
        }
        cout << ans << endl ; 
    }
    return 0 ; 
}  