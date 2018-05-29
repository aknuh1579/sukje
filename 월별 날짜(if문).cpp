#include <stdio.h>
main()
{
	int year, month;
	scanf("%d %d", &year, &month);
	if(month>0 && month<13)
	{
		if(month==2)
		{
		if(year%400==0 || year%100!=0 && year%4==0)
		printf("29老");
		else
		printf("28老");
	    }
	    else if(month==4 || month==6 || month==9 || month==11)
	    printf("30老");
	    else
	    printf("31老");
	}
	else
	printf("error");
}
