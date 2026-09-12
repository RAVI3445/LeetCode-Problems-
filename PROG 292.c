# include <stdio.h>
int main(){
	int tile;
	printf("enter the no tiles");
	scanf("%d",&tile);
	return !(tile%4==0);
}

