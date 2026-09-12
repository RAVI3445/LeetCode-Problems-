# include<stdio.h>
int main(){
	int num,rem,i=0;
	char a[10];
	printf("enter the number");
	scanf("%d",&num);
	while(num>0){
		num--;
		rem=num%26;
		a[i]='A'+rem;
		i++;
		num/=26;
		}
		for(int j=i-1;j>=0;j--){
			printf("%c",a[j]);
		}
}
