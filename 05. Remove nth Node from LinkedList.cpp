class Solution {
public:
  int length(ListNode*head){
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len+=1;
            temp=temp->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0 or head==NULL){
            return head;
        }
        int len=length(head);
        ListNode*temp=head;
        if(len-n==0){
            return head->next;
        }
        for(int i=0;i<len-n-1;i++){
            temp=temp->next;
        }
        ListNode*a=temp->next;
        if(temp&&a){
            temp->next=a->next;
        }
        return head;
    }
};
