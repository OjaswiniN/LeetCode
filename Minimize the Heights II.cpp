class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int ans = arr[n-1] - arr[0];
        int small = arr[0]+k;
        int large = arr[n-1]-k;
        int ma, mi;
        for(int i=0;i<n-1;i++){
        mi = min(small, arr[i+1]-k);
        ma = max(large, arr[i]+k);
        int temp = ma-mi;
        if(mi<0)
            continue;
        if(ans>temp)
            ans = temp;
        }
        return ans;
    }
};
