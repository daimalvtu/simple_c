#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define n 20
#define m  9
int main()
{
	int k = 8;
	int arr[n] = {0};
	int i = 0;
	int cout1=0;
	for (i = 0; i <n&&cout1<20; i++)
	{
		arr[i] = i;
		cout1++;
	}
	int cout = 0;
	int a = n;
	int cout2 = 0;
	int cout3 = 0;
	for (i = 0;i<=a&&a>=0; i++)
	{
		if (i == a)
		{
			k = 0;
			i = 0;
			cout2 = 0;
		}
		else if (k != 0)
		{
			
			 if (k <= arr[i])
			{
				cout++;
				if (cout == m)
				{
					for (i = k + m - 1; i < a; i++)
					{
						if (i == k + m - 1)
						{
							printf("%d ", arr[i]);
						}
						arr[i] = arr[i + 1];

					}
					a--;
					i = k + m - 1;
					i--; 
					cout = 0;

				}
				
			}
		}
		else if (k == 0)
		{
			if (i == a)
			{
				k = 0;
				i = 0;
				cout3 = 0;
			}
			else if (k <= arr[i])
			{
				cout++;
				if (cout == m)
				{
					int d = i;
					for (; i < a; i++)
					{
						if (d == i)
						{
							printf("%d ", arr[i]);
						}
						arr[i] = arr[i + 1];
					}
					a--;
					i = d - 1;
					cout = 0;
				}
				
			}
		
		}
	
	cout3++;
	}
return 0;
}