	/**
	 * Definition for singly-linked list.
	 * struct ListNode {
	 *     int val;
	 *     ListNode *next;
	 *     ListNode(int x) : val(x), next(NULL) {}
	 * };
	 */
	class Solution {
	public:
	    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	    {
	    	int carry = 0 ;
	    	ListNode* resultList = NULL ;
	    	ListNode* resultTail = NULL ;
	    	ListNode* temp1 = NULL ;
	    	ListNode* temp2 = NULL ;
	        for (temp1 = l1, temp2 = l2;
	        	temp1 != NULL && temp2 != NULL;
	        	temp1 = temp1->next,temp2 = temp2->next)
	        {
	        	int result = temp1->val + temp2->val + carry ;
	        	carry = result/10 ;
	        	result = result%10 ;
	        	if (resultList == NULL)
	        	{
	        		resultList = new ListNode(result) ;
	        		resultTail = resultList ;
	        	}
	        	else
	        	{
	        		resultTail->next = new ListNode(result) ;
	        		resultTail = resultTail->next ;
	        	}
	        }
	        if(temp1 == NULL && temp2 != NULL)
	        {
	        	while(temp2 != NULL)
	        	{
	        		int result = temp2->val + carry ;
	        		carry = result/10 ;
	        		result = result%10 ;
	        		resultTail->next = new ListNode(result) ;
	        		resultTail = resultTail->next ;
	        		temp2 = temp2->next ;
	        	}
	        }
	        if(temp2 == NULL && temp1 != NULL)
	        {
	        	while(temp1 != NULL)
	        	{
	        		int result = temp1->val + carry ;
	        		carry = result/10 ;
	        		result = result%10 ;
	        		resultTail->next = new ListNode(result) ;
	        		resultTail = resultTail->next ;
	        		temp1 = temp1->next ;
	        	}
	        }
	        if (carry != 0)
	        {
	        	resultTail->next = new ListNode(carry) ;
	        }
	        return resultList ;
	    }
	};