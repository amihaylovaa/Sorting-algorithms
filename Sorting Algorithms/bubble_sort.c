void bubble_sort(int* array, int size)
{
	int i, j, tmp;
	
	for (i = size - 1; i >= 0 ; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}