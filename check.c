#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	 // code
       for(int i =0 ; i<=n ; i++){
           for(int j =0 ; j<=n ; j++){
               if(i==0 || i ==n) {
           printf("%d " , n);
               } 
                else if (j==0 || j==n){  
                 printf("%d " , n);
               }
               else{
                printf("%d ", n--);
               }
       }
       printf("\n");
       }
           
       
    
       
 
    return 0;
}