/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 19 of 72

#include <stdio.h>

int main()
{
    unsigned int p,q;
    signed r,s;
    printf("Please, enter two positive integers: \n");
    scanf("%u %u",&p,&q);
    printf("Please, enter two even integers: \n");
    scanf("%d %d",&r,&s);
    if (q>r && s>p && (r+s)>(p+q))
        printf("Correct values\n");
    else
        printf("Wrong values\n");
    
    return 0;
}
