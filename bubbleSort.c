//Bubble Sort
#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE]={0}, i, ind, pass,temp;
    printf("enter the integers to be sorted\n");
    for (ind=0; ind<=SIZE-1; ind++){
        printf("integer nbr %d\t", ind+1);
        scanf("%d",&a[ind]);
        printf("\n");
    }

    printf("data in original order:\n");
    for (ind=0; ind<=SIZE-1; ind++){
        printf("a[%d] %d " ,ind, a[ind]);
    }

    for (pass=0; pass<=SIZE-1; pass++){
        for (ind=0; ind<=SIZE-2; ind++){
            if (a[ind] > a [ind+1]){
                temp= a[ind];
                a[ind]=a[ind+1];
                a[ind+1]=temp;
            }
        }
    }

    printf("data in sorted order:\n");
    for (ind=0; ind<=SIZE-1; ind++)
        printf("a[%d] %d " ,ind, a[ind]);
}
