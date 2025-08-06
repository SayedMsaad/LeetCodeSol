class Solution {
public:
    void build(int i,int l,int r,vector<int> &segTree,vector<int> &nums){
        if(l == r){
            segTree[i] = nums[r];
            return;
        }
        int mid = (l+r)/2;

        build(2*i+1,l,mid,segTree,nums);

        build(2*i+2,mid+1,r,segTree,nums);

        segTree[i] = max(segTree[2*i+1],segTree[2*i+2]);
    }

    bool find(int val,int i,int l,int r,vector<int> &segTree){

        if(segTree[i]<val){
            return false;
        }
        if(l==r){
            segTree[i] = -1;
            return true;
        }

        int mid = l+(r-l)/2;
        bool ans=false;
        if(segTree[2*i+1]>=val){
           ans =  find(val,2*i+1,l,mid,segTree);
        }else{
            ans =  find(val,2*i+2,mid+1,r,segTree);
        }

        segTree[i]=max(segTree[2*i+1],segTree[2*i+2]);
        return ans;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       vector<int> segTree(baskets.size()*4,-1); 
       build(0,0,baskets.size()-1,segTree,baskets);
        int count=0;
       for(int i=0;i<fruits.size();i++){
            int val = fruits[i];
            if(!find(val,0,0,baskets.size()-1,segTree)){
                count++;
            }
       }


        return count;

    }
};