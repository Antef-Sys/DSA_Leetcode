class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int ans = 0;
        int n = s.size();
        bool isNegtiv = false;

        while(i < n && s[i] == ' ') i++;

        while(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-') isNegtiv = true;
            i++;

            if (i < s.size() && (s[i] == '-' || s[i] == '+')) 
                return 0;
        }

        while(i < n && isdigit(s[i])){
            int digit = s[i] - '0';

            if(ans > (INT_MAX - digit) / 10){
                return isNegtiv ? INT_MIN : INT_MAX;
            }

            ans = ans * 10 + digit;
            i++;
        }
        return isNegtiv ? -ans : ans;
    }
};