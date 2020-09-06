#include "UnsortedList.h"
#include <iostream>

using namespace std;

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
// Post: Max_Items and Length have been initialized.
// The array to hold the list elements has been allocated.
{
    Max_Items = max;
    length = 0;
    info = new ItemType[Max_Items];
}

template <class ItemType>
UnsortedList<ItemType>::~UnsortedList() // Class destructor
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

template <class ItemType>
bool UnsortedList<ItemType>::isFull() const
// Returns true if the List is empty; false otherwise.
{
    if (length == Max_Items)
        return true;
    else
        return false;
}

template <class ItemType>
void UnsortedList<ItemType>::putItem(ItemType newItem) {
    if (this->isFull()) {
        throw FullList();
    }
    if (this->findIndex(newItem) > -1) {
        throw DuplicateItem();
    }
    info[length] = newItem;
    length++;
}

template <class ItemType>
void UnsortedList<ItemType>::deleteItem(ItemType newItem) {
    int index = findIndex(newItem);
    if (index < 0) {
        throw ItemNotFound();
    }
    for (int i = index; i < length - 1; i++) {
        info[i] = info[i + 1];
    }
}

template <class ItemType>
int UnsortedList<ItemType>::findIndex(ItemType item) const {
    for (int i = 0; i < length; i++) {
        if (info[i] == item) {
            return i;
        }
    }
    return -1;
}

template <class ItemType>
int UnsortedList<ItemType>::getLength() const
// Returns true if the List is empty; false otherwise.
{
    return length;
}

template <class ItemType>
ItemType UnsortedList<ItemType>::getAt(int i) const
// Returns true if the List is empty; false otherwise.
{
    return info[i];
}