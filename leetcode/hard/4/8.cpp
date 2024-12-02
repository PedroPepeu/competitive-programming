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
        else if((nums1.size()+nums2.size()) == 2) {
            return (nums1[0]+nums2[0])/2.0;
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

        int i=0, j=0, l = nums1.size()-1, m = nums2.size()-1;
        while(k > 1) {
            if(i > l) {
                if(p) return nums2[(s1+s2+1)/2];
                else return nums2[((s1+s2+1)/2)-1-s1];
            } else if (j > m) {
                if(p) return nums1[(s1+s2+1)/2];
                else return nums1[((s1+s2+1)/2)-1-s2];
            }

            if(nums1[min((k/2)-1+i, l)] >= nums2[min((k/2)-1+j, m)]) {
                j+=(k/2);
            } else {
                i+=(k/2);
            }

            if(k%2!=0) k++;
            k/=2;
        }

        if(i > l) {
                if(p) return (nums2[((s1+s2)/2)-s1] + nums2[((s1+s2)/2)-s1-1])/2.0;
                else return nums2[((s1+s2)/2)-1];
            } else if (j > m) {
                if(p) return nums1[((s1+s2)/2)-s2] + nums1[((s1+s2)/2)-s2-1];
                else return nums1[((s1+s2)/2)-1];
            }

        if(p) {
            if(nums1[i] <= nums2[j]) {
                if(i+1 > l) {
                    return (nums1[i]+nums2[j])/2.0;
                }
                return (nums1[i]+min(nums1[min(i+1, l)], nums2[j]))/2.0;
            } else {
                if(j+1 > m) {
                    return (nums1[i]+nums2[j])/2.0;
                }
                return (nums2[j]+min(nums2[min(j+1, m)], nums1[i]))/2.0;
            }
        }
        else {
            if(nums1[i] <= nums2[j]) {
                return nums1[i];
            } else {
                return nums2[j];
            }
        }
}

int main() {
    // vector<int> v1 = {0,0,0,0,0};
    // vector<int> v2 = {-1,0,0,0,0,0,1};
    // vector<int> v1 = {2, 2, 4, 4};
    // vector<int> v2 = {2, 2, 4, 4};
    vector<int> v1 = {1};
    vector<int> v2 = {2,3,4};
    cout << findMedianSortedArrays(v1, v2) << endl;
}
