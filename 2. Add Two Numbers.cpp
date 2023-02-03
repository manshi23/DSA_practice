class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;
        ListNode*head=NULL;
        ListNode*tail=NULL;
        int carry=0;
        while(l1&&l2){
            int data=l1->val+l2->val+carry;
            ListNode*newNode=new ListNode(data%10);
            carry=data/10;
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int data=l1->val+carry;
            ListNode*newNode=new ListNode(data%10);
            carry=data/10;
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            l1=l1->next;
        }
        while(l2){
            int data=l2->val+carry;
            ListNode*newNode=new ListNode(data%10);
            carry=data/10;
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            l2=l2->next;
        }
        if(carry!=0){
            ListNode*newNode=new ListNode(carry);
            tail->next=newNode;
            tail=newNode;
        }
        return head;
    }
};
