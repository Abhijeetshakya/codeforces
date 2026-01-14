#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    // for finding total distance ; 
    long long l = x[0];
    long long r = x[n-1];
    
    if (s < l) {
        cout << r - s << endl;
    } else if (s > r) {
        // Start is to the right of the range [l, r]
        cout << s - l << endl;
    } else {
        // Start is within the range [l, r]
        // The minimum steps is the cost to travel to one endpoint and then back across the range.
        long long disttol = s - l;
        long long disttor = r - s;
        long long full_range = r - l;
        
        cout << min(disttol, disttor) + full_range << endl;
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0; 
}