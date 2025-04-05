#define MOD 1000000007
class Solution {
public:
    void nsefn(vector<int>& arr,int size, vector<int> &nse){
        stack<int>st;
        
        for(int i=size-1;i>=0;i--){
             if(st.empty()){
                nse[i]=-1;
             }else{
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                }
                if(st.empty()){
                    nse[i]=-1;
                }else{
                    nse[i]=st.top();
                }
             }
             st.push(i);
        }

    }
    void psefn(vector<int>& arr,int size, vector<int> &pse){
        stack<int>st;
        
        for(int i=0;i<size;i++){
             if(st.empty()){
                pse[i]=-1;
             }else{
                while(!st.empty() && arr[st.top()]>arr[i]){
                    st.pop();
                }
                if(st.empty()){
                    pse[i]=-1;
                }else{
                    pse[i]=st.top();
                }
             }
             st.push(i);
        }

    }
    int sumSubarrayMins(vector<int>& arr) {
        int size=arr.size();
        vector<int> nse(size);
        vector<int> pse(size);

        psefn(arr,size,pse);
        nsefn(arr,size,nse);
        long long ans=0;
        long long next=0;
        long long pre=0;
        for(int i=0;i<size;i++){
            if(nse[i]==-1){
                next=size-i;
            }else{
                next=nse[i]-i;
            }
            if(pse[i]==-1){
                pre=i+1;
            }else{
                pre=i-pse[i];
            }

            ans=(ans+(((next*pre)%MOD*arr[i])%MOD))%MOD;
        }

        return ans;
    }
};