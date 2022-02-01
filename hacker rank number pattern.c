#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int k = n*2-1;  
    int m = n;
    
  	// Complete the code to print the pattern.
      for(int i = 1; i<=k; i++){
          for(int j = 0; j<=k; j++){
              if(i==1||j==1||i==k||j==k){
                  printf("%d", m);
              }
        //   for(int p = 1; p<=k; p++ ){
        //       if()
        //   }
          }
          printf("\n");
      }
    return 0;
}