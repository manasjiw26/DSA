class Solution {
public:
    int romanToInt(string s) {
        map <char,int> symbolVal={{'I',1},
{'V',5},
{'X',10},
{'L',50},
{'C',100},
{'D',500},
{'M',1000}
    };
    int sum = 0;
    char prevSym='|';
    for(int i=0;i<s.size();i++){
        if(prevSym == 'I' && (s[i] == 'V' || s[i] == 'X')){
            sum = sum - 2 + symbolVal[s[i]];
        }else if(prevSym == 'X' && (s[i] == 'L' || s[i] == 'C')){
            sum = sum - 20 + symbolVal[s[i]];
        }else if(prevSym == 'C' && (s[i] == 'D' || s[i] == 'M')){
            sum = sum - 200 + symbolVal[s[i]];
        }else{
        sum+=symbolVal[s[i]];}
        prevSym = s[i];
    }
    return sum;
    }
};