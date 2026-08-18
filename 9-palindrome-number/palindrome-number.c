bool isPalindrome(int x)
{   
long sum=0,i,rem,rev;
rev=x;
if (x<0)
return false;
else{
while(x!=0){
rem=x%10;
x/=10;
sum=sum*10+rem;
}
if(rev==sum)
return true;
else 
return false;
}
}
