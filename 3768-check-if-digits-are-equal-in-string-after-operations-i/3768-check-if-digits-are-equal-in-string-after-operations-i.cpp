class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            
            int n = s.size(); 
            string temp = ""; 
            
            for(int i = 0 ; i<n-1; i++){
                temp+=(( s[i] - '0')+( s[i+1] - '0'))% 10 +'0';
            }
            
            s = temp ; 
        }
return (s[0]== s[1] )  ; 
      
    }
};