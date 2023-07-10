#include<stdio.h>
void display(int);
void main()
{
    int n=3;
   display(n);

}
void display(int a){
    if (a<1)
    return;
    else {
        printf("%d", a);
        display(a-1);
        printf("%d", a);
    }
}