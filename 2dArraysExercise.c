#include <stdio.h>
#define ROW 4
#define COL 5

int main (){
    int integerArr[ROW][COL];
    printf("Enter the values for the table \n");
    for (int i = 0;i<ROW; i++ ) {
        for (int j = 0; j<COL; j++){
            printf("Row %d Column %d : ",i+1,j+1);
            scanf("%d", &integerArr[i][j]);
        }
    }
    // PRINT WHOLE TABLE
    printf("Summary of whole table \n");
    for (int i = 0;i<ROW; i++ ) {
        for (int j = 0; j<COL; j++){
            printf("%d\t ",integerArr[i][j]);
        }
        printf("\n");
    }

    // ROW AVERAGE CODE
    printf("\nTable with Averages, Min and Max\n");
    float ave,sum;
    for (int i = 0;i<ROW; i++ ) {
        sum = 0;
        for (int j = 0; j<COL; j++){
            sum+=(float)integerArr[i][j];
            printf("%d\t ", integerArr[i][j]);
        }
        ave = sum/ROW;
        printf("\033[0;31m %.2f \033[0m\n",ave);
    }

    // COLUMN AVERAGE CODE
    for (int j = 0;j<COL; j++ ) {
        sum = 0;
        for (int i = 0; i<ROW; i++){
            sum+=(float)integerArr[i][j];
        }
        ave = sum/COL;
        printf("\033[0;31m%.2f\t", ave);
    }

    // MINIMUM NUMBER CODE
    int min=integerArr[0][0];
    for (int i = 0;i<ROW; i++ ) {
        for (int j = 0; j<COL; j++){
            if (integerArr[i][j] < min) {
                min = integerArr[i][j];
            }
        }
    }
    printf("\nMIN: %d \n", min);

    // MAXIMUM NUMBER CODE
    int max=integerArr[0][0];
    for (int i = 0;i<ROW; i++ ) {
        for (int j = 0; j<COL; j++){
            if (integerArr[i][j] > max) {
                max = integerArr[i][j];
            }
        }
    }
    printf("MAX: %d \n", max);

    return 0;
}
