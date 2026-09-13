# include <stdio.h>
int main(){
	int num,sum=0,currentsum,left=0,right=0;
	printf("enter the no of bytes");
	scanf("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++){
		printf("enter");
		scanf("%d",&arr[i]);
        if(arr[i]==1){
            right++;
        }
	}
    for(int j=0;j<num-1;j++){
        currentsum=0;
        if(arr[j]==0){
            left++;
        }
        if(arr[j]==1){
            right--;
        }
        currentsum=left+right;
        if(sum<currentsum){
            sum=currentsum;
          }
        }
    printf("%d",sum);
    }
