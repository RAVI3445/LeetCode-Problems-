# include <stdio.h>
int main(){
	int num,sum=0;
	printf("enter");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		if(num%i==0){
		  sum=sum+i;
	   }
	}
	return num==sum;   
}
