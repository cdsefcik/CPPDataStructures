#include<iostream>

using namespace std;

/*
* Implement a stack in c++
* Implements the push and pop methods.
* Data is added and removed with the LIFO method.
* Implement a stack with the null pointer, pointing down, add remove from the top of the stack.
*/

using namespace std;

class Node {
public:
	int value;
	Node* next;

	Node(int value) {
		this->value = value;
		next = nullptr;
	}

};


class Stack {
private: //Do not actually need as classes are private.
	Node* top;
	int height;

public:
	Stack(int value) {
		Node* newNode = new Node(value);
		top = newNode;
		height = 1;
	}

	void printStack() {
		Node* temp = top;
		while (temp) {
			cout << temp -> value << endl;
			temp = temp->next;
		}
	}

	void getTop() {
		cout << "Top: " << top->value << endl;
	}

	void getHeight() {
		cout << "Height: " << height << endl;
	}

	void push(int value) {
		Node* newNode = new Node(value);
		newNode->next = top;
		top = newNode;
		height++;
	}

	int pop() {
		if (height == 0) return INT_MIN;

		Node* temp = top;
		int poppedValue = top->value;
		top = top->next;
		delete temp;
		height--;

		return poppedValue;
	}

};

int main() {
	Stack* myStack = new Stack(4);

	myStack->push(10);

	myStack->getTop();
	myStack->getHeight();
	myStack->printStack();

}
