class Solution {
public:
    bool valid1(string s){
         int i=0;
        int j=s.size()-1;
        bool flag=false;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(flag==true){
                    return false;
                }
            
                 if(s[i+1]==s[j]){
                    i++;
                    flag=true;
                }
                else if(s[i]==s[j-1]){
                    j--;
                    flag=true;
                }
                // else if(!(i<j-2) || !(i+2<j)){
                //     return true;
                // }
                else{
                    return false;
                }

            }

            
        }

        return true;
    }
    bool valid2(string s){
         int i=0;
        int j=s.size()-1;
        bool flag=false;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(flag==true){
                    return false;
                }
            
                 if(s[i]==s[j-1]){
                    j--;
                    flag=true;
                }
                else if(s[i+1]==s[j]){
                    i++;
                    flag=true;
                }
                // else if(!(i<j-2) || !(i+2<j)){
                //     return true;
                // }
                else{
                    return false;
                }

            }

            
        }

        return true;
    }
    
    
    bool validPalindrome(string s) {
        return (valid1(s) || valid2(s));
    }
};