/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 12 of 72

#include <stdio.h>
int main()
{
    char id [10];
    int hours;
    float salary_hour;
    float salary_month;
    
    printf("Enter employee's ID[max.10 chars]: \n");
    scanf("%s", id); // NOT &id !!?
    printf("Enter employee's number of working hours: \n");
    scanf("%d",&hours);
    printf("Enter employee's salary per hour: \n");
    scanf("%f", &salary_hour);
    salary_month = salary_hour * hours;
    printf("Employee's ID = %s\n",id);
    printf("Employee's month salary = %.2f\n",salary_month);
    
return 0;
}
