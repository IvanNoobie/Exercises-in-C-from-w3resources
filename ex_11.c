/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 11 of 72

#include <stdio.h>
int main()
{
    float weight_a, weight_b;
    float num_items_a, num_items_b;
    float avg_value;
    
    printf("Enter a-item weight: \n");
    scanf("%f",&weight_a);
    printf("Enter number of a-items: \n");
    scanf("%f",&num_items_a);
    printf("Enter b-item weight: \n");
    scanf("%f",&weight_b);
    printf("Enter number of b-items: \n");
    scanf("%f",&num_items_b);
    avg_value = (num_items_a * weight_a + num_items_b * weight_b) / num_items_a + num_items_b;
    printf("Average Value is %f\n", avg_value);
    
return 0;
}
