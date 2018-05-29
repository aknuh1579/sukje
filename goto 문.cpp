#include <stdio.h>
main()
{
	int a=0, b=0, c=0, d=0, e=0, sum;
	float mean;
	to:
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a<=100 && b<=100 && c<=100 && d<=100 && e<=100)
	{
    sum=a+b+c+d+e;
	mean=sum/5.0;
	printf("sum=%d\nmean=%f\n", sum, mean);
	goto to;
    }
}
