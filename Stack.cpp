#include <iostream>
#include <array>

using namespace std;

class Stack
{
public:

	array<int, 10> array;
	int state;

	Stack()
	{
		array[0] = 0;
		state = 0;
	}

	void push(int number)
	{
		array[state] = number;
		state++;
	}

	void pop()
	{
		--state;
		array[state] = 0;
		
	}

	void print()
	{
		for (int i = 0; i < state; i++)
		{
			cout << array[i] << " ";
		}
	}

};


int main()
{
	Stack stack;


	while (true)
	{
		cout << "\nType a number:" << endl;
		cout << "1. Add element to stack:" << endl;
		cout << "2. Delete element from stack:" << endl;
		cout << "3. Print all elements:" << endl;

		int menu;
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "Type a number to add:" << endl;

			int num;
			cin >> num;

			stack.push(num);

			cout << "Number succesfully added" << endl;
			break;

		case 2:
			if (stack.state > 0)
			{
				stack.pop();
				cout << "Element has been deleted" << endl;
			}
			else
			{
				cout << "Not found any elements in stack" << endl;
			}

			break;

		case 3:
			stack.print();
			break;

		default:
			break;
		}
	}

	return 0;
}
