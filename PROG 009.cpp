# include <stdio.h>
 int main(){
 	 long int a,rev=0,b,c;
 	 printf("enter the number");
 	 scanf("%ld",&a);
 	 c=a;
 	 while(a>0){
			 b=a%10;
			 rev=rev*10+b;
			 a/=10;	 
	  }
	  if(rev==c)
	  printf("a palindrome");
	  else
	  printf("not a palindrome");
 }
