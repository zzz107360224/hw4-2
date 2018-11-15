#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i, j, b, c, d,e;
	int a[8];
	printf("請輸入9個數字:");
	scanf_s("%d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]);
	i = 8;
	j = 7;
	for (; ;)
	{
		e = j;
		d = i;
		for (; ;)
		{
		
			
			if (a[i] < a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
				j = j - 1;
				i = i - 1;
			}
			else
			{
				i = i - 1;
				j = j - 1;
			}
			if ((j<0))
			{
				break;
			}
			
		}
		i = d;
		j = e;

		for (b = 0; b <=8; b++)
		{
			printf("%d", a[b]);
		}

		printf("\n");

		

		if ((a[0] <= a[1])&(a[1] <= a[2])&(a[2] <= a[3])&(a[3] <= a[4])&(a[4] <= a[5])&(a[5] <= a[6])&(a[6] <= a[7])&(a[7] <= a[8]))
		{
			break;
		}

	}



	system("pause");
	return 0;
}