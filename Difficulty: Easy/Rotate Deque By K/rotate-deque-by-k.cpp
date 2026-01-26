class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        if(type == 1){
            for(int i=0;i<k;i++){
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
        }
        else{
            for(int i=0;i<k;i++){
                int x = dq.front();
                dq.pop_front();
                dq.push_back(x);
            }
        }
    }
};