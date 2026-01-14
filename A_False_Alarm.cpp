#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        int n , x ; 
        cin  >> n >> x ;
        vector<int> doors(n) ; 
        for( int i = 0 ; i < n ; i++){
            cin >> doors[i] ; 
        }
        int l = 0 ;  
        int r = n-1 ; 
        int s = -1 ; 
        int e = -1 ; 
        for( int j = 0 ; j < n ; j++){
            if(doors[j] == 1 && s == -1 ){
                s = j ; 
            }
            if(doors[j] == 1){
                e = j ; 
            }
        }
        if(e-s < x){
            cout << "YES" << endl ; 
        }else cout << "NO" << endl ; 
    }
    return 0 ; 
}