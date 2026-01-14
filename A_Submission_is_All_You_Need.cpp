#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t ; 
    cin >> t ; 
    for( int i = 0 ; i < t ; i++){
        int n ; 
        cin >> n ; 
        vector<int> a(n) ;
        int sum = 0 ; 
        int z = 0 ; 
        for( int j = 0 ; j < n ; j++){
            cin >> a[j]  ;
            if(a[j] == 0){
                z++ ; 
            }else{
                sum += a[j] ; 
            }
        } 
        cout << sum+z << endl ; 
        
    }
    return 0 ; 
}