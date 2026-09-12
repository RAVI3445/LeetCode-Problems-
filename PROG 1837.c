# include <stdio.h>
# include <math.h>
int main(){
	 int decimal,radix,rsum=0,b;
	 printf("enter the decimal value");
	 scanf("%d",&decimal);
	 printf("enter the radix value");
	 scanf("%d",&radix);
     while(decimal>0){
     	b=decimal%radix;
     	decimal/=radix;
     	rsum+=b;
     }
     return rsum;
 }
