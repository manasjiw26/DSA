/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        int i = -1;
        vector <int> v;
        Node *curr = head;
        while(curr!=NULL){
            v.push_back(curr->data);
            curr = curr->next;
            i++;
        }
        int low = 0,high = i;
        while(low<high){
            if(v[low]!=v[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};