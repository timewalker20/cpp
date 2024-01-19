#include <stdio.h>

int main() {
    double discriminant, root1, root2, realPart, imaginaryPart;
    int matrix[2][2];
    int lamba,sum=0,determinant;;
    printf("%d"," enter value ");
    for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", matrix[i][j]);
      }
    }
    sum = matrix[0][0]+matrix[1][1];
    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    double a=1, b=sum, c=determinant;


    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One real root
        root1 = root2 = -b / (2*a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}


