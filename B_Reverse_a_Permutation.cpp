#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> pos(n + 1);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            int val = n - i;
            if (a[i] != val) {
                int idx = pos[val];
                reverse(a.begin() + i, a.begin() + idx + 1);
                break;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

