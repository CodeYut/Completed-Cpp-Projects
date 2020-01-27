#include <iostream>
using namespace std;
//
//2. Requirements:
//--INPUT
//Numbers will be calculated based off of selections made by user
//
//
//
//--PROCESSING
//1. data definitions
//2. user introduction
//3. input first number
//4. input second number
//5. input operator value to select +,-,*,/
//6. calculate based off input operator and numbers
//7. output values
//
//
//
//--OUTPUT
//objective
//author
//user Instructions: Enter an operator: +,-,/,* and needed numbers to calculate math problem.
//prompt1: "Enter an operator: [1 = Addition, 2= Subtraction, 3= Multiplication, 4= Division]"
//label1: "Enter the first number: [0-999]"
//label2: "Enter the second number: [0-999]"
//label3: "The answer is: "
//
//--Data
//operatorSelection-->> (integer) random number user has to guess [0-999]
//firstNumber-->> (integer) the first number user inputs [0-999]
//secondNumber-->> (integer) Enter the second number user inputs [0-999]
//answer-->> (integer) outcome of math equation




//Programmer defined data types


//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void instroduction(string obj, string ins);  //user introduction
//check for duplicate guesses



//main program
int main()
{



    //data
    int operatorSelection;  //random number user has to guess
    int firstNumber;  //the first number user inputs
    int secondNumber;  //enter the second number user inputs
    int answer;  //outcome of math equation


    //output user introduction
    cout << "Create a calculator that will add, subtract, multiply and divide. \n";
    cout << "Programmer: Eric Phillips\n";
    cout << "Editor(s) used: Brackets\n";
    cout << "Compiler(s) used: MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;


    //user instructions
    cout << "Enter the first number: [0-999] \n";
        cin >> firstNumber;
    cout << "Enter the second number: [0-999] \n";
        cin >> secondNumber;


    cout << "Enter an operator: [1 = Addition, 2= Subtraction, 3= Multiplication, 4= Division]" << endl;
        cin >> operatorSelection;


    if (operatorSelection == 1)
	{
		answer = firstNumber + secondNumber;
	}

	else if (operatorSelection == 2)
	{
		answer = firstNumber - secondNumber;
	}

	else if (operatorSelection == 3)
	{
		answer = firstNumber * secondNumber;
	}

	else if (operatorSelection == 4)
	{
		answer = firstNumber / secondNumber;
	}



    cout << "The answer is " << answer << endl;







}//end main
