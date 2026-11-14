class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s == ""){

            return 0;
        }

        string ans = "";
        int length = 0;
        int lens = -1;

        for(int i=0; i<s.length(); i++){

            bool found = false;

            for(int j = 0; j<ans.length(); j++){

                if(s[i] == ans[j]){

                    found = true;

                    break;
                }
            }

            if(found == false){

                ans += s[i];
            }

            if(found == true){

                int pos = ans.find(s[i]);
                ans = ans.substr(pos+1);
                i--;
            }

            length = ans.length();

            if(lens < length){

                lens = length;
            }
        }

      
      return lens;
        
    }
};