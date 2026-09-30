#include <string.h>

int strStr(char* haystack, char* needle) {
    int length_haystack = strlen(haystack);
    int length_needle = strlen(needle);

    for(int i = 0; i <= length_haystack - length_needle; i++) {

        int j = 0;

        while(j < length_needle && haystack[i + j] == needle[j]) {
            j++;
        }

        if(j == length_needle) {
            return i;
        }
    }

    return -1;
}