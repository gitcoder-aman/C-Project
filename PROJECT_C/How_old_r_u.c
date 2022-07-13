#include<stdio.h>
main()
{
    int days2=0,days1=0,months2=0,months1=0,years2=0,years1=0;
     int yr,mth,dt,isleap=0,flag=0;

     printf("\nEnter current date:[dd/mm/yy]:");
   scanf("%d/%d/%d",&days1,&months1,&years1);

    printf("\nEnter D.O.B:[dd/mm/yy]:");
    scanf("%d/%d/%d",&days2,&months2,&years2);
    
    	if(years1%100!=0 && years1%4==0 || years1%400==0 || years2%100!=0 && years2%4==0 || years2%400==0)
	      isleap=1;

//   Check for Valid Date

	if(years1<1850 || years1>2050 || months1<1 || months1>12 || days1<1 || days1>31 || years2<1850 || years2>2050 || months2<1 || months2>12 || days2<1 || days2>31)
	flag=1;
	else if (months1==2 || months2==2)     /* Check for number of days in february*/
	{
		if(days1==30 || days1==31 || (days1==29 && !isleap) || days2==30 || days2==31 || (days2==29 && !isleap))
		flag=1;
	}
	else if (months1==4 ||months1==6 ||months1==9 ||months1==11 || months2==4 ||months2==6 ||months2==9 ||months2==11)   /*Check days in April,June,Sept,Nov*/
	{
		if(days1==31 || days2==31)
		  flag=1;
	}
	if(flag==1)
	
		printf("Not a valid Date\n");
	else
		printf("Valid date\n");
		
		//Here date Calculation
		if(flag==0){
if(days1<days2)
{
	if(months1==4 || months1==6 || months1==9 || months1==11)
	{
    days1+=30;
    }
    else if (months1==2)     /* Check for number of days in february*/
	{
		if(isleap==1)
	      days1+=29;
	    else
	      days1+=28;
	}
    else
    {
     days1+=31;
	}
	  months1--;
}    // End of if (days1<days2)
	
	if(months1<months2)
   {
    months1+=12;
    years1--;
   }

    dt=days1-days2;
    mth=months1-months2;
    yr=years1-years2;

    printf("\nDate of birth:[dd/mm/yy]=%d days/%d months/%d years",dt,mth,yr);} // end of if(flag==0)

} // End of main
