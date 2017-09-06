#pragma once

#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

namespace name
{
	string first;
	string middle;
	string last;

	string packageFirst()
	{
		return first + " " + middle + " " + last;
	}
	
	string packageLast()
	{
		return last + ", " + first + " " + middle;
	}

	char getInitial(char target = 'm')		//Returns the initial of the first, middle, or last name depending on 'target' being 'f', 'm', or 'l', respectivley
	{
		switch(target)
		{
		case 'f':
			return first[0];
			break;
		case 'm':
			return middle[0];
			break;
		case 'l':
			return last[0];
			break;
		}
	}
};

int main()
{
	string input;		//General user-input storage variable

	//Get the user's name, and store it
	cout << "Please enter your first name" << endl;
	getline(cin, input); 
	name::first = input;

	cout << "Please enter your middle name" << endl;
	getline(cin, input);
	name::middle = input;

	cout << "Please enter your last name" << endl;
	getline(cin, input);
	name::last = input;

	//Print the user's information
	cout << "Hello, " << name::packageFirst() << endl;

	cout << "Alternate form: " << name::packageLast() << endl;

	cout << "Get initial for >";
	getline(cin, input); 
	cout << "Inital: " << name::getInitial(input[0]);

	getline(cin, input);	//Hold the window open
	
}