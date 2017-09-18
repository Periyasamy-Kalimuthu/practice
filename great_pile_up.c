#include <stdio.h>
int main()
{
   int pile[50],i,num,j=0,n=0,k=0,count=0,l,m;
   scanf("%d",&num);
   for(i=0;i<num;i++)
  	scanf("%d",&pile[i]);
  for(k=0;k<=n;k++){
  for(i=0,j=0;i<num/2;i++,j++){
  	if(pile[i]<pile[num-j-1]){
      	pile[i]=pile[i]+pile[i+1];
      	pile[i+1]=0;
      	i++;break;
  	}
  	if(pile[i]>pile[num-j-1]){
      	pile[num-j-1]=pile[num-j-1]+pile[num-j-2];
      	pile[num-j-2]=0;j++;break;
  	}
  }
  	for(m=0,l=0;m<num;m++){
  	if(pile[m]!=0){
      	pile[l]=pile[m];l++;
  	}else count++;
	//  printf("\n");
	//  for(i=0;i<num;i++)
   //   printf("%d ",pile[i]);
  }num=l;
  for(i=0;i<num;i++){
  if(pile[i]!=pile[num-i-1]) {n++;break;}
  }
  }
  if(num!=1){
 	printf("%d\n",count);
 	for(i=0;i<num;i++)
  	printf("%d ",pile[i]);
  }
  else printf("TRIVIAL MERGE");
	return 0;
}
