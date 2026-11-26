class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans1;
        vector<int> ans2;

        vector<vector<int>> ans;

        for(int i=0; i<nums1.size(); i++){

            bool present = false;

            for(int j=0; j<nums2.size(); j++){

                if(nums1[i] == nums2[j]){

                    present = true;


                }
            }

            if(present == false){

                ans1.push_back(nums1[i]);
            }
        }

        for(int k=0; k < nums2.size(); k++){

            bool found = false;

             for(int l=0; l < nums1.size(); l++){

                if(nums2[k] == nums1[l]){

                    found = true;


                }
            }

            if(found == false){

                ans2.push_back(nums2[k]);
            }


        }

        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());

        ans1.erase(unique(ans1.begin(),ans1.end()),ans1.end());
        ans2.erase(unique(ans2.begin(),ans2.end()),ans2.end());


    ans.push_back(ans1);
    ans.push_back(ans2);

    return ans;
        
    }
};