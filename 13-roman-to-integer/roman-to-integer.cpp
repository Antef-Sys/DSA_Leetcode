class Solution {
public:
 int char2num(char ch){
            switch(ch){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return 0;
            }
        }
    int romanToInt(string s) {
        // unordered_map<char,int>m{
        //     {'I',1},
        //     {'V',5},
        //     {'X',10},
        //     {'L',50},
        //     {'C',100},
        //     {'D',500},
        //     {'M',1000},
        // };
        
        int ans=0;
        for(int i=0; i<s.size();++i){
            if(char2num(s[i]) < char2num(s[i+1]))
            ans=ans-char2num(s[i]);

            else
            ans=ans+char2num(s[i]);
        }
        return ans;
    }
};