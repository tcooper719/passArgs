//Thomas Cooper
//05/04/2017
//Module 5 program 2

#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>

int main(int argc, char *argv[])
{
	//declarations and the list
	int i, n, temp, c = 10, numbers[10] = { 82, 77, 98, 22, 84, 32, 100, 50, 17, 4 };
	bool end = false;

	//formatting
	puts(" ");

	//if the user didn't pass in an argument
	if (argc == 1)
	{
		printf_s("%s", "You didn't pass in an argument, go back and try again.\n");
		return 0;
	}

	//this output is the same for either ascending or descending lists
	else
	{
		printf_s("%s", "The list before being sorted ");
	}

	//if statement to compare the string inputted in from the command line and determine if it is equal to the string "-a".
	if (strcmp(argv[1], "-a") == 0)
	{
		//prints that it will be in ascending order
		printf_s("%s", "in ascending order:\n");

		//print the list
		for (i = 0; i < (c); i++)
		{
			printf_s("%d ", numbers[i]);
		}

		//formatting
		puts(" ");

		//bubble sort
		for (n = 0; n < c; n++)
		{
			for (i = 0; i < c; i++)
			{
				if (i == (c - 1))
				{
					end = true;
				}

				if (numbers[i] > numbers[i + 1] && !end)
				{
					temp = numbers[i + 1];
					numbers[i + 1] = numbers[i];
					numbers[i] = temp;
				}
			}

			end = false;
		}
		//formatting
		puts(" ");

		//after sort print
		printf_s("%s", "The list after sorting:\n");

		for (i = 0; i < c; i++)
		{
			printf_s("%d ", numbers[i]);
		}
	}

	//if statement to compare the string inputted in from the command line and determine if it is equal to the string "-d".
	if (strcmp(argv[1], "-d") == 0)
	{
		//prints that it will be in descending order
		printf_s("%s", "in descending order:\n");

		//print the list
		for (i = 0; i < (c); i++)
		{
			printf_s("%d ", numbers[i]);
		}

		//formatting
		puts(" ");

		//bubble sort
		for (n = (c - 1); n >= 0; n--)
		{
			for (i = (c - 1); i >= 0; i--)
			{
				if (i == (0))
				{
					end = true;
				}

				if (numbers[i] > numbers[i - 1] && !end)
				{
					temp = numbers[i - 1];
					numbers[i - 1] = numbers[i];
					numbers[i] = temp;
				}
			}

			end = false;
		}

		//formatting
		puts(" ");

		//after sort print
		printf_s("%s", "The list after sorting:\n");

		for (i = 0; i < c; i++)
		{
			printf_s("%d ", numbers[i]);
		}
	}

	//formatting
	puts(" ");
}