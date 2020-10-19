// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1=l1,*curr2=l2,*ans=NULL,*head,*newNode;
        int sum=0,carry=0,value=0;
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        while(curr1 != NULL && curr2 != NULL)
        {
            sum=curr1->val+curr2->val+carry;
            value=sum%10;
            carry=sum/10;
            ListNode* newNode = new ListNode(value);
            
            
            if(ans==NULL)
            {
                ans=newNode;
                head=ans;
                
            }
            else
            {
                ans->next=newNode;
                ans=ans->next;
               
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        
        
        if(curr1==NULL)
        {
            while(curr2!=NULL)
            {
                sum=curr2->val+carry;
                value=sum%10;
                carry=sum/10;
                ListNode* newNode = new ListNode(value);
                 ans->next=newNode;
                
                curr2=curr2->next;
                ans=ans->next;
                
            }
        }    
         if(curr2==NULL)
        {
            while(curr1!=NULL)
            {
                sum=curr1->val+carry;
                value=sum%10;
                carry=sum/10;
                ListNode*  newNode= new ListNode(value);
                 ans->next=newNode;
                
                 curr1=curr1->next;
                ans=ans->next;
            }
        }
        if(carry!=0)
        {
            ListNode* newNode = new ListNode(carry);
            ans->next=newNode;
            
                  }
        return head;
        
        
    }
};