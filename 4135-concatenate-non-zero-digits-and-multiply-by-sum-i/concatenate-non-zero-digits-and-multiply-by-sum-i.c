long long sumAndMultiply(int n) {
    long x=0, sum=0,rem,orig=0,rev=0,last;
    while(n!=0)
    {
        
       rem=n%10;
       n/=10;
       if(rem){
        sum+=rem;
       orig=orig*10+rem; 
       }
      
    }
    while(orig!=0){
    last=orig%10;
      orig/=10;
      rev=rev*10+last;
    }
    return rev*sum;
}