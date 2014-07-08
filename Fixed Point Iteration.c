#include<stdio.h>
#include<math.h>

double fpi (double);

int main()
{
    double a[100],b[100],c=100.0;
    int i=1,j=0;
    //b[0]=(240*pow(-0.5,4)+18*pow(-0.5,3)+9*pow(-0.5,2)-221*-0.5-9);
    printf("Enter initial guess:");
    scanf("%lf",&a[0]);
    printf("\n\n The values of iterations are:\n\n ");
    while(c>0.000000000001)
    {
        a[j+1]=fpi(a[j]);
        c=a[j+1]-a[j];
        c=fabs(c);
        printf("%d\t%.11f\n",j,a[j+1]);
        j++;

    }
    printf("\nThe root of the function is: %.11f",a[j]);
}

double fpi(double x)
{
    double y;
    y=(240*pow(x,4)+18*pow(x,3)+9*pow(x,2)-9)/221;
    return y;
}
