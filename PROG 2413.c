# include <stdio.h>
int main(){
	int n,i=2;
	printf("enter the number");
	scanf("%d",&n);
	for(i;;i++){
		if(i%n==0 && i%2==0){
		printf("%d",i);
		break;
	 }	  
	}	   	
}
