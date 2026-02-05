class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int>pos,neg;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        } else {
            neg.push_back(nums[i]);
        }
    }
    for(int i=0;i<nums.size()/2;i++){
        nums[i*2]=pos[i];
        nums[i*2+1]=neg[i];
    }   
    return nums; 
    }
};