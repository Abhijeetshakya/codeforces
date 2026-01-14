#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        string s ; 
        cin >> s ; 
        int ans = s.size() ;
        for( char c : s ){
            if(c == '1'){
                ans++ ; 
            }
            if( s.size() == 1){
                ans -= 2 ; 
            }
        }
    }
    return 0 ; 
}