int hammingWeight(int n) {
  int lastDigit,i,total=0;
  for(i=0;i<32;i++){
    lastDigit=((n>>i)&1);
    if(lastDigit==1){
        total+=1;
    }
}
return total;
}