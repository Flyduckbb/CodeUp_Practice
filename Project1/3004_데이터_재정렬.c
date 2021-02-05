#include<stdio.h>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void qSort(int left, int right, int* data)
{
	int pivot = left;
	int i = left + 1;
	int j = pivot + 1;

	if (left < right) {
		for (; i <= right; i++) {
			if (data[pivot] > data[i]) {
				swap(&data[j], &data[i]);
				j++;
			}
		}
		swap(&data[j - 1], &data[pivot]);
		pivot = j - 1;

		qSort(left, pivot - 1, data);
		qSort(pivot + 1, right, data);
	}
}

int main(void) {
	int cnt;
	int arr[50000];
	int arr2[500000];

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}

	qSort(0, cnt - 1, arr);

	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			if (arr2[i] == arr[j])
				printf("%d ", j);
		}
	}

	return 0;
}
