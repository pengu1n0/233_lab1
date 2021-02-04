#include <stdio.h>
int main()
{
    int a,i,n,answer=0;
    printf("Ente number:");
    scanf("%d",&n);
    printf("Enter %d number:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>answer)
        {
            answer=a;
        }
    }
    printf("Max number is %d\n",answer);
}
