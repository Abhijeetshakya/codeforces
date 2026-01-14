#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        long long n, m,x,y ; 
        cin >> n >> m >> x >> y; 
        vector<long long > h(n) ; 
        vector<long long> v(m) ; 
        long long  ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
            cin >> h[i] ; 
        }
        for(int i= 0 ; i < m ; i++){
            cin >> v[i] ; 
        }
        cout << n+m << endl ; 

    }
    return 0 ; 
}

