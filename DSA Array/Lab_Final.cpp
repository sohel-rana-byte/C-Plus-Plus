
















































































































#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

// The function calculate_Postfix returns the final answer of the expression after calculation

int calculate_Postfix(string  post_exp)
{
    stack <int> stack;
    int len = post_exp.length();

    // loop to iterate through the expression
    for (int i = 0; i < len; i++)
    {

        // if the character is an operand we push it in the stack

        // we have considered single digits only here
        if ( post_exp[i] >= '0' &&  post_exp[i] <= '9')
        {
            stack.push( post_exp[i] - '0');
        }

        // if the character is an operator we enter else block
        else
        {
            // we pop the top two elements from the stack and save them in two integers

            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();

            //performing the operation on the operands

            switch (post_exp[i])
            {
                case '+': // addition
                          stack.push(b + a);
                          break;
                case '-': // subtraction
                          stack.push(b - a);
                          break;
                case '*': // multiplication
                          stack.push(b * a);
                          break;
                case '/': // division
                          stack.push(b / a);
                          break;
                case '^': // exponent
                          stack.push(pow(b,a));
                          break;
            }
        }
    }

    //returning the calculated result

    return stack.top();
}

//main function/ driver function

int main()
{
    //we save the postfix expression to calculate in postfix_expression string

    string postfix_expression = "31+2^74-2*+5-";

    cout<<"The answer after calculating the postfix expression is : ";

    cout<<calculate_Postfix(postfix_expression);

    return 0;
}/*#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string expression) {
    stack<char> parenthesisStack;

    for (char c : expression) {
        if (c == '(') {
            parenthesisStack.push(c);
        } else if (c == ')') {
            if (parenthesisStack.empty() || parenthesisStack.top() != '(') {
                return false;
            }
            parenthesisStack.pop();
        }
    }

    return parenthesisStack.empty();
}

int main() {
    string expression = "(a + b) * (c + d)";
    bool isBalancedResult = isBalanced(expression);

    if (isBalancedResult) {
        cout << "Expression is balanced" << endl;
    } else {
        cout << "Expression is not balanced" << endl;
    }

    return 0;
}
/3.Infix to Post Fix Expression By Stack(Wihtout Stack Libray function)
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    char arr[MAX_SIZE];
    int top;

public:
    Stack()
     {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(char item)
    {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << item << ".\n";
        } else {
            top++;
            arr[top] = item;
        }
    }

    char pop()
    {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return '\0'; // Assuming '\0' represents an error or an invalid value
        } else {
            char poppedValue = arr[top];
            top--;
            return poppedValue;
        }
    }

    char peek() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot peek.\n";
            return '\0';
        }
        return arr[top];
    }
};

int precedence(char c)
{
    if (c == '^') {
        return 3;
    } else if (c == '/' || c == '*') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return 0;
    }
}

bool isOperand(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

string infixToPostfix(string s) {
    Stack st;
    string postFix;

    for (char& c : s) {
        if (isOperand(c)) {
            postFix += c;
        } else if (c == '(') {
            st.push('(');
        } else if (c == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                postFix += st.pop();
            }
            st.pop();
        } else {
            while (!st.isEmpty() && precedence(c) <= precedence(st.peek())) {
                postFix += st.pop();
            }
            st.push(c);
        }
    }

    while (!st.isEmpty()) {
        postFix += st.pop();
    }

    return postFix;
}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";

    // Function call
    cout << infixToPostfix(exp);

    return 0;
}

