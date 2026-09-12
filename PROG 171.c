# include<stdio.h>
int main(){
	int sum=0,rem,i=0,nums;
	printf("enter the number");
	scanf("%d",&nums);
	char a[nums];
	for(int j=0;j<nums;j++){
		printf("enter char\n");
		scanf(" %c",&a[j]);
	}
	while(i<nums){
		rem=a[i]-'A'+1;
		sum=sum*26 + (rem);
		i++;	
	}
	printf("%d",sum);
}
