class Solution {
public:
int StudentCount(vector<int> nums,int page){
    int student=1;
    int Maxpage=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(Maxpage+nums[i]<=page){
            Maxpage+=nums[i];
        } else{
            student+=1;
            Maxpage=nums[i];
        }
    }
    return student;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int student=StudentCount(nums,mid);
            if(student>k){
                low=mid+1;
            } else{
                high=mid-1;
            }
        }
        return low;
    }
};