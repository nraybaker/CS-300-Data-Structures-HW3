/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #3
*/

#include <iostream>
#include "node.cpp"

using namespace std;

int main()
{
	//Construct Nodes using default constructor and assignment constructor
	Node *node_1 = new Node;
	Node *node_2 = new Node("To Kill a Mockingbird", "Harper Lee", 3, 19, 1992);
	Node *node_3 = new Node("The Great Gatsby", "F Scott Fitzgerald", 11, 24, 1925);
	Node *node_4 = new Node("Point Omega", "Don Delillo", 5, 25, 2015);
	Node *node_5 = new Node("In Cold Blood", "Truman Capote", 3, 4, 1935);
	
	//linking node 1 to node 2 and so on. Node 5 link stays NULL
	cout << "Location of link pointers associated with each node before and after each set_link (get_link used to print)" << endl;
	cout << node_1 -> get_link() << endl;
	node_1 -> set_link(node_2);
	cout << node_1 -> get_link() << endl << endl;
	
	cout << node_2 -> get_link() << endl;
	node_2 -> set_link(node_3);
	cout << node_2 -> get_link() << endl << endl;
	
	cout << node_3 -> get_link() << endl;
	node_3 -> set_link(node_4);
	cout << node_3 -> get_link() << endl << endl;
	
	cout << node_4 -> get_link() << endl;
	node_4 -> set_link(node_5);
	cout << node_4 -> get_link() << endl << endl;
	
	cout << node_5 -> get_link() << endl << endl;
	
	//Printing the data of each node using process_data()
	cout << "Nodes assigned and printed using process_data() function: " << endl;
	node_1 -> process_data();
	node_2 -> process_data();
	node_3 -> process_data();
	node_4 -> process_data();
	node_5 -> process_data();
	
	//Using get_title() to get the title of each node and print
	cout << "get_title() used on each node and printed" << endl;
	cout << node_1 -> get_title() << endl;
	cout << node_2 -> get_title() << endl;
	cout << node_3 -> get_title() << endl;
	cout << node_4 -> get_title() << endl;
	cout << node_5 -> get_title() << endl << endl;
	
	//Using get_author() to get the author of each node and print
	cout << "get_author() used on each node and printed" << endl;
	cout << node_1 -> get_author() << endl;
	cout << node_2 -> get_author() << endl;
	cout << node_3 -> get_author() << endl;
	cout << node_4 -> get_author() << endl;
	cout << node_5 -> get_author() << endl << endl;
	
	//Using compare_title() to compare title of node_1 with each node (including itself)
	//Note: Prints 1 if titles are the same, 0 if titles differ
	cout << "compare_title() used to compare the title of node_1 with each node (including itself)" << endl;
	cout << node_1 -> compare_title(node_1 -> get_title()) << endl;
	cout << node_1 -> compare_title(node_2 -> get_title()) << endl;
	cout << node_1 -> compare_title(node_3 -> get_title()) << endl;
	cout << node_1 -> compare_title(node_4 -> get_title()) << endl;
	cout << node_1 -> compare_title(node_5 -> get_title()) << endl << endl;
	
	return(0);
}
