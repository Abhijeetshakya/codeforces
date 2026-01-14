#include <iostream>
#include <vector>

using namespace std;

void solve(const vector<int>& nums, int index, 
           vector<int>& currentSubset, vector<vector<int>>& result) {
    
    if (index == nums.size()) {
        result.push_back(currentSubset);
        return;
    }

    for(int i =0 ; i < nums.size() ; i++){

    }
    // Include the current element
    currentSubset.push_back(nums[index]);
    solve(nums, index + 1, currentSubset, result);
    
    
    // Backtrack (Remove the element)
    currentSubset.pop_back();

    // Exclude the current element
    solve(nums, index + 1, currentSubset, result);
}

vector<vector<int>> subsetsRecursive(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    solve(nums, 0, currentSubset, result);
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3};
    vector<vector<int>> allSubsets = subsetsRecursive(numbers);

    for (const auto& subset : allSubsets) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i] << (i == subset.size() - 1 ? "" : ", ");
        }
        cout << "]\n";
    }
    return 0;
}