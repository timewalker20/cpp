#include<stdio.h>
#include<math.h>

double F( double x) 
{
   
    return (5- pow(x,4));
}

int main()
{

    double x0,x1;

    printf("\nEnter the first approximation to the root : ");
    scanf("%lf",&x0);

    printf("Enter the second approximation to the root : ");
    scanf("%lf",&x1);

    int iter;
    printf("Enter the number of iteration you want to perform : ");
    scanf("%d",&iter);

    int ctr = 1;
    double l1 = x0;
    double l2 = x1;
    double r,f1,f2,f3;

    if(F(l1)==0)
        r = l1;
    else if(F(l2)==0)
        r = l2;
    else 
    {
        while(ctr <= iter) 
        {
           
            f1 = F(l1);
            r = (l1+l2)/2.0; 
            f3 = F(l2);

            if(f2 == 0)
            {
                r = f2;
                break; 
            }
            printf("The root after %d iteration is %lf\n",ctr,r);

            if(f1*f2 < 0)
                l2 = r;
            else if(f2*f3 < 0)
                l1 = r;
            ctr++;
        }
    }

    printf("The approximation to the root is %lf\n",r);
    return 0;
}
