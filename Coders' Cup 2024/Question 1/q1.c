#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	int count_ac = 0, count_wa = 0, count_tle = 0, count_re = 0;
	scanf("%d", &n);
	char arr[n][10];
	for (int i = 1; i <= n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		if (strcmp(arr[i], "AC") == 0)
		{
			count_ac++;
		}
		else if (strcmp(arr[i], "WA") == 0)
		{
			count_wa++;
		}
		else if (strcmp(arr[i], "TLE") == 0)
		{
			count_tle++;
		}
		else if (strcmp(arr[i], "RE") == 0)
		{
			count_re++;
		}
	}

	printf("AC x %d\n", count_ac);
	printf("WA x %d\n", count_wa);
	printf("TLE x %d\n", count_tle);
	printf("RE x %d\n", count_re);
}
