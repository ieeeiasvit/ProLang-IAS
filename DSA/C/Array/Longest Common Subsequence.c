#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10]; int strlen1 = 0;
	char str2[10]; int strlen2 = 0;

	scanf("%s", str1);
	scanf("%s", str2);
	strlen1 = strlen(str1);
	strlen2 = strlen(str2);

	int table[strlen2+1][strlen1+1];

	for (int row_counter = 0; row_counter < strlen2 + 1; row_counter++)
		for (int column_counter = 0; column_counter < strlen1 + 1; column_counter++)
			table[row_counter][column_counter] = 0;

	for (int row_counter = 1; row_counter < strlen2 + 1; row_counter++)
	{
		for (int column_counter = 1; column_counter < strlen1 + 1; column_counter++)
		{
			if (str1[column_counter - 1] == str2[row_counter - 1])
				table[row_counter][column_counter] = 1 + table[row_counter - 1][column_counter - 1];
			else
				table[row_counter][column_counter] = (table[row_counter - 1][column_counter] > table[row_counter][column_counter - 1]) ? table[row_counter - 1][column_counter] : table[row_counter][column_counter - 1];
		}
	}

	int index = table[strlen2][strlen1];
	char lcs[10];
	lcs[index] = '\0';
	int row_counter = strlen2, column_counter = strlen1;
	while (row_counter > 0 && column_counter > 0)
	{
		if (str2[row_counter - 1] == str1[column_counter - 1])
		{
			lcs[index - 1] = str1[column_counter - 1];
			row_counter--;
			column_counter--;
			index--;
		}
		else if (table[row_counter - 1][column_counter] > table[row_counter][column_counter - 1])
			row_counter--;
		else
		{
			lcs[0] = '\0';
			break;
		}
	}

	if (lcs[0] == '\0')
		printf("NO");
	else
		printf("YES");

	return (0);
}