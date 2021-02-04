#include <stdio.h>
int main()
{
    int a,i,n,answer=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>answer)
        {
            answer=a;
        }
    }
    printf("%d\n",answer);
}
