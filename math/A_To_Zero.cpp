#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin >> t; 
    for(int j  =0 ;  j < t ; j++){
        int n , k ; 
        cin >> n >> k ; 
        int cnt = 0 ; 
        if(n%2 == 1 & k%2 == 1){
            n-=k ;  
            cnt++  ; 
            int d = k-1 ; 

            cnt = cnt + n%d ;
            n %= d ; 
            if(n) cnt++ ; 
        }

        cout << cnt << endl ; 
    }
    return 0 ; 
}