class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int maxwater=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp < rp){
            long long int w = rp - lp;
            long long int ht = min(height[lp],height[rp]);
            long long int currwater = w * ht;
            maxwater = max(maxwater , currwater);
            height[lp]<height[rp] ? lp++ : rp--;
        }
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int w = j-i;
        //         int ht = min(height[i],height[j]);
        //         int currwater = w * ht;

        //         maxwater=max(maxwater, currwater);

        //     }
        // }
        return maxwater;
    }
};