#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int n ; 
        cin >> n ; 
        string m ; 
        cin >> m ; 
        string s = m ; 
        sort(s.begin(),s.end()) ; 
        int i = 0 ; 
        int ans = 0 ; 
        while(s[i] == '0'){
            if(s[i] != m[i]) ans++ ; 
            i++ ; 
        }
        cout << ans << endl ; 
    }
    return 0 ; 
}