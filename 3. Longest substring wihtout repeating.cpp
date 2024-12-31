class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int mxlen=0;
        unordered_map<char,int>cm;
        int l=0;

        for(int r=0;r<n;r++){
            if(cm.count(s[r])== 0 || cm[s[r]] < l ){
                cm[s[r]]=r;
                mxlen=max(mxlen,r-l+1);
            }
            else{
                l=cm[s[r]]+1;
                cm[s[r]]=r;
            }
        }

        return mxlen;
    }
};