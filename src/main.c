#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char num[100];
    while (1) {
        int n ;
        printf("Please enter a number: ");
        fgets(num, 100, stdin);
        n = atoi(num);
        printf("So take a look at me now!: ");
        printf("%d\n\n", n + (n & 1));
    }
}
