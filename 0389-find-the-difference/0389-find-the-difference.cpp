class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<bool> visited(s.size(),false);

        for(int i = 0; i<t.size(); i++){

            bool found = false;

            for(int j = 0; j<s.size(); j++){

                if(s[j] == t[i] && visited[j] == false){

                    visited[j] = true;

                    found = true;

                    break;
                }
            }

            if(found == false){

                return t[i];
            }
        }
        

        return '\0';
    }
};