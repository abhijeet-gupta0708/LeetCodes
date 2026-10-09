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
    bool isPalindrome(ListNode* head) {

        // Tring the array method where i will store all the elements from the list to aarray and chcek if their positions are correct or not or they satisfy panildrome
        /*  vector <int> arr;
         ListNode* temp=head;

         while(temp!=NULL)
         {
            arr.push_back(temp->val);
            temp=temp->next;
         }
         if(temp)
            arr.push_back(temp->val);
         int size=arr.size();
         for(int i=0;i<size/2;i++)
         {
            if(arr[i]!=arr[size-1-i])
            return false;
         }
         return true;*/


        /* 
         // Trying to check using the linked list

         ListNode *slow,*fast,*curr,*prevptr;
         slow=head;
         fast=head;
         while(fast && fast->next)
         {
            slow=slow->next;
            fast=fast->next->next;
         }

         // Reversing the list
         curr=slow;
         prevptr=nullptr;
         while(curr)
         {
            ListNode * NewNode=curr->next;
            curr->next=prevptr;
            prevptr=curr;
            curr=NewNode;
         }

         // Cpmparing 
         ListNode * first,*second;
         first=head;
         second=prevptr;
         while(second)
         {
            if(first->val !=second->val )
            {
                return false;
            }
            first=first->next;
            second=second->next;
         }
        return true;

                8*/

        // Trying the stack method
        // Isme 2 condintion honge phle count kro traverse kr ke phir dekho wo odd hai ya even agar odd toh do not include the middle element agar even then do include the middle elemnt to the stack

        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        stack<int>st;
        temp=head;
        int n=count/2;
        if(count %2==0)
        {
            // Even Part Do inclunde the middle element

            for(int i=0;i<n;i++)
            {
                st.push(temp->val);
                temp=temp->next;
            }
            while(temp!=NULL)
            {
                if(temp->val!=st.top()) 
                return false;

                temp=temp->next;
                st.pop();
            }
        }
        // Odd part
        else
        {
             for(int i=0;i<n;i++)
            {
                st.push(temp->val);
                temp=temp->next;
            }
            temp=temp->next;
            while(temp!=NULL)
            {
                if(temp->val!=st.top()) 
                return false;

                temp=temp->next;
                st.pop();
            }
        }

        return true;
    }
};