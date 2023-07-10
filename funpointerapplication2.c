#include<stdio.h>
void sum(int a, int b){
    printf("%d", a+b);
}
void sub(int a, int b){
    printf("%d", a-b);
}

void multi(int a, int b){
    printf("%d", a*b);
}

void div(int a, int b){
    printf("%d", a/b);
}
int main(){
    int ch, a , b;
   void(*fptr[10])(int , int)={sum, sub, multi, div};
    printf("0 for add\n 1 for sub\n 2 for multi\n 3 for div\n");
    printf("enter choice\n");
    scanf("%d", &ch);
    printf("enter two numbers:\n");
    scanf("%d %d", &a,&b);
    
    (*fptr[ch])(a,b);

    return 0;
}