#include<iostream>
#include "templates.h"
using namespace std;

int main()
{
    int arr[] = {4, 10, 5, 1, 6, 10, 20, 60, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}