#include<stdio.h>
void main(){

    int a=10, b=110, *p ,c, *q;
    p=&a;
    // q=&b;
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);
    printf("value of a:%d\n", *p);
    printf("address of a:%x\n", &a);
    printf("address of b:%x\n", &b);
    printf("address of a:%x\n", p);
    printf("address of p:%x\n", &p);
    
 
   p=&b;
   c=*p;
    printf("c= %d\n", c);
    printf("value of b: %d\n" , *p);
    printf("address of b: %x\n", &b);

}