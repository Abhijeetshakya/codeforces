#include <bits/stdc++.h>
using namespace std ; 

int number(string s ){
    int nu = 0 ; 
    int digit = 1000 ; 
    for( char c : s){
        nu +=  (c-'0')*digit ; 
        digit /= 10 ; 
    }
    return nu ;
}

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        string s ; 
        cin >> s ; 
        int num = number(s) ; 
        
    }
    return 0 ; 
}