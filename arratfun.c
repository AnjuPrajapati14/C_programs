#include<stdio.h>

int avg(int marks[], int a){
    int sum=0;
    int average=0;
    for(int i=0; i<a; i++)
    {
        sum= sum+ marks[i];
    }
    average= sum/a;
      printf("size of marks array in avg function(in bytes): %d", sizeof(marks));
    return average;
 
}

//int avg(int [], int);
void main(){
    int average, size;
    int marks[5]= {10, 20,30,40,50};
    size= sizeof(marks)/sizeof(marks[0]);
    average= avg(marks, 5);
    printf("avg is %d\n", average); 
    printf("size of marks array in main function(in bytes): %d", sizeof(marks));
}

