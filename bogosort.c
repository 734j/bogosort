#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Shuffle function
void shuffle(int arr[], int n) {
    for (int i = n -1 ; i > 0 ; i--) { 
        int j = rand() % (i + 1); 
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


int main() {
    srand(time(NULL)); // If we're doing bogosort then you HAVE TO put srand(time(NULL)); first in the main function. DO NOT put it in the shuffle function. 

    int arrchk[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10}; // The correct array. 
    int arr[] = {5, 7, 1, 9, 3, 10, 2, 6, 4, 8}; // The not correct array.
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
        
    
    int counter = 0; // counter
    int solved = 1; // Solved variable

    while (1) { 
    shuffle(arr, n); // Shuffle arr
    counter++; // add 1 to counter
    for (int i = 0 ; i < n ; i++) { // Check if the arr equals the arrchk. If it does not then it breaks out and shuffles again. 
        if (arr[i] != arrchk[i]) {
            solved = 0;
            break;
        } 
        solved = 1; // If all elements of arr equals arrchk then solved = 1
    }
    
    if (solved == 1) { // If solved = 1 then the array is sorted. 
        printf("Solved! \nCounter: %d\n", counter);
        return 0;
    }

    }

    
}
