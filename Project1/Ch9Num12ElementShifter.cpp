/************************************************
** Author: Andrea Hayes
** Date: May 17, 2020
** Purpose: Shift elements
** Input: Two arrays
** Processing: Add 0 and Shift elements in array
** Output: Shifted Array
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
// Function Prototype
int* first(int[], int);
int main() {
    // Declare variables
    const int SIZE = 5;
    int arr1[SIZE] = { 1,2,3,4,5 };
    int* display;

    // Call function
    display = first(arr1, SIZE);
    // Display
    for (int i = 0; i < SIZE + 1; i++) {
        cout << *(display + i) << " ";
    }
    // Freeing memory
    delete display;

    return 0;
}
// Function to shift elements
int* first(int arr1[], int size) {
    int* arr2 = nullptr;
    arr2 = new int[size + 1];
    *(arr2) = 0;
    for (int i = 0; i < size; i++) {
        *(arr2 + (i + 1)) = *(arr1 + i);
    }
    return arr2;
}