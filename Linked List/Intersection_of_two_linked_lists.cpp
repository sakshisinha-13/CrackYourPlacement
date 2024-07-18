class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int n1=0,n2=0;
        while(temp1){
            n1++;
            temp1=temp1->next;
        }
        while(temp2){
            n2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(n1>n2){
            int diff=n1-n2;
            for(int i=1;i<=diff;i++) temp1=temp1->next;
            while(temp1 && temp2 && temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
        else{
            int diff=n2-n1;
            for(int i=1;i<=diff;i++) temp2=temp2->next;
            while(temp1 && temp2 && temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
        return NULL;
    }
};
