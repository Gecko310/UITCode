//https://leetcode.com/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=0;
        if(s.size()<t.size()){
            for(int i=0;i<t.size();i++){
                n+=t[i];
            }
            for(int i=0;i<s.size();i++){
                n-=s[i];
            }
            
        }
        else{
            for(int i=0;i<s.size();i++){
                n+=s[i];
            }
            for(int i=0;i<t.size();i++){
                n-=t[i];
            }
            
        }
        
        
        return n;
    }
};
