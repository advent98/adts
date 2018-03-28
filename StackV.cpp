#include<iostream>
#include "StackV.h"

using namespace std;
int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop();
}

int Stack::top()
{
	int top = size()-1;
	int topval = data[top];
	return topval;
}

void Stack::clear()
{
	  if(size()==0)
	{
		cout<<"The stack is empty";
	}
	  else
	{
		for(int i=0; i<top(); i++)
	     {
		data.pop_back();
	     }
	}
}
     
