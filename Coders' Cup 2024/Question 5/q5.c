#include <stdio.h>
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);

	char arr[n + 1];
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'o')
		{
			x++;
		}
		else if (arr[i] == 'x')
		{
			if (x != 0)
			{
				x--;
			}
		}
	}

	printf("%d", x);
}
