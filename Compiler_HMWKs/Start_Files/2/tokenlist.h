// Token List Header file
// This is a linked list for use with the tokens for an
// arithmetic expression.  Although it is used for that
// particular application, this implementation more
// resembles a generic linked list, which may be used
// either as a stack or a queue.

// There will be support for displaying the entire list at once
#include <iostream>
using namespace std;

// And of course, the tokens themselves
#include "token.h"

// Since this is a linked list, we actually need a linked list node.
struct ListElement {
    Token		token;		// the token data itself
    struct ListElement *next;		// next element of list
};

class TokenList  {
    friend ostream& operator<<( ostream &, TokenList &);
    private:
	ListElement *head, 	// front of the list
	            *tail;	// tail of the list
	ListElement *current;	// facilitates traversal of the list
    public:
	TokenList()		// create an empty list
	{
	    head = NULL;
	    tail = NULL;
	    current = NULL;
	}

	TokenList( const char str[] );	// or create initial list
					// to appear in 'tokenlist.c'
					//
	~TokenList()			// destructor -- clear the list
	{
	    ListElement *remove;
	    while ( (remove = head) != NULL)
	    {
		head = head->next;	// find the successor
		delete remove;		// and deallocate this
	    }
	}

	//  A couple functions to add to the list (in 'tokenlist.cpp')
	void push_front( Token t );
	void push_back( Token t );

	//  A couple functions to support list traversal:
	//  They are all very short, using the 'current' member variable
	void start()
	{

	}

	void advance()
	{

	}

	bool atEnd() const
	{

	}

	Token nextToken() const
	{

	}
};
