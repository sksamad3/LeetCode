class Solution {
public:
    bool isPalindrome(int x) {
        long dup = x;
        long ans = 0;

        if(x < 0 ) return false ; 
        while (dup != 0) {
            int digit = dup%10; 
            dup = dup/ 10 ; 

            ans = ans * 10 + digit ; 
        }
        if(ans != x) {
            return false; 
        }
        else{
            return true; 
        }
    }
};