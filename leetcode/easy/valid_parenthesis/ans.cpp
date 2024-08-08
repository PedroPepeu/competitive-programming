class Solution {
public:
  bool isValid(string s) {
    stack<char> sk;

    for(string::iterator it = s.begin(); it != s.end(); it++) {
      if(*it == '(' || *it == '[' || *it == '{') {
        sk.push(*it);
      } else {
        if(sk.empty()) return false;

        if(*it == ')' && (sk.top() != '(')) return false;
        else if(*it == ']' && (sk.top() != '[')) return false;
        else if(*it == '}' && (sk.top() != '{')) return false;
        else sk.pop();
      }
    }
    if(!sk.empty()) return false;

    return true;
  }
};
