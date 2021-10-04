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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int l=0;
        while(temp!=NULL)
        {
            l=l+1;
            temp=temp->next;
        }
        int rec=l-n;
        int i=0;
        temp=head;
        if(rec==0)
        {
            head=head->next;
            delete(temp);
        }
        else
        {
            ListNode* ptr=temp;
            while(i<rec)
            {
                i=i+1;
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=temp->next;
            delete(temp);
        }
        return head;
    }
};
