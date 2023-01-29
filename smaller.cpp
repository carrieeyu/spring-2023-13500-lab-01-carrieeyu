/*
Author: Carrie Yu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1A

Ask the user to input two integer numbers and then print out the smaller of the two numbers.
*/

#include <iostream>

int main(){
	int num1;
	int num2;
	
	std:: cout << "Enter the first number: ";
	std:: cin >> num1;
	
	std:: cout << "Enter the second number: ";
	std:: cin >> num2;
	
	if (num1 < num2){
		std:: cout << "The smaller of the two is " << num1;
	}
	else{
		std:: cout << "The smaller of the two is " << num2;
	}
	
	return 0;
}
