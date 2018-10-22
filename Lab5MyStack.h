// William Kirkpatrick
// Lab05
// October 22, 2018

#ifndef MYSTACKH
#define MYSTACKH

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class MyStack {
public:
	 // vector<char> vec1;
	list<char> vec1;
	bool isEmpty() const;
	void push(char& c);
	char pull();

};
#endif // !MYSTACKH

