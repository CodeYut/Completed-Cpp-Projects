//1. Objective:  calculate change due in a transaction using these U.S. bills – no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.


//libraries
#include <iostream>
#include <fstream>
using namespace std;

//2. Requirements:
//
//--INPUT
//amountOwed = amount owed
//cashPaid = cash paid to balance

//--PROCESSING
//1. data definitions
//2. user introduction
//3. store input data from user (luckyNumber, favoriteMovie, userAge, firstLetter)
//4. output results
//
//--OUTPUT (list of anything output: introduction, data items, labels, prompts) :
//-user introduction: introduction of objective, author, user instructions/rules
//main program
int main()
{
 //data
  int amountOwed ; //amount owed
  int cashPaid ;  //amount paid
  int changeDue = 55000; //total change due
  int thousand100; //number of $100000 bills
  int thousand10; //number of $10000 bills
  int thousand5; //number of $5000 bills
  int thousand;  //number of $1000 bills
  int hundred5; //number of $500 bills
  int hundred;  //number of $100 bills
  int fifty;  //number of $50 bills
  int twenty; //number of $20 bills
  int ten;  //number of $10 bills
  int five;  //number of $5 bills
  int two; //number of $2 bills
  int one;  //number of $1 bills
  ifstream fin;  //file input






  //output user introduction
  cout << "Objective: calculate change due in a transaction using these U.S. bills and no cents: \n $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.\n";
  cout << "Programmer: Eric Phillips\n";
  cout << "Editor(s) used: Brackets\n";
  cout << "Compiler(s) used: MinGW\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;


  cout << "Hit the enter key to open the change file.\n";

  fin.open ("C:/Users/grind/OneDrive/Documents/C++School/change.txt");

  fin >> amountOwed;
  fin >> cashPaid;







  fin.close ();

   //calculate change due
  thousand100 = changeDue / 100000;  //number of $100,000 bills
  changeDue = changeDue % 100000;  //remainder from $100,000
  thousand10 = changeDue / 10000;  //number of $10,000 bills
  changeDue = changeDue % 10000; //remainder from $10,000
  thousand5 = changeDue / 5000;  //number of $5000 bills
  changeDue = changeDue % 5000; //remainder from $5000
  thousand = changeDue / 1000;  //number of $1000 bills
  changeDue = changeDue % 1000; //remainder from $1000
  hundred5 = changeDue / 500;  //number of $500 bills
  changeDue = changeDue % 500; //remainder from $500
  hundred = changeDue / 100;  //number of $100 bills
  changeDue = changeDue % 100; //remainder from $100
  fifty = changeDue / 50;  //number of $50 bills
  changeDue = changeDue % 50; //remainder from $50
  twenty = changeDue / 20;  //number of $20 bills
  changeDue = changeDue % 20; //remainder from $20
  ten = changeDue / 10;  //number of $10 bills
  changeDue = changeDue % 10; //remainder from $10
  five = changeDue / 5;  //number of $5 bills
  changeDue = changeDue % 5; //remainder from $5
  two = changeDue / 2;  //number of $2 bills
  changeDue = changeDue % 2; //remainder from $2
  one = changeDue / 1;  //number of $1 bills
  changeDue = changeDue % 1; //remainder from $1





  //output calculated change due for each kind of monetary demonination
  cout << "Amount owed: " << amountOwed <<endl;
  cout << "Cash paid: " << cashPaid <<endl;
  cout << "Total change due: " << changeDue <<endl;
  cout << "this many $100,000 bills: " << thousand100 << endl;
  cout << "this many $10,000 bills: " << thousand10 << endl;
  cout << "this many $5000 bills: " << thousand5 << endl;
  cout << "this many $1000 bills: " << thousand << endl;
  cout << "this many $500 bills: " << hundred5 << endl;
  cout << "this many $100 bills: " << hundred << endl;
  cout << "this many $50 bills: " << fifty << endl;
  cout << "this many $20 bills: " << twenty << endl;
  cout << "this many $10 bills: " << ten << endl;
  cout << "this many $5 bills: " << five << endl;
  cout << "this many $2 bills: " << two << endl;
  cout << "this many $1 bills: " << one << endl;
}
