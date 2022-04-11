#include <stdio.h>
void	quicksort(int array[], int length);
void	quicksort_recursion(int array[], int low, int hight);
void	swap(int *x, int *y);
int 	partition(int array[], int low, int hight);

void	swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int array[], int low, int hight)
{
	int pivot_value;
	int i;
	int j;

	pivot_value = array[hight];
	i = low;
	j = 0;
	while (j < hight)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
		j++;
	}
	swap(&array[i], &array[hight]);
	return (i);
}

void	quicksort_recursion(int array[], int low, int hight)
{
	int index_pivot;

	if (low < hight)
	{
		index_pivot = partition(array, low, hight);
		quicksort_recursion(array, low, index_pivot - 1);
		quicksort_recursion(array, index_pivot + 1, hight);
	}
}

void	quicksort(int array[], int length)
{
	quicksort_recursion(array, 0, length - 1);
	
}

int	main()
{
	int i;
	int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 444};
	int length = 13;
	quicksort(a, length);
	i = 0;
	while (i < length)
	{
		printf("a[%d] = %d \n", i, a[i]);
		i++;
	}

}