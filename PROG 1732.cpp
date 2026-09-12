# include <stdio.h>
int main(){
	int num,highest = 0,sum = 0;
	printf("enter the number of gains");
	scanf("%d",&num);
	int gain[num];
	for(int i=0;i<num;i++){
		printf("enter gain");
		scanf("%d",&gain[i]);
	}
   for(int j = 0; j < num; j++){
      sum += gain[j];
    if(sum > highest){
        highest = sum;
     }
  }
    return highest;
}
