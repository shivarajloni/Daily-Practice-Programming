// During the last week of track training,
// shoshanna achieves the following times in sec- 
// rounds: 66,57,54,53,64,52,59.
// Found her best score use bubble Sort

#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i,j;
	bool swapped;
	for(i=0; i<n-1;i++)
	{
		swapped = false;

		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}

		if(swapped == false)
			break;
	}
}

int main()
{
	/* code */
	int seconds[] = {66,57,54,64,53,52,59};
	int n = sizeof(seconds)/sizeof(int);
	bubbleSort(seconds, n);
	cout << "Her best time is "<<seconds[0] << " seconds";

	return 0;
}
