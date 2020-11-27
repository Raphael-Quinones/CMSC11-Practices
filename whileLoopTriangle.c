/*
Write a C program that displays at the left
margin of the screen a solid triangle of
asterisks whose side is an integer value
given by the user. For example, if side is
3, the program displays the following
patterns, one below the other.
Enter number of sides: 3
*
**
***
 */
#include <stdio.h>

int main() {
    int sides, i = 1, j = 1;
    printf("Enter Number of Sides: ");
    scanf("%d", &sides);
    while (j != sides + 1) {
        i = j;
        while (i != 0) {
            printf("*");
            i = i - 1;
        }
        printf("\n");
        j = j + 1;
    }


    return 0;
}