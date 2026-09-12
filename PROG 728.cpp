# include <stdio.h>
int main(){
	 int num,b,c;
	 printf("enter");
	 scanf("%d",&num);
	 c = num;
     while(c > 0){
    b = c % 10;
    if(b == 0 || num % b != 0)
        return 0;
    c /= 10;
}
return 1;
}
 
