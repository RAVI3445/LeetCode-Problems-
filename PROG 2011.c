#include <stdio.h>
int main(){
    int num, x = 0;
    printf("enter no of operations: ");
    scanf("%d", &num);
    char arr[num][4];
    for(int i = 0; i < num; i++){
        printf("enter operation: ");
        scanf("%3s", arr[i]);
    }
    for(int k = 0; k < num; k++){
        if(arr[k][1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d", x);
}
