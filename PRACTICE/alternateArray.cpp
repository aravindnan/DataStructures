// hellow world program in cpp
#include <iostream>
// write the main funciton

// Given an array arr of distinct elements of size n, the task is to rearrange the elements of
// the array in a zig-zag fashion so that the converted array should be in the below form:
// arr[0] < arr[1] > arr[2] < arr[3] > arr[4] < . . . . >arr[n-2] < arr[n-1] > arr[n].
// Input: n = 7, arr[] = {4, 3, 7, 8, 6, 2, 1}
// Output: 3 < 7 > 4 < 8 > 2 < 6 > 1 or any arrangement satisfying the condition.
// Input: n = 5, arr[] = {4, 3, 7, 8, 2}
// Output: 3 < 7 > 4 < 8 > 2 or any arrangement satisfying the condition.

void alternateArray(int *arr, int n)
{
    for (auto i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
            }
        }
        else
        {
            if (arr[i] < arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
            }
        }
    }

    for (auto i = 0; i < n; i++)
    {
        /* code */
        if (i % 2 != 0)
        {
            std::cout << " < " << arr[i] << " > ";
        }
        else
        {
            std::cout << arr[i];
        }
    }
}

int main()
{

    int arr[] = {4, 3, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    alternateArray(arr, n);
    return 0;
}
