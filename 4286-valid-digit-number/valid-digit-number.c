bool validDigit(int n, int x) {
    char str[20],str1[20];
    int i;
    sprintf(str,"%d",n);
    sprintf(str1,"%d",x);
    if(str[0]==str1[0])
    return false;
    else{
     for(i=1;i<strlen(str);i++){
      if (str[i]==str1[0])
     break;
     }
     if(str[i]=='\0')
     return false;
     return true;
    }
}