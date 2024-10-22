#include<stdio.h>

int main() {
    int i, j, rounded;
    printf("Enter the integer i (number to round off): ");
    scanf("%d", &i);
    printf("Enter the integer j (multiple to round off to): ");
    scanf("%d", &j);
    rounded = ((i + j - 1) / j) * j;
    printf("The next largest multiple of %d rounded to %d is %d\n", i, j, rounded);
    return 0;
}
