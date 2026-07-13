class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        if(n <2){
            return {1};
        }
        vector<int> leftmul,rightmul;
        leftmul.push_back(1);
        rightmul.insert(rightmul.begin(),1);
        for(int i = 1;i<nums.size();i++){
            
                leftmul.push_back(leftmul.back()*nums[i-1]);
                rightmul.insert(rightmul.begin(),rightmul.front()*nums[n-i]);
            
        }

        for(int i=0;i<n;i++){
            cout << leftmul[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout << rightmul[i];
        }
        
        vector<int> res;
        res.push_back(rightmul[0]);
        for(int i = 1;i<n-1;i++){
            res.push_back(leftmul[i]*rightmul[i]);
        }
        res.push_back(leftmul[n-1]);
        return res;
    }
};