class Solution {
public:
//t.c : 2^n * (n/2) * k
//s.c : k*x
    vector<vector<string>> partition(string s) {

        int n = s.length();

        vector<vector<string>> ans;

        function<void(int,vector<string> &)> f = [&](int idx,vector<string> &v)->void{
            if(idx == n){
                ans.push_back(v);
                return;
            }

            for(int i=idx;i<n;i++){
                string sub = s.substr(idx,i-idx+1);
                string rev_sub = sub;
                reverse(rev_sub.begin(),rev_sub.end());

                if(sub == rev_sub){
                    v.push_back(sub);
                    f(i+1,v);
                    v.pop_back();
                }
            }


        };

        vector<string> temp;
        f(0,temp);
        return ans;
        
    }
};
