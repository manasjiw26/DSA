class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> set;
        combineSubset(n,k,1,res,set);
        return res;
    }
    void combineSubset(int n, int k,int index,vector<vector<int>> &res,vector<int> &set){
        if(set.size()>k){return;}
        if(index>n){
            if(set.size() == k){
                res.push_back(set);
            }
            return;
        }
        
        combineSubset(n,k,index+1,res,set);
        set.push_back(index);
        combineSubset(n,k,index+1,res,set);
        set.pop_back();
    }
};