# include <stdio.h>
# include <stdbool.h>
int main(){
	int nums;
	printf("enter the no of points");
	scanf("%d",&nums);
	int arr[nums][2];
	for(int i=1;i<nums-1;i++){
		if((arr[i][1]-arr[0][0])*(arr[i+1][0]-arr[0][1])!=(arr[i+1][1]-arr[0][0])*(arr[i][0]-arr[0][1]))
		return false;
    	}
	return true;
}

