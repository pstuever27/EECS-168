/*----------------------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS168 Lab04 Exercise 3
*Description: This program will take a desired day number from the user, then it will print the number of people sick on that day -
*   where the last 3 days added together equal the current day.
*
----------------------------------------*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	int n = 0;
	int day1 = 1;
	int day2 = 4;
	int day3 = 21;
	int dayn = 0;

	cout << "OUTBREAK!\nWhat day do you want a sick count for?: ";
	cin >> n;


	if (n <= 0)
		cout << "Invalid input" << endl;
	else
	{
		for(int x = 0; x < n; x++)
		{
			if(x==0)
				dayn = day1;
			else if(x==1)
				dayn = day2;
			else if(x==2)
				dayn = day3;
			else
			{
				dayn = day1 + day2 + day3;
				day1 = day2;
				day2 = day3;
				day3 = dayn;
			}
		}

		cout << "Total people with flu: " << dayn << endl;
	}

	return (0);
}
