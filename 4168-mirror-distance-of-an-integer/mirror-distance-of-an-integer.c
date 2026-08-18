int mirrorDistance(int n) {
    int x,original,rem,sum=0;
    original=n;
    while(n!=0)
    {
     rem=n%10;
     n/=10;
     sum=sum*10+rem;
    }
   return abs(sum-original);

}