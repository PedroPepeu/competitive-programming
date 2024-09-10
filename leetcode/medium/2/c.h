#ifndef C_H
#define C_H

struct ListNode {
    int val;
    ListNode* next;
};

class Question {
    public:
    int nodeToInt(ListNode* node);
    ListNode* intToNode(int num);
    ListNode* answer(ListNode* l1, ListNode* l2);
};

#endif
