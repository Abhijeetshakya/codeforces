#include <bits/stdc++.h>
using namespace std ; 

int main(){
    
    int t ; 
    cin >> t ; 
    for(int j = 0 ; j < t ; j++){

        int n ; 
        cin >> n ; 
        vector<int> grid(2*n) ;
        vector<int> ans(2*n) ;  
        vector<int> given(n*n) ; 
        int gsum = 0 ; 
        for( int i = 0 ; i < 2*n ; i++){
            grid[i] = i+1 ; 
            gsum += grid[i] ; 
        }
        int a = 0 ; 
        for( int i= 0; i < n*n ; i++){
            cin >> given[i] ; 
        }
        int cnt = 1 ; 
        for( int i = 1 ; i <= n*n ; i++){
            if( i <= n){
                ans[cnt] = given[i-1] ; 
                a += ans[cnt] ; 
                cnt++ ; 

            }
            if(n%i == 0 ){
                ans[cnt] = given[i-1] ;  
                a += ans[cnt] ; 
                cnt++ ; 
            }
            cout << ans[i] << " " ; 
        }
        ans[0] = gsum - a; 
        for( int i = 0 ; i < n*n ; i++){
            cout << ans[i] << " " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}