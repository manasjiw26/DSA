class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node *front;
    Node *rear;
    int Size;
    
  public:
    myQueue() {
        front = NULL,rear = NULL,Size = 0;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(front == NULL){
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node *temp = new Node(x);
        if(isEmpty()){
            front = temp;
            rear = temp;
            Size++;
        }
        else{
            rear->next = temp;
            rear = rear->next;
            Size++;
        }
    }

    void dequeue() {
        // Removes the front element of the queue
        if(isEmpty()){return ;}
        Node *temp = front;
        front = front->next;
        delete(temp);
        if(front == NULL){
            rear = NULL;
        }
        Size--;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()){
            return -1;
        }
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        return Size;
    }
};
