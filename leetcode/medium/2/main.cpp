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
    pair<int, int> restSum(int sum) {
        if(sum < 10) return make_pair(0, sum);

        return make_pair((sum/10)%10,sum%10);
    }

    ListNode* makeLinkedList(ListNode* node, queue<ListNode*> sl1, queue<ListNode*> sl2, int rest) {
        if(node == NULL) node = new ListNode();

        pair<int, int> pii;

        if((rest == 0) && (sl1.empty()) && (sl2.empty())) {
            return NULL;
        }
        else if((sl1.empty()) && (sl2.empty())) {
            node->val = rest;
            return node;
        } 
        else if(sl1.empty()) {
            pii = restSum(rest+sl2.front()->val);
            sl2.pop();
        } // pii -> (rest, add to this node)
        else if(sl2.empty()) {
            pii = restSum(rest+sl1.front()->val);
            sl1.pop();
        } // pii -> (rest, add to this node)
        else {
            pii = restSum(rest+sl1.front()->val+sl2.front()->val);
            sl1.pop();
            sl2.pop();
        }

        node->val = pii.second;
        node->next = makeLinkedList(node->next, sl1, sl2, pii.first);
        return node;
    }

    ListNode* queueSum(queue<ListNode*> sl1, queue<ListNode*> sl2) {
        ListNode* node = new ListNode();
        node = makeLinkedList(node, sl1, sl2, 0);
        return node;
    }

    queue<ListNode*> listqueue(ListNode* l) {
        queue<ListNode*> s;

        while(l!=NULL) {
            s.push(l);
            l = l->next;
        }

        return s;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<ListNode*> sl1 = listqueue(l1);
        queue<ListNode*> sl2 = listqueue(l2);
        
        return queueSum(sl1, sl2);
    }
};