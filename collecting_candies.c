#include<stdio.h>
int main()
{
   int tcase,i,j,num,temp,k,ans;//i,j,k for loops
   scanf("%d",&tcase);
   for(i=0;i<tcase;i++)
   {
       ans=0;
       scanf("%d",&num);
       int can[num];
       for(j=0;j<num;j++)
         scanf("%d",&can[j]);
       for(k=0;k<num;++k)
    {
        for(j=k+1;j<num;++j)
        {
            if(can[k]<can[j])
            {
                temp=can[k];
                can[k]=can[j];
                can[j]=temp;
            }
        }
    }
    for(k=num-1;k>0;k--)
    {
    for(j=num-1;j>0 && num != 2;j--)
        {
            if(can[j]>can[j-1])
            {
               temp=can[j];
               can[j]=can[j-1];
               can[j-1]=temp;
            }
            else
                break;
        }
        can[num-2]=can[num-1]+can[num-2];
        ans=ans+can[num-2];
        num--;
    }
    printf("\n%d",ans);
    }
   return 0;
}
