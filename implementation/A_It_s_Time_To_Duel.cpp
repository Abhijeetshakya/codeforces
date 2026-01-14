#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        for( int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        int cnt = 0 ; 
        for( int i = 0 ; i < n-1 ; i++){
            
            if((a[i] | a[i+1]) == false ){
                cout << "YES" << endl; 
                break ; 
            }
            cnt++ ; 
        }
        int s = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 1){
                s++ ; 
            }
        }
        if( s == n){
                cout << "YES" << endl;
            }else if(cnt == n-1){
            cout << "NO" << endl ; 
        }
    }
    return 0 ; 
}