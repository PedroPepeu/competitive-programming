#include "c.h"
#include <bits/stdc++.h>

using namespace std;

int Question::nodeToInt(ListNode* node) {
    int i = 1;
    int sum = 0;

    while(node != NULL) {
        sum+=(node->val * i);
        i*=10;
        node = node->next;
    }

    return sum;
}

ListNode* Question::intToNode(int num) {
    int i = 10;
    ListNode* node = new ListNode();

    while(num > 1) {
        node->val = num%i;
        num/=i;
        i*=10;

        ListNode* nextNode;
        node->next = nextNode;
    }

    return node;
}

ListNode* Question::answer(ListNode* l1, ListNode* l2) {
    int sum;
    sum = nodeToInt(l1) + nodeToInt(l2);

    return intToNode(sum);
}
