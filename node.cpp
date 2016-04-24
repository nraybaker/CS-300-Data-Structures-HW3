/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #3
*/

#include "node.hpp"
#include <iostream>
using namespace std;

//Default constructor with favorite book
Node::Node()
{
	title = "Dune";
	author = "Frank Herbert";
	day = 14;
	month = 2;
	year = 2016;
	link_ptr = NULL;
}

//Non-default constructor
Node::Node(string ttl, string auth, int mo, int d, int y)
{
	title = ttl;
	author = auth;
	month = mo;
	day = d;
	year = y;
	link_ptr = NULL;
}

//Set the link to point to some other Node
void Node::set_link(Node *ptr)
{
	link_ptr = ptr;
}

//Return the memory location of where the link in the Node is pointing to
Node *Node::get_link()
{
	return(link_ptr);
}

//Get the title of the Node
string Node::get_title()
{
	return(title);
}

//Get the author of the Node
string Node::get_author()
{
	return(author);
}

//Compare the title of the Node with some title passed in
bool Node::compare_title(string ttl_compare)
{
	if(title == ttl_compare)
		return(true);
	else
		return(false);
}

//print the data contained in the Node
void Node::process_data()
{
	cout << title << endl << author << endl << month << "/" << day << "/" << year << endl;
	cout << endl;
}
