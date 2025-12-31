class myStack {
  public:
  int *arr;
  int top;
        int cap;
    myStack(int n) {
        // Define Data Structures
        arr = new int[n];
        top = -1;
        cap = n;
        
    }
    
    bool isEmpty() {
        // check if the stack is empty
        if(top == -1){
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the stack is full
        if(top == (cap-1)){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull() == true){
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if(isEmpty() == true){
            return;
        }
        // removes an element from the top of the stack
        top--;
    }

    int peek() {
        // Returns the top element of the stacki
        if(top == -1){
            return -1;
        }
        return arr[top];
    }
};