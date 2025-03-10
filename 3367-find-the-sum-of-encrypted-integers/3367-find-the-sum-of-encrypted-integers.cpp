class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            int c=0,mx=0,s1=0;
            while(nums[i]){
                mx=max(mx,nums[i]%10);
                nums[i]=nums[i]/10;
                c++;
            }
            while(c){
                s1=s1*10+mx;
                c--;
            }
            s+=s1;
        }
        return s;
    }
};