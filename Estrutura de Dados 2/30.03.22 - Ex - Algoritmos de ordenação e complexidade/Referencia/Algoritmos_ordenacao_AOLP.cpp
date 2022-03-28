// C++ program for implementation of sorting algorithms
#include <bits/stdc++.h>
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// UTILITY FUNCTIONS
void printArray(int arr[], int size);	// function to print an array of size n
void swap(int *xp, int *yp);	// function to swap two elements
int getMax(int arr[], int n);	// function to get maximum value in arr[]

// SORTING FUNCTIONS
void bubbleSort(int arr[], int n);	// Function to sort an array using bubble sort
void insertionSort(int arr[], int n);	// Function to sort an array using insertion sort
void selectionSort(int arr[], int n);	// Function to sort an array using selection sort

int partition (int arr[], int low, int high); /* This secodary function off quickSort takes last element as pivot, places 
the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right of pivot */
void quickSort(int arr[], int low, int high); /* The main function that implements QuickSort 
												arr[] --> Array to be sorted, 
												low --> Starting index, 
												high --> Ending index */
int shellSort(int arr[], int n);/* function to sort arr using shellSort */

void merge(int array[], int const left, int const mid, int const right);	/* This secodary function off mergeSort merges two subarrays of array[].
																		First subarray is arr[begin..mid]
																		Second subarray is arr[mid+1..end]*/
void mergeSort(int array[], int const begin, int const end);	/* begin is for left index and end is right index of the sub-array of arr to be sorted */

void countSort(int arr[], int n, int exp); // This secodary function off radixSort does counting sort of arr[] according to the digit represented by exp.
void radixsort(int arr[], int n); //The main function to that sorts arr[] of size n using Radix Sort

// Driver code
int main()
{
	int size;
	cout<< "How big do you want the array? ";
	cin >> size;
	int array[size];
	int bubble[size];
	int insort[size];
	int select[size];
	int quick[size];
	int shell[size];
	int merge[size];
	int radix[size];
	srand((unsigned)time(0));
	for(int i=0; i<size; i++){
		array[i] = (rand()%100)+1;
		bubble[i] = array[i];
		insort[i] = array[i];
		select[i] = array[i];
		quick[i] = array[i];
		shell[i] = array[i];
		merge[i] = array[i];
		radix[i] = array[i];
	}
	
	/*cout<<"Random Array: \n";
	printArray(array, size);
	cout<<"Bubble Sort Array: \n";
	printArray(bubble, size);
	cout<<"Insert Sort Array: \n";
	printArray(insort, size);
	cout<<"Selection Sort Array: \n";
	printArray(select, size);
	cout<<"Quick Sort Array: \n";
	printArray(quick, size);
	cout<<"Shell Sort Array: \n";
	printArray(shell, size);
	cout<<"Merge Sort Array: \n";
	printArray(merge, size);
	cout<<"Radix Sort Array: \n";
	printArray(radix, size);*/
	
	auto start = high_resolution_clock::now();
	bubbleSort(bubble, size);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout<<"\nBubble sorted array: \n";
	//printArray(bubble, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	insertionSort(insort, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Insertion sorted array: \n";
	//printArray(insort, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	selectionSort(select, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Selection sorted array: \n";
	//printArray(select, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	quickSort(quick, 0, size - 1);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Quick sorted array: \n";
	//printArray(quick, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	shellSort(shell, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Shell sorted array: \n";
	//printArray(shell, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	mergeSort(merge, 0, size - 1);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Merge sorted array: \n";
	//printArray(merge, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	start = high_resolution_clock::now();
	radixsort(radix, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout<<"Radix sorted array: \n";
	//printArray(radix, size);
	cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
	
	return 0;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}

int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];
 
            // shift earlier gap-sorted elements up until the correct
            // location for a[i] is found
            int j;           
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
             
            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}

void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
  
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = { 0 };
 
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);
 
    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
