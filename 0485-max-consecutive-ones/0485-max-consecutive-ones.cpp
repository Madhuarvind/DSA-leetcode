class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi=max(maxi,cnt);
            } else {
                cnt =0;
            }
        }
        return maxi;
    }
};