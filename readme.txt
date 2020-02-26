PA1.cpp
{

This file is used for the main interface. It calls many functions and uses both header files included in this zip file!
It displays the main menu used to select the type of math problem and then prints a report when done.
This file also generates the two random problems to then be set in MathOperations.h
This is also the main file when compiling!
}


MathOperations.h
{

The MathOperations header file is creating the MathOperations class, which is meant to the the arithmetic of the math problems.
It also prints the math problem once the random numbers are generated in PA1.cpp.
}

MathOperations.cpp
{

This is where the operands and operators are set for the problems. Once that is done they are then plugged into their proper...
operations, printed and this file also checks to see if the given answer is correct.
}

MathReport.h
{

The MathReport header file is creating the MathReport which will eventually print the number of correct, wrong and a list...
of all the problems with their correct answers.
}

MathReport.cpp
{

This is where the MathOperation objects are inserted into a vector, if the answer is correct the number of correct problems...
are incremented, and if wrong the number of wrong answers is incremented. Finally, it prints the report with the number of...
correct and wrongs problems alongs with a list of all the problems with their correct answers! 
}
