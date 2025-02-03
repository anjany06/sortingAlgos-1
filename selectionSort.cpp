#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]); // Swap the found minimum element with the first element of the unsorted portion of the array.
  }
}
int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  printArr(arr, n);
}