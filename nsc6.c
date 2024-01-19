/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float matrix[2][2];
    float cof[2][2];
    float r[2][2];
    int i,j;
    float determinant;
    printf(" enter value ");
    for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         scanf("%f", &matrix[i][j]);
      }
    }
    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    cof[0][0]=matrix[1][1];
    cof[0][1]=-matrix[1][0];
    cof[1][0]=-matrix[0][1];
    cof[1][1]=matrix[0][0];
   
    cof[0][1]= -cof[1][0];
    cof[1][0]= -cof[0][1];
    
    for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
        printf("%f ",cof[i][j] );
      }
    }
    printf("\n");
    for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
        r[i][j]=(1/determinant)*cof[i][j];
      }
    }
     for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("%f ", r[i][j]);
      }
    }
     
    return 0;
}

