/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 13 of 72

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int max;
    
    printf("Enter 1st integer: \n");
    scanf("%d",&a);
    printf("Enter 2nd integer: \n");
    scanf("%d",&b);
    printf("Enter 3rd integer: \n");
    scanf("%d",&c);
    
    max = a;
    if (max<b)
        max = b;
    if (max<c)
        max = c;
    
    printf("Maximum value of three integers is: %d\n)",max);
        
return 0;
}
