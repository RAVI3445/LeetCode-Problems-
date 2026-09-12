# include <stdio.h>
# include <math.h>
int main(){
	int num;
    printf("enter");
	scanf("%d",&num);
	int limit=pow(num,0.5);
	for(int i=0;i<=limit;i++){
		for(int j=0;j<=limit;j++){
			if(num==(i*i)+(j*j)){
				return 1;	
			}	
		}
	}
	  return 0;	
}
