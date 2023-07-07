#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int swaps[])
{
   int i, j, temp, totSwaps = 0;
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swaps[i]++;
              totSwaps++;
           }
       }
   }
    printf("Number of swaps: %d\n", totSwaps);

}


int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* swaps = (int*)malloc(n * sizeof(int));
    if(swaps == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
      swaps[i] = 0;

    }

    printf("Orignial Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n, swaps);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d,", swaps[i]);
    }
    

    return 0;
}
