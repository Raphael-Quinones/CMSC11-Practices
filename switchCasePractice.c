#include <stdio.h>

/*
Using switch, display the following menu:
<1> Area of a rectangle
<2> Perimeter of a rectangle
<3> Volume of a rectangular prism
Ex.
 Enter choice: 1
Enter length and width: 3 5
Area is 15
 */
int main() {
    int choice, length, width, height, product;
    printf("<1> Area of a rectangle\n");
    printf("<2> Perimeter of a rectangle\n");
    printf("<3> Volume of a rectangular prism\n");
    printf("Choose a number\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Area of Rectangle\n");
            printf("Enter length and width: ");
            scanf("%d %d", &length, &width);
            product = length * width;
            printf("Area is %d", product);
            break;
        case 2:
            printf("Area of Rectangle\n");
            printf("Enter length and width: ");
            scanf("%d %d", &length, &width);
            product = 2 * (length + width);
            printf("Perimeter is %d", product);
            break;
        case 3:
            printf("Area of Rectangle\n");
            printf("Enter length, width, and height: ");
            scanf("%d %d %d", &length, &width, &height);
            product = length * width * height;
            printf("Volume is %d \n", product);
            break;
        default:
            printf("Invalid Number");

    }

    return 0;
}
