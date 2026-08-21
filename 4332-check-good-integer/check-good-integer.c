bool checkGoodInteger(int n) {
    int digitSum=0,squareSum=0,res;
    while(n!=0)
    {
res=n%10;
digitSum+=res;
squareSum+=res*res;
n/=10;
    }
    if((squareSum-digitSum)>= 50)
    
    return true;
    return false;
}