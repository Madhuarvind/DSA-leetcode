class Solution {
public:

    int findMax(vector<int>&piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long findTotalHour(vector<int>&piles,int h){
        long long totalH=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
        totalH += (piles[i] + h - 1) / h;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalHour=findTotalHour(piles,mid);
            if(totalHour<=h){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};