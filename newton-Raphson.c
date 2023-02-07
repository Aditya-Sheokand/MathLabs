#include<stdio.h>
#include<math.h>
#define e .001
#define f(x) pow(x,3)-4*x
#define df(x) 3*x*x-4

int main()
{
    float x0,x1,f0,f1,df0;
    int i=0;

    printf("Enter the value of x ");
    scanf("%f",&x0);

    do
    {
        f0=f(x0);
        df0=f(x0);
        x1=x0-f0/df0;

        f1=f(x1);
        x0=x1;
        i++;

        printf("no. of iteration is %d\t",i);
        printf("value of roots is=%f \t ",x1);
        printf("value of function is =%f",f1);

    }

    while(fabs(f1)>e);

    return 0;
}
