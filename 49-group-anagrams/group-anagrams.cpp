class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,int> group;
        vector<vector<string>> res;
        vector<string> temp1;
        temp1.push_back(strs[0]);
        res.push_back(temp1);
        string firstword = strs[0];
        sort(firstword.begin(),firstword.end());
        group[firstword] = 0;
        for(int i = 1;i<strs.size();i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            int pointer = 0;
            if(group.find(word)!=group.end()){
                pointer = group[word];
            }else{
                pointer = res.size();
            }
            if(pointer < res.size()){
                res[pointer].push_back(strs[i]);
                group[word] = pointer;
            }else{
                vector <string> temp;
                temp.push_back(strs[i]);
                res.push_back(temp);
                group[word] = pointer;
            }
        }
        return res;
    }
};