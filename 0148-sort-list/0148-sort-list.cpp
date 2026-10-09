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
    ListNode* sortList(ListNode* head) {

        // Solving the question using the vector 
        // Hum kya krenge ki traverese kro phir saara element ko array mein add kro , array ko sort kro , phir wapas se push kr do same Linkedlist pe

        ListNode *temp=head;
        vector<int>arr;

        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(),arr.end());

        // Pushing again

        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
        
    }
};