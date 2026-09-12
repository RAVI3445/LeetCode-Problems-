# include <stdio.h>
int main(){
	int number,a=0,b=1,sum=0;
	printf("enter");
	scanf("%d",&number);
	if(number==0)
	  return 0;
	for(int i=1;i<number;i++){
		sum=a+b;
		a=b;
		b=sum;
	}
	return sum;
}
