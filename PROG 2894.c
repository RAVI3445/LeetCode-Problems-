# include <stdio.h>
int main(){
	int num1=0,num2=0,n,m;
	printf("enter the max number");
	scanf("%d",&n);
	printf("enter the divi number");
	scanf("%d",&m);
	for(int i=1;i<=n;i++){
	 i%m!=0?num1+=i:num2+=i;    
	}
	return num1-num2;
}
