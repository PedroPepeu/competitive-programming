#include <bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();

        if(nums1.size() == 0) {
            if(nums2.size() % 2 == 0) return (nums2[nums2.size()/2] + nums2[(nums2.size()/2)-1])/2.0;
            else return nums2[((nums2.size()+1)/2)-1];
        }
        else if(nums2.size() == 0) {
            if(nums1.size() % 2 == 0) return (nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1])/2.0;
            else return nums1[((nums1.size()+1)/2)-1];
        }

        int k, p;
        if((nums1.size()+nums2.size()) % 2 == 0) {
            k = (nums1.size()+nums2.size())/2;
            p = 1;
        } else {
            k = (nums1.size()+nums2.size())/2;
            k++;
            p = 0;
        }

        int i, j;
        while(k > 1) {
            if(nums1.size() == 0) {
                if(p) return nums2[(s1+s2+1)/2];
                else return nums2[((s1+s2+1)/2)-1-s1];
            } else if (nums2.size() == 0) {
                if(p) return nums1[(s1+s2+1)/2];
                else return nums1[((s1+s2+1)/2)-1-s2];
            }

            // if(k % 2 == 0) i = j = (k/2)-1;
            // else i = j = (k/2);
            i = j = (k/2);

            if(nums1[i] < nums2[j]) {
                if(i == 0) i++;
                nums1.erase(nums1.begin(), nums1.begin()+i);
            } else if(nums1[i] > nums2[j]) {
                if(j == 0) j++;
                nums2.erase(nums2.begin(), nums2.begin()+j);
            } else {
                if(nums1[0] <= nums2[0]) {
                    if(i == 0) i++;
                    nums1.erase(nums1.begin(), nums1.begin()+i);
                } else {
                    if(j == 0) j++;
                    nums2.erase(nums2.begin(), nums2.begin()+j);
                }
            }

            k -= (i+1);
        }

        if(p) {
            if(nums1[0] <= nums2[0]) {
                if(nums2[0] <= nums1[1] || nums1.size()<2) {
                    return (nums1[0]+nums2[0])/2.0;
                } return (nums1[0]+nums1[1])/2.0;
            } else {
                if(nums1[0] <= nums2[1] || nums2.size()<2) {
                    return (nums2[0]+nums1[0])/2.0;
                } return (nums2[0]+nums2[1])/2.0;
            }
        }
        else {
            if(nums1[0]<=nums2[0]) return nums1[0];
            else return nums2[0];
        }
    }

int main() {
    // vector<int> v1 = {0,0,0,0,0};
    // vector<int> v2 = {-1,0,0,0,0,0,1};
    vector<int> v1 = {2, 2, 4, 4};
    vector<int> v2 = {2, 2, 4, 4};
    cout << findMedianSortedArrays(v1, v2) << endl;
}
