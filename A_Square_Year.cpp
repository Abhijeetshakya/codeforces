#include <bits/stdc++.h>
using namespace std ; 

int check(string s ){
    int nu = 0 ; 
    int digit = 1000 ; 
    for( char c : s){
        nu +=  (c-'0')*digit ; 
        digit /= 10 ; 
    }
    int root = sqrt(nu) ;
    if(root*root != nu) return -1 ; 
    if(root*root == nu) return root ; 
}

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 
        int ans = check(s) ;
        if(ans == -1){
            cout << -1 << endl ; 
        }else {
            cout << "0 " <<  ans << endl ; 
        }

    }
    return 0 ; 
}