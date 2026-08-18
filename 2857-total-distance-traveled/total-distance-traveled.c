int distanceTraveled(int mainTank, int additionalTank) {
    int d=0;
   while(mainTank>0)
   {
      if(mainTank>=5)
        {
           d+=50;
           mainTank-=5;
            if(additionalTank!=0)
            {
            mainTank+=1;
            additionalTank-=1;
            }
        }
        else{
        d+=mainTank*10;
        mainTank=0;
        }
   } 
   
    return d;
              
}