# include <stdio.h>
int main(){
	int number,b,i=0,sum=0;
	printf("enter the number");
	scanf("%d",&number);
	char num[50]=" ";;
	if(number==0)
	 return 0;
	 
	 
	while(number!=0){
		b=number%7;
		sum*=10+b;
		number/=7;	
	}
	while(sum>0){
		num[i]=sum%10+'0';
		i++;
		sum/=10;
	}
	
	}

