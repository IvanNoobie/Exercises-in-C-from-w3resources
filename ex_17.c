/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 17 of 72

#include <stdio.h>

int main()
{
    int input_time, sec, min, hour;
    printf("Please, input seconds:\n");
    scanf("%d",&input_time);
    hour = input_time / 3600;
    min = (input_time - hour * 3600) / 60;
    sec = input_time - hour * 3600 - min * 60;
    printf("There are:\nH:M:S - %d:%d:%d\n",hour,min,sec);
    
    return 0;
}
