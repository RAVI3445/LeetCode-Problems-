# include <stdio.h>
int main(){
	int num,prod=1,sum=0,b;
	printf("enter the number");
	scanf("%d",&num);
	while(num>0){
		b=num%10;
		prod*=b;
		sum+=b;
		num/=10;
	}
	return prod-sum;	
}

