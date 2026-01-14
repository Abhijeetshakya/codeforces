#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        string out = "" ; 
        for( int i = 0 ; i < 3 ; i++){

            string s ; 
            cin >> s  ;

            out += s[0] ; 

        }
        cout << out  << endl ; 
         
    }

    return 0  ; 
}