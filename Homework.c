//두번째 값(두번째로 큰 값) 출력

#include <stdio.h>

int main(void)
{
	int i, j, n, temp, least;
	float arr[100];

	printf("Enter total number of elements(1 to 100): ");
	scanf("%d", &n);
	printf("\n");

	for(i=0; i<n; ++i)
	{
		printf("Enter number: ");
		scanf("%f", &arr[i]);
	}

	for(i=0; i<n; i++){

		least = i;
	
		for(j=0; j<n; j++){

			if(arr[j]<arr[least]) least = j;

			temp = arr[i];
			arr[i] = arr[least];
			arr[least] = temp;
		}
	}

	printf("Second Largest element = %.2f", arr[1]);

	return 0;
}