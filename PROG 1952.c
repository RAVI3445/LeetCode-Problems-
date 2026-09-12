#include <stdio.h>
int main(){
	int nums,count=0;
	printf("enter the numbers");
	scanf("%d",&nums);
	for(int i=1;i<=nums;i++){
		if(nums%i==0)
		 count++;
	}
	return count==3 ;
}
