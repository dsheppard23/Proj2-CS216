#include <iomanip>
#include <iostream>
#include <string>
#include "MathReport.h"
#include "MathOperations.h"
using namespace std;

int main()
{	
	//create a char to use for selection
	int selection;

	//use this for the final report and inserting questions into the vector
	MathReport finalReport;

	while (selection != 4)
	{
		//create the menu
		cout << "Math is Fun! Take a Challenge..." << endl;
		cout << "--------------------------------" << endl;
		cout << "1.) Addidtion Problem" << endl;
		cout << "2.) Subtraction Problem" << endl;
		cout << "3.) Multiplication Problem" << endl;
		cout << "4.) Quit" << endl;
		cout << "--------------------------------" << endl;
		cout << "Enter your choise (1-4): ";

		//cin selection
		cin >> selection;
		cin.ignore(256, '\n');

		//while loop to verify selection is correct
		while(cin.fail())
		{
			//clear the pipe
			cin.clear();
			cin.ignore(256, '\n');
			cout << "INVALID CHOICE! TRY AGAIN!" << endl;
			cout << "Enter your choice (1-4): " << endl;
			//cin again
			cin >> selection;		
			cin.ignore(256, '\n');
		}
		
		//decalare two int variables to later be randomized
		int num1;
		int num2;

		//Addition
		if(selection == 1)
		{
			
			MathOperations Add;

			//get two random ints between 1 and 500
			num1 = 1 + rand() % 500;
			num2 = 1 + rand() & 500;

			//set operands
			Add.setOperands(num1, num2);
			//do the operation
			Add.Addition();	
			//print the problem
			Add.print();

			int response1;
			//cin response
			cin >> response1;
			cin.ignore(256, '\n');

			bool cinResponse1 = false;
			
			//while loop to verify data
			while (cin.fail())
			{
				//clear the pipe
				cin.clear();
				cin.ignore(256, '\n');	
				cout << "INVALID RESPONSE! TRY AGAIN!" << endl;
				//print problem again
				Add.print();
				//cin again
				cin >> response1;
				cin.ignore(256, '\n');
			}
			
			//to verify the correct answer 
			bool verifyAnswer1 = Add.checkAnswer(response1);
			//get correct answer
			int correctAnswer1 = Add.getAnswer();

			//check the answer
			if (verifyAnswer1 == false)
			{
				cout << "Incorrect, the correct answer is: " << correctAnswer1 << endl << endl;
			}
			else
			{
				cout << "Correct!" << endl << endl;
			}

			//insert into report
			finalReport.insert(Add, response1);
			

		}else if (selection == 2)
		{

			//subtraction
			MathOperations Sub;

			//get two random into from 1 to 500
			num1 = 1 + rand() % 500;
			num2 = 1 + rand() % 500;

			//set larger number first
			if (num1 > num2)		
			{
				//inserts num 1 first
				Sub.setOperands(num1, num2);
			}
			else
			{		
				//inserts num2 first
				Sub.setOperands(num2, num1);
			}
			//call the subtract function
			Sub.Subtraction();	
			//print the problem
			Sub.print();

			int response2;
			//cin the response
			cin >> response2;
			cin.ignore(256, '\n');

			//use while loop to verify data
			while (cin.fail())
			{
				//clear the pipe
				cin.clear();
				cin.ignore(256, '\n');
				//error message and print problem again
				cout << "INVALID RESPONSE! TRY AGAIN!" << endl;		
				Sub.print();
				//cin again
				cin >> response2;	
				cin.ignore(256, '\n');
			}

			//check is answer is correct
			bool verifyAnswer2 = Sub.checkAnswer(response2);
			//get the correct answer
			int correctAnswer2 = Sub.getAnswer();		

			//verify if the answer is correct ans print corresponding messages
			if (verifyAnswer2 == false)
			{
				cout << "Incorrect, the correct answer is: " << correctAnswer2 << endl << endl;
			}
			else
			{
				cout << "Correct!" << endl << endl;
			}

			//insert into Math Report
			finalReport.insert(Sub, response2); 
					
	

		}else if (selection == 3)
		{
			//multiplication
			MathOperations multi;
			
			//insert two ints, 1 betwwen 1 and 100, other between 1 and 9
			num1 = 1 + rand() % 100;
			num2 = 1 + rand() % 9;

			//set the operands
			multi.setOperands(num1, num2);
			//call multiplications function
			multi.Multiplication();	
			//print problem
			multi.print();

			int response3;
			//cin response
			cin >> response3;	
			cin.ignore(256, '\n');

			//use while loop to verify data
			while (cin.fail())
			{
				//clear the pipe
				cin.clear();
				cin.ignore(256, '\n');
				//error message and print problem
				cout << "INVALID RESPONSE! TRY AGAIN!" << endl;	
				multi.print();
				//cin again
				cin >> response3;
				cin.ignore(256, '\n');
			}

			//check if answer is correct
			bool verifyAnswer3 = multi.checkAnswer(response3);	
			//get correct answer
			int correctAnswer3 = multi.getAnswer();

			//check is answer is correct and print corresponding messages
			if (verifyAnswer3 == false)
			{
				cout << "Incorrect, the correct answer is: " << correctAnswer3 << endl << endl;
			}
			else
			{
				cout << "Correct!" << endl << endl;
			}

				
			//insert intp report class
			finalReport.insert(multi, response3);

			
		}
	}

	//generate the report that will be displayed when they quit the program
	finalReport.generateReport();
	return 0;
	
}
