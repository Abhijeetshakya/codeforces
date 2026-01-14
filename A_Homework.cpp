#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        int n ; 
        cin >> n ; 
        string a ; 
        cin >> a ; 
        int m ; 
        cin >> m ; 
        string b ; 
        cin >> b ;  
        string c ; 
        cin >> c ; 
        int cnt = 0 ; 
        for( char x : c){
            if(x =='V'){
                a.insert(0,1,b[cnt]) ; 
                cnt++ ; 
            }else{
                a.push_back(b[cnt]); 
                cnt++ ; 
            }
        }
        cout << a << endl ; 
    }
    return 0 ; 
}