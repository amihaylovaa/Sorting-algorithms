void swap(int*, int*);

void quick_sort(int* arr, int left, int right)
{
	int p;

	if (left < right)
	{
		int i = left;
		int pivot = arr[right];
		int pivot_idx = left;

		while (i < right)
		{
			if (arr[i] <= pivot)
				swap(&arr[i], &arr[pivot_idx++]);
			i++;
		}

		swap(&arr[pivot_idx], &arr[right]);

		p = pivot_idx;
		quick_sort(arr, left, p - 1);
		quick_sort(arr, p + 1, right);
	}
}

void swap(int* first, int* second)
{
	int* tmp;
	tmp = *first;
	*first = *second;
	*second = tmp;
}