class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int n=(n1+n2);
        int cnt=0,i=0,j=0;
        int idxlbl1=-1,idxlbl2=-1;
        int idx2=n/2,idx1=idx2-1;
        while(i<n1&&j<n2){
            if(nums1[i]<nums2[j]){
                if(cnt==idx1) idxlbl1=nums1[i];
                if(cnt==idx2) idxlbl2=nums1[i];
                cnt++;
                i+=1;
            } else{
                if(cnt==idx1) idxlbl1=nums2[j];
                if(cnt==idx2) idxlbl2=nums2[j];
                cnt++;
                j+=1;
            } 
        }
        while(i<n1){
                if(cnt==idx1) idxlbl1=nums1[i];
                if(cnt==idx2) idxlbl2=nums1[i];
                cnt++;
                i+=1; 
        }
        while(j<n2){
                if(cnt==idx1) idxlbl1=nums2[j];
                if(cnt==idx2) idxlbl2=nums2[j];
                cnt++;
                j+=1;   
        }  
        if(n%2==1) return idxlbl2;
        else{
            return (double)(double)(idxlbl1+idxlbl2)/2.0;
        }     
    }
};