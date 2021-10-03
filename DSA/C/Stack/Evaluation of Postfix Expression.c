// Evaluation of Postfix Expression in C

#include<stdio.h>

void main()
{
	int operands[10], counter = 0, top = -1, Flag = 0;
	char expression[100];
	printf("Enter the expression to be evaluated : ");
	scanf("%s", expression);
	while (expression[counter] != '\0')
	{
		if ((expression[counter] <= 57) && (expression[counter] >= 48))
		{
			top++;
			operands[top] = expression[counter] - 48;
		}
		else if (expression[counter] == '+')
		{
			if ((top - 1) != -1)
			{
				operands[top - 1] = operands[top - 1] + operands[top];
				top--;
			}
			else
			{
				Flag = -1;
				break;
			}
		}
		else if (expression[counter] == '-')
		{
			if ((top - 1) != -1)
			{
				operands[top - 1] = operands[top - 1] - operands[top];
				top--;
			}
			else
			{
				Flag = -1;
				break;
			}
		}
		else if (expression[counter] == '*')
		{
			if ((top - 1) != -1)
			{
				operands[top - 1] = operands[top - 1] * operands[top];
				top--;
			}
			else
			{
				Flag = -1;
				break;
			}
		}
		else if (expression[counter] == '/')
		{
			if ((top - 1) != -1)
			{
				if (operands[top] != 0)
				{
					operands[top - 1] = operands[top - 1] / operands[top];
					top--;
				}
				else
				{
					Flag = -2;
					break;
				}
			}
			else
			{
				Flag = -1;
				break;
			}
		}
		else
		{
			Flag = -1;
			break;
		}
		counter++;
	}
	if (Flag == 0)
		printf("Result = %d", operands[0]);
	else if (Flag == -1)
		printf("Invalid Expression");
	else if (Flag == -2)
		printf("Evaluates to infinity");
}