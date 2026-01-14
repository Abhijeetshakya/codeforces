#include <iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int steps = 0 ; 
    int m = 5 ; 
    while( n != 0){
        if(n>=m){
            n = n - m ; 
            steps++ ; 
        }else {
            m-- ; 
        }
    }
    cout << steps ; 
    return 0 ; 
}