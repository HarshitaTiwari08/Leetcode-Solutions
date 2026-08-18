int countCommas(int n) {
    int i,res=0;
    if(n<1000)
    return 0;
    else{
    for(i=1000;i<=n;i++)
    {
        res+=1;
    
    }

    return res;
    }
}