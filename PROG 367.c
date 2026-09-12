# include <stdio.h>
int main(){
	int nums;
	printf("enter");
	scanf("%d",&nums);
	for(int i=1;i*i<=nums;i++){
		if(i*i==nums)
		  return 1; 
	}
	}
