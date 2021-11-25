class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude = {0};
        for(int i=0;i<gain.size();i++){
            altitude.push_back(altitude[i] + gain[i]);
        }
        return *max_element(altitude.begin(), altitude.end());
    }
};