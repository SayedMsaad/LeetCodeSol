class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>map;
        unordered_map<int,int>map2;
        for(auto a:arr1){
            map[a]++;
        }
        for(auto b:arr2){
            map2[b]++;
        }

        vector<int>sorting;
        vector<int>ans;

        for(int i=0;i<arr2.size();i++){
            int count=map[arr2[i]];
            while(count!=0){
                ans.push_back(arr2[i]);
                count--;
            }

        }

        for(int i=0;i<arr1.size();i++){
            if(map2[arr1[i]]== 0){
                sorting.push_back(arr1[i]);
            }
        }

        sort(sorting.begin(),sorting.end());

        for(auto a:sorting){
            ans.push_back(a);
        }

        return ans;


    }
};