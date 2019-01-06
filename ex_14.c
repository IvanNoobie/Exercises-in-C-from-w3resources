/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 14 of 72

#include <stdio.h>
int main()
{
    int distance;
    float spent_fuel;
    float consumption;
    
    printf("Enter traveled distance [in km]: \n");
    scanf("%d",&distance);
    printf("Enter amount of spent fuel [in liters]: \n");
    scanf("%f",&spent_fuel);
    consumption = distance / spent_fuel;
    printf("Average consumption (km/lt): %.2f\n",consumption);
    
    
return 0;
}
