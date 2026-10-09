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

        int count=0;

        ListNode *curr=head;
        ListNode *prev=head;

        for(int i=0;i<n;i++)
       
        curr=curr->next;
        
        if(curr==NULL)
        {
            // Removing head

            ListNode*temp=head;
            head=head->next;
            delete (temp);
            return head;
        }

        while(curr->next!=NULL)
        {
            curr=curr->next;
            prev=prev->next;
        }
        // Deleting the element
        ListNode *temp=prev->next;
        prev->next=prev->next->next;
        delete (temp);

        return head;

    }
};