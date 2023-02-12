class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*head=NULL;
        ListNode*tail=NULL;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        while(list1&&list2){
            if(list1->val<list2->val){
                if(head==NULL){
                    head=list1;
                    tail=list1;
                }
                else{
                    tail->next=list1;
                    tail=list1;
                }
                list1=list1->next;
            }
            else{
                if(head==NULL){
                    head=list2;
                    tail=list2;
                }
                else{
                    tail->next=list2;
                    tail=list2;
                }
                list2=list2->next;
            }
            if(list1){
                tail->next=list1;
            }
            if(list2){
                tail->next=list2;
            }
        }
    }
  return head;
}
};
