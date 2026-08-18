int differenceOfSums(int n, int m)
{
    int i,j,num1=0,num2=0;
    for(i=1;i<=n;i++)
    {
      if(i%m!=0){
          num1+=i;
        }
    }
    for(j=1;j<=n;j++)
    {
        if(j%m==0)
        num2+=j;
    }
    return num1-num2;
}