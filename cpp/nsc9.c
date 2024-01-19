#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int i,j,k,m,n;
    float x[10],a[3][3],l[3][3],u[3][3],c[3];
    // printf("\nEnter the value of n: ");
    // scanf("%d",&n);
    printf("\nEnter the right hand side constants :\n");
    for(i=1;i<=3;i++)
    {
        scanf("%f",&a[i][n]);
    }
    printf("\nEnter the coefficients row wise :\n");
    for(i=0;i<=3;i++)
    {
       scanf("%f",&c[i][n]);
    }
    float a,b,c,d,e,f,g,h,i;
     a=a[1][1];
     b=a[2][1];
     d=a[3][1];
     g=a[1][2]/a;
     h=a[1][3]/a;
     c=a[2][2]-(b*g);
     i=a[2][3]-(b*h)/c;
     e=a[3][2]-(d*g);
     f=a[3][3]-(d*h)/e;

     float y1,y2,y3;
     y1=c[0]/a;
     y2=(c[1]-b*y1)c;
     y3=(c[2]-d*y1-e*y2)/f;

     float x1, x2 , x3;
     x1=y3;
     x2=y2-1*x3;
     x1=y1-g*y2-h*y3;
    return 0;
}
