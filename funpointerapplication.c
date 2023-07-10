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
    printf("0 for add\n 1 for sub\n 2 for multi\n 3 for div\n");
    printf("enter choice\n");
    scanf("%d", &ch);
    printf("enter two numbers:\n");
    scanf("%d %d", &a,&b);
    switch(ch)
    {
        case 0: sum(a,b);
        break;
        case 1:sub(a,b);
        break;
        case 2:multi(a,b);
        break;
        case 3:div(a,b);
        break;
        default: printf("enter valid choice");
    }
    return 0;
}