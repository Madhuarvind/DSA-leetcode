class Solution {
public:
    bool possible(vector<int> &arr, int day, int m, int k) {
        int n=arr.size();
        int cnt=0,nofB=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day) cnt++;
            else{
                nofB+=(cnt/k);
                cnt=0;
            }
        }
        nofB+=(cnt/k);
        return nofB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if ((long long)m * k > n) return -1;
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return low;
    }
};