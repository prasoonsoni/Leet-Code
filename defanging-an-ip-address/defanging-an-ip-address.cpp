class Solution {
public:
    string defangIPaddr(string address) {
        vector<char> result;
        string defanged = "";
        
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            } else {
                result.push_back(address[i]);
            }
        }
        
        for(int i=0;i<result.size();i++){
            defanged += result.at(i);
        }
        
        return defanged;
    }
};