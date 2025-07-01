class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs.back();

        int i=0;
        while(i < first.size() && first[i] == last[i]){
            i++;
        }

        // for(int i=0;i<strs[0].length();++i){
        //     char ch = strs[0][i];

        //     for(int j=1;j<strs.size();++j){
        //         if(i>=strs[j].size() || strs[j][i] != ch){
        //             return strs[0].substr(0,i);
        //         }
        //     }
        // }
        return first.substr(0,i);
    }
};