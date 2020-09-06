#include <iostream>
using namespace std;
#include "UnsortedList.h"
template <class ItemType>
UnsortedList<ItemType>::UnsortedList()
// No argumentconstructor
// Post: Max_Items initialized to 50 and Length have been initialized.
// The array to hold the list elements has been allocated.
{
	Max_Items = 50;
	length = 0;
	info = new ItemType[Max_Items];
}


template <class ItemType>
UnsortedList<ItemType>::UnsortedList(int max)
// constructor
// Post: Max_Itemms and Length have been initialized.
// The array to hold the list elements has been allocated.
{
// complete the code	
}

template <class ItemType>
UnsortedList<ItemType>::~UnsortedList()         // Class destructor
{
	delete[] info;
}

template <class ItemType>

void UnsortedList<ItemType>::makeEmpty()
// Post: Length has been reset to the empty state.
{
	length = 0;
}

template <class ItemType>
bool UnsortedList<ItemType>::isEmpty() const
// Returns true if the List is empty; false otherwise.
{
	if (length == 0)
		return true;
	else
		return false;

}

/// define the remaining function
