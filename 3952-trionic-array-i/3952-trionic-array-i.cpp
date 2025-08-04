class Solution {
public:
    bool isTrionic(vector<int>& nums) {
       int n=nums.size();
    //    if(n<=3) return false;
    //    int p=0,q=0,n1=0;
    //    int i=0;
    //    while(i<n){
    //         if(nums[i]<nums[i+1]){
    //             p++;
    //             i++;
    //         }
    //         else{
    //             break;
    //             //i++;
    //         }
    //    } 
    //    if(p==0) return false;
    //    while(i<n){
    //         if(nums[i]>nums[i+1]){
    //             q++;
    //             i++;
    //         }
    //         else{
    //             break;
    //             //i++;
    //         }
    //    }
    //    if(q==0 || q==n-1) return false;
    //    if(p>=q) return false;
    //    while(i<n){
    //         if(nums[i]<nums[i+1]){
    //             i++;
    //             continue;
    //         }
    //         return false;
    //    }
    //    //if(p && q) return true;
    //    return true;
    int i=0;
    while(i+1<n && nums[i]<nums[i+1]) i++;
    if(i==0 || i==n-1) return false;
    int c=i;
    while(i+1<n && nums[i]>nums[i+1]) i++;
    if(c==i || i==n-1) return false;
    while(i+1<n && nums[i]<nums[i+1]) i++;
    return i==n-1;
    }
};