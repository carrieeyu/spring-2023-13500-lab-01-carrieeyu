/*
Author: Carrie Yu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1B

Asks the user to input three integer numbers, and prints out the smallest of the three.
*/

#include <iostream>

int main(){
	int num1;
	int num2;
	int num3;

	std:: cout << "Enter the first number: ";
	std:: cin >> num1;

	std:: cout << "Enter the second number: ";
	std:: cin >> num2;
	
	std:: cout << "Enter the third number: ";
	std:: cin >> num3;
	
	if (num1 < num2){
		if (num1 < num3){
			std:: cout << "The smaller of the three is " << num1;
		}
	}
	
	if (num2 < num1){
		if (num2 < num3){
			std:: cout << "The smaller of the three is " << num2;
		}
	}
	
	if (num3 < num1){
		if (num3 < num2){
			std:: cout << "The smaller of the three is " << num3;
		}
	}
	
	return 0;
}
