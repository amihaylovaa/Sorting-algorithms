#include <stdio.h>
#include <malloc.h>

void bubble_sort(int*, int);
void selection_sort(int*, int);
void insertion_sort(int*, int);
void merge(int*, int);
void quick_sort(int*, int, int);

void main()
{
	int* array = NULL;
	unsigned int array_size;
	int choice;
	
	   printf("Please enter array's size:");
	   scanf_s("%u", &array_size);

	   array = (int*)malloc(sizeof(int) * array_size);

	   for (unsigned int i = 0; i < array_size; i++)
	   {
		   printf("Array[%d] = :",i);
		   scanf_s("%d", &array[i]);
	   }

	  
		printf("Choose sorting algorithm");
		printf("\n1 -> Bubble sort");
		printf("\n2 -> Selection sort");
		printf("\n3 -> Insertion sort");
		printf("\n4 -> Merge sort");
		printf("\n5 -> Quick sort");
		scanf_s("%d", &choice);
	
		switch (choice)
		{
		case 1: bubble_sort(array, array_size); break;
		case 2: selection_sort(array, array_size); break;
		case 3: insertion_sort(array, array_size); break;
		case 4: merge(array, array_size); break;
		case 5: quick_sort(array, 0, array_size-1); break;
		default: exit(1); break;
		}

		printf("Sorted array");
		for (unsigned int i = 0; i < array_size; i++)
			printf("\n%d", array[i]);
}