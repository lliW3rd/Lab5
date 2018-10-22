// William Kirkpatrick
// Lab05
// October 22, 2018

#include "pch.h"
#include "Lab5MyStack.h"

bool MyStack::isEmpty() const
{
	return vec1.empty();
}

void MyStack::push(char & c)
{
	vec1.push_back(c);
}

char MyStack::pull()
{
	char temp;
	temp = vec1.back();
	vec1.pop_back();
	return temp;
}