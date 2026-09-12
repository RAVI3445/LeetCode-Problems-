# include <stdio.h>
int main(){
	char num[6]="69999";
	for(int i=0;i<=5;i++){
		if(num[i]%6==0){
			num[i]=57;
			break;
		}
	}
	for(int i=0;i<=5;i++){
		printf("%c",num[i]);
	}	
}
