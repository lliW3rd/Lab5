// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;


string stringReversal1(string input) {
	stack<char> newstck;
	string temp;

	for (int i = 0; i < input.length(); i++) {
		
		newstck.push(input.at(i));
		
	}

	while (!newstck.empty()) {

		temp.push_back(newstck.top());
		newstck.pop();
	}
	return temp;
}

string stringReversal2(string input) {
	vector<char> newvec;
	string temp;
	for (int i = 0; i < input.length(); i++) {
		newvec.push_back(input.at(i));

	}

	while (!newvec.empty()) {
		temp.push_back(newvec.back());
		newvec.pop_back();
	}

	return temp;
}

string stringReversal3(string input) {
	list<char> newlist;
	string temp;

	for (int i = 0; i < input.length(); i++) {
		newlist.push_back(input.at(i));
	}

	while (!newlist.empty()) {
		temp.push_back(newlist.back());
		newlist.pop_back();
	}
	return temp;
}

class MyStack {
public:
	vector<char> vec1;
	bool isEmpty() const;
	void push(char& c);
	char pull();
		
};

int main()
{
	cout << stringReversal1("cat") << endl;
	cout << stringReversal2("panda") << endl;
	cout << stringReversal3("cow") << endl;
    return 0;
}

bool MyStack::isEmpty() const
{
	if (vec1.)
	return false;
}
