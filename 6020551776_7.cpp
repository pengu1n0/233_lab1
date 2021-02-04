#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
    if(a >= 12.00)
    {
    	printf("%f p.m.",a);
	}
	else
	{
		printf("%f a.m.",a);
	}
}
