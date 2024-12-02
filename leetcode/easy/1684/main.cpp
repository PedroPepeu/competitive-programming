class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;
        for(string::iterator it = allowed.begin(); it!=allowed.end(); it++) {
            mp[*it] = 1;
        }

        int cnt = 0;
        for(auto &x: words) {
            int chk = 1;
            for(string::iterator it = x.begin(); it!=x.end(); it++) {
                if(!mp[*it]) {
                    chk = 0;
                    break;
                }
            }
            if(chk) cnt++;
        }

        return cnt;
    }
};