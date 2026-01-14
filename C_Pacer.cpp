#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n,m ; 
        cin >>n >> m ; 
        int cnt = 0 ; 
        bool check = false  ; 
        while(n--){
            int a, b ; 
            cin>> a >> b ; 
            if(a%2 == 0 & b == 1 ){
                check = !check ; 
            }else if(a%2 != 0 & b  == 0  ){
                check = !check ; 
            }else if(a%2 == 1 & b == 1){
                check = !check ; 
            }else if( a%2 == 0 & b == 0 ){
                check = !check ; 
            }
            if(!check){
                cnt++ ; 
            }

        }
        cout << m-cnt << endl ;
    }
    return 0 ; 
}