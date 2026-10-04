class Solution {
public:

    void merge(vector<int>& nums, vector<int>& dummy,int low, int mid, int high) {

        int i = low;
        int j = mid + 1;
        int k = low;

       // vector<int> dummy(nums.size());

        while(i <= mid && j <= high) {

            if(nums[i] < nums[j]) {
                dummy[k++] = nums[i++];
            }
            else {
                dummy[k++] = nums[j++];
            }
        }

        while(i <= mid) {
            dummy[k++] = nums[i++];
        }

        while(j <= high) {
            dummy[k++] = nums[j++];
        }

        for(int i = low; i <= high; i++) {
            nums[i] = dummy[i];
        }
    }


    void mergesort(vector<int>& nums,vector<int>& dummy,int low, int high) {

        if(low < high) {

            int mid = low + (high - low) / 2;

            mergesort(nums,dummy, low, mid);

            mergesort(nums,dummy, mid + 1, high);

            merge(nums, dummy,low, mid, high);
        }
    }


    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> dummy(n);


        mergesort(nums,dummy, 0, n - 1);

        return nums;
    }
};