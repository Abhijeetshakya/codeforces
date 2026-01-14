#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t;  
    cin>> t ; 
    while(t--){
        vector<int> a(3) ; 
        for(int i = 0 ; i < 3 ; i++){
            cin >> a[i] ; 
        }
        sort(a.begin(),a.end()) ; 
        int n = 5 ; 
        while(n){
            if(a[a.size()-1] - a[0] < n){

                a[0] += a[a.size()-1] - a[0] ; 
                n -= a[a.size()-1] - a[0] ; 
            } else if

        }
    }
    return 0 ; 
}