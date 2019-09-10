void insertion_sort(int* array, int size)
{
	int i, j, min;

	for (i = 1; i < size; i++)
	{
		min = array[i];
		for (j = i; j > 0 && array[j - 1] > min; j--)
			array[j] = array[j - 1];
	    	array[j] = min;
	}
}