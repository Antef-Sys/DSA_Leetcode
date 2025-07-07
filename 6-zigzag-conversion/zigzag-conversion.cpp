class Solution {
public:
    string convert(string s, int numRows) {
    //     int n = s.size();
    //     if ( n == 1 || n <= numRows) return s;

    //     string ans = "";
    //     int i = 0;
    //     while(i < n){
    //         ans += s[i];
    //         i += (numRows-1)*2;
    //     }
    //    for(int j = 1; j <= numRows-2; j++){
    //         i=j;
    //         while(i < n){
    //             ans += s[i];
    //             i += (numRows - (j+1))*2;
    //             if(i < n){
    //                 ans += s[i];
    //             }
    //             i += j*2;
    //         }
    //    }

    //    i = numRows - 1;
    //    while(i < n){
    //         ans += s[i];
    //         i += (numRows-1)*2;
    //     }
    //     return ans;

     if (numRows == 1 || s.size() <= numRows) return s;

        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;

            // change direction at top or bottom row
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            currentRow += (goingDown ? 1 : -1);
        }

        // combine all rows
        string ans = "";
        for (string& row : rows) {
            ans += row;
        }

        return ans;
    }
};