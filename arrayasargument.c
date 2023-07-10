#include<stdio.h>
int avg(int[], int );
void main(){
    int marks[5]={10, 50,20,30,40} , size, average;
    size = sizeof(marks)/(marks[0]);
    average=avg(marks, size);
    printf("average =%d\n", average);
    printf("inside main size of array is (in bytes) : %d\n", sizeof(marks));

}
    int avg(int marks1[], int size)
    {
        int i , sum=0, average=0;
        for(i=0; i<size; i++){
            sum = sum + marks1[i];
        }
        average=sum/size;
         printf("inside avg func size of array is (in bytes) : %d\n", sizeof(marks1));

        return average;
    }