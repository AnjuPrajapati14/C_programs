#include<stdio.h>
void main(){

    int a[]= {3,2,67,0,56};
    int *p;
    p=a;
     printf(" %d\n", *p); // 3
    printf("%d %d\n", *++p, *++p);   // 2  67

     printf(" %d\n", *p);  // 67
    printf("%d\n", *p++); //67
     
    printf(" %d\n", *p); // 0



    printf("  %d\n",  *++p);  //56
    printf("%d\n", *p);  //56


    printf("%d %d\n", *--p, *--p); //0 67
    printf("%d %d\n", *p--, *p--); //67 2
    printf("%d\n", *p); // 3
}