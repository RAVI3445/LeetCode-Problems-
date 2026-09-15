# include <stdio.h>
int main(){
	int num,currentsum=0,low=0,startvalue=0,sum=0;
   printf("enter the no of values");
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++){
   	  printf("enter value");
   	  scanf("%d",&arr[i]);
   	  currentsum=currentsum+arr[i];
   	  if(currentsum<low){
   	  	low=currentsum;
		 }
   }
   while(sum<1){
   	startvalue++;
   	sum=low+startvalue;
   }
printf("%d",startvalue);
}
