// hellow world program in cpp
#include <iostream>

// You are given an array arr of size n. The elements of the array represent n coin of values
// v1, v2, ....vn. You play against an opponent in an alternating way. In each turn, a player
// selects either the first or last coin from the row, removes it from the row permanently, and
// receives the value of the coin. You need to determine the maximum possible amount of
// money you can win if you go first.
// Note: Both the players are playing optimally.
// Input: n = 4, arr[] = {5, 3, 7, 10}
// Output: 15
// Explanation: The user collects maximum value as 15(10 + 5). It is guaranteed that we
// cannot get more than 15 by any possible moves.
// Input: n = 4, arr[] = {8, 15, 3, 7}
// Output: 22

// Explanation: The user collects maximum value as 22(7 + 15). It is guaranteed that we
// cannot get more than 22 by any possible moves.

void coinGame(int *arr, int n)
{
   

    
}

int main()
{

    int arr[] = {5, 3, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    coinGame(arr, n);
    return 0;
}
