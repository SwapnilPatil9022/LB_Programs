//BubbleSort Algorithm

void BubbleSort(int arr[],int n)
{
	int i,j,temp;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


//InsertionSorting Algorithm

void insertionSort(int arr[],int n)
{
	int i, key, j;
	
	for(i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}


//SelectionSort Algorithm

void SelectionSort(int arr[], int n)
{
	int index_of_min = 0;
	
	for(int x = 0; x < n; x++)
	{
		index_of_min = x;
		for(int y = x; y < n; y++)
		{
			if(array[index_of_min] > array[y])
			{
				index_of_min = y;
			}
		}
		int temp = array[x];
		array[x] = array[index_of_min];
		array[index_of_min] = temp;
	}
}
