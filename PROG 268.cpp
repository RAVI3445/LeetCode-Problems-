# include <stdio.h>
int main(){
    int number,sum=0;
    printf("enter the no of numbers");
    scanf("%d",&number);
	int nums[number];
	for(int i=0;i<number;i++){
		sum+=nums[i];
	}
	return (number*(number+1))/2 - sum;
}
