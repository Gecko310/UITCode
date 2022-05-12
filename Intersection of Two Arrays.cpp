//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.resize( distance(nums1.begin(),unique(nums1.begin(),nums1.end())) );
        nums2.resize( distance(nums2.begin(),unique(nums2.begin(),nums2.end())) );
        vector<int> res;
        for (int i=0;i<nums1.size();i++){
            for (int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i])
                    res.push_back(nums1[i]);
            }
        }
        return res;
    }
};
