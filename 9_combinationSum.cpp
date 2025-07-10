class Solution {
public:

    //t.c: 2^t * k
    //s.c: k*x
    //k = average length of a combination
    //x = x combinations
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;

        function<void(int,int,vector<int> &)> f = [&](int idx,int sum,vector<int> &v)->void{
            if(idx == n){
                if(sum == target){
                    ans.push_back(v);
                    return;


                }else{
                    return;
                }
            }

            if((sum+candidates[idx])<=target){
                v.push_back(candidates[idx]);
                f(idx,sum+candidates[idx],v);
                v.pop_back();
            }

            f(idx+1,sum,v);

        };

        vector<int> temp;

        f(0,0,temp);
        return ans;
        
    }
};
