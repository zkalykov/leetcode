class Solution {
public:
    int maxScore(string s) {
        int mx=-9999;
        int cnt_z=0;
        int cnt_o=count(s.begin(),s.end(),'1');

        for(int i=0;i<s.size()-1;i++){
            cnt_z+=(s[i]=='0');
            cnt_o-=(s[i]=='1');
            mx=max(mx,cnt_z+cnt_o);
        }
        return mx;
    }
};