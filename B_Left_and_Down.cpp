#include <bits/stdc++.h>
using namespace std ; 
long long gcd(int a , int b ){
    if(b == 0 ){
        return a ; 
    }
    return gcd(b, a%b) ; 
}

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        long long a , b, k ; 
        cin >> a >> b >> k ; 
        if(a>b){
            swap(a,b) ; 
        }
        long long  g =  gcd(a,b) ; 

        if( a/g <= k && b/g <=k ){
            cout << 1 << endl ; 
        }else {
            cout << 2 << endl ; 
        }

    }
    return 0 ; 
}
