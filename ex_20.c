/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 20 of 72

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,D,x,x1,x2;
    printf("Please, enter numbers [a],[b],[c]:\n");
    scanf("%f %f %f",&a,&b,&c);
    D = b * b - 4 * a * c;
    if (D < 0)
        printf("Quadratic equation has no roots\n");
    if (D == 0)
    {
        x = -b / (2 * a);
        printf("Root = %f\n",x);
    
    }
    if (D > 0)
    {
        x1 = ( -b - sqrt(D)) / (2 * a);
        x2 = ( -b + sqrt(D)) / (2 * a);
        printf("Root 1 = %f\nRoot 2 = %f\n",x1,x2);
    }
    
    
    return 0;
}
