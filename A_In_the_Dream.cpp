#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t; 
    for( int j = 0 ; j < t ; j++){
        int a,b,c,d ; 
        cin >> a >> b >> c >> d ; 
        c = c-a ; 
        d = d-b ; 
        if(a<b){
            swap(a,b); 
        }
        if(c<d ){
            swap(c,d) ; 
        }
        if(b*2+2 >= a & d*2+2 >= c){
            cout << "YES" << endl ;
        }else cout << "NO" << endl ; 
    }
    return 0 ; 
}