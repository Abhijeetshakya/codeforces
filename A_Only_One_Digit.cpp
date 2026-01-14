#include <bits/stdc++.h>
#include <algorithm>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        int n ; 
        cin >> n ; 
        int digit = 0 ; 
        int m = 1001 ; 
        if(n/10 == 0 ){
            cout << n << endl ;
        }else{

            while(n>0){
                digit = n%10 ; 
                m = min(digit,m) ; 
                n = n/10 ; 
            }
            cout << m << endl ;    
        }
        
    }
    return 0 ; 
}