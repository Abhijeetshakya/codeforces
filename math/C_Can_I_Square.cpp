#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        long long  sum = 0 ; 
        int sq = 0 ; 
        for(int i = 0 ; i < n ; i++){
            cin>>a[i] ;
            
            sum += a[i] ; 
        }
        if(sq*sq == sum){
            cout << "YES\n" ; 
        }else {
            cout <<"NO\n" ; 
        }

    }
    return 0 ; 
}