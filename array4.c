// sum of 2D array

#include<stdio.h>
void main(){

    int i, j, a[2][3], sum=0;
    printf("enter elements: ");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
            sum= sum+ a[i][j];
        }
        printf("\n");
    }
        printf("sum: %d", sum); 
}