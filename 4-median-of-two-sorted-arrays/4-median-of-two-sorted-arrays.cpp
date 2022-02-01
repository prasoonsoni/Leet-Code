class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int newSize = n+m;
        vector<int> arr(newSize);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), arr.begin());
        sort(arr.begin(), arr.end());
        int s = arr.size();
        int mid = s/2;
        double ans;
        if(newSize%2!=0){
            ans = arr[mid];
            return ans;
        } else {
            ans = (arr[mid] + arr[mid-1]);
            return ans/2;
        }
        return ans;
    }
    
};