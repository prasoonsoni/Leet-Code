/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        // finding peak element
        int peak = peakElement(mountainArr);
        int indexAsc = binarySearch(mountainArr, target, 0, peak, true);
        int indexDesc = binarySearch(mountainArr, target, peak+1, mountainArr.length()-1, false);
        if(indexAsc != -1){
            return indexAsc;
        }
        if(indexDesc != -1){
            return indexDesc;
        }
        return -1;
    }
    
    // function to find peak element
    int peakElement(MountainArray &arr){
        int start = 0;
        int end = arr.length()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(arr.get(mid) > arr.get(mid+1)){
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
    // function for binary search
    int binarySearch(MountainArray &arr, int target, int s, int e, bool isAsc){
        int start = s;
        int end = e;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(arr.get(mid)==target){
                return mid;
            }
            if(isAsc){
                if(target>arr.get(mid)){
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            } else {
                if(target>arr.get(mid)){
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
    
    
};