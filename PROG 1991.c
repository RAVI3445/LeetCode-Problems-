# include <stdio.h>
int main(){
	int num,sum=0,left=0,c;
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
       if(sum==left){
         return j;
       }
	}
     return -1;
}
