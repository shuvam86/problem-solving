// URL: https://leetcode.com/problems/merge-two-sorted-lists/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head1 = list1;
        ListNode *head2 = list2;
        ListNode *list3 = new ListNode(-1);
        ListNode *head3 = list3;

        while(head1 && head2) {
            if(head1->val < head2->val) {
                head3->next = head1;
                head1 = head1->next;
            }

            else {
                head3->next = head2;
                head2 = head2->next;
            }
            head3 = head3->next;
        }

        while(head1) {
            head3->next = head1;
            head1 = head1->next;
            head3 = head3->next;
        }

        while(head2) {
            head3->next = head2;
            head2 = head2->next;
            head3 = head3->next;
        }
        return list3->next;        
    }