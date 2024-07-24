#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int partition(int arr[], int low, int high) {
	int pivot = arr[high]; 
	int i = low - 1; 

	for (int j = low; j < high; ++j) {
	
		if (arr[j] < pivot) {
			++i; 
			swap(&arr[i], &arr[j]); 
		}
	}

	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
	
		int pi = partition(arr, low, high);

	
		quickSort(arr, low, pi - 1);

	
		quickSort(arr, pi + 1, high);
	}
}
int main() {
	int arr[] = { 7, 0, 6, 1, 3, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Mang truoc khi sap xep:\n");
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	quickSort(arr, 0, n - 1);

	printf("Mang sau khi sap xep:\n");
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
