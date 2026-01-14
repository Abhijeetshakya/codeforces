#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin >> t ; 
    for(int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        for( int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        int max = 0 ; 
        for(int i =0 ; i < n; i++){
            if( a[i] > max) max = a[i] ; 
        }
        vector<int> h(max+1); 
        for( int i = 0 ; i < n ; i++){
            h[a[i]]++ ; 
        }
        sort(h.begin(),h.end()) ; 
        if(h[h.size()-1] > 1){
            cout << "YES\n" ; 
        }else {
            cout << "NO\n" ; 
        }
    }
    return 0 ; 
}