class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        

        while(i<j){
            int first = -1;
            int second = -1;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
               first = i;
            }else{
                i++;
            }

           if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){
              second = j;
            }else{
                j--;
            }
            if(first != -1 && second!= -1 ){
                swap(s[first],s[second]);
                i++;
                j--;
            }

        }

    
        
        return s;
    }
};