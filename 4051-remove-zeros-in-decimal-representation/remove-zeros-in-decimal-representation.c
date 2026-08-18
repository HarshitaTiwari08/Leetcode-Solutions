long long removeZeros(long long n) {
    int rem,last;
    long rev=0,sum=0;
    while(n!=0)
    {
     rem=n%10;
     n/=10;
      if(rem){
     sum=sum*10+rem;
      }
     
    }
    while(sum!=0)
    {
        last=sum%10;
        sum/=10;
        rev=rev*10+last;
    }
    return rev;

}