// hellow world program in cpp
#include <iostream>
// write the main funciton

// Given an array A[ ] of positive integers of size N, where each value represents the
// number of chocolates in a packet. Each packet can have a variable number of
// chocolates. There are M students, the task is to distribute chocolate packets among M
// students such that Each student gets exactly one packet and the difference between
// maximum number of chocolates given to a student and minimum number of chocolates
// given to a student is minimum.
// Input: N = 8, M = 5 A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: Packets: {3, 4, 9, 7, 9}, Difference=6
// Explanation: The minimum difference between maximum chocolates and minimum
// chocolates is 9 - 3 = 6 by choosing above M packets
// Input: N = 7, M = 3, A = {7, 3, 2, 4, 9, 12, 56}
// Output: Packets: {3,2,4}, Difference: 2

void distributeChocolate(int *arr, int n,int m)
{
   

    
}

int main()
{

    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    distributeChocolate(arr, n,m);
    return 0;
}
