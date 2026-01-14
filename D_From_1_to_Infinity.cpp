#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        long long k ; 
        cin >> k ; 
        long long sum = 0 ; 
        
        for( int i = 1 ; i <= k ; i++){
            sum += k ;
        }
        cout << sum << endl ; 
    }
    return 0 ; 
}