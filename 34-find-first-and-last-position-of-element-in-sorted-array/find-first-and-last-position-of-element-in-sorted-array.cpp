class Solution { 
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size() - 1;
        int first = -1;
        int last = -1;

        while(s <= e){

            if(first == -1){
                if(nums[s] == target){
                    first = s;
                }
                else{
                    s++;
                }
            }

            if(last == -1){
                if(nums[e] == target){
                    last = e;
                }
                else{
                    e--;
                }
            }

            if(first != -1 && last != -1)
                break;
        }

        return {first,last};
    }
};