#include <stdio.h>
int main() {
    int num, i = 1, j = 0;
    printf("enter the number");
    scanf("%d", &num);
    int arr[num];
    char *ar[num];
    char values[num][12];
    for (i = 1; i <= num; i++) {
        arr[i - 1] = i;
    }
    for (j = 0; j <= num - 1; j++) {
        if (arr[j] % 3 == 0 && arr[j] % 5 == 0)
            ar[j] = "fizzbuzz";
        else if (arr[j] % 3 == 0)
            ar[j] = "fizz";
        else if (arr[j] % 5 == 0)
            ar[j] = "buzz";
        else {
            sprintf(values[j], "%d", arr[j]);
            ar[j] = values[j];
        }
    }
}
