/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 15 of 72

#include <stdio.h>
#include <math.h>
int main()
{
    int x1;
    int y1;
    int x2;
    int y2;
    int X;
    int Y;
    double Z;
    
    printf("Enter 1st point:\n");
    scanf("%d %d", &x1 ,&y1);
    printf("Enter 2nd point:\n");
    scanf("%d %d", &x2 ,&y2);
    X = x2 - x1;
    Y = y2 - y1;
    Z = sqrt(X * X + Y * Y);
    printf("Distance between points: %lf\n", Z);
    
return 0;
}
