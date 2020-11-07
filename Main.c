#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a[100];
	int k = 0;
	int n = 0;
	printf("Vvedite razmernost' massiva: ", k);
    if (scanf("%d", &k) != 1) {
		printf("Error");
		return 0;
	}
	if (k <= 0 || k > 100)
	{
		printf("Error");
		return 0;
	}
	for (n = 0; n < k; n++)
		scanf("%d", &a[n]);

	int i = 0, j = 0, min_idx = 0;
	for (i = 0; i != n; i++) {
		min_idx = i;
		for (j = i; j != n; j++) {
			if (a[j] % 2 == 0)
				min_idx = j;
		}
		swap(&a[i], &a[min_idx]);

	}
	for (i = 0; i != n; i++)
		printf("%d ", a[i]);
	return 0;
}