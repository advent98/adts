#include<iostream>
#include "StackV.h"

using namepsacestd;
int stack::size()
{
	return data.size();
}

void stack::push(int val)
{
	data.push_back(val);
}

void stack::pop_back()
{
	data.pop_back();
}

int stack::top()
{
	int top = size()-1;
	int topval = data[top];
	return topval;
}

void stack::clear()
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
     
