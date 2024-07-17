class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* d=dummy;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1 && temp2){
            if(temp1->val<temp2->val){
                d->next=temp1;
                temp1=temp1->next;
                d=d->next;
            }
            else{
                d->next=temp2;
                temp2=temp2->next;
                d=d->next;
            }
        }
       if(temp1) d->next=temp1;
       if(temp2) d->next=temp2;
       return dummy->next;
    }
};
