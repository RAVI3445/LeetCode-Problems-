# include <stdio.h>
int main(){
	int num,count=0;
	printf("enter the numbers ");
	scanf("%d",&num);
	while(num>1){
		if(num%4==0){
		num/=4;
		count++;}
		else{
		printf("not power");
		num=0;}}
     if (num>0) 
	     return count;}
