#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
	vector<int> stack;
public:
	void push(int x) {
		stack.push_back(x);
	}
	int pop() {
		if (stack.empty())
			return -1;
		else {
			int value = stack.back();
			stack.pop_back();
			return value;
		}
	}
	int size() {
		return stack.size();
	}
	int empty() {
		return stack.empty() ? 1 : 0;
	}
	int top() {
		if (stack.empty())
			return -1;
		else return stack.back();
	}
};

int main() {
	int N;
	cin >> N;

	Stack s;
	string command;

	for (int i = 0; i < N; i++)
	{
		cin >> command;

		if (command == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (command == "pop")
			cout << s.pop() << endl;
		else if (command == "size")
			cout << s.size() << endl;
		else if (command == "empty")
			cout << s.empty() << endl;
		else if (command == "top")
			cout << s.top() << endl;
	}

	return 0;
}