# include <stdio.h>
int main(){
	int count=0,num;
	printf("enter the number");
	scanf("%d",&num);
	while(num>0){
		if(num%2!=0){
			num-=1;
			count++;
		}
		else {
		num=num/2;
		count++;
	   }
	}
	return count;
}
