class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
    for (int i = 0; i < nums.size(); i++) {
        v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());  // Sort by values

    int s = 0, e = v.size() - 1;
    while (s < e) {
        int sum = v[s].first + v[e].first;
        if (sum == target) {
            return {v[s].second, v[e].second};  // Return original indices
        } else if (sum < target) {
            s++;
        } else {
            e--;
        }
    }
    return {};
    }
};