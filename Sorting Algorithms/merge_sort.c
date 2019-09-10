#include <malloc.h>

void merge_sort(int* arr, int* left, int* right, int size_left, int size_right)
 {
	int i = 0, j = 0, k = 0;

	while (i < size_left && j < size_right) 
	{
		if (left[i] < right[j])
			arr[k++] = left[i++];

		else
			arr[k++] = right[j++];
	}

	while (i < size_left)
		arr[k++] = left[i++];

	while (j < size_right)
		arr[k++] = right[j++];
}

void merge(int* array, int size) {

	if (size == 1) return;

	int mid = size / 2;

	int* left = (int*)malloc(sizeof(int)*mid);
	int* right = (int*)malloc(sizeof(int) * (size-mid));

	for (int i = 0; i < mid; i++)
		left[i] = array[i];

	for (int i = mid, j = 0; i < size;j++, i++)
		right[j] = array[i];

	merge(left, mid);
	merge(right, size - mid);
	merge_sort(array, left, right, mid, size - mid);

	free(left);
	free(right);
}