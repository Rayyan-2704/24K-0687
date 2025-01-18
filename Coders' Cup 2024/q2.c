#include <stdio.h>
int main()
{
	int n;

	scanf("%d", &n);
	int hour[n], min[n];
	int minutes[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &hour[i], &min[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (min[i] == 0)
		{
			minutes[i] = (24 - hour[i]) * 60;
		}
		else
		{
			minutes[i] = (60 - min[i]) + ((24 - hour[i] - 1) * 60);
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", minutes[i]);
	}
}