class Solution {
public:
    int gcd (int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* node = head;

        while(node->next != NULL) {
            int ans = gcd(node->val, node->next->val);

            ListNode* curGcd = new ListNode();

            curGcd->val = ans;
            curGcd->next = node->next;

            node->next = curGcd;

            node = node->next->next;
        }

        return head;
    }
};
