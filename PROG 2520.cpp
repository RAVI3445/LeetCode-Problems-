# include <stdio.h>
  int main(){
  	int b,c,num,count=0;
  	printf("enter the number");
  	scanf("%d",&num);
  	c=num;
  	while(num>0){
  		b=num%10;
  		if(c%b==0)
  		    count++;
  		num/=10;
	  }
	  return count;
  }




