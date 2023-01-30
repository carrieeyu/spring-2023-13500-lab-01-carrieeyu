/*
Author: Carrie Yu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: A leap year or a common year?, Lab1C

Asks the user to input an integer representing a year number that determines whether it is a leap year or common year.
*/


#include <iostream>

int main(){
	int year;
	
	std:: cout << "Enter year: ";
	std:: cin >> year;
	
	if (year % 2 != 0)
		std:: cout << "Common Year";
	else if (year % 100 != 0)
		std:: cout << "Leap Year";
	else if (year % 400 != 0)
		std:: cout << "Common Year";
	else
		std:: cout << "Leap Year";
	
	return 0;
}
