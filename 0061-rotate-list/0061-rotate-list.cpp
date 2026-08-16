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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || k==0 )
        return head;

        ListNode* temp=head,*initial=head;

        int count=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;

        }
        count++;
        // Linking last element of list  to head
        temp->next=head;
        
        // Now finding the index to split the List
        k%=count;

        int steps=count-k-1;
        
        while(steps--)
        {

            initial=initial->next;
        }
        ListNode *newtemp=initial->next;
        initial->next=nullptr;

        return newtemp;


        
    }
};