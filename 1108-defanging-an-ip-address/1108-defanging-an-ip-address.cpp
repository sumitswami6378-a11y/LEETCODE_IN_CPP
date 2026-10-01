class Solution {
public:
    string defangIPaddr(string address) {

        int length = address.size();
        string result ="";

        for(int i=0; i<length; i++){

            if(address[i] == '.'){
              
              result = result + "[.]";
                
            }
            else{

                result = result + address[i];
            }
        }

        return result;
        
    }
};