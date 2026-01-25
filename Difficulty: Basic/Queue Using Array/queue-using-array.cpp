class myQueue {
    int cap,size;
    int * arr;
  public:
    myQueue(int n) {
        // Define Data Structures
        arr = new int[n];
        size = 0;
        cap = n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(size == 0){
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the queue is full
        if (size == cap){
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()){return ;}
        arr[size] = x;
        size++;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()){return;}
        for(int i = 0;i<size;i++){
            arr[i] = arr[i+1];
        }
        size--;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()){return -1;}
        return arr[0];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()){return -1;}
        return arr[size-1];
    }
};