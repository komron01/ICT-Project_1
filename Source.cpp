/*
	Author: Komron Tulaboyev
	Task:	Input two real numbers (x and y) and calculate the following mathematical expression: ((x-2*y)*x)/(-2*y)	 
*/

#include <iostream>		//math libraries to use fmod
#include <cmath>
using namespace std;		//set standard namespace globally *you said we can skip this lines*

int main()
{

	double x, y;		//declaration of variables as in the task

	cin >> x >> y;		//accepting the input in console as "x" and "y" with space between

	cout << ((x - 2 * y) * x) / (-2 * y);		//solving for the result of the given expression and output it

	return 0;		//successful exit
}