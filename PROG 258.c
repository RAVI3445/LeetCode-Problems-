# include <stdio.h>
int main(){
	int num,sum=0,b;
	printf("enter a number");
	scanf("%d",&num);
	while(num>9){
		while(num>0){
			b=num%10;
			sum+=b;
			num/=10;
		}
		num=sum;
		sum=0;
	}
	return num;
}


