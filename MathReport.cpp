/* course: CS216-003
 * Project: Project 1
 * Purpose: Provide the implementation of member functions for  the class named MathReport
 * Author: Dillon Sheppard
 */

#include <iostream>
#include <iomanip>
#include "MathReport.h"
#include "MathOperations.h"
#include <vector>

using namespace std;

// default constructor
MathReport::MathReport()
{
	numCorrectAnswers = 0;
	numWrongAnswers = 0;
	mathQuestions;		//vector<MathOperations> mathQuestions
}

// add a Question object into the vector of mathQuestions
// and the response to check with the correct answer: 
//    if response is correct, increase numCorrectAnswers
//    otherwise, increase numWrongAnswers
void MathReport::insert(MathOperations newQuestion, int response)
{	
	//add a new question object into the vector of mathQuestions
	mathQuestions.push_back(newQuestion);
	

	//if response is correct increase numCorrectAnswers
	int answer = newQuestion.getAnswer();
	
	if (answer == response)
	{
		numCorrectAnswers++;
	}
	else	//else increase wrong answers
	{
		numWrongAnswers++;
	}	
}

// return the value of numCorrectAnswers
int MathReport::getNumOfCorrectAnswers() const
{
	return numCorrectAnswers;
}

// return the value of numWrongAnswers
int MathReport::getNumOfWrongAnswers() const
{
	return numWrongAnswers;
}

// generate a brief report:
//   the total number of math problems has been solved;
//   the list of math problems solved with correct answers
//   the total number of correctly answered questions
//   the toal number of questions with wrong answers
//   if numCorrectAnswers > numWrongAnswers, display message of "Great job!"
//   otherwise display message of "You will do better next time..."
void MathReport::generateReport()
{
	//total # of questions answered
	int total = numCorrectAnswers + numWrongAnswers;
	cout << "You answered " << total << " questions!" << endl;

	//list of math problems solved with their correct answers
	for (int i = 0; i < mathQuestions.size(); i++)
	{
		mathQuestions[i].print();
		int tempAnswer = mathQuestions[i].getAnswer();
		cout << setw(5) << right << tempAnswer << endl << endl;	
	}

	//total number of correct answers
	cout << "You got " << numCorrectAnswers << " correct" << endl;

	//total number of wrong answers
	cout << "You got " << numWrongAnswers << " incorrect" << endl;

	//create if statement
	if (numCorrectAnswers > numWrongAnswers)
	{
		cout << "Great Job!" << endl;
	}
	else 
	{
		cout << "You will do better next time..." << endl;
	}
}

