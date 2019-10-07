#include <stdio.h>

int main() 
{
    while(1) {
        printf("Please enter a number: ");
        int n = getchar();
        printf("\nSo take a look at me now!\n");
        if (n % 2 == 0) {
            printf("%d\n", n);
        } else {
            printf("%d\n", n + 1);
       }
    }
}
