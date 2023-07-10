// sum of two arrays

#include<stdio.h>
void main(){
    int i, j , a[5], b[5], c[5];
    // for(j=0; j<2; j++){
    printf("enter elements:\n");
    for(i=0; i<5; i++){
        scanf("%d\n", &a[i]);
    } 
    for(i=0; i<5; i++){
    printf("the 1st array: %d\n", a[i]);
    }
     
    printf("enter elements:\n");
    for(i=0; i<5; i++){
        scanf("%d\n", &b[i]);
    } 
    for(i=0; i<5; i++){
    printf("the 2nd array: %d\n", b[i]);
    }
    for(i=0; i<5; i++){
    c[i]= a[i]+b[i];
    }
    printf("new array after addition:");
     for(i=0; i<5; i++){
        printf(" %d", c[i]);
     }


}