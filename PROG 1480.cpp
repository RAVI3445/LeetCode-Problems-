# include <stdio.h>
int main(){
	int num,sum=0;
	printf("enter the number of terms");
	scanf("%d",&num);
	int arr1[num];
	int arr2[num];
	for(int k=0;k<num;k++){
		printf("enter term");
		scanf("%d",&arr1[k]);
	}
	for(int i=0;i<num;i++){
		sum+=arr1[i];
		arr2[i]=sum;
	}
	for(int j=0;j<num;j++){
		printf(" %d",arr2[j]);
	}
}

