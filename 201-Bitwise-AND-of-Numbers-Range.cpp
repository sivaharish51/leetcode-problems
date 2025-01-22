class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        //int a=left;
        // if(right-left==1){
        //     return left&right;
        // }
        // else{
        // for(int i=left+1;i<right;i++){
        //     a=a&i;
        // }
        // }
        // return a;
        int s=0;
        while(left != right){
            left>>=1;
            right>>=1;
            s++;
        }
        return left<<s;
    }
};