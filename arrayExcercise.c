#include <stdio.h>
#define SIZE 2

int main(){
    int num1[SIZE],num2[SIZE],sum[SIZE],num=0;
    printf("Enter 2 Five digit numbers for set 1\n");
    for (int i=0;i <= SIZE-1;i++){
        scanf("%d",&num1[i]);
    }
    printf("Enter 2 Five digit numbers for set 2\n");
    for (int i=0;i <= SIZE-1;i++){
        scanf("%d",&num2[i]);
    }

    for (int i=0;i <= SIZE-1;i++){
        num = num1[i]+num2[i];
        sum[i]=num;
    }
    for (int i=0;i <= SIZE-1;i++){
        if (sum[i]>=99999){
            printf("Error");
        }
        printf("%d\n",sum[i]);
    }


    return 0;

}
