class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL || x<=0)
            return head;
        int pos =1;
        if(x==1){
            head->next->prev=NULL;
            head=head->next;
            return head;
        }
        
        Node* temp=head;
        while(pos<x){
            temp=temp->next;
            x--;
        }
        if(temp->next==NULL){
            Node* temp=head;
            while(temp->next->next!=NULL)
                temp=temp->next;
            temp->next=NULL;
        }
        else{
            temp->prev->next = temp->next;
            temp->next->prev= temp->prev;
        }
        return head;
    }