#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t; 
    cin >> t;  
    while(t--){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        bool istrue = true ; 
        for(int i = 1;  i < n ; i++){
            if(a[i]%2 == 0 && a[i-1]%2 == 0){
                istrue = false ; 
                break ; 
            }
            if(a[i]%2 == 1 && a[i-1]%2 == 1){
                istrue = false ; 
                break ; 
            }
        }
        if(istrue){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
    }

return 0 ; 
}