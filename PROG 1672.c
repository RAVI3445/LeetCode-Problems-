#include <stdio.h>
int main() {
    int user, acc, value,maxwealth = 0,currentsum;
    printf("Enter no of users: ");
    scanf("%d", &user);
    printf("Enter no of accounts: ");
    scanf("%d", &acc);
    for(int i = 0; i < user; i++) {
        currentsum = 0;
        for(int j = 0; j < acc; j++) {
            printf("Enter value: ");
            scanf("%d", &value);
            currentsum += value;
        }
        if(currentsum > maxwealth) {
            maxwealth = currentsum;
        }
    }
    printf("%d", maxwealth);
}
