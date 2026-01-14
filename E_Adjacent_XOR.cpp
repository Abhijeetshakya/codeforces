#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        vector<int> b(n) ; 
        for( int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        for( int i = 0 ; i < n ; i++){
            cin >> b[i]  ; 
        }
        if(a[n-1] != b[n-1]){
            cout << "NO" << endl ; 
        }else if( n == 1 && a[0] == b[0]){
            cout << "YES" << endl; 
        }else{
            for( int i = 0 ; i < n -1; i++){
                if(a[i] != b[i]){
                    a[i] = a[i] ^ a[i+1] ; 
                }
            }
            
            if( a== b){
                cout << "YES" << endl ; 
            }else {
                cout << "NO" << endl ; 
            }
        }
    }
    return 0 ; 
}