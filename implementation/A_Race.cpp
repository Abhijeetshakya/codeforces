#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t  ; 
    cin >> t; 
    for( int j= 0 ; j < t; j++){
        int a ,x ,y ; 
        cin >> a >> x >> y ; 
        int mi = min(x,y) ; 
        int ma = max(x,y) ; 
        if(a > mi && a < ma){
            cout << "NO\n" ; 
        }else cout << "YES\n" ; 
    }
    return 0 ; 
}