# include <stdio.h>
int main(){
	int number,a=0,b=0,c=1,sum=0;
	printf("enter");
	scanf("%d",&number);
	if(number==0)
	  return 0;
	for(int i=0;i<number;i++){
		sum=a+b+c;
		a=b;
		b=c;
		c=sum;
	}
	return sum;
}
