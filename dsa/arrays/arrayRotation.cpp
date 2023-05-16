// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

#include <iostream>
using namespace std;

void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void Rotate(int arr[], int d, int n)
{
    // Storing rotated version of array
    int temp[n];

    // Keeping track of the current index
    int k = 0;

    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Storing the first d elements of array arr[]
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Copying the elements of temp[] in arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}


int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    Rotate(arr, d, N);
    PrintTheArray(arr, N);

    return 0;
}