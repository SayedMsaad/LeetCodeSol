class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=\\;
        int count=strs[0].size();


        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            for(int j=0;j<count;j++){
                if(s[j]!=strs[0][j]){
                    count=j;
                    break;
                }
            }
        }

        return strs[0].substr(0,count);

    }
};