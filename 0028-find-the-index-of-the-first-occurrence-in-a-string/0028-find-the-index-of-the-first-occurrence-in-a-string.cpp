class Solution {
public:
    int strStr(string haystack, string needle) {

        int length_haystack = haystack.length();
        int length_needle = needle.length();

        for(int i=0; i<= length_haystack - length_needle; i++){

            if(haystack.substr(i,length_needle)==needle){

                return i;
            }
        }
        
        return -1;
    }
};