class Solution {
public:
   void solve(string s,string temp,vector<string> &ans){
        if(s==""){
            ans.push_back(temp);
            return;
        }
        char check=s[0];

        if(isalpha(check)){
            string newlower=temp;
            newlower+=tolower(check);
            string newstr=s.substr(1);
            solve(newstr,newlower,ans);

            string newupper=temp;
            newupper+=toupper(check);
            solve(newstr,newupper,ans);
        }else{

            string newstr=temp+check;
            solve(s.substr(1),newstr,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        string temp;

        vector<string> ans;
        solve(s,temp,ans);

        return ans;
    }
};