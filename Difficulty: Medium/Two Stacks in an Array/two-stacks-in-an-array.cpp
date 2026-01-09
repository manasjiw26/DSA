class twoStacks {
  public:
    int n;
    int *arr;
    int top1;
    int top2;
    
    twoStacks() {
        n=100;
        top1 = -1;
    top2 = n;
    arr = new int[n];
    }
    
    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1+1 < top2){
            top1++;
            arr[top1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        // code here
        if(top2-1 > top1){
            top2--;
            arr[top2] = x;
        }
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        int x;
        if(top1 >= 0){
            x = arr[top1];
            top1--;
        }
        else{
            x = -1;
        }
        return x;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        int x;
        if(top2<n){
            x = arr[top2];
           top2++; 
        }
        else {
            x = -1;
        }
        return x;
    }
};