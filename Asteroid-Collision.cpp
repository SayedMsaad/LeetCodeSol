class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> ans;
        int size = a.size();

        for (int i = 0; i < size; i++) {
            bool flag =false;
            if (st.empty()) {
                st.push(a[i]);
    } else if(!st.empty() &&(st.top() > 0 && a[i] < 0)){
        cout<<\inside elif\;
        
                while (!st.empty() && st.top() > 0  &&(st.top() < abs(a[i]) || st.top() >= abs(a[i]))) {
                    // if ((st.top() < 0 && a[i] > 0) ||(st.top() > 0 && a[i] < 0)) {
                         cout<<\inside whilef\;
                         cout<<a[i]<<endl;
                        cout<<st.top()<<endl;
                        if (st.top() < abs(a[i])) {
                            flag=true;
                            st.pop();
                        } else if(st.top()>abs(a[i])){
                            flag=false;
                            break;
                        }else {
                            st.pop();
                            flag=false;
                            break;
                        }
                        
                    // }
                    // cout<<st.top()<<endl;
                }
                if(flag){
                    st.push(a[i]);
                }
                // st.push(a[i]);
            }else{
                st.push(a[i]);
            }
        }

        while(!st.empty()){
            cout<<st.top()<<endl;
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};