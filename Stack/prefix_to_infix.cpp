
#include <iostream>
#include <stack>
using namespace std;


bool isOperator(char x) {
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
  case '^':
  case '%':
    return true;
  }
  return false;
}


string preToInfix(string pre_exp) {
  stack<string> s;

  
  int length = pre_exp.size();

  // reading from right to left
  for (int i = length - 1; i >= 0; i--) {

    // check if symbol is operator
    if (isOperator(pre_exp[i])) {

      // pop two operands from stack
      string op1 = s.top();   
      s.pop();
      string op2 = s.top();  
      s.pop();

      // concat the operands and operator
      string temp = "(" + op1 + pre_exp[i] + op2 + ")";

      // Push string temp back to stack
      s.push(temp);
    }

    // if symbol is an operand
    else {

      // push the operand to the stack
      s.push(string(1, pre_exp[i]));
    }
  }

  // Stack now contains the Infix expression
  return s.top();
}

// Driver Code
int main() {
  string pre_exp = "*-A/BC-/AKL";
  cout << "Infix : " << preToInfix(pre_exp);
  return 0;
}
