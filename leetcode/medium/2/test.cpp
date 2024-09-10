#include "c.h"
#include "test.h"
#include <bits/stdc++.h>
#include <cassert>

using namespace std;

int Test_c::node_to_int(ListNode* l) {
    Question question;
    return question.nodeToInt(l);
}

ListNode* Test_c::int_to_node(int num) {
    Question question;
    return question.intToNode(num);
}

int Test_c::add_2_4_3_with_5_6_4_answer_7_0_8() {
    Question question;
    assert(question.answer(int_to_node(243), int_to_node(564)) == );
    return 0;
}

int Test_c::add_0_with_0_answer_0() {
    Question question;
    assert(question.answer(int_to_node(0), int_to_node(0)) == );
    return 0;
}

int Test_c::add_9_9_9_9_9_9_9_with_9_9_9_9_answer_8_9_9_9_0_0_0_1() {
    Question question;
    assert(question.answer(int_to_node(9999999), int_to_node(9999)) == );
    return 0;
}
