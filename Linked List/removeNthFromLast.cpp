// URL: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head;
        ListNode *slow = head;

        for(int i=0;i<n;i++) {
            fast = fast->next;
        }
        
        if(fast==NULL) {
            return head->next;
        }


        while(fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        // free(temp);

        return head;

    }