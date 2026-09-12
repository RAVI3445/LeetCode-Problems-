# include <stdio.h>
int main(){
	int a,sum=0,num;
printf("enter a number");
scanf("%d",&num);
while(num!=1&&num!=4){
  while(num>0){
   a=num%10;
   num/=10;
   sum+=a*a;
}
num=sum;
sum=0;
}
if(num==1)
 printf("happy number");
else
printf("not a happy number");
}
  

