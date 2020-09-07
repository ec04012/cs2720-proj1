#include "UnsortedList.h"
#include <iostream>

using namespace std;

// No argument constructor
// Post: Max_Items initialized to 50, and Length has been initialized.
// The array to hold the list elements has been allocated.
template <class ItemType> UnsortedList<ItemType>::UnsortedList() {
    Max_Items = 50;
    length = 0;
    info = new ItemType[Max_Items];
}

// constructor
// Post: Max_Items and Length have been initialized.
// The array to hold the list elements has been allocated.
template <class ItemType> UnsortedList<ItemType>::UnsortedList(int max) {
    Max_Items = max;
    length = 0;
    info = new ItemType[Max_Items];
}

// Class destructor
template <class ItemType> UnsortedList<ItemType>::~UnsortedList() {
    delete[] info;
    this->makeEmpty();
}

// Post: Length has been reset to the empty state.
template <class ItemType> void UnsortedList<ItemType>::makeEmpty() {
    length = 0;
}

// Returns true if the List is empty; false otherwise.
template <class ItemType> bool UnsortedList<ItemType>::isEmpty() const {
    if (length == 0)
        return true;
    else
        return false;
}

/// define the remaining functions

// Returns true if the List is full; false otherwise.
template <class ItemType> bool UnsortedList<ItemType>::isFull() const {
    if (length == Max_Items)
        return true;
    else
        return false;
}

// Puts the specified item at the end of the list
// Throws FullList if the list is full
// Throws DuplicateItem if the item is already in the list
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

// Finds the specified item and deletes it
// Throws ItemNotFound if item is not in the list
template <class ItemType>
void UnsortedList<ItemType>::deleteItem(ItemType newItem) {
    int index = findIndex(newItem);
    if (index < 0) {
        throw ItemNotFound();
    }
    for (int i = index; i < length - 1; i++) {
        info[i] = info[i + 1];
    }
    length--;
}

// Finds the index of the specified item
// Returns -1 if the item is not in the list
template <class ItemType>
int UnsortedList<ItemType>::findIndex(ItemType item) const {
    for (int i = 0; i < length; i++) {
        if (info[i] == item) {
            return i;
        }
    }
    return -1;
}

// Returns the length of the list
template <class ItemType> int UnsortedList<ItemType>::getLength() const {
    return length;
}

// Returns the item at the specified index
// Throws OutOfBound if index >= length or index < 0
template <class ItemType> ItemType UnsortedList<ItemType>::getAt(int i) const {
    if (i < 0 || i > length - 1) {
        throw OutofBound();
    }
    return info[i];
}