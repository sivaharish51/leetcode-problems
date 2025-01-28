class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int r=arr.size()-1;
        int l=0;
        while((r-l+1)>k){
            if(abs(arr[l]-x)>abs(arr[r]-x)){
                l++;
            }
            else{
                r--;
            }
        }
        vector<int> v(k);
        int a=0;
        for(int i=l;i<=r;i++){
            v[a]=arr[i];
            a++;  
        }
        return v;

        // bool p=false;
        // int in=0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==x){
        //         p=true;
        //         in=i;
        //         break;
        //     }
        // } 
        // vector<int> v(n);
        // int s=0
        // for(int i=0;i<n;i++){
        //     v[i]=arr[i]-abs(x);
        // }  
        // for(int i=0;i,n;i++){
        //     if(v[i]==0){
        //         s=i;
        //     }
        // }
        // int l=i-k-1;
        // int r=i
        // while(l<=r){
        //     int sum=0;
        //     for(int i=l;i>=r;i++){
        //         sum+=v[i];
        //     }
        // } 
    }
};