# include <stdio.h>
int main(){
	int num,sum=0,count=0,c;
	printf("enter the number ");
	scanf("%d",&num);
	for(num;num>0;num--){
		c=num;
		while(c>0){
			sum+=(c%10);
			c/=10;
	      }
	      
	      if(sum%2==0){
	      count++;
		  }
	       sum=0;
		}
	return count;
}
