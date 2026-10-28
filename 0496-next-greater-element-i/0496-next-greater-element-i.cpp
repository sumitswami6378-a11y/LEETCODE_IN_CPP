class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;

        for(int i = 0; i<n1; i++){

            int max = nums1[i];

            bool found = false;
            for(int j = 0; j<n2; j++){

                if(nums1[i] == nums2[j]){

                    for(int k = j + 1; k<n2; k++){

                        if(max < nums2[k]){

                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }

                    }

                    break;
                }

               
            }

            if(found == false){

                ans.push_back(-1);
            }
        }

        return ans;
        
    }
};