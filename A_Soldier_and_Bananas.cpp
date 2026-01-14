#include <iostream>
using namespace std ; 

int main(){
    int n , m , t ; 
    cin >> n >> m >> t ; 
    int cost = 0 ; 
    for(int i = 1 ; i <= t ; i++){
        cost += i*n ; 
    }
    int b = cost - m ; 
    if(b < 0 ){
        cout << 0 ; 
    }else {

        cout << cost-m ; 
    }
    return 0 ; 
}