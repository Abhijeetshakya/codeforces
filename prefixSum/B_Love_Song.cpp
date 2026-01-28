#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int n , q  ; 
    cin >> n >> q ; 
    string s ; 
    cin >> s ; 
    vector<int > a(n+1) ; 
    vector<long long> prefixSum(n+1,0);
    for(int i = 1 ; i <= n ; i++) {
        prefixSum[i] = s[i-1]-'a'+prefixSum[i-1] +1;
    }
    while(q--){
        int l , r ; 
        cin >> l >> r ; 
        long long ans = prefixSum[r]-prefixSum[l-1] ; 
        cout << ans << endl ; 
        
    }

return 0 ; 
}