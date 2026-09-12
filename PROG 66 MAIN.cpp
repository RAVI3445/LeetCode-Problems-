# include <stdio.h>
int main(){
	int arr[6]={0,9,9,9,9,9};
	int sum=0,i=0,b,j=5;
	int num[6];
	while(i<6){
		sum=(sum*10) + arr[i];
		i++;
	}
	  sum=sum+1;
     while(j>=0){
     	b=sum%10;
     	num[j]=b;
     	j--;	
     	sum/=10;
     }
     for(int i=0;i<6;i++){
     	printf("%d",num[i]);
	 }	
	 
}

