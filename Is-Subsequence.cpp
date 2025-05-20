class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == \\){
            return true;
        }
        int j  =0 ;
        string op = \\;
      for(int i = 0; i < s.size();i++){

        while(j < t.size()){
            if(s[i] == t[j]){
              //  cout << \hi\ << ' ';
                op+= s[i];
                j++;
                break;
            }
            j++;
        }
        if(op == s) return true;
      //  cout << op << ' ';
      }

      return false;
        // return i<s.size()?false:true;
        
    }
};