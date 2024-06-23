#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 4, 5, 6, 6};
    int count = sizeof(arr) / sizeof(int);

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < count - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
            }
        }
    }

    for (int m = 0; m < count; m++)
    {
        printf("%i ", arr[m]);
    }

    return 0;
}