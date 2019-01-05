/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 8 of 72

#include <stdio.h>
int main()
{
    int days = 1329;
    int years = days / 365;
    int years_remainder = days % 365;
    int weeks = years_remainder / 7;
    int weeks_remainder = years_remainder % 7;
    
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", weeks_remainder);
    
return 0;
}
