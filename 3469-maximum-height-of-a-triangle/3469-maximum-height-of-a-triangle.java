class Solution {
    public int maxHeightOfTriangle(int red, int blue) {
        int h=0,i=1;
        int red1=red,blue1=blue;
        while(true){
            if(i%2==0){
                if(red>=i){
                    red-=i;
                }
                else{
                    break;
                }
            }
            else{
                if(blue>=i){
                    blue-=i;
                }
                else{
                    break;
                }
            }
            h++;
            i++;
        }
        int h1=0,i1=1;
        while(true){
            if(i1%2==1){
                if(red1>=i1){
                    red1-=i1;
                }
                else{
                    break;
                }
            }
            else{
                if(blue1>=i1){
                    blue1-=i1;
                }
                else{
                    break;
                }
            }
            h1++;
            i1++;
        }
        return Math.max(h,h1);
    }
}