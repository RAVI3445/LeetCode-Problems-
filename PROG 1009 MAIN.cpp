#include <stdio.h>
int main() {
	int i = 0,num,bits,temp;
      printf("enter no bits");
      scanf("%d",&bits);   
      int binaryNum[bits];
      printf("enter");
      scanf("%d",&num);     
     if (num == 0) {
         return 1;
    }
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int i = 0; i < bits / 2; i++) {
        temp = binaryNum[i];
        binaryNum[i] = binaryNum[bits - 1 - i];
        binaryNum[bits - 1 - i] = temp;
    }
    for (int i = 0; i < bits; i++) {
        binaryNum[i] = !binaryNum[i]; 
}
}
