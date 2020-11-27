#include <stdio.h>
int main() {
    {
        int sides, i = 0, j = 0, original;
        printf("Enter Number of Sides:");
        scanf("%d", &sides);
        /*if (sides>1){
        printf("*\n");
        }*/
        original = sides;                   //initialize for last for loop (line 46)
        while (j != sides) {
            i = j;                            //initialization for while, j can't be used since the whole while will be affected
            while (i != 0) {
                if (i == j || i ==
                              1) {          //j will be the original number of sides for while loop, prints "*" for start and end of line
                    printf("*");
                } else {                      //prints spaces between start and end of the line
                    printf(" ");
                }
                i = i - 1;
            }
            j = j + 1;
            printf("\n");
        }
        for (int k = 0; original > k; k++) {       //last line for triangle
            printf("*");
        }
    }
    return 0;
}
