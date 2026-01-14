#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n; 
        cin >> n ; 
        int odd= 0 ; 
        vector<int> a(n) ; 
        vector<int> o(n) ; 
        int max_odd = 0 ; 
        long long  sum= 0 ; 
        for(int i=0 ; i < n ; i++){
            cin>> a[i] ;
            if(a[i]%2 == 1){
                o[i] = a[i] ; 
                odd++ ; 
            } 
            if(a[i]%2 == 0 ) sum += a[i] ; 
        }
        sort(o.begin(),o.end()) ; 
        int idx = o.size()-1 ; 
        bool check = false ; 
        if(odd == 0) check = true ; 
        while(odd){
            if(odd%2 == 1){
                sum += o[idx--] ; 
            }
            odd--; 
        }
        if(check){
            cout << 0 << endl;  
        }else{
            cout << sum << endl ; 
        }
    }
    return  0 ; 
}