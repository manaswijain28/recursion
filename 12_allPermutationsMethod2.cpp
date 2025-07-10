class Solution {
public:

//t.c: n! * n
//s.c: n 
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        function<void(int,vector<int> &)> f = [&](int idx,vector<int> &v)->void{
            if(idx == n){
                ans.push_back(v);
                return;
            }

            for(int i=idx;i<n;i++){
                swap(v[idx],v[i]);
                f(idx+1,v);
                swap(v[idx],v[i]);
            }
        };

        f(0,nums);
        return ans;
    }
};
