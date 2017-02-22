// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "priorityqueue_ht.h"
#include <algorithm>
#include <iostream>
using namespace std;

//Magic Macro formulas to find index
#define RIGHT_CHILD_TO_PARENT(i) ((i / 2) - 1)
#define LEFT_CHILD_TO_PARENT(i) (((i + 1) / 2) - 1)
#define PARENT_TO_RIGHT_CHILD(i) (((i + 1) * 2))
#define PARENT_TO_LEFT_CHILD(i) (((i + 1) * 2) - 1)

//Magic Macro functions to determin left or right child
#define IS_RIGHT_CHILD(i) (((i + 1) % 2) == 1)
#define IS_LEFT_CHILD(i) (((i + 1) % 2) == 0)

//First element in printer queue.
#define PRINTER_QUEUE_BASE_INDEX 0

//Highest index in queue.
//#define PRINTER_QUEUE_FULL_INDEX (PRINTER_QUEUE_SIZE - 1)

//Empty index definition.
#define PRINTER_QUEUE_EMPTY_INDEX (PRINTER_QUEUE_BASE_INDEX - 1)

#define INDEX_END m_heaptree.size() - 1

PriorityQueue_HT::PriorityQueue_HT() {

}


void PriorityQueue_HT::insert(int index, int priority) {
    m_heaptree.push_back(element(index,priority));
    reheapifyUp();
}

int PriorityQueue_HT::remove() {
    element returnElement = m_heaptree.front();

    m_heaptree[0] = m_heaptree[INDEX_END];
    m_heaptree.pop_back();

    if(m_heaptree.size() > 0) {
        reheapifyDown();
    }

    return returnElement.index;
}

int PriorityQueue_HT::remove(int index, int priority) {
    return 0;
}

bool PriorityQueue_HT::isEmpty() {
    return m_heaptree.size() == 0;
}

int PriorityQueue_HT::size() {
    return (unsigned int)m_heaptree.size();
}

void PriorityQueue_HT::reheapifyUp() {
    int index = (int) INDEX_END;

    while (true) {
        if (IS_LEFT_CHILD(index) &&
            LEFT_CHILD_TO_PARENT(index) >= PRINTER_QUEUE_BASE_INDEX)
        {
            int parentIndex = LEFT_CHILD_TO_PARENT(index);

            if (m_heaptree[index].priority < m_heaptree[parentIndex].priority) {
                swapElements(index, parentIndex);
                index = parentIndex;
                continue;
            }
        }

        if (IS_RIGHT_CHILD(index) &&
            RIGHT_CHILD_TO_PARENT(index) >= PRINTER_QUEUE_BASE_INDEX)
        {
            int parentIndex = RIGHT_CHILD_TO_PARENT(index);

            if (m_heaptree[index].priority < m_heaptree[parentIndex].priority) {
                swapElements(index, parentIndex);
                index = parentIndex;
                continue;
            }
        }

        break;
    } // End of while (true)


}

void PriorityQueue_HT::reheapifyDown() {
    int index = PRINTER_QUEUE_BASE_INDEX;

    while (true) {
        if (PARENT_TO_LEFT_CHILD(index) <= INDEX_END) {
            int leftChildIndex = PARENT_TO_LEFT_CHILD(index);

            if (PARENT_TO_RIGHT_CHILD(index) <= INDEX_END) {
                int rightChildIndex = PARENT_TO_RIGHT_CHILD(index);
                if (m_heaptree[leftChildIndex].priority < m_heaptree[rightChildIndex].priority &&
                    m_heaptree[index].priority > m_heaptree[leftChildIndex].priority)
                {
                    swapElements(index, leftChildIndex);
                    index = PARENT_TO_LEFT_CHILD(index);
                    continue;
                }

                else if (m_heaptree[index].priority > m_heaptree[rightChildIndex].priority) {
                    swapElements(index, rightChildIndex);
                    index = rightChildIndex;
                    continue;
                }
            } // End of if (PARENT_TO_RIGHT_CHILD(index) <= indexEnd)
            if (m_heaptree[index].priority > m_heaptree[leftChildIndex].priority) {
                swapElements(index, leftChildIndex);
                index = leftChildIndex;
                continue;
            }

        } // End of if (PARENT_TO_LEFT_CHILD(index) <= indexEnd)

        break;
    } // End of while (true)
}

void PriorityQueue_HT::swapElements(int index1, int index2) {
    element swappedElement = m_heaptree[index1];
    m_heaptree[index1] = m_heaptree[index2];
    m_heaptree[index2] = swappedElement;
}
