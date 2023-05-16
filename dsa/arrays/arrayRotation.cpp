// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

#include <iostream>
using namespace std;

void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}




int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    PrintTheArray(arr, N);

    return 0;
}