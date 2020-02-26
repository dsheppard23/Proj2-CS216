/* course: CS216-003
 * Project: Project 1
 * Purpose: to define the class named MathOperations
 * Author: Dillon Sheppard
 */
#include <iostream>
#include <iomanip>
#include "MathOperations.h"
#include "MathReport.h"

using namespace std;

// default constructor    
MathOperations::MathOperations()
{
        operand1 = 0;
        operand2 = 0;
        theoperator = ' ';
        answer = 0;
}

// set the private data members: operand1 and operand2
// to op1 and op2 respectively
void MathOperations::setOperands(int op1, int op2)
{
        operand1 = op1;
        operand2 = op2;
}

// read the current value of the private data member: current operator
char MathOperations::getOperator() const
{
        return theoperator;
}

// return the value of the data member: answer
int MathOperations::getAnswer() const
{
        return answer;
}

// set theoperator to '+'
// apply the addition operation to operand1 and operand2
// set the answer equal to operand1 + operand2
void MathOperations::Addition()
{
        answer = operand1 + operand2;
        theoperator = '+';
}

// set theoperator to '-'
// apply the subtraction operation to operand1 and operand2
// set the answer equal to operand1 - operand2
void MathOperations::Subtraction()
{
        answer = operand1 - operand2;
        theoperator = '-';
}

// set theoperator to '*'
// apply the multiplication operation to operand1 and operand2
// set the answer equal to operand1 * operand2
void MathOperations::Multiplication()
{
        answer = operand1 * operand2;
        theoperator = '*';
}

// if answer == response, it returns true
// otherwise it returns false
bool MathOperations::checkAnswer(int response) const
{
        if (answer == response)
        {
                return true;
        }
        else
        {
                return false;
        }
}

//display the question in the format described in the problem statement
// for example:
//    135
//  +  78
//  _____
//
void MathOperations::print() const
{
        cout << setw(5) << right << operand1 << endl;
        cout << theoperator << setw(4) << right << operand2 << endl << endl;
        cout << "-----" << endl;
}

