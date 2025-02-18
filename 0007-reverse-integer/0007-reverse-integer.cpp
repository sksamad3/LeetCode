class Solution {
public:
    int reverse(int x) {
        int dup = x, ans = 0;
        while (dup != 0) {
            int digit = dup % 10;
            dup = dup / 10;

            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }   
             ans = ans * 10 + digit;
        }
        return ans ; 
    }
};