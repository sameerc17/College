// The idea of Radix Sort is to do digit by digit sort starting from least significant digit 
// to most significant digit. Radix sort uses counting sort as a subroutine to sort.

#include<stdio.h>
 
int getMax(int arr[], int n) {
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
 
void countSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int i, count[10] = { 0 };
 
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
 
// The main function to that sorts arr[] of size n using Radix Sort
void radixsort(int arr[], int n) {
    int m = getMax(arr, n);
 
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
 
void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
int main() {
     int n;
    printf("Enter no of elements:"); 
    scanf("%d", &n);
    int arr[n],i;
    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    radixsort(arr, n);
    printf("\nSorted array is: ");
    print(arr, n);
    printf("\n");
    return 0;
}