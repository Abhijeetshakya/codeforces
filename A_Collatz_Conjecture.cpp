#include <iostream>

void solve() {
    long long k, x;
    std::cin >> k >> x;

    // To find a possible starting number, we can simply reverse the easiest operation (x / 2) k times.
    // The inverse of dividing by 2 is multiplying by 2.
    for (int i = 0; i < k; ++i) {
        x = x * 2;
    }

    std::cout << x << std::endl;
}

int main() {
    // Fast I/O for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}