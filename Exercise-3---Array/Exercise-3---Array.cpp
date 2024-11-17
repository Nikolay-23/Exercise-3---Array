
#include <iostream>




int main()
{
    int numbers[10];
	int sum = 0;
	int large = numbers[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &numbers[i]);
		sum += numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > large) {
			large = numbers[i];
		}
	}

	printf("%d", large);
	printf("\n");
	printf("%d", sum);
	

}


