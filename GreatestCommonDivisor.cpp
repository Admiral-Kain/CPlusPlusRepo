/* GreatestCommonDivisor.cpp
 * A program that determines the greatest common divisor between 2 integers.
 * Author: Admiral Kain
 */
#include <iostream>

using namespace std;
void greatestCommonDivisor(int, int); //function prototype

int main(int argc, char *argv []){
  int first, second;                //data types for the user to input the first and second integers
  cout << "Enter an integer: ";     //cout to display to the console when running
  cin >> first;                     //cin for user input
  cout << "Enter another integer: ";
  cin >> second;

  greatestCommonDivisor(first, second); //program will go to this function to continue the code

  return 0;
} //end of main

//void greatestCommonDivisor
//this function determines what is the common divisor
void greatestCommonDivisor(int first, int second){
  int remainder;                  //data type to store the remainder

  while(second != 0){             //while loop to go through the process to find the remainder
    remainder = first % second;   //get the remainder via modulo "%"
    first = second;               //store the first into the second
    second = divisor;             //set second as divisor and repeat to the top
  }                               //if second turns out to be 0, then the loop ends

  cout << "The common divisor is:" << first << endl;  //print out the end result
 
}
