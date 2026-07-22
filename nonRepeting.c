#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, count = 0;

    for(i = 1; i < n; i++)
    {
        if(arr[i] == arr[i - 1])
            count++;
    }

    printf("Total duplicate elements = %d", count);

    return 0;
}