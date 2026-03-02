
// 6. A number is called wave number if its digits alternately increase and decrease.Check whether a given number is a wave number.

#include <stdio.h>
int main()
{
    int num;
    int temp;
    int arr[50];
    int wave = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

// this stores in reverse example 1234 will be stored as 4321 in the array. i.e at index 0 we have last digit, and at last index we have first digit. this is because we are taking last digit using % and then removing it using /.
    while(temp > 0)
    {
        int i = 0;
        arr[i] = temp % 10; 
        temp /= 10; 
        i++;
    }

    // reverse input to get original order of digits in the array. example 4321 will be reversed to 1234.it
    for(int j = 0; j < i /2; j++)
    {
        if (arr[j] <= arr[j+1] || arr[j] >= arr[j+1]) 
        {
 int t = arr[j];
        arr[j] = arr[i - 1 - j];
        arr[i - 1 - j] = t;
    }
    for (int j = 1; j < i - 1; j++)
    {
        if ((arr[j] >= arr[j - 1] && arr[j] >= arr[j + 1]) || (arr[j] <= arr[j - 1] && arr[j] <= arr[j + 1]))
        // this is when either arr[j] is greater than or equal to both its neighbors or less than or equal to both its neighbors, which means it is not a wave number.
        wave = 0; // if the condition is true, we set wave to 0, indicating that the number is not a wave number.
        break;}
    }   
}

if (wave && j >1)
{
    printf("The number is a wave number.\n");
}
else
{
    printf("The number is not a wave number.\n");
}   
return 0;
}
