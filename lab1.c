#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, x;
    printf("Enter a -> ");
    scanf("%f", &a);
    printf("Enter b -> ");
    scanf("%f", &b);
    printf("Enter x -> ");
    scanf("%f", &x);

    if (a+b < x)
        printf("%.3f\n",(a+b)/x);
    
    if (a+b > x)
        printf("%.3f\n",x/(a+b));
    
    if (a+b == x){
        printf("%.3f\n",b/x);
    }
return(0);
}
    