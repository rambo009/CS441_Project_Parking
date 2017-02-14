#ifndef HEAPTREE_HT_H
#define HEAPTREE_HT_H

// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

// This implementation is from CS 331 for extra credit.
// I changed the array to a vector and made all the necessary
// changes for it to compile correctly.

#include <vector>
using namespace std;

class PriorityQueue_HT
{
private:
    struct element {
        int index,
            priority;

        element(int a, int b) {
            index = a;
            priority = b;
        }
    };

public:
    PriorityQueue_HT();

    void insert(int, int);

    int remove();
    int remove(int index, int priority);

    bool isEmpty();

    int size();

protected:
    void reheapifyUp();
    void reheapifyDown();

    void swapElements(int index1, int index2);


private:
    vector<element> m_heaptree;
};

#endif // HEAPTREE_HT_H
