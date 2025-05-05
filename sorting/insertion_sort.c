#include <stdio.h>
#include <stdlib.h>


void InsertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i]; // The 'reference'/key is the array at possition i
        int j = i - 1; // Second index (starts one position back from i, so index 0)

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(int arr[], int n){
    printf("{");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

int main(){

    int test_array[] = {23, 1, 10, 5, 2}; // Nearly sorted, small array
    
    int arr_len = sizeof(test_array) / sizeof(test_array[0]); // Get the length of the array

    // printf("Array Length: %d\n", arr_len); // DEBUGG
    // Print the original array
    PrintArray(test_array, arr_len);

    // call the function from here
    InsertionSort(test_array, arr_len);

    // Print the array
    PrintArray(test_array, arr_len);
    return 0;
}
