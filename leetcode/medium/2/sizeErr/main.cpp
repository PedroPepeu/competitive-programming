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
    long long int nodeTolonglongint(ListNode* node) {
        long long int i = 1;
        long long int sum = 0;

        while(node != NULL) {
            sum+=(node->val * i);
            i*=10;
            node = node->next;
        }

        return sum;
    }

    ListNode* longlongintToNode(long long int sum) {
        ListNode* node = new ListNode();
        node = makeNode(node, sum);        
        return node;
    }

    ListNode* makeNode(ListNode* node, long long int num) {
        if(node == NULL) node = new ListNode();
        
        if(num/10 == 0) {
            node->val = num%10;
            return node;
        }

        node->val = num%10;
        node->next = makeNode(node->next, num/10);
        return node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long int sum;
        sum = nodeTolonglongint(l1) + nodeTolonglongint(l2);
        cout << sum << endl;

        return longlongintToNode(sum);
    }
};
