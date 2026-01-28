#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int n , q  ; 
    cin >> n >> q ;
    vector<int> a(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ; 
    }
    sort(a.begin(),a.end()) ; 
    
    vector<long long> prefixSum(n) ; 
    prefixSum[0] = a[0] ; 
    for(int i = 1 ; i < n ; i++){
       prefixSum[i] = prefixSum[i-1] + a[i] ;  
    }

    for(int i = 0 ; i < q ; i++){
        int x, y ; 
        cin >> x>> y ; 
        long long sum = 0 ; 
        int j = n-x-1 ; 
        if(j <0 ) {
            j = 0 ; 
            cout << prefixSum[y-1]<< endl  ; 
        }else{
            sum = prefixSum[j+y] - prefixSum[j];   
            cout << sum << endl ; 
        }
        
    }

return 0 ; 
}
