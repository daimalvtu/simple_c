#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void montharray(int arr[6][7],int dayall,int first)
{
	int day = 0;
	int dayi = 0;
	int dayj = 0;
	for (dayi =0; dayi < 6; dayi++)
	{
		for (dayj = first; dayj <7; dayj++)
		{
			day++;
			arr[dayi][dayj] = day;
			if (dayall == day)
			{
				break;
			}
		}
		first = 0;
		if (dayall == day)
		{
			break;
		}
	}
	day = 0;
}

int main()
{
	int leapyear1 = 0;
	int leapyaer2 = 0;
	int year = 0;
	printf("$Please input the year whose calendear you want to know?\n");
	printf("$");
	scanf("%d",&year);
	printf("|=====================The Calendar of Year %d====================|\n",year);
	int maxyear = year > 2021 ? year : 2021;
	int minyear= year < 2021 ? year : 2021;
	if (maxyear == year)
	{
		for (int i = 2021; i < year; i++)
		{
			if(i%400==0||i%100!=0&&i%4==0)
			{
				leapyear1++;
			}
		}
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			leapyaer2++;
		}


		printf(":  1  SUN MON TUE WED THU FRI SAT   7  SUN MON TUE WED THU FRI SAT :\n");
		int week1 = (year - 2021) * 365 + leapyear1;
		int arr1[6][7] = { 0 };
		int arr7[6][7] = { 0 };
		int first1 = (week1 + 5) % 7;
		int week7 = week1 + 181;
		if (leapyaer2 == 1)
		{
			week7++;

		}
		int first7 = (week7 + 5) % 7;
		montharray(arr1, 31, ((first1+6)%7));
		montharray(arr7, 31, (first7+6)%7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr1[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr1[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr7[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr7[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
		printf(":  2  SUN MON TUE WED THU FRI SAT   8  SUN MON TUE WED THU FRI SAT :\n");
		int week2 = (year - 2021) * 365 + leapyear1+31;
		int arr2[6][7] = { 0 };
		int arr8[6][7] = { 0 };
		int first2 = (week2 + 5) % 7;
		int week8 = week2 + 181;
		if (leapyaer2 == 1)
		{
			week8++;

		}
		int first8 = (week8 + 5) % 7;
		montharray(arr2, 28+leapyaer2, (first2+6)%7);
		montharray(arr8, 31, (first8+6)%7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr2[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr2[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr8[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr8[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
		printf(":  3  SUN MON TUE WED THU FRI SAT   9  SUN MON TUE WED THU FRI SAT :\n");
		int week3 = 0;
		if (leapyaer2 == 1)
		{
			 week3 = (year - 2021) * 365 + leapyear1 + 31+29;
		}
		else
		{
			 week3 = (year - 2021) * 365 + leapyear1 + 31+28;
		}
		int arr3[6][7] = { 0 };
		int arr9[6][7] = { 0 };
		int first3 = (week3 + 5) % 7;
		int week9 = week3 + 181+3;
		if (leapyaer2 == 1)
		{
			week9++;

		}
		int first9 = (week9 + 5) % 7;
		montharray(arr3, 31, (first3+6)%7);
		montharray(arr9, 30, (first9+6)%7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr3[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr3[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr9[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr9[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
		printf(":  4  SUN MON TUE WED THU FRI SAT  10  SUN MON TUE WED THU FRI SAT :\n");
		int week4 = 0;
		if (leapyaer2 == 1)
		{
			week4 = (year - 2021) * 365 + leapyear1 + 31 + 29+31;
		}
		else
		{
			week4 = (year - 2021) * 365 + leapyear1 + 31 + 28+31;
		}
		int arr4[6][7] = { 0 };
		int arr10[6][7] = { 0 };
		int first4 = (week4 + 5) % 7;
		int week10= week4 + 181 + 3-1;
		if (leapyaer2 == 1)
		{
			week10++;

		}
		int first10 = (week10 + 5) % 7;
		montharray(arr4, 30, (first4+6)%7);
		montharray(arr10, 31, (first10+6)%7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr4[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr4[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr10[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr10[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
		printf(":  5  SUN MON TUE WED THU FRI SAT  11  SUN MON TUE WED THU FRI SAT :\n");
		int week5 = 0;
		if (leapyaer2 == 1)
		{
			week5 = (year - 2021) * 365 + leapyear1 + 31 + 29 + 31+30;
		}
		else
		{
			week5 = (year - 2021) * 365 + leapyear1 + 31 + 28 + 31+30;
		}
		int arr5[6][7] = { 0 };
		int arr11[6][7] = { 0 };
		int first5 = (week5 + 5) % 7;
		int week11 = week5 + 181 + 3 - 1+1;
		if (leapyaer2 == 1)
		{
			week11++;

		}
		int first11 = (week11 + 5) % 7;
		montharray(arr5, 31, (first5+6)%7 );
		montharray(arr11, 30, (first11+6)%7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr5[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr5[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr11[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr11[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
		printf(":  6  SUN MON TUE WED THU FRI SAT  12  SUN MON TUE WED THU FRI SAT :\n");
		int week6 = 0;
		if (leapyaer2 == 1)
		{
			week6 = (year - 2021) * 365 + leapyear1 + 31 + 29 + 31 + 30+31;
		}
		else
		{
			week6 = (year - 2021) * 365 + leapyear1 + 31 + 28 + 31 + 30+31;
		}
		int arr6[6][7] = { 0 };
		int arr12[6][7] = { 0 };
		int first6 = (week6 + 5) % 7;
		int week12 = week6 + 181 + 3 - 1 + 1-1;
		if (leapyaer2 == 1)
		{
			week12++;

		}
		int first12 = (week12 + 5) % 7;
		montharray(arr6, 30, (first6 + 6) % 7);
		montharray(arr12, 31, (first12 + 6) % 7);
		for (int i = 0; i < 6; i++)
		{
			printf(":     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr6[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr6[i][j]);
				}

			}
			printf("     ");
			for (int j = 0; j < 7; j++)
			{
				if (arr12[i][j] == 0)
				{
					printf("    ");
				}
				else
				{
					printf("%3d ", arr12[i][j]);
				}
			}
			printf(":");
			printf("\n");
		}
	}
	printf("|==================================================================|");
	
}