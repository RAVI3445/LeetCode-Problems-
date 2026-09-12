# include <stdio.h>
int main(){
	int num,sum=0,left=0,right=0,c;
	printf("enter no elements");
	scanf("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++){
		printf("enter element");
		scanf("%d",&arr[i]);
		sum+=arr[i];
		}
    c=sum;
    for(int j=0;j<num;j++){
        sum-=arr[j];
        left=c-sum-arr[j];
        printf(" %d",sum>left?sum-left:left-sum);
    }
}
