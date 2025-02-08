//create an array of five books and print the average price:
#include<stdio.h>

float avg(float arr[])  
{
    float sum = 0.0;
    for(int i = 0; i < 5; i++)
    {
        sum =sum+arr[i];
    }
    return sum / 5;
}

int main()
{
    float arr[5]; 
    
    printf("Enter five book prices: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]); 
    }

    printf("Average of five book prices is: %.2f\n", avg(arr));  
    
    return 0;
}

