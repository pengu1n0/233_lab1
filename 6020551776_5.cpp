#include <stdio.h>
int main()
{
    int a,i,n,answer=0,num[i];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        num=i;
        if(num[i]>answer)
        {
        	n=i;
        	max=num[i];
		}
        if(a>answer)
        {
            answer=a;
        }
    }
    printf("%d %d\n",num,answer);
}
