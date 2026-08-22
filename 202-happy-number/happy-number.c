bool isHappy(int n) {
    int dig,res=0;
    while(n!=0)
    {
       dig=n%10;
        n/=10;
       res+=dig*dig;   
    }
    if(res>9||res==7)
    return isHappy(res);
    if(res==1)
    {
        return true;

    }
    return false;
}