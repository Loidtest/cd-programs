#include <stdio.h>

int s[8];
int top = -1;

int push(int a)
{
	if (top >= 8)
	{
		printf("\nStack Overlfow!");
		return -1;
	}
	top++;
	s[top] = a;
	return s[top];
}

int pop()
{
	if (top <= -1)
	{
		printf("\nStack Underflow!");
		return -1;
	}
	top--;
	return (s[top + 1]);
}

int search(int num)
{
	int i, index = -1;
	for (i = 0; i <= top; i++)
	{
		if (s[i] == num)
		{
			index = i;
		}
	}
	return index;
}

int peek()
{
	return s[top];
}

void print()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf(" -> %d", s[i]);
	}
}

int main()
{
	int temp;
	int ch = 0;
	int quit = 0;
	do
	{
		printf("\nEnter your choice: ");
		printf("1. Push, 2. Pop, 3. Peek, 4. Search, 5. Print, 6. Exit\n");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("\nEnter the value to be pushed: ");
			scanf("%d", &temp);
			temp = push(temp);
			if (temp == -1)
				break;
			printf("\nElement pushed.\n\n");
			break;
		case 2:
			temp = pop();
			if (temp == -1)
				break;
			printf("The element popped: %d\n\n", temp);
			break;
		case 3:
			temp = peek();
			printf("\nTop of the stack: %d\n\n", temp);
			break;
		case 4:
			printf("\nEnter the element to be searched for: ");
			scanf("%d", &temp);
			temp = search(temp);
			if (temp == -1)
				printf("\nElement was not found on the stack.\n\n");
			else
			{
				printf("\nElement was found at position: %d\n\n", temp);
			}
			break;
		case 5:
			print();
			break;
		case 6:
			quit = 1;
			break;
		default:
			printf("\nInvalid Input!\n");
			break;
		}
	} while (quit != 1);
	return 0;
}
