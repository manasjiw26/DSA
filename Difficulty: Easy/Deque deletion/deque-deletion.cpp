class Solution {
  public:
    void eraseAt(deque<int> &deq, int x) {
        // code here
        if(deq.empty()){return;}
        deq.erase(deq.begin()+x);
    }

    void eraseInRange(deque<int> &deq, int start, int end) {
    if(deq.empty()){return;}
    deq.erase(deq.begin()+start,deq.begin()+end);
        
        // code here
    }

        
    void eraseAll(deque<int> &deq) {
        // code here
        deq.erase(deq.begin(),deq.end());
    }
};