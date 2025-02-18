class Solution {
public:
    bool isPalindrome(string s) {
        // string str=\\;
        // for(char ch:s){
        //     str+=tolower(ch);
        // }
            string st=\\;
            for(char ch:s){
                if(isalpha(ch)){
                    st+=tolower(ch);
                }
                else if(isdigit(ch)){
                    st+=tolower(ch);
                }
            }

        int i=0;
        int j=st.size()-1;

        while(i<j){
            if(st[i]!=st[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;



    }
};