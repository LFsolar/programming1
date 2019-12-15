/*
	Lisa Sun
	12/7/2019
	This program takes an equation infix string and converts it to a postfix 
	string.
	Conversion to cstring was probably unnessary.
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Check if the precedence is the same
bool isSamePrecedence(stack<char> stacky, char incoming) {
	if ((stacky.top() == '*' || stacky.top() == '/') &&
		(incoming == '*' || incoming == '/') ||
		(stacky.top() == '+' || stacky.top() == '-') &&
		(incoming == '+' || incoming == '-')) {
		return true;
	} else return false;
}

// Check is the precedence is lower
bool isLowerPrecedence(stack<char> stacky, char incoming) {
	if((stacky.top() == '*' || stacky.top() == '/') && 
		incoming == '+' || incoming == '-')
		return true;
	else return false;
}

int main() {
	string infix;
	// infix's character index
	int i = 0;
	const char * cInfix;
	
	// make a stack
	stack<char> operators;
	
	cout << "Enter the infix equation" << endl;
	getline(cin, infix);
	// Convert string to cstring
	cInfix = infix.c_str();
	// read in each character
	while(cInfix[i]) {
		// Ignore spaces
		//if (cInfix[i] == ' ') continue;
		
		// Check if char is an operator, except for ')'
		if (cInfix[i] == '(' || cInfix[i] == '*' || cInfix[i] == '+' || 
			cInfix[i] == '-' ||	cInfix[i] == '/') {
			if(!operators.empty()) {
				// Check for equal precedence or lower precedence,				
				if (isSamePrecedence(operators, cInfix[i]) || 
					isLowerPrecedence(operators, cInfix[i])) {
					// display top & pop stack
					cout << operators.top();
					operators.pop();
				}
				operators.push(cInfix[i]);
			} else operators.push(cInfix[i]);
		} else if (cInfix[i] == ')') {
			// Display the operator
			cout << operators.top();
			operators.pop();
			// Remove the '('
			operators.pop();
		} else cout << cInfix[i];
		i++;
	}
	// Display the remainder of the stack
	while(!operators.empty()) {
		cout << operators.top();
		operators.pop();
	}
	cout << endl;
}