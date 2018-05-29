#include <stdio.h>
main()
{
	int year, month;
	scanf("%d %d", &year, &month);
	switch(month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30老");
		break;
	case 2:
		if(year%400==0 || year%100!=0 && year%4==0)
		printf("29老");
		else
		printf("28老");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31老");
    }
}
