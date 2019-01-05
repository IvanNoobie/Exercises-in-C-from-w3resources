/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 7 of 72

#include <stdio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    
    printf("a + c = %d\n", a + c); // ASCII code of 'W' is integer 087!
    printf("x + c = %f\n", x + c);
    printf("dx + x = %lf\n", dx + x);
    printf("int_dx + ax = %li\n", ((int)dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b = %d\n", s + b);
    printf("ax + b = %li\n", ax + b);
    printf("s + c = %d\n", s + c);
    printf("ax + c = %li\n", ax + c);
    printf("ax + ux = %li\n", ax + ux);
    
return 0;
}
