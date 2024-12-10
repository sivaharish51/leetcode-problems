bool isPalindrome(int x) {
    
    long int r=0,s,o=x;
    while(o>0){
    s=o%10;
    r=(r*10)+s;
    o=o/10;
    }
  if(x==r)
        return true;
    else
        return false;
}