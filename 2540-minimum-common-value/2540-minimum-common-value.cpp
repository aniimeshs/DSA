class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // int i = 0, j = 0;
        // while(i < nums1.size() && j < nums2.size()){
        //     if(nums1[i] == nums2[j]){
        //         return nums1[i];
        //     }
        //     else if(nums1[i] < nums2[j]){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        // }
        // return -1;
        int a = 0 , b = 0;
        bool flag = true;
        while(flag && a<nums1.size() && b<nums2.size())
        {
            if(nums1[a]<nums2[b]) a++;
            else if(nums1[a]>nums2[b]) b++;
            else flag = false;
        }
        return flag? -1 : nums1[a];
    }
};