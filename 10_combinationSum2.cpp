class Solution {
public:

    //t.c: 2^n * k
    //s.c: k*x
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());

        function<void(int,int,vector<int> &)> f = [&](int idx,int sum,vector<int> &temp)->void{
            if(sum == target){
                ans.push_back(temp);
                return;

            }

            for(int i=idx;i<n;i++){
                if(i!=idx && candidates[i]==candidates[i-1]){
                    continue;
                }

                if((sum+candidates[idx]) > target){
                    break;
                }

                temp.push_back(candidates[i]);
                f(i+1,sum+candidates[i],temp);
                temp.pop_back();

            }

        };
        vector<int> temp;

        f(0,0,temp);

        return ans;
        
    }
};
