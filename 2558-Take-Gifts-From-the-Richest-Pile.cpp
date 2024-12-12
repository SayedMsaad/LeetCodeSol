class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int maxi=INT_MIN;
        int size = gifts.size()-1;
        
        while(k!=0){
            int i =0;
            int pos=0;
            maxi = INT_MIN;
            while(i<=size){
                if(gifts[i]>=maxi){
                    maxi=gifts[i];
                    pos=i;
                    
                }
                i++;
                
            }
            gifts[pos]=floor(sqrt(gifts[pos]));

            k--;
        }
        long long sum=0;
        for(auto it:gifts){
            sum+=it;
        }

        return sum;

    }
};