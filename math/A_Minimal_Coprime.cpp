#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ;
    for( int j =0 ; j < t ; j++){
        int a , b ; 
        cin >> a >> b ; 
        if( a == 1 & b == 1){
            cout << 1 << endl ; 
        }else{
            cout << b-a << endl ; 
        }
    }
    return 0 ; 
}
