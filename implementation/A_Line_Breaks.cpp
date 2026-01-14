
#include <iostream>
#include <vector>
#include <string>

// Function to solve a single test case
void solve() {
    int n; // Number of words
    int m; // Capacity of the first strip
    std::cin >> n >> m;

    // Read all n words for the current test case
    std::vector<std::string> words(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> words[i];
    }

    int current_length = 0;
    int word_count = 0;

    // Iterate through the words and add them to the first strip if they fit
    for (const std::string& word : words) {
        // Check if adding the next word exceeds the capacity
        if (current_length + word.length() <= m) {
            current_length += word.length();
            word_count++;
        } else {
            // If the word doesn't fit, we can't add any more words
            break;
        }
    }

    // Output the maximum number of words that fit
    std::cout << word_count << std::endl;
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t; // Number of test cases
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}