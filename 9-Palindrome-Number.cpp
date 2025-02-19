class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long long rev=0;
        while(temp!=0){
            int dig = temp%10;
            rev=rev*10 + dig;
            temp=temp/10;
        }

        if(rev==x){
            return true;
        }
        return false;
    }
};