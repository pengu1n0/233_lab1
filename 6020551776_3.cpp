#include<stdio.h>
#include<string.h>
int main()
{
  int n3=0,n11=0,d,i;
  char x[1000000];
  scanf("%s",x);
  if(strlen(x)<3){
       n11=0;
    for(i=strlen(x)-1,d=1;i>=0;i--,d*=10){
            n3+=(x[i]-48)*d;
			n11+=(x[i]-48)*d;
		}
	}
	else{
        	for(i=0,d=1;i<strlen(x);i++,d*=(-1)){
            n3+=(x[i]-48);
            n11+=(x[i]-48)*d;
     	}
   }
	if(n11<0){
		n11*=(-1);
	}
	printf("%d %d",n3%3,n11%11);
	return 0;
}
