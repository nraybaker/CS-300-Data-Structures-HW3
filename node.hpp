/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #3
	 
	 
	Description of the problem:
		This program is going to define a preparatory class that you will be
		* using for linked list. You are going to write this class and us it 
		* so that you will be ready to use it for the linked list class.
		* The class is going to be the Node class.

	Psuedo Code:
	Class Name: Node

		Data:
			Book title - string that must hold spaces
			Author - string that must hold spaces
			Date read - int day, month, year
			Pointer I call "link" that points to a Node or NULL
	
		Mutator Functions:
		
			Function: set_link
				mutator function to set the pointer
				Input: where the point should point to
				Outputs: None
				Return: N/A (Just sets the pointer)
			
		
		Accesor Functions:
		
			Funtion: get_link
				Accessor function to access where the pointer is pointing to
				Input: None
				Output: None
				Return: Memory location the pointer is pointing to
			
			Function: get_title
				Accessor function to get the title of the book
				Input: None
				Output: None
				Return:	the book title
		
			Function: get_author
				Accessor function to get the author of the book
				Input: None
				Output: None
				Return: the author
		
		Function: Node
			Default constructor -- title = favorite book, author = the author,
			* 	date = some date
			Inputs: None
			Outputs: None
			Return: N/A (defaults to above)
		
		Function: Node
			constructor that accepts book title, author, and date
			Inputs: book title, author, date
			Outputs: None
			Return: N/A
				book_title = title passed in
				author = author passed in
				date = date passed in
			
		Function: compare_title
			compare a given book title against the one in the class
			Inputs: a given book title
			Outputs: None
			Return: True if same title, false if not
			
		Function: process_data
			function that will print the data to the screen
			Inputs: None
			Outputs: the data the node contains: title, author, date
			Return: N/A
*/
#include <iostream>
using namespace std;

//Node class
class Node
{
	//Data for Node class
	string title;
	string author;
	int day, month, year;
	Node *link_ptr;

public:
	//Default constructor
	Node();
	
	//Non-default constructor
	Node(string ttl, string auth, int mo, int d, int y);
	
	//Set link of the Node to point to some other Node
	void set_link(Node *ptr);
	
	//Get where the link in the Node is pointing to
	Node *get_link();
	
	//Get the title of the Node
	string get_title();
	
	//Get the author of the Node
	string get_author();
	
	//Compare the title of the book with some string
	bool compare_title(string ttl_compare);
	
	//Print the data of the Node
	void process_data();
};
