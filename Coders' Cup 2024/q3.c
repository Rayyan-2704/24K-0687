#include <stdio.h>
int main()
{
	char arr[1000];
	int flag = 0;
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if ((i % 2 == 0))
		{
			if (!(arr[i] >= 'a' && arr[i] <= 'z'))
			{
				flag = 1;
				break;
			}
		}
		else if ((i % 2 != 0))
		{
			if (!(arr[i] >= 'A' && arr[i] <= 'Z'))
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}