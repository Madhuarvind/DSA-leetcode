class Solution {
public:
    int sumofD(vector<int>& nums,int div){
        int n=nums.size();
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)nums[i]/(double) div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumofD(nums,mid)<=threshold){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};