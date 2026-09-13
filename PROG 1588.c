# include <stdio.h>
int main(){
	int num,sum=0,count=0;
	printf("enter the no of terms");
	scanf("%d",&num);
	int arr[num];
	for(int l=0;l<num;l++){
		printf("enter number");
		scanf("%d",&arr[l]);
	}
   for(int i=0;i<num;i++){
   count=((i+1)*(num-i)+1)/2;
   sum+=(arr[i]*count);
}
   printf("%d",sum);
 }	
