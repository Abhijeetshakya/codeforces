#include <iostream>

void solve() {
    long long a, b, c;
    std::cin >> a >> b >> c;

    long long sum = a + b + c;

    if (sum % 3 != 0) {
        std::cout << "NO\n";
        return;
    }

    long long target = sum / 3;

    if (target < b) {
        std::cout << "NO\n";
        return;
    }

    std::cout << "YES\n";
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