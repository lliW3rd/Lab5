// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.

// William Kirkpatrick
// Lab05
// October 22, 2018

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include "Lab5MyStack.h"
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

string stringReversal4(string input) {
	MyStack mystackvec;

	string temp;
	for (int i = 0; i < input.length(); i++) {
		mystackvec.push(input.at(i));
	}

	while (!mystackvec.isEmpty()) {
		temp.push_back(mystackvec.pull());
	}
	return temp;

}




int main()
{
	cout << stringReversal1("cat") << endl;
	cout << stringReversal2("panda") << endl;
	cout << stringReversal3("cow") << endl;
	cout << stringReversal4("bop") << endl;
	return 0;
}



