class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;  
        for(int i = 0; i < nums.size(); i++) {
            int second = target - nums[i];
            
            if(map.count(second)) {
                return {map[second], i};
            }
            
            map[nums[i]] = i;
        }
        return {};  

        
    //     for (int i = 0; i < nums.size(); i++) {
    //         for (int j = i + 1; j < nums.size(); j++) {
    //             if (nums[i] + nums[j] == target) {
    //                 return {i, j};
    //             }
    //         }
    //     }
    //     return {}; 

    
    }
};