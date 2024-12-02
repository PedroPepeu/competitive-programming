class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cmp = start^goal;
        int ans = 0;
        for(int i = 0; i < 32; i++) {
            if((cmp&(1<<i))>>i) {
                ans++;
            }
        }
        return ans;
    }
};
