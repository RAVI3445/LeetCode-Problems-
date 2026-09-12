# include <stdio.h>
 int main(){
 	int teams,matches=0;
 	printf("enter the teams");
 	scanf("%d",&teams);
 	while(teams>1){
 		matches+=teams/2;
 		teams=teams/2 + teams%2;	
	 }	
	 printf("%d",matches);
 }
