#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int n , d ;
    cin >> n >> d ; 
    vector<int> a(n) ; 
    for( int i = 0 ; i < n ; i++){
        cin >> a[i] ; 
    }
    int cnt =0 ; 
    for( int i = 1 ; i < n ; i++){
        if(a[i] <= a[i-1]){
            if(a[i] == a[i-1]) {
                a[i] += d ; 
                cnt++ ; 
                continue ;    
            }else {
                cnt += ((a[i-1] - a[i])/d) +1 ; 
                a[i] += d*(((a[i-1] - a[i])/d) +1) ; 
            }
        }
    }
    cout << cnt << endl ; 
    return 0 ; 
}