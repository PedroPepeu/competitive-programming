class Solution {
public:
  int singleNumber(vector<int>& nums) {
    map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
      m[nums[i]]++;
    }
    

    for(pair<const int, int> &x : m) {
      if(x.second == 1) return x.first;
    }

    return -1;
  }
};
