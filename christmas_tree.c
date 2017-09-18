#include<stdio.h>
int main()
{
 	int i,j,k,n,days,m,s=0,p=0;
	scanf("%d",&days);
	if(1<days && days<20)
	{
	for(n=0;n<days-1;n++){ if(n!=0) s=1;
	for(i=s; i<=days-n; i++)
	{
    	for(j=days;j>=i;j--)
    	{
        	printf(" ");
    	}
    	for(k=-1;k<=2*i-1;k++)
    	{
        	printf("*");
    	}printf("\n");
	} }
    	for(i=0;i<2;i++){
      	for(j=0;j<=days+1;j++){
        	if(j==days+1)printf("*");
          	else printf(" ");
      	}
        	printf("\n"); }
	}
	else if(days<=1)
        	printf("You cannot generate christmas tree");
     	else printf("Trees is no more");
    
	return 0;
}
