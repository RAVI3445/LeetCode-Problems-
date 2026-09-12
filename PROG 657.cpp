# include <stdio.h>
int main(){
	int nums,x=0,y=0;
	printf("enter the no of operations");
	scanf("%d",&nums);
	char arr[nums];
	for(int i=0;i<nums;i++){
		if(arr[i]=='l'){
		   x--;
	}
		if(arr[i]=='r'){
		   x++;
	}
		if(arr[i]=='u'){
		  y++;
	}
		if(arr[i]=='d'){
		 y--;
	}
	}
	return x==0&&y==0;
}
