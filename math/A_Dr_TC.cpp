#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        if(s.size() == 1 && s[0] == 1){
            cout << 0 << endl ; 
        }else{

            int ans = 0 ;
            int cnt  = 0 ; // zero count 
            for( char c : s ){
                if(c == '1'){
                    ans++ ; 
                }
                if(c == '0') cnt++ ;
                
            }
            if(cnt == 0) ans = s.size() ; 
            cout << ans << endl ; 
        }
    }
    return 0 ; 
}