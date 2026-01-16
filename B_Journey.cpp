#include <bits/stdc++.h>
using namespace std ; 

int  solve(vector<long long> &a , long long  n){
    int ans = 0 ; 
    int i = 0 ; 
    while(n>0){
        n -= a[i] ;
        i++ ;
        ans++ ;  
    }

    return ans ; 
}

int main(){

    int t ;
    cin >> t ; 
    while(t-- ){
        long long n ; 
        cin >> n ; 
        vector<long long> a(3) ;
        cin >> a[0]  ; 
        cin >> a[1] ; 
        cin >> a[2] ; 
        int total = a[0] + a[1]+a[2] ; 
        int cycles = n/total ; 
        int dist = cycles*total  ;
        if(dist == n) {
            cout << cycles*3 << endl ; 
        }else{
            int rd = n - dist ;  
            cout << cycles*3 + solve(a,rd) << endl ; 
        }
    }
return 0 ; 
}