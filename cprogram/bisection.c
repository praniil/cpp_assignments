#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 4 * x - 9

void main()
{
    float x0, x1, x2, f0, f1, f2, e;
    int iteration = 1;
Input:
    printf("Enter the value of x0 and x1");
    scanf("%f%f", &x0, &x1);
    printf("enter the value of predefined error: ");
    scanf("%f", &e);
    f0 = f(x0);
    f1 = f(x1);
    if (f0 * f1 > 0.0)
    {
        printf("incorrect initial guess");
        goto Input;
    }
    printf("\n------------------------------------------------------\n");
    printf("\nIteration\t\tx0\t\tx1\t\tx1\t\tx2\t\tx2\t\tf(x2)\n");
    printf("\n------------------------------------------------------\n");
    do
    {
        x2 = (x0 + x1) / 2;
        f2 = f(x2);
        printf("\n%d\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\n", iteration, x0, x1, x2, f(x2));
        if (f0 * f2 < 0.0)
        {
            x1 = x2;
            f1 = f2;
        }
        else
        {
            x0 = x2;
            f0 = f2;
        }
        iteration = iteration + 1;
    } while (fabs(f2) > e);
    printf("\n------------------------------------------------------\n");
    prinf("\nthe approximate real roots is : 0.8f\n", x2);
}