class Solution {
public:
    int totalMoney(int n) {
        int arr[] = {1,2,3,4,5,6,7};
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i%7];
            arr[i%7] += 1;
        }
        return sum;
    }
};