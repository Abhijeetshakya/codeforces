#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        string s ; 
        cin >> s ; 
        string ans = "" ; 
        int n = s.size() ; 
        for(int i =0 ; i < s.size()-2 ; i++){
            ans.push_back(s[i]) ; 
        }
        ans.push_back('i') ; 
        cout << ans << endl ; 
    }
    return 0; 
}