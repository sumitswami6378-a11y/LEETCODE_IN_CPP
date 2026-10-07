class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        vector<int> ans;

        int i=0;
        int j=0;

        while(i <m && j <n){

            if(nums1[i] < nums2[j]){

                ans.push_back(nums1[i]);
                i++;
            }
            else{

                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i <m){

            ans.push_back(nums1[i]);
            i++;
        }
        while(j <n){

            ans.push_back(nums2[j]);
            j++;
        }

        int total = ans.size();

        if(total % 2 == 1){

            return ans[total/2];
        }
        else{

            return (ans[total/2 - 1]+ans[total/2])/2.0;
        }
        
    }
};