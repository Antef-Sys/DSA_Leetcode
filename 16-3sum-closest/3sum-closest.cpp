class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closestsum=100000;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int s=i+1;
            int e=n-1;
            while(s<e){
                int sum=nums[i]+nums[s]+nums[e];
                if(abs(target-sum) < abs(target-closestsum))
                 closestsum=sum;

                else if(sum<target)
                 s++;
                else 
                 e--;
            }
        }
        return closestsum;
    }
};