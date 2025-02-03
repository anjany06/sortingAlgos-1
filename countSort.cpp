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
void countSort(int arr[], int n)
{
  int freqArr[10000];
  int minVal = INT16_MAX, maxVal = INT16_MIN;

  for (int i = 0; i < n; i++)
  {
    freqArr[arr[i]]++;
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }
  // freq arr to original arr

  for (int i = maxVal, j = 0; i>= minVal; i--)
  {
    while (freqArr[i] > 0)
    {
      arr[j] = i;
      j++;
      freqArr[i]--;
    }
  }
}
int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  countSort(arr, n);
  printArr(arr, n);
}