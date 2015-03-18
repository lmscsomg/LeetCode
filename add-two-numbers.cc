class Solution{
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
            ListNode *dummy = new ListNode(0), *tail = dummy;
            int carry = 0;

            while(l1 || l2){
                int x = carry;
                if(l1){
                    x += l1->val;
                    l1 = l1->next;
                }
                if(l2){
                    x += l2->val;
                    l2 = l2->next;
                }

                tail->next = new ListNode(x%10);
                tail = tail->next;

                carry = x/10;
            }

            if(carry > 0){
                tail->next = new ListNode(carry)
            }

            l1 = dummy->next;
            delete dummy;

            return l1;
        }
}
