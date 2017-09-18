#include<stdio.h>
int main()
{
	int N,K,nck,u=0,i,j,num,den;
	scanf("%d  %d",&N,&K);
	if((N>=0)&&(K<=N))
	{
	for(i=0;i<=K;i++)
	{
    	num=1;den=1;
	if(i%2==0)
	{
    	for(j=N-i+1;j<=N;j++)
     	num=num*j;
    	for(j=1;j<=i;j++)
     	den=den*j;
    	nck=num/den;
    	u=u+nck;
	}
	}
	}
	printf("%d",u);
return 0;
}
