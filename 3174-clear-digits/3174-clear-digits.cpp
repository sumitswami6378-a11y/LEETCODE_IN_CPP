class Solution {
public:
    string clearDigits(string s) {

        int n = s.size();

        stack<char> st;

        for(int i=0; i<n; i++){

            if(s[i] >= 'a' && s[i] <= 'z'){

                st.push(s[i]);
            }
            else{

                st.pop();
            }
        }

        string ans="";

        while(!st.empty()){

            char ch = st.top();
            ans = ans + ch;
            st.pop();
        }

        reverse(ans.begin(),ans.end());


        return ans;
        
    }
};