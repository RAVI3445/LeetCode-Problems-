# include <stdio.h>
int main(){
	int limit,count=0,prime=0;
	printf("enter the limit ");
	scanf("%d",&limit);
	for(int i=2;i<limit;i++){
		for(int j=1;j*j<=i;j++){
			if(i%j==0){
			  count++;
		   }
		  }
			if(count==1){
			 prime++;
		  }
		  count=0;
		}
	return prime;
}
