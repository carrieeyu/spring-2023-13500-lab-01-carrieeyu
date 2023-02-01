/*
Author: Carrie Yu
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Number of days in a given month, Lab1D

Asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years)
*/

#include <iostream>

int main(){
	int year;
	int month;
  
  std:: cout << "Enter year: ";
  std:: cin >> year;

  std:: cout << "Enter month, from 1-12: ";
  std:: cin >> month;
  
  if (month == 2){
    if ( (year % 4 != 0) || (year % 400 != 0))
    {
      std:: cout << "28";
    }
    else if ( (year % 100 != 0) )
    {
      std:: cout << "29";
    }
  }
  else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    std:: cout << "31 days";
  }
  else {
    std:: cout << "30 days";
  }
    
return 0;
}
