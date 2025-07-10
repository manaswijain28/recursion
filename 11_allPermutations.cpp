class Solution {
public:

//t.c: n! * n
//s.c: n + n + n (stack, vector, map)
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        function<void(int,map<int,int> &,vector<int> &)> f = [&](int idx,map<int,int> &mp,vector<int> &temp)->void{

            if(temp.size() == n){
                ans.push_back(temp);
                return;
            }
            for(int i=0;i<n;i++){
                if(mp[nums[i]] == 1){
                    continue;
                }

                mp[nums[i]] = 1;
                temp.push_back(nums[i]);

                f(i+1,mp,temp);

                mp[nums[i]] = 0;
                temp.pop_back();

            }
        };


        vector<int> temp;
        map<int,int> mp;
        f(0,mp,temp);

        return ans;


        
    }
};
