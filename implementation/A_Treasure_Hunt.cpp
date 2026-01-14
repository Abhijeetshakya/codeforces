/*#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int j = 0 ; j < t ; j++){
        int x,y,a ; 
        cin >> x >> y >> a ; 
        int l = 0 ; 
        bool turn = false ; 
        while( true ){
            if(!turn){
                l += x ; 
                turn = !turn ; 
                if(l > a){
                    cout << "NO" << endl ; 
                    break ; 
                }
            }else {
                l += y ; 
                turn = !turn ; 
                if(l > a){
                    cout << "YES" << endl ; 
                    break ;
                }
            }
            
        }
    }
    return 0 ; 
}*/
#include <iostream>

void solve() {
    long long x, y, a;
    std::cin >> x >> y >> a;
    
    // Calculate the number of full two-day cycles
    long long cycles = a / (x + y);
    
    // Calculate the depth dug in these full cycles
    long long current_depth = cycles * (x + y);
    
    // Check if Little B can dig the remaining depth on his next turn
    if (current_depth + x > a) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}