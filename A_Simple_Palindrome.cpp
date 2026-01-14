#include <iostream>
using namespace std ;
#include <string> 

int main(){
    int n ; 
    cin >> n ; 
    for( int i = 0 ; i < n ; i++){
        int s ; 
        cin >> s ; 
        string p = "aeiou" ; 
        string result = "" ;
        for( int j = 0 ; j < s ; j++){
            result += p[ j % 5 ] ; 
        }
        cout << result << endl ; 
    }
    return 0 ; 
}