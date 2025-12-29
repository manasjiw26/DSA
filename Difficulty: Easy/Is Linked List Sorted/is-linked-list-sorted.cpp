/*
class Node
{
  public:
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    bool isSorted(Node* head) {
        // code here
        
        Node *curr = head;
        if(curr==NULL || curr->next == NULL){
            return true;
        }
        int x=curr->data;
        int flag=-1;
        while(flag != 0 && flag != 1){
        if(curr->next!=NULL){
         //describes if inc or dec
        if(x<curr->next->data){
            flag = 0;//increasing
        }
        else if(x>curr->next->data){
            flag = 1;//decreassing
        }
        else{
            x = curr->next->data;
        }
        curr=curr->next;
            
        }
        else{
            return true;
        }
        }
        while(curr!=NULL){
            if(x<curr->data && flag==1){
                return false;
            }
            if(x>curr->data && flag ==0){
                return false;
            }
            if(curr!=NULL){
            x=curr->data;}
            curr=curr->next;
            
        }
        return true;
    }
};