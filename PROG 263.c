# include <stdio.h>
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	while(num%2==0)
	  num/=2;
	while(num%3==0)
	  num/=3;
	while(num%5==0)
	  num/=5;
	if(num==1)
	  printf("ugly");
	else(num!=1)
	  printf("not ugly");
 
}
