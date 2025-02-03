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
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int curr = arr[i];
    int prev = i - 1;

    // this loop is for right shifting
    while (prev >= 0 && arr[prev] >curr)
    {
      swap(arr[prev], arr[prev + 1]);
      prev--;
    }
    arr[prev + 1] = curr;
  }
}
int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, n);
  printArr(arr, n);
}