class Solution {
public:
    // using binary search 
    // here letter wrap around means if no letter is present we will return the smallest element.
    // exact same approach for ceiling of a number
    
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size()-1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(target < letters[mid]){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    return letters[start%letters.size()];
    }
};