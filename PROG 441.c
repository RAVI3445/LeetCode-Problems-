# include <stdio.h>
int main(){
	int num,i=1,count=0;
	printf("enter");
	scanf("%d",&num);
		while(num>=i){
		   num-=i;
		   i++;
		   count++;		
		}
		return count;
		}	
