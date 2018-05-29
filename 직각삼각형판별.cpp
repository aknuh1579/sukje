#include <stdio.h>
main()
{
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
		d=a*a-b*b-c*c;
		else
		d=c*c-a*a-b*b;
	}
	else if(b>c)
	d=b*b-a*a-c*c;
	else
	d=c*c-a*a-b*b;
	if(d==0)
	printf("직각삼각형이다.");
	else
	printf("직각삼각형이 아니다.");
}
