#include <stdio.h>
#include <stdlib.h>
#define input_size 50

int main() {
    char *a = (char*)malloc(1);
    int *b = (int*)malloc(input_size);
    int sum;
    int dif;
    int prod;
    int quo;
    printf("Enter the first char: ");
    fgets(a, input_size, stdin);
    printf("%c Enter the second number: ", *a);
    printf("%d\n",atoi(a));
    scanf("%d", b);

    // int *operator;
    // printf("Enter a 1 for +, 2 for -, 3 for *, 4 for /: ");
    // scanf("%d", operator);

    // switch (*operator) {
    //     case 1:
    //         sum = a+b;
    //         printf("Sum: %d\n", sum);
    //     case 2:
    //         dif = a-b;
    //         printf("Sum: %d\n", dif);
    //     case 3:
    //         prod = a*b;
    //         printf("Sum: %d\n", prod);
    //     case 4:
    //         quo = a/b;
    //         printf("Sum: %d\n", quo);
    // }

    return 0;
}
