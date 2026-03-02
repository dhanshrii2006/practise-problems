// Given three sides of a triangle, first validate whether a triangle is possible.
//If valid, classify it as equilateral, isosceles, or scalene. 

// equilateral = all sides are equal
// isosceles = two sides are equal
// scalene = all sides are different

#include <stdio.h>

int main() 
{
    float arr[3];

    printf("Enter sides ");

    // taking input
    for (int i = 0; i < 3; i++) 
 {
        scanf("%f", &arr[i]);
    }

   
    if (arr[0] + arr[1] <= arr[2] ||
        arr[0] + arr[2] <= arr[1] ||
        arr[1] + arr[2] <= arr[0])
         {

        printf("Triangle is NOT possible\n");
    } 
    else 
    {
        printf("Triangle is possible\n");

      
        if (arr[0] == arr[1] && arr[1] == arr[2]) 
        {
            printf("Equilateral Triangle\n");
        }

        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) 
        {
            printf("Isosceles Triangle\n");
        }
        else
         {
            printf("Scalene Triangle\n");
        }
    }

    return 0;
}