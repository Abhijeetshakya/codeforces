#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++ ){
        long long n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        long long a = 0 ; 
        long long b = 0 ; 
        for( char c : s){
            if(c == '-'){
                a++ ; 
            }else b++ ; 
        }
        long long l = 0 ; 
        long long r = 0 ;
        if(a<2 || b<1 || (a+b) < 3){
            cout << 0 << endl ; 
        }else{
             l = a/2 ; 
             r = a-l ; 
             cout << l*b*r << endl ; 
        }

    }

    return 0 ; 
}