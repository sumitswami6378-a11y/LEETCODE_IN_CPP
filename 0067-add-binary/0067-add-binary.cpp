class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int s1 = a.size();
        int s2 = b.size();

        int low1 = 0;
        int low2 = 0;

        int carry = 0;
        string ans = "";

        while(low1 < s1 && low2 < s2) {

            int sum = (a[low1] - '0') + (b[low2] - '0') + carry;

            int bit = sum % 2;
            carry = sum / 2;

            ans.push_back(bit + '0');

            low1++;
            low2++;
        }

        while(low1 < s1) {

            int sum = (a[low1] - '0') + carry;

            int bit = sum % 2;
            carry = sum / 2;

            ans.push_back(bit + '0');

            low1++;
        }

        while(low2 < s2) {

            int sum = (b[low2] - '0') + carry;

            int bit = sum % 2;
            carry = sum / 2;

            ans.push_back(bit + '0');

            low2++;
        }

        if(carry != 0) {
            ans.push_back('1');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};