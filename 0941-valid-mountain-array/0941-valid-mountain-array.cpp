class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        if(arr.size() <3){

            return false;
        }

        int low = 0;
        int high = arr.size()-1;

        while(arr[low] < arr[low +1] && low < arr.size()-1){

            low++;
        }
        while(high > 0 && arr[high] < arr[high - 1]){
            high --;
        }
        

        if( low != arr.size()-1 && low == high && low !=0){

            return true;
        }

        return false;
        
    }
};