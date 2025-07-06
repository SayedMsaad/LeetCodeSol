class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    // unordered_map<int,int> mp;
    unordered_map<int,int> mp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2):nums1(nums1),nums2(nums2) {
        // nums1(this.nums1);
        // nums2(this.nums2);

        // for(auto it:this->nums1){
        //     mp[it]++;
        // }

        for(auto it:this->nums2){
            mp2[it]++;
        }
    }
    
    void add(int index, int val) {
        int arrVal=nums2[index];
        nums2[index]+=val;
        mp2[arrVal]--;
        if(mp2[arrVal]==0) mp2.erase(arrVal);
        mp2[nums2[index]]++;
    }
    
    int count(int tot) {
        int count=0;
        for(int i=0;i<nums1.size();i++){
            int comp=tot-nums1[i];

            if(mp2.find(comp)!=mp2.end() && mp2[comp]>0){
                count+=mp2[comp];
            }
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */