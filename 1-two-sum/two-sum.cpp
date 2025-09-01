class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            // We start the inner loop from i + 1 to avoid using the same element twice
            // and to avoid checking the same pair in reverse.
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the sum of the two elements equals the target.
                if (nums[i] + nums[j] == target) {
                    // If a solution is found, return a vector containing the two indices.
                    return {i, j};
                }
            }
        }
        return {}; 
    }
};