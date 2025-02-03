#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
}
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
  bool isSwap = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        isSwap = false;
      }
    }

    if (!isSwap)
    {
      return;// If no swaps were made in the last iteration, the array is sorted
    }
  }
}
int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr,n);
  printArr(arr,n);

}