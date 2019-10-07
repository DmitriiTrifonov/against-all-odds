#include <stdio.h>

int main() 
{
    while(1) {
        printf("Please enter a number: ");
        int n;
        scanf("%d", &n);
        printf("So take a look at me now! ");
        if (n % 2 == 0) {
            printf("%d\n\n", n);
        } else {
            printf("%d\n\n", n + 1);
       }
    }
}
