/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 18 of 72

#include <stdio.h>

int main()
{
    int input_days, years, months, days;
    printf("Please, input days:\n");
    scanf("%d", &input_days);
    years = input_days / 365;
    months = (input_days - years * 365) / 30;
    days = input_days - years * 365 - months * 30;
    printf("%d Year(s)\n%d Month(s)\n%d Day(s)\n",years,months,days);
    return 0;
}
