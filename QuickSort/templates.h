//
// Created by Jorge on 5/17/2019.
//

#ifndef QUICKSORT_TEMPLATES_H
#define QUICKSORT_TEMPLATES_H

#include <iostream>
using namespace std;

template <typename T>
void swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

template <typename T>
int particion (T arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

template <typename T>
void quickSort(T arr[], int low, int high)
{
    if (low < high)
    {
        int pi = particion(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template <typename T>
void printArray(T arr[], int size)
{
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
}


#endif //QUICKSORT_TEMPLATES_H
