#include<stdio.h>
void main(){

    int a=90;
    int * p=&a;
    int **q=&p;
    int ***r= &q; 
    printf("a : %d\n", a);
    printf("a : %d\n", *p);
    printf("a : %d\n", *(*q));
    printf("a : %d\n", *(*(*r)));

    printf("Address of a: %x %x\n", &a, p);
    printf("address of p: %x %x\n",*q, p);
    printf("Address of q: %x  %x\n",r, &q); 
    printf("address of p: %x %x\n", &p, q );
}