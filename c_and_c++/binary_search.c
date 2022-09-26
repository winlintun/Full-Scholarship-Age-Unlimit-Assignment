#include <stdio.h>


int binarySearch(int arrayData[], int toFind, int low, int high) { // return 1 or -1 (True or False)

	while(low <= high) {
		int mid = low + (high - low) / 2;

		if(arrayData[mid] == toFind)
			return mid;

		if (arrayData[mid] < toFind) 
			low = mid + 1;
		else 
			high = mid - 1;
	}

	return -1;

}


int main()
{
	int toFind=0;
	int data[] = {50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80};

	printf("Enter data to find: ");
	scanf("%d", &toFind);

	int size = sizeof(data) / sizeof(data[0]);
	int result = binarySearch(data, toFind, 0, size-1);
	if(result == -1)
		printf("Data no found");
	else 
		printf("Data found.");

	return 0;
}
