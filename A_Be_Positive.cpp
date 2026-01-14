#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        int cnt = 0 ; 
        int odd = 0 ; 
        for(int i =0  ; i < n ; i++){
            cin>> a[i] ;
            if(a[i] == 0) cnt++ ; 
            if(a[i] == -1) odd++ ; 
        }
        if(odd%2 == 1){
            cnt += 2 ; 
        }
        cout << cnt << endl ; 
    }
    return 0 ;
}