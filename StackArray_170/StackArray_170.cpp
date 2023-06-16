#include <iostream>
#include <string>

using namespace std;

class StackArray {
private: 
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push() {
		int element;
		cin >> element;
		if (top == 4) {//step1
			cout << "Number of data exceeds the lisit." << endl;
			return;
		}
	}
};