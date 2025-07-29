class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto it:nums){
            mp[it]++;
        }


        priority_queue<pair<int,int>> pq;

        for(auto it: mp){
            pq.push({it.second,it.first});
        }

        vector<int> ans;
        for(int i=0;i<k;i++){
            pair<int,int> temp=pq.top();
            
            ans.push_back(temp.second);
            pq.pop();

        }
        return ans;
    }
};