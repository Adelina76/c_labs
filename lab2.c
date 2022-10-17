#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    const double pi = 3.1415926535;
    printf("Enter x { 0 <= x <= pi } -> ");
    scanf("%lf", &x);
    if (0 <= x && x <= pi)
    {
        double y = sqrt(sin(2*x)) + sqrt(sin(3*x));
        double z = pow(log(tan(y-pi/8)),1/4);
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}
