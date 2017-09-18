#include<stdio.h> #include<string.h>  
char board[8][8];//BOARD ARRAY DECLARATION
int main() {
   int col=0,row=0,i,j,len,num=0; static char c,a[50]; gets(a);//GET THE INPUT STRING
   len=strlen(a)-2;
   for(i=0;i<8;i++)
  	for(j=0;j<8;j++)
      	board[i][j]='.';//TO ASSIGN '.' TO ALL THE LOCATIONS
   for(i=0;i<len;i++)  {
 	if(isalpha(a[i])){
  	if((a[i-1]!='/')&&(i!=0)&&(!(isalpha(a[i-1])))){
      	col=col+a[i-1]-48;
      	board[row][col]=a[i];
      	}else  board[row][col]=a[i];
      	col++;}
   	if(a[i]=='/')  	{ row++; col=0;  }
   	}//TO SET THE COINS LOCATION ACCORDING TO THE GIVED INPUT
   	printf("\n[");
	for(i=0;i<8;i++)
   	for(j=0;j<8;j++)	{
   	if(board[i][j]=='R'){
	if(num!=0)printf(","); printmoves(i,j);//FUNCTION CALL TO PRINT OUTPUT
	num++; }
  	}	printf("]");//TO CHECK THE LOCATIONS OF ROOKS
	return 0; }
void printmoves(int ro,int co)
{
	int j,pos_up[7],pos_left[7],pos_right[7],pos_down[7],up=0,left=0,right=0,down=0;
	for(j=ro-1;j>=0;j--){
       	if(board[j][co]=='.')	pos_up[up++]=j;
       	else break;
   	}//TO FIND POSSIBLE MOVES IN UPWARD DIRECTION
	for(j=co-1;j>=0;j--)  {
      	if(board[ro][j]=='.')   pos_left[left++]=j;
      	else break;
   	}//TO FIND POSSIBLE MOVES IN LEFT DIRECTION
	for(j=co+1;j<8;j++){
     	if(board[ro][j]=='.')  pos_right[right++]=j;
      	else break;
  	}//TO FIND POSSIBLE MOVES IN RIGHT DIRECTION
	for(j=ro+1;j<8;j++) {
      	if(board[j][co]=='.')  pos_down[down++]=j;
      	else 	break;
   	}//TO FIND POSSIBLE MOVES IN DOWN DIRECTION
   	for(j=up-1;j>=0 && up!=0;j--)
        	printf("%c%d%c%d,",'a'+co,8-ro,'a'+co,8-pos_up[j]);//TO PRINT MOVES IN UPWARD DIRECTION
   	for(j=left-1;j>=0 && left!=0;j--)
       	printf("%c%d%c%d,",'a'+co,8-ro,'a'+pos_left[j],8-ro);//TO PRINT MOVES IN LEFT DIRECTION
   	for(j=0;j<right && right!=0;j++)
       	printf("%c%d%c%d,",'a'+co,8-ro,'a'+pos_right[j],8-ro);//TO PRINT MOVES IN RIGHT DIRECTION
   	for(j=0;j<down && down!=0;j++){
       	printf("%c%d%c%d",'a'+co,8-ro,'a'+co,8-pos_down[j]);//TO PRINT MOVES IN DOWN DIRECTION
       	if(j!=down-1)printf(",");
   	}
}
