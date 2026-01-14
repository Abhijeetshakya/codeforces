#include <bits/stdc++.h>
using namespace std  ; 

int main(){
    int t ; 
    cin >> t  ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        vector<int> a(n+1) ;
        int ans = 0 ; 
        int max = 0 ; 
        for( int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
            if(a[i] > max){
                max = a[i] ; 
            }
        } 
        
        vector<int> h(max+1,0) ; 
        for( int i : a){
            h[i]++ ; 
        }
        int hmax = 0 ; 
        for( int i = 1 ; i < max ; i++){
            if(h[i]%i != 0){
                h[i] = 0 ; 
            }
            if( h[i] > hmax){
                hmax = i ; 
            }
        }
        ans = ans+hmax ; 
        int l = 0 ; 
        for( int i = 0 ; i < n ; i++){
            if(a[i] == hmax){
                l = i ; 
            }
        }
        for( int i = l+1 ; i < n ; i++){
            if(h[i] % i == 0 ){
                ans += h[i] ; 
            }
        }
        cout << ans << endl ; 

    }
}