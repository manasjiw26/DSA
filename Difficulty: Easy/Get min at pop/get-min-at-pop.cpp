stack <int> s,aux;
stack<int> _push(int arr[], int n) {
    // code here
    s.push(arr[0]);
    aux.push(arr[0]);
    for(int i = 1;i<n;i++){
        if(aux.top()>=arr[i]){
            aux.push(arr[i]);
        }
        s.push(arr[i]);
    }
    return s;
    
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    while(!s.empty() && !aux.empty()){
        if(aux.top() == s.top()){
            cout << aux.top() << " ";
            aux.pop();
            s.pop();
        }
        else{
            cout << aux.top() << " ";
            s.pop();
        }
    }
    
    // code here
}