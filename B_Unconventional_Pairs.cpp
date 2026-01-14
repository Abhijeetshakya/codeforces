#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >>n ; 
        vector<int> a(n) ; 
        for(int i =0 ; i < n ; i++){
            cin >> a[i] ; 
        }
        sort(a.begin(),a.end()) ;         
        vector<int> m(n) ; 
        int i = 0 ; 
        int ma = 0 ; 
        while(i<=(n-2)){
            m[i] = abs(a[i]-a[i+1]) ; 
            ma = max(ma,m[i]) ; 
            i+=2 ; 
        }
        cout << ma << endl ; 
    }
    return 0 ; 
}