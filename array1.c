/* #include<stdio.h>
void main(){
int a[5], i; 
int sum =0, avg;
int j=0;
int marks[5];
for(j=0; j<5; j++){
    printf("marks:");
    scanf("%d", &marks[j]);
}for(j=0; j<5; j++){
    sum= sum+ marks[j]; 
}
avg= sum/5;
printf("\nSum: %d", &sum);
printf("\naverage: %d", &avg); 
printf("\nenter elements:");
for (i=0; i<5; i++){
    scanf("%d", &a[i]);
}
    for(i=0; i<5; i++){
        printf(" \nArray element at index %d is %d", i , a[i]);
    } 
    printf("\n");
        for(i=4; i>=0 ; i--){
            printf("\nReversed Array at index %d is: %d", i, a[i]);
        } 
} 
*/

// sum and average of marks of 5 students: 


 #include<stdio.h>
 void main(){
     int i, a[5], sum=0, avg;
      printf("Enter marks:");
    for(i=0; i<5; i++){
       scanf("%d", &a[i]);
    }
    for(i=0; i<5 ; i++){
        sum= sum+ a[i];
    }
    printf("\nsum: %d\n" , sum);
    avg= sum/5;
    printf("Average: %d\n", avg);
 }


