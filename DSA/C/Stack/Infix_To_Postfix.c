// C program to convert an expression from infix to postfix

#include <stdio.h>
#include <ctype.h>

// Initializing the top pointer as -1
int top = -1;

//Creating a stack array of 100 elements
char stack[100];

// If stack contains a '(' or stack is empty or precedence of the operator scanned is greater than the operator in the stack, then we push the operator in the stack
void push(char x)
{
    stack[++top] = x;
}

//Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator
char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

//A function to check the precedence of the given operator. Higher value means higher precedence
int priority(char x)
{
    switch (x)
    {
        case '(':
            return 0;
            
        case '+':
        case '-':
            return 1;
         
        case '*':
        case '/':
            return 2;
    }
    return 0;
}

//Main function of the program
int main()
{
    char exp[100];
    char *e, x;
    
    //Ask the user for the input of the Expression
    printf("Enter the Expression to be converted: ");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    while (*e != '\0')
    {
        //If the scanned character is an operand, add it to output
        if (isalnum(*e))
            printf("%c ", *e);
            
        //If the scanned character is an ‘(‘, push it to the stack
        else if (*e == '(')
            push(*e);
            
        //If the scanned character is an ‘)’, pop and output from the stack until an ‘(‘ is encountered
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                printf("%c ", x);
        }
        
        //An operator is encountered
        else
        {
            while (priority(stack[top]) >= priority(*e))
                printf("%c ", pop());
            push(*e);
        }
        e++;
    }
    
    // pop all the operators from the stack
    while (top != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}
