/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* merge(ListNode* list1, ListNode* list2) {
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

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a=arr[arr.size()-1];
            arr.pop_back();
            ListNode* b=arr[arr.size()-1];
            arr.pop_back();
            ListNode* c=merge(a,b);
            arr.push_back(c);
            mergeKLists(arr);
        }
        return arr[0];
    }
};
